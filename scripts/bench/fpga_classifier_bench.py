#!/usr/bin/env python3
"""
FPGA Image Classifier — UART Batch Evaluation & IEEE Plot Generator
====================================================================

Usage:
    python fpga_classifier_bench.py --port /dev/ttyUSB2 --folder ./dataset
    python fpga_classifier_bench.py --plot-only results/results.csv --output results

Dataset folder structure (10 classes — CIFAR-10):
    dataset/
    ├── airplane/       # .bin files for AIRPLANE    (class 0)
    ├── automobile/     # .bin files for AUTOMOBILE   (class 1)
    ├── bird/           # .bin files for BIRD         (class 2)
    ├── cat/            # .bin files for CAT          (class 3)
    ├── deer/           # .bin files for DEER         (class 4)
    ├── dog/            # .bin files for DOG          (class 5)
    ├── frog/           # .bin files for FROG         (class 6)
    ├── horse/          # .bin files for HORSE        (class 7)
    ├── ship/           # .bin files for SHIP         (class 8)
    └── truck/          # .bin files for TRUCK        (class 9)
"""

import os, sys, csv, re, time, argparse, glob
from datetime import datetime

try:
    import serial
except ImportError:
    serial = None
import numpy as np
_trapz = getattr(np, "trapezoid", None) or getattr(np, "trapz")
import matplotlib
matplotlib.use("Agg")
import matplotlib.pyplot as plt
from matplotlib.ticker import MultipleLocator

# ── IEEE Figure Style ─────────────────────────────────────────────────
plt.rcParams.update({
    "font.family": "serif",
    "font.serif": ["Times New Roman", "Times", "DejaVu Serif"],
    "font.size": 9, "axes.labelsize": 9, "axes.titlesize": 10,
    "legend.fontsize": 7.5, "xtick.labelsize": 8, "ytick.labelsize": 8,
    "figure.dpi": 300, "savefig.dpi": 300, "savefig.bbox": "tight",
    "savefig.pad_inches": 0.02, "axes.grid": True, "grid.alpha": 0.3,
    "grid.linewidth": 0.5, "axes.linewidth": 0.8, "lines.linewidth": 1.2,
    "lines.markersize": 4, "xtick.major.width": 0.8, "ytick.major.width": 0.8,
    "xtick.direction": "in", "ytick.direction": "in",
    "legend.framealpha": 0.9, "legend.edgecolor": "0.8",
})
COL1, COL2 = 3.5, 7.16

# ── Constants ─────────────────────────────────────────────────────────
IMAGE_SIZE         = 49152
# Per-exit threshold profiles: (EE1, EE2, EE3) — strictest first
THRESHOLD_PROFILES = [
    (100, 100, 100),   # all exits disabled (everything goes to BB)
    (95,  90,  85),
    (95,  85,  75),
    (90,  85,  80),
    (90,  80,  70),
    (85,  75,  65),
    (80,  70,  60),
    (70,  60,  50),
    (50,  40,  25),
]
NUM_EXITS          = 3
EXIT_NAMES         = ["EE1", "EE2", "EE3"]
BAUD_RATE          = 2000000
TIMEOUT_PROMPT     = 30
TIMEOUT_FIRST      = 120
TIMEOUT_IMAGE_RX   = 15
TIMEOUT_RESULT     = 60
SEND_CHUNK_SIZE    = 4096
INTER_CHUNK_DELAY  = 0.005
MAX_RETRIES        = 3
TIMEOUT_DRAIN      = 30
# Settling time after finding prompt — lets FPGA finish printing and
# enter its image-receive state before we start blasting bytes.
SETTLE_DELAY       = 0.25

# ── 10-Class Definitions (CIFAR-10) ──────────────────────────────────
NUM_CLASSES = 10
CLASS_NAMES = ["AIRPLANE", "AUTOMOBILE", "BIRD", "CAT", "DEER",
               "DOG", "FROG", "HORSE", "SHIP", "TRUCK"]
CLASS_DIRS  = ["airplane", "automobile", "bird", "cat", "deer",
               "dog", "frog", "horse", "ship", "truck"]

# ── Colors ────────────────────────────────────────────────────────────
C_BLUE, C_RED, C_GREEN = "#2166ac", "#b2182b", "#1b7837"
C_ORANGE, C_PURPLE, C_GRAY = "#e08214", "#6a3d9a", "#636363"
C_TEAL, C_PINK, C_BROWN = "#17becf", "#e377c2", "#8c564b"
C_LIME, C_NAVY = "#bcbd22", "#393b79"
CLASS_COLORS = [C_BLUE, C_RED, C_GREEN, C_ORANGE, C_PURPLE,
                C_TEAL, C_PINK, C_BROWN, C_LIME, C_NAVY]


# ======================================================================
#  UART Communication
# ======================================================================
class FPGAClassifier:
    """Manages serial communication with the FPGA classifier.

    Synchronisation strategy:
      - After every result, drain ALL trailing FPGA output until the
        next image prompt appears.
      - Use prompt markers that ONLY match the real prompt, not the
        system banner (which contains "Input: 49152 bytes").
      - Wait a settling delay so the FPGA finishes printing and enters
        its image-receive state before we send bytes.
      - On desync, send a dummy image to push FPGA through a full
        cycle and recover to the next prompt.
    """

    # CRITICAL: these strings ONLY appear in the actual prompt.
    # The system banner contains "Input: 49152 bytes (12288 float32)"
    # which is a different string and must NOT match.
    PROMPT_MARKERS    = ["Send image file for classification",
                         "(Exactly 49152 bytes)"]
    THRESHOLD_MARKERS = ["Confidence threshold for",
                         "confidence threshold", "threshold for EE"]

    def __init__(self, port, baudrate=BAUD_RATE):
        if serial is None:
            raise ImportError("pip install pyserial")
        self.ser = serial.Serial(
            port=port, baudrate=baudrate,
            bytesize=serial.EIGHTBITS, parity=serial.PARITY_NONE,
            stopbits=serial.STOPBITS_ONE, timeout=1, write_timeout=10,
        )
        self.rx_buf = ""
        self._prompt_ready = False
        time.sleep(0.2)
        self.ser.reset_output_buffer()
        self._fill_rx()

    def close(self):
        if self.ser and self.ser.is_open:
            self.ser.close()

    # ── Low-level helpers ──

    def _fill_rx(self):
        n = self.ser.in_waiting
        if n > 0:
            self.rx_buf += self.ser.read(n).decode("ascii", errors="replace")

    def _read_until_any(self, markers, timeout):
        """Read until any marker appears. Returns text up to marker end."""
        t0 = time.time()
        while time.time() - t0 < timeout:
            self._fill_rx()
            for m in markers:
                idx = self.rx_buf.find(m)
                if idx != -1:
                    end = idx + len(m)
                    out = self.rx_buf[:end]
                    self.rx_buf = self.rx_buf[end:]
                    return out
            time.sleep(0.02)
        out = self.rx_buf
        self.rx_buf = ""
        return out

    def _read_until_regex(self, pattern, timeout):
        rx = re.compile(pattern, re.IGNORECASE | re.DOTALL)
        t0 = time.time()
        while time.time() - t0 < timeout:
            self._fill_rx()
            match = rx.search(self.rx_buf)
            if match:
                out = self.rx_buf[:match.end()]
                self.rx_buf = self.rx_buf[match.end():]
                return out
            time.sleep(0.02)
        out = self.rx_buf
        self.rx_buf = ""
        return out

    def _contains_prompt(self, text):
        return any(m in text for m in self.PROMPT_MARKERS)

    def _settle(self):
        """Wait for FPGA to finish printing and enter receive mode.
        Also flush any remaining prompt chars from our RX buffer."""
        time.sleep(SETTLE_DELAY)
        self._fill_rx()
        self.rx_buf = ""

    # ── Protocol steps ──

    def wait_for_prompt(self, timeout=TIMEOUT_PROMPT):
        buf = self._read_until_any(self.PROMPT_MARKERS, timeout)
        if not self._contains_prompt(buf):
            raise TimeoutError(
                f"No image prompt within {timeout}s.\nTail: {buf[-300:]}"
            )
        self._settle()
        return buf

    def send_image(self, image_bytes):
        assert len(image_bytes) == IMAGE_SIZE
        for off in range(0, IMAGE_SIZE, SEND_CHUNK_SIZE):
            self.ser.write(image_bytes[off:off + SEND_CHUNK_SIZE])
            if off + SEND_CHUNK_SIZE < IMAGE_SIZE:
                time.sleep(INTER_CHUNK_DELAY)
        self.ser.flush()

    def wait_for_image_ack(self, timeout=TIMEOUT_IMAGE_RX):
        buf = self._read_until_any(["Image received"], timeout)
        if "Image received" not in buf:
            raise TimeoutError(
                f"No 'Image received!' within {timeout}s.\nTail: {buf[-300:]}"
            )
        return buf

    def send_thresholds(self, profile, timeout=8):
        """Send a 3-tuple of per-exit thresholds (EE1, EE2, EE3).

        The firmware prompts once per exit:
            Confidence threshold for EE1 (0-100):
            Confidence threshold for EE2 (0-100):
            Confidence threshold for EE3 (0-100):
        """
        for i, th in enumerate(profile):
            buf = self._read_until_any(self.THRESHOLD_MARKERS, timeout)
            if not any(m in buf for m in self.THRESHOLD_MARKERS):
                raise TimeoutError(
                    f"No threshold prompt for {EXIT_NAMES[i]} "
                    f"within {timeout}s.\nTail: {buf[-300:]}"
                )
            self.ser.write(f"{th}\n".encode("ascii"))
            self.ser.flush()

    def read_result(self, timeout=TIMEOUT_RESULT):
        buf = self._read_until_regex(r"Time:\s*[\d.]+\s*ms", timeout)
        if "Time:" not in buf:
            raise TimeoutError(
                f"No result within {timeout}s.\nTail: {buf[-300:]}"
            )
        return buf

    def drain_to_next_prompt(self, timeout=TIMEOUT_DRAIN):
        """After reading a result, consume all trailing output (BB banners,
        system header) until the next image prompt. Settles afterwards."""
        buf = self._read_until_any(self.PROMPT_MARKERS, timeout)
        found = self._contains_prompt(buf)
        if found:
            self._settle()
        self._prompt_ready = found
        return found

    def resync(self, timeout=60):
        """Recover from desync.

        Strategy:
          1. Try just draining — FPGA might be mid-output.
          2. If that fails, FPGA is stuck waiting for image bytes.
             Send 49152 zero bytes to push it through a full cycle,
             feed it a dummy threshold, then drain to next prompt.
        """
        print("      Resyncing...", end=" ", flush=True)
        self.ser.reset_input_buffer()
        self.rx_buf = ""
        self._prompt_ready = False

        # Attempt 1: FPGA might be mid-output, just wait for prompt
        if self.drain_to_next_prompt(timeout=10):
            print("OK (found prompt)")
            return True

        # Attempt 2: FPGA stuck waiting for image data — send dummy
        print("sending dummy image...", end=" ", flush=True)
        try:
            self.send_image(b'\x00' * IMAGE_SIZE)

            # Push through "Image received!" + threshold prompts
            try:
                self.wait_for_image_ack(timeout=15)
            except TimeoutError:
                pass

            # Send dummy thresholds (3 per-exit) to complete the cycle
            try:
                self.send_thresholds((50, 50, 50), timeout=10)
            except TimeoutError:
                for _ in range(NUM_EXITS):
                    self.ser.write(b"50\n")
                    self.ser.flush()
                    time.sleep(0.1)

            # Drain through dummy result to reach next real prompt
            if self.drain_to_next_prompt(timeout=timeout):
                print("OK (recovered via dummy cycle)")
                return True

        except Exception as e:
            print(f"error: {e}...", end=" ", flush=True)

        print("FAILED")
        return False

    def classify(self, image_bytes, profile, first=False):
        """Full cycle: prompt -> image -> ack -> thresholds -> result -> drain.

        ``profile`` is a 3-tuple (EE1, EE2, EE3) of per-exit thresholds.
        After reading the result we drain all trailing output and
        consume the next image prompt. A settling delay ensures the
        FPGA has entered its image-receive state before we send.
        """
        # Step 1: ensure we are at a prompt
        if first or not self._prompt_ready:
            timeout = TIMEOUT_FIRST if first else TIMEOUT_PROMPT
            self.wait_for_prompt(timeout=timeout)
        # else: drain_to_next_prompt already consumed it and settled

        self._prompt_ready = False

        # Steps 2-5
        self.send_image(image_bytes)
        self.wait_for_image_ack()
        self.send_thresholds(profile)
        raw = self.read_result()
        result = parse_result(raw, profile)

        # Step 6: drain trailing BB output + consume next prompt + settle
        self.drain_to_next_prompt(timeout=TIMEOUT_DRAIN)

        return result


# ======================================================================
#  Result Parsing
# ======================================================================
# Build regex pattern for class names: AIRPLANE|AUTOMOBILE|CAT|DOG|SHIP
_CLASS_PAT = "|".join(CLASS_NAMES)

def profile_label(profile):
    """Human-readable label for a threshold profile, e.g. '95/90/80'."""
    return "/".join(str(t) for t in profile)


def parse_result(raw_text, profile):
    result = {
        "profile": profile_label(profile),
        "ee1_threshold": profile[0],
        "ee2_threshold": profile[1],
        "ee3_threshold": profile[2],
        "exit_type": "UNKNOWN", "exit_number": None,
        "classification": "UNKNOWN",
        "cycles": None, "time_ms": None, "raw": raw_text,
    }
    # Initialise per-class scores
    for i in range(NUM_CLASSES):
        result[f"score_{i}"] = None

    # ── Early-exit: "The image you sent is: CLASSNAME (EE: N)"
    ee = re.search(
        r"image you sent is:\s*(" + _CLASS_PAT + r")\s*\(EE:\s*(\d+)\)",
        raw_text, re.IGNORECASE)
    if ee:
        n = int(ee.group(2))
        result["exit_number"] = n
        result["exit_type"] = f"EE:{n}"
        result["classification"] = ee.group(1).strip().upper()
    else:
        # ── Backbone result: "Result: CLASSNAME DETECTED" or "Result: UNCERTAIN"
        bb = re.search(
            r"Result:\s*(UNCERTAIN|(?:" + _CLASS_PAT + r")\s+DETECTED)",
            raw_text, re.IGNORECASE)
        if bb:
            result["exit_type"] = "BB"
            txt = bb.group(1).strip().upper()
            if "UNCERTAIN" in txt:
                result["classification"] = "UNCERTAIN"
            else:
                # Extract class name before " DETECTED"
                cls = re.match(r"(" + _CLASS_PAT + r")", txt, re.IGNORECASE)
                result["classification"] = cls.group(1).upper() if cls else "UNKNOWN"

    # ── Scores: [v0, v1, ..., vN]
    s = re.search(r"Scores:\s*\[([^\]]+)\]", raw_text)
    if s:
        vals = [v.strip() for v in s.group(1).split(",")]
        for i in range(min(len(vals), NUM_CLASSES)):
            try:
                result[f"score_{i}"] = float(vals[i])
            except ValueError:
                pass

    c = re.search(r"Cycles:\s*(\d+)", raw_text)
    if c:
        result["cycles"] = int(c.group(1))

    t = re.search(r"Time:\s*([\d.]+)\s*ms", raw_text)
    if t:
        result["time_ms"] = float(t.group(1))

    return result


# ======================================================================
#  Dataset / CSV
# ======================================================================
def discover_dataset(folder):
    ds = []
    for cls_idx, cls_dir in enumerate(CLASS_DIRS):
        cls_path = os.path.join(folder, cls_dir)
        if not os.path.isdir(cls_path):
            raise FileNotFoundError(f"Missing subfolder: {cls_path}")
        bins = sorted(glob.glob(os.path.join(cls_path, "*.bin")))
        if not bins:
            raise FileNotFoundError(f"No .bin in {cls_path}")
        for f in bins:
            ds.append({
                "path": f,
                "true_label": CLASS_NAMES[cls_idx],
                "name": os.path.basename(f),
            })
    return ds


CSV_HEADER = (["filename", "true_label", "profile",
               "ee1_threshold", "ee2_threshold", "ee3_threshold",
               "exit_type", "exit_number", "classification"]
              + [f"score_{i}" for i in range(NUM_CLASSES)]
              + ["cycles", "time_ms"])

def save_csv(results, path):
    with open(path, "w", newline="") as f:
        w = csv.DictWriter(f, fieldnames=CSV_HEADER)
        w.writeheader()
        for r in results:
            w.writerow({k: r.get(k, "") for k in CSV_HEADER})

def load_csv(path):
    results = []
    with open(path) as f:
        for row in csv.DictReader(f):
            # Handle per-exit thresholds
            for k in ("ee1_threshold", "ee2_threshold", "ee3_threshold"):
                row[k] = int(row[k]) if row.get(k) else 0
            if not row.get("profile"):
                row["profile"] = f'{row["ee1_threshold"]}/{row["ee2_threshold"]}/{row["ee3_threshold"]}'
            # Legacy single-threshold CSV compatibility
            if "threshold" in row and "profile" not in row:
                t = int(row["threshold"])
                row["profile"] = f"{t}/{t}/{t}"
                row["ee1_threshold"] = row["ee2_threshold"] = row["ee3_threshold"] = t
            for i in range(NUM_CLASSES):
                k = f"score_{i}"
                row[k] = float(row[k]) if row.get(k) else None
            row["cycles"]    = int(row["cycles"]) if row.get("cycles") else None
            row["time_ms"]   = float(row["time_ms"]) if row.get("time_ms") else None
            if row.get("exit_number"):
                row["exit_number"] = int(row["exit_number"])
            else:
                m = re.match(r"EE\s*:?\s*(\d+)$", str(row.get("exit_type","")).strip(), re.I)
                row["exit_number"] = int(m.group(1)) if m else None
            et = str(row.get("exit_type","")).strip()
            if row["exit_number"] is not None:
                row["exit_type"] = f'EE:{row["exit_number"]}'
            elif et.upper() == "EE":
                row["exit_type"] = "EE:UNKNOWN"
            elif not et:
                row["exit_type"] = "UNKNOWN"
            results.append(row)
    return results


# ======================================================================
#  Evaluation Runner
# ======================================================================
def run_evaluation(port, folder, output_dir, baudrate=BAUD_RATE, restart=False):
    dataset = discover_dataset(folder)
    total = len(dataset) * len(THRESHOLD_PROFILES)

    print("=" * 60)
    print("  FPGA Classifier — Batch Evaluation (10 classes, CIFAR-10)")
    print("=" * 60)
    print(f"  Port: {port}   Baud: {baudrate}")
    for cn in CLASS_NAMES:
        cnt = sum(1 for d in dataset if d["true_label"] == cn)
        print(f"  {cn}: {cnt}", end="   ")
    print()
    print(f"  Threshold profiles (EE1/EE2/EE3): {len(THRESHOLD_PROFILES)}")
    for p in THRESHOLD_PROFILES:
        print(f"    {profile_label(p)}")
    print(f"  Total tests: {total}")
    print("=" * 60)

    os.makedirs(output_dir, exist_ok=True)
    csv_path = os.path.join(output_dir, "results.csv")
    results, completed = [], set()

    if os.path.exists(csv_path):
        if restart:
            bak = os.path.join(output_dir, f"results_backup_{datetime.now():%Y%m%d_%H%M%S}.csv")
            os.replace(csv_path, bak)
            print(f"\n  Restart: backed up -> {bak}\n")
        else:
            for r in load_csv(csv_path):
                completed.add((r["filename"], r["profile"]))
                results.append(r)
            print(f"\n  Resuming: {len(completed)} done.\n")

    fpga = FPGAClassifier(port, baudrate)
    done = len(completed)
    is_first = True

    try:
        for prof in THRESHOLD_PROFILES:
            plabel = profile_label(prof)
            for entry in dataset:
                key = (entry["name"], plabel)
                if key in completed:
                    continue

                done += 1
                print(f"  [{done}/{total}] ({100*done/total:5.1f}%)  "
                      f"P={plabel:>11s}  {entry['true_label']:12s}  {entry['name']}",
                      end="  ", flush=True)

                with open(entry["path"], "rb") as f:
                    img = f.read()
                assert len(img) == IMAGE_SIZE

                # ── Retry with resync ──
                res = None
                for attempt in range(1, MAX_RETRIES + 1):
                    try:
                        res = fpga.classify(img, prof, first=is_first)
                        is_first = False
                        break
                    except TimeoutError as e:
                        is_first = False
                        if attempt < MAX_RETRIES:
                            print(f"\n      Attempt {attempt}/{MAX_RETRIES} failed: {e}")
                            if fpga.resync():
                                is_first = True
                                continue
                            else:
                                break
                        else:
                            print(f"\n      All retries failed.")
                            save_csv(results, csv_path)
                            raise

                if res is None:
                    print("-> SKIPPED")
                    continue

                res["filename"]   = entry["name"]
                res["true_label"] = entry["true_label"]
                results.append(res)

                et  = res["exit_type"]
                cls = res["classification"]
                tms = res.get("time_ms", "?")
                scores_str = ", ".join(
                    f'{res.get(f"score_{i}", "?")}'
                    for i in range(NUM_CLASSES)
                )
                print(f"-> {cls:12s} ({et})  [{scores_str}]  {tms} ms")

                if done % 10 == 0:
                    save_csv(results, csv_path)

    except KeyboardInterrupt:
        print("\n\n  Interrupted. Saving...")
    finally:
        save_csv(results, csv_path)
        fpga.close()

    print(f"\n  Saved: {csv_path}  ({len(results)} results)")
    return results, csv_path


# ======================================================================
#  Metrics
# ======================================================================
def compute_metrics(results):
    exit_numbers_all = sorted({
        int(r["exit_number"]) for r in results if r.get("exit_number") is not None
    })

    threshold_metrics = {}
    for prof in sorted({r["profile"] for r in results}):
        subset = [r for r in results if r["profile"] == prof]
        if not subset: continue

        uncertain = 0
        ee_count = bb_count = 0
        times_ee, times_bb = [], []
        exit_counts  = {n: 0 for n in exit_numbers_all}
        exit_correct = {n: 0 for n in exit_numbers_all}
        exit_times   = {n: [] for n in exit_numbers_all}

        # Multi-class confusion matrix: cm[true_idx][pred_idx]
        cm = np.zeros((NUM_CLASSES, NUM_CLASSES), dtype=int)

        # Track correct / total for accuracy (including uncertain as wrong)
        correct = 0
        total_decided = 0

        for r in subset:
            true_label = r["true_label"]
            pred_label = r["classification"]
            et = str(r.get("exit_type","")).strip().upper()
            en = r.get("exit_number")

            if et.startswith("EE"):
                ee_count += 1
                if r["time_ms"] is not None: times_ee.append(r["time_ms"])
                if en is not None:
                    exit_counts.setdefault(en, 0); exit_times.setdefault(en, [])
                    exit_correct.setdefault(en, 0)
                    exit_counts[en] += 1
                    if r["time_ms"] is not None: exit_times[en].append(r["time_ms"])
                    if true_label == pred_label: exit_correct[en] += 1
            else:
                bb_count += 1
                if r["time_ms"] is not None: times_bb.append(r["time_ms"])

            if pred_label == "UNCERTAIN":
                uncertain += 1
                continue

            if true_label in CLASS_NAMES and pred_label in CLASS_NAMES:
                ti = CLASS_NAMES.index(true_label)
                pi = CLASS_NAMES.index(pred_label)
                cm[ti][pi] += 1
                total_decided += 1
                if ti == pi:
                    correct += 1

        # Overall accuracy (uncertain counted as total but not correct)
        total_all = total_decided + uncertain
        acc = correct / total_all if total_all else 0

        # Per-class precision, recall, F1
        per_class = {}
        for i, cn in enumerate(CLASS_NAMES):
            tp_i = cm[i][i]
            fp_i = cm[:, i].sum() - tp_i      # column sum minus diagonal
            fn_i = cm[i, :].sum() - tp_i       # row sum minus diagonal
            prec_i = tp_i / (tp_i + fp_i) if (tp_i + fp_i) else 0
            rec_i  = tp_i / (tp_i + fn_i) if (tp_i + fn_i) else 0
            f1_i   = 2 * prec_i * rec_i / (prec_i + rec_i) if (prec_i + rec_i) else 0
            per_class[cn] = {"precision": prec_i, "recall": rec_i, "f1": f1_i}

        # Macro-averaged metrics
        macro_prec = np.mean([per_class[cn]["precision"] for cn in CLASS_NAMES])
        macro_rec  = np.mean([per_class[cn]["recall"]    for cn in CLASS_NAMES])
        macro_f1   = np.mean([per_class[cn]["f1"]        for cn in CLASS_NAMES])

        ee_rt = ee_count / len(subset) if subset else 0

        threshold_metrics[prof] = {
            "confusion_matrix": cm,
            "per_class": per_class,
            "accuracy": acc, "precision": macro_prec, "recall": macro_rec,
            "f1": macro_f1, "uncertain": uncertain,
            "ee_count": ee_count, "bb_count": bb_count, "ee_rate": ee_rt,
            "avg_time_ee":  np.mean(times_ee) if times_ee else None,
            "avg_time_bb":  np.mean(times_bb) if times_bb else None,
            "avg_time_all": np.mean(times_ee+times_bb) if (times_ee+times_bb) else None,
            "times_ee": times_ee, "times_bb": times_bb,
            "exit_numbers": sorted(exit_counts.keys()),
            "exit_counts": exit_counts,
            "exit_correct": exit_correct,
            "exit_accuracy": {n: (exit_correct.get(n,0)/exit_counts[n]
                                  if exit_counts[n] > 0 else 0)
                              for n in exit_counts},
            "exit_rate_by_number": {n: exit_counts.get(n,0)/len(subset)
                                    for n in sorted(exit_counts.keys())} if subset else {},
            "exit_times": exit_times,
            "avg_time_by_exit": {n: (np.mean(ts) if ts else None) for n,ts in exit_times.items()},
            "dominant_exit": (max(sorted(exit_counts.keys()), key=lambda n: exit_counts[n])
                             if any(exit_counts.values()) else None),
        }

    # ── Per-class one-vs-rest ROC / PR from raw scores at most-lenient profile ──
    # Use the profile with lowest EE3 threshold (most exits enabled)
    all_profiles = sorted(threshold_metrics.keys())
    best_t = all_profiles[0] if all_profiles else ""
    sr = [r for r in results if r["profile"] == best_t
          and all(r.get(f"score_{i}") is not None for i in range(NUM_CLASSES))]

    roc_data = {}
    pr_data  = {}
    roc_th = np.linspace(0, 1, 201)

    for ci, cn in enumerate(CLASS_NAMES):
        y_true   = np.array([1 if r["true_label"] == cn else 0 for r in sr])
        y_scores = np.array([r[f"score_{ci}"] for r in sr])

        fpr_l, tpr_l, prec_l, rec_l = [], [], [], []
        for t in roc_th:
            pp = y_scores >= t
            tp = np.sum(pp & (y_true==1)); fp = np.sum(pp & (y_true==0))
            fn = np.sum(~pp & (y_true==1)); tn = np.sum(~pp & (y_true==0))
            tpr_l.append(tp/(tp+fn) if (tp+fn) else 0)
            fpr_l.append(fp/(fp+tn) if (fp+tn) else 0)
            prec_l.append(tp/(tp+fp) if (tp+fp) else 1.0)
            rec_l.append(tp/(tp+fn) if (tp+fn) else 0)

        fpr_a, tpr_a = np.array(fpr_l), np.array(tpr_l)
        idx = np.argsort(fpr_a)
        auc = np.abs(_trapz(tpr_a[idx], fpr_a[idx]))

        prec_a, rec_a = np.array(prec_l), np.array(rec_l)
        idx_r = np.argsort(rec_a)
        ap = np.abs(_trapz(prec_a[idx_r], rec_a[idx_r]))

        roc_data[cn] = {"fpr": fpr_a, "tpr": tpr_a, "auc": auc}
        pr_data[cn]  = {"precision": prec_a, "recall": rec_a, "ap": ap}

    # Macro-averaged AUC / AP
    roc_data["macro_auc"] = np.mean([roc_data[cn]["auc"] for cn in CLASS_NAMES])
    pr_data["macro_ap"]   = np.mean([pr_data[cn]["ap"]   for cn in CLASS_NAMES])

    # ── Compute savings per profile ────────────────────────────
    # Use BB time from the strictest profile (where most/all samples
    # go through BB) as the single reference baseline.
    all_ps = sorted(threshold_metrics.keys())
    ref_bb_avg = None
    for p in reversed(all_ps):
        if threshold_metrics[p]["avg_time_bb"] is not None:
            ref_bb_avg = threshold_metrics[p]["avg_time_bb"]
            break

    for prof, m in threshold_metrics.items():
        bb_avg = ref_bb_avg
        if bb_avg is None or bb_avg == 0:
            m["savings"] = None
            continue

        n_total = m["ee_count"] + m["bb_count"]
        hypothetical_all_bb = n_total * bb_avg

        # Actual total time
        actual_total = sum(m["times_ee"]) + sum(m["times_bb"])

        # Savings
        time_saved = hypothetical_all_bb - actual_total
        pct_saved  = (time_saved / hypothetical_all_bb * 100) if hypothetical_all_bb > 0 else 0

        # Per-exit savings breakdown
        per_exit_savings = {}
        for en, times in m["exit_times"].items():
            if times:
                saved_this_exit = sum(bb_avg - t for t in times)
                per_exit_savings[en] = {
                    "count": len(times),
                    "time_saved_ms": saved_this_exit,
                    "avg_saving_ms": saved_this_exit / len(times),
                    "avg_time_ms": np.mean(times),
                }

        m["savings"] = {
            "hypothetical_all_bb_ms": hypothetical_all_bb,
            "actual_total_ms": actual_total,
            "time_saved_ms": time_saved,
            "pct_saved": pct_saved,
            "per_exit": per_exit_savings,
        }

    return threshold_metrics, roc_data, pr_data


# ======================================================================
#  Plots
# ======================================================================
def _save(fig, output_dir, name):
    os.makedirs(output_dir, exist_ok=True)
    p = os.path.join(output_dir, name)
    fig.savefig(p); fig.savefig(p.replace(".pdf",".png"))
    plt.close(fig); print(f"  Saved: {p}")

def plot_roc_curve(roc, od):
    fig, ax = plt.subplots(figsize=(COL1, COL1*0.9))
    for ci, cn in enumerate(CLASS_NAMES):
        d = roc[cn]
        ax.plot(d["fpr"], d["tpr"], color=CLASS_COLORS[ci],
                label=f'{cn} (AUC={d["auc"]:.3f})')
    ax.plot([0,1],[0,1],"--",color=C_GRAY,lw=0.8,label="Random")
    ax.set(xlabel="False Positive Rate",ylabel="True Positive Rate",
           title=f'One-vs-Rest ROC (macro AUC={roc["macro_auc"]:.4f})',
           xlim=(-0.02,1.02),ylim=(-0.02,1.02))
    ax.set_aspect("equal"); ax.legend(loc="lower right",fontsize=6.5)
    _save(fig, od, "fig_roc_curve.pdf")

def plot_precision_recall(pr, od):
    fig, ax = plt.subplots(figsize=(COL1, COL1*0.9))
    for ci, cn in enumerate(CLASS_NAMES):
        d = pr[cn]
        ax.plot(d["recall"], d["precision"], color=CLASS_COLORS[ci],
                label=f'{cn} (AP={d["ap"]:.3f})')
    ax.set(xlabel="Recall",ylabel="Precision",
           title=f'One-vs-Rest PR (macro AP={pr["macro_ap"]:.4f})',
           xlim=(-0.02,1.02),ylim=(-0.02,1.05))
    ax.legend(loc="lower left",fontsize=6.5)
    _save(fig, od, "fig_precision_recall.pdf")

def plot_metrics_vs_threshold(met, od):
    ps = sorted(met.keys())
    xi = range(len(ps))
    fig, ax = plt.subplots(figsize=(COL1*1.3, COL1*0.75))
    ax.plot(xi,[met[p]["accuracy"]  for p in ps],"o-", color=C_BLUE,  label="Accuracy")
    ax.plot(xi,[met[p]["precision"] for p in ps],"s--",color=C_RED,   label="Macro Precision")
    ax.plot(xi,[met[p]["recall"]    for p in ps],"^--",color=C_GREEN, label="Macro Recall")
    ax.plot(xi,[met[p]["f1"]        for p in ps],"D-", color=C_ORANGE,label="Macro F1")
    ax.set_xticks(list(xi))
    ax.set_xticklabels(ps, fontsize=6, rotation=35, ha="right")
    ax.set(xlabel="Threshold Profile (EE1/EE2/EE3)",ylabel="Score",
           title="Classification Metrics vs. Threshold Profile",
           ylim=(-0.02,1.05))
    ax.legend(loc="best",ncol=2)
    _save(fig, od, "fig_metrics_vs_threshold.pdf")

def plot_confusion_matrices(met, od):
    ps = sorted(met.keys())
    sel = ps if len(ps)<=6 else [ps[i] for i in np.linspace(0,len(ps)-1,6,dtype=int)]
    nr, nc = 2, int(np.ceil(len(sel)/2))
    fig, axes = plt.subplots(nr, nc, figsize=(COL2*1.3, COL2*0.65))
    axes = np.array(axes).flatten()
    short_names = [cn[:4] for cn in CLASS_NAMES]
    for i, p in enumerate(sel):
        ax = axes[i]
        cm = met[p]["confusion_matrix"]
        tot = cm.sum()
        ax.imshow(cm, cmap="Blues", vmin=0, vmax=max(tot/NUM_CLASSES,1))
        for r in range(NUM_CLASSES):
            for c in range(NUM_CLASSES):
                v = cm[r,c]; pct = 100*v/tot if tot else 0
                ax.text(c,r,f"{v}\n({pct:.0f}%)",ha="center",va="center",fontsize=5,
                        color="white" if v>tot/(NUM_CLASSES*2) else "black",fontweight="bold")
        ax.set(xticks=range(NUM_CLASSES),yticks=range(NUM_CLASSES))
        ax.set_xticklabels(short_names,fontsize=5.5,rotation=45,ha="right")
        ax.set_yticklabels(short_names,fontsize=5.5)
        ax.set_xlabel("Predicted",fontsize=6)
        if i%nc==0: ax.set_ylabel("Actual",fontsize=6)
        ax.set_title(f"Profile {p}",fontsize=7,fontweight="bold")
    for j in range(len(sel),len(axes)): axes[j].set_visible(False)
    fig.suptitle("Confusion Matrices at Various Threshold Profiles",fontsize=10,y=1.02)
    fig.tight_layout()
    _save(fig, od, "fig_confusion_matrices.pdf")

def plot_exit_breakdown(met, od):
    ps = sorted(met.keys())
    ens = sorted({n for p in ps for n in met[p].get("exit_numbers",[])})
    if not ens: print("  Skip exit breakdown: no EE data."); return
    fig, ax = plt.subplots(figsize=(COL1*1.3, COL1*0.8))
    xi = np.arange(len(ps))
    bw = 0.7
    bot = np.zeros(len(ps))
    cols = CLASS_COLORS[:NUM_CLASSES]
    for i, en in enumerate(ens):
        vals = [met[p]["exit_rate_by_number"].get(en,0)*100 for p in ps]
        ax.bar(xi, vals, bottom=bot, width=bw, color=cols[i%len(cols)],
               edgecolor="white", lw=0.5, label=f"EE:{en}")
        bot += np.array(vals)
    bb = [met[p]["bb_count"]/(met[p]["ee_count"]+met[p]["bb_count"])*100
          if (met[p]["ee_count"]+met[p]["bb_count"]) else 0 for p in ps]
    ax.bar(xi, bb, bottom=bot, width=bw, color=C_GRAY, edgecolor="white",
           lw=0.5, alpha=0.8, label="BB")
    ax.set_xticks(xi)
    ax.set_xticklabels(ps, fontsize=6, rotation=35, ha="right")
    ax.set(xlabel="Threshold Profile (EE1/EE2/EE3)",ylabel="Fraction of Samples (%)",
           title="Exit-Type Breakdown vs. Threshold Profile",ylim=(0,105))
    ax.legend(loc="upper right",ncol=2,fontsize=7)
    _save(fig, od, "fig_exit_breakdown.pdf")

def plot_early_exit_analysis(met, od):
    ps = sorted(met.keys())
    xi = range(len(ps))
    fig, ax1 = plt.subplots(figsize=(COL1*1.3, COL1*0.75))
    ax2 = ax1.twinx()
    ln1 = ax1.plot(list(xi),[met[p]["ee_rate"]*100 for p in ps],"o-",color=C_BLUE,label="Early Exit Rate")
    ax1.set_xticks(list(xi))
    ax1.set_xticklabels(ps, fontsize=6, rotation=35, ha="right")
    ax1.set(xlabel="Threshold Profile (EE1/EE2/EE3)",ylabel="Early Exit Rate (%)",
            ylim=(-2,105))
    ax1.tick_params(axis="y",labelcolor=C_BLUE)
    vxi = [i for i,p in enumerate(ps) if met[p]["avg_time_all"] is not None]
    ln2 = ax2.plot(vxi,[met[ps[i]]["avg_time_all"] for i in vxi],"s--",color=C_RED,label="Avg. Inference Time")
    ax2.set_ylabel("Avg. Inference Time (ms)",color=C_RED)
    ax2.tick_params(axis="y",labelcolor=C_RED)
    lns = ln1+ln2; ax1.legend(lns,[l.get_label() for l in lns],loc="center right",fontsize=7)
    ax1.set_title("Early Exit Rate and Latency vs. Threshold Profile")
    _save(fig, od, "fig_early_exit_analysis.pdf")

def plot_latency_distribution(met, od):
    bt = None; bb = 0
    for p, m in met.items():
        if m["times_ee"] and m["times_bb"]:
            b = min(len(m["times_ee"]),len(m["times_bb"]))
            if b > bb: bb, bt = b, p
    if bt is None:
        for p, m in sorted(met.items()):
            if m["times_ee"] or m["times_bb"]: bt = p; break
    if bt is None: print("  Skip latency dist: no data."); return
    m = met[bt]
    fig, ax = plt.subplots(figsize=(COL1, COL1*0.7))
    bins = np.linspace(0, max((m["times_ee"] or [0])+(m["times_bb"] or [0]))*1.1, 25)
    if m["times_ee"]:
        ax.hist(m["times_ee"],bins=bins,alpha=0.75,color=C_BLUE,
                label=f'Early Exit (n={len(m["times_ee"])})',edgecolor="white",lw=0.5)
    if m["times_bb"]:
        ax.hist(m["times_bb"],bins=bins,alpha=0.75,color=C_RED,
                label=f'Full Backbone (n={len(m["times_bb"])})',edgecolor="white",lw=0.5)
    ax.set(xlabel="Inference Time (ms)",ylabel="Count",
           title=f"Inference Latency Distribution (Profile {bt})")
    ax.legend()
    _save(fig, od, "fig_latency_distribution.pdf")

def plot_accuracy_latency_tradeoff(met, od):
    ps = sorted(met.keys())
    v = [(p,met[p]) for p in ps if met[p]["avg_time_all"] is not None]
    if not v: print("  Skip acc-lat tradeoff: no data."); return
    fig, ax = plt.subplots(figsize=(COL1*1.3, COL1*0.8))
    times = [m["avg_time_all"] for _,m in v]
    accs  = [m["accuracy"]*100 for _,m in v]
    pvs   = [p for p,_ in v]
    idxs  = list(range(len(v)))
    sc = ax.scatter(times,accs,c=idxs,cmap="viridis",s=50,edgecolors="black",lw=0.5,zorder=3)
    ax.plot(times,accs,"-",color=C_GRAY,lw=0.8,alpha=0.5,zorder=2)
    for i,p in enumerate(pvs):
        ax.annotate(p,(times[i],accs[i]),textcoords="offset points",xytext=(5,5),fontsize=5.5,color=C_GRAY)
    fig.colorbar(sc,ax=ax,label="Profile Index",pad=0.02).ax.tick_params(labelsize=7)
    ax.set(xlabel="Average Inference Time (ms)",ylabel="Accuracy (%)",title="Accuracy-Latency Trade-off")
    _save(fig, od, "fig_accuracy_latency_tradeoff.pdf")

def plot_score_distributions(results, od):
    all_profiles = sorted({r["profile"] for r in results})
    mt = all_profiles[0] if all_profiles else ""
    sub = [r for r in results if r["profile"] == mt
           and all(r.get(f"score_{i}") is not None for i in range(NUM_CLASSES))]
    if not sub: print("  Skip score dist: no data."); return
    fig, axes = plt.subplots(1, NUM_CLASSES, figsize=(COL2*1.3, COL1*0.65))
    bins = np.linspace(0, 1, 30)
    for ci, cn in enumerate(CLASS_NAMES):
        ax = axes[ci]
        # For each true class, plot the distribution of score_ci
        for cj, cn_true in enumerate(CLASS_NAMES):
            vals = [r[f"score_{ci}"] for r in sub if r["true_label"] == cn_true]
            if vals:
                ax.hist(vals, bins=bins, alpha=0.5, color=CLASS_COLORS[cj],
                        label=cn_true, edgecolor="white", lw=0.3)
        ax.set_xlabel(f"P({cn})", fontsize=7)
        if ci == 0: ax.set_ylabel("Count", fontsize=7)
        ax.set_title(cn, fontsize=7, fontweight="bold")
        ax.tick_params(labelsize=5.5)
        if ci == NUM_CLASSES - 1:
            ax.legend(fontsize=4.5, loc="upper right")
    fig.suptitle("Score Distributions by True Class", fontsize=9, y=1.02)
    fig.tight_layout()
    _save(fig, od, "fig_score_distributions.pdf")

def plot_summary_table(met, roc, pr, od):
    ps = sorted(met.keys())
    lines = [r"\begin{table}[htbp]",r"\centering",
             r"\caption{Classification Performance Across Threshold Profiles (10 classes, CIFAR-10)}",
             r"\label{tab:threshold_results}",r"\begin{tabular}{cccccccc}",r"\hline",
             r"\textbf{Profile} & \textbf{Acc.} & \textbf{M-Prec.} & \textbf{M-Rec.} & "
             r"\textbf{M-F1} & \textbf{EE\%} & \textbf{Unc.} & \textbf{Time} \\",
             r"(EE1/EE2/EE3) & & & & & (\%) & & (ms) \\",r"\hline"]
    for p in ps:
        m = met[p]
        tm = f'{m["avg_time_all"]:.1f}' if m["avg_time_all"] else "---"
        lines.append(f'{p} & {m["accuracy"]:.3f} & {m["precision"]:.3f} & {m["recall"]:.3f} & '
                     f'{m["f1"]:.3f} & {m["ee_rate"]*100:.1f} & {m["uncertain"]} & {tm} \\\\')
    lines += [r"\hline",
              r"\multicolumn{8}{l}{"
              + f'Macro AUC={roc["macro_auc"]:.4f}, Macro AP={pr["macro_ap"]:.4f}'
              + r"} \\",
              r"\end{tabular}",r"\end{table}"]
    p_path = os.path.join(od, "table_results.tex")
    with open(p_path,"w") as f: f.write("\n".join(lines))
    print(f"  Saved: {p_path}")


def plot_per_exit_accuracy(met, od):
    """Stacked correct/incorrect per exit across profiles."""
    ps = sorted(met.keys())
    ens = sorted({n for p in ps for n in met[p].get("exit_numbers",[])})
    if not ens: print("  Skip per-exit accuracy: no EE data."); return

    fig, axes = plt.subplots(1, len(ps), figsize=(min(2.5*len(ps), COL2*1.5), 4),
                              sharey=True)
    if len(ps) == 1: axes = [axes]

    for pi, p in enumerate(ps):
        ax = axes[pi]
        m = met[p]
        exits_here = sorted(m["exit_counts"].keys())

        labels_e = [f"EE:{n}" for n in exits_here] + ["BB"]
        counts_e = [m["exit_counts"].get(n, 0) for n in exits_here] + [m["bb_count"]]
        correct_e = [m.get("exit_correct", {}).get(n, 0) for n in exits_here]
        bb_correct = max(0, int(m["accuracy"] * sum(counts_e)) - sum(correct_e))
        correct_e.append(bb_correct)
        incorrect_e = [c - cr for c, cr in zip(counts_e, correct_e)]

        x = np.arange(len(labels_e))
        bars_c = ax.bar(x, correct_e, color="#2ca02c", label="Correct")
        bars_i = ax.bar(x, incorrect_e, bottom=correct_e, color="#d62728", label="Incorrect")

        for xi in range(len(labels_e)):
            cnt = counts_e[xi]
            if cnt > 0:
                acc = correct_e[xi] / cnt * 100
                ax.text(xi, cnt + sum(counts_e)*0.01,
                        f"{cnt}\n{acc:.0f}%", ha="center", fontsize=6, fontweight="bold")

        ax.set_xticks(x)
        ax.set_xticklabels(labels_e, fontsize=7, rotation=30)
        ax.set_title(p, fontsize=6)
        if pi == 0:
            ax.set_ylabel("Number of samples")
            ax.legend(fontsize=6)

    fig.suptitle("Correct vs Incorrect per Exit Across Profiles", fontsize=10)
    plt.tight_layout()
    _save(fig, od, "fig_per_exit_distribution.pdf")


def plot_per_exit_latency(met, od):
    """Boxplot of inference times per exit number across all thresholds."""
    all_times = {}
    for t, m in met.items():
        for en, times in m.get("exit_times", {}).items():
            all_times.setdefault(en, []).extend(times)
    if m.get("times_bb"):
        all_times["BB"] = []
        for t2, m2 in met.items():
            all_times["BB"].extend(m2.get("times_bb", []))

    labels = sorted([k for k in all_times if k != "BB"]) + (["BB"] if "BB" in all_times else [])
    data = [all_times[k] for k in labels if all_times[k]]
    labels = [k for k in labels if all_times[k]]

    if not data: print("  Skip per-exit latency: no data."); return

    fig, ax = plt.subplots(figsize=(COL1, COL1*0.8))
    bp = ax.boxplot(data, labels=[f"EE:{l}" if l != "BB" else "BB" for l in labels],
                    patch_artist=True, showfliers=False)
    for i, patch in enumerate(bp["boxes"]):
        patch.set_facecolor(CLASS_COLORS[i % len(CLASS_COLORS)])
        patch.set_alpha(0.7)
    ax.set(xlabel="Exit", ylabel="Inference Time (ms)",
           title="Latency Distribution per Exit")
    _save(fig, od, "fig_per_exit_latency.pdf")


def plot_3d_tradeoff(met, od):
    """Bubble chart: profile vs accuracy, size = EE rate, color = latency."""
    ps = sorted(met.keys())
    valid = [(i, p, met[p]) for i, p in enumerate(ps)
             if met[p]["avg_time_all"] is not None and met[p]["exit_counts"]]
    if not valid: print("  Skip tradeoff: no data."); return

    indices    = np.array([i for i, _, _ in valid])
    accs       = np.array([m["accuracy"] * 100 for _, _, m in valid])
    latencies  = np.array([m["avg_time_all"] for _, _, m in valid])
    ee_rates   = np.array([m["ee_rate"] * 100 for _, _, m in valid])
    plabels    = [p for _, p, _ in valid]

    sizes = 40 + 4 * ee_rates

    fig, ax = plt.subplots(figsize=(COL1 * 1.5, COL1 * 1.1))
    sc = ax.scatter(indices, accs, s=sizes, c=latencies, cmap="RdYlGn_r",
                    edgecolors="k", linewidths=0.5, alpha=0.9)

    for i in range(len(indices)):
        ax.annotate(f"{ee_rates[i]:.0f}%", (indices[i], accs[i]),
                    textcoords="offset points", xytext=(0, -10),
                    ha="center", fontsize=6, color="#555")

    ax.set_xticks(indices)
    ax.set_xticklabels(plabels, fontsize=5.5, rotation=35, ha="right")
    ax.set_xlabel("Threshold Profile (EE1/EE2/EE3)")
    ax.set_ylabel("Accuracy (%)")
    ax.set_title("Profile vs Accuracy")

    cb = fig.colorbar(sc, ax=ax, shrink=0.8, pad=0.02)
    cb.set_label("Avg. Latency (ms)", fontsize=7)

    plt.tight_layout()
    _save(fig, od, "fig_tradeoff_bubble.pdf")

def plot_combined_tradeoff(met, od):
    """2D dual-axis: accuracy + EE rate + avg latency vs profile."""
    ps = sorted(met.keys())
    vps = [p for p in ps if met[p]["avg_time_all"] is not None]
    if not vps: print("  Skip combined tradeoff: no data."); return

    xi = range(len(ps))
    vxi = [i for i,p in enumerate(ps) if p in vps]

    fig, ax1 = plt.subplots(figsize=(COL1*1.5, COL1*0.85))

    accs = [met[p]["accuracy"]*100 for p in ps]
    ln1 = ax1.plot(list(xi), accs, "o-", color=C_BLUE, lw=1.5, ms=5, label="Accuracy")
    ax1.set_ylabel("Accuracy (%)", color=C_BLUE)
    ax1.tick_params(axis="y", labelcolor=C_BLUE)
    ax1.set_xticks(list(xi))
    ax1.set_xticklabels(ps, fontsize=5.5, rotation=35, ha="right")
    ax1.set_xlabel("Threshold Profile (EE1/EE2/EE3)")

    ee = [met[p]["ee_rate"]*100 for p in ps]
    ln2 = ax1.plot(list(xi), ee, "^--", color=C_GREEN, lw=1.2, ms=5, label="EE Rate")

    ax2 = ax1.twinx()
    lats = [met[ps[i]]["avg_time_all"] for i in vxi]
    ln3 = ax2.plot(vxi, lats, "s-", color=C_RED, lw=1.2, ms=5, label="Avg. Latency")
    ax2.set_ylabel("Avg. Inference Time (ms)", color=C_RED)
    ax2.tick_params(axis="y", labelcolor=C_RED)

    lns = ln1 + ln2 + ln3
    ax1.legend(lns, [l.get_label() for l in lns], loc="center left", fontsize=7)
    ax1.set_title("Accuracy, EE Rate & Latency vs. Profile")
    plt.tight_layout()
    _save(fig, od, "fig_combined_tradeoff.pdf")


def plot_exit_accuracy_vs_threshold(met, od):
    """Per-exit sample share across profiles."""
    ps = sorted(met.keys())
    ens = sorted({n for p in ps for n in met[p].get("exit_numbers",[])})
    if not ens: print("  Skip exit acc vs threshold: no EE data."); return

    xi = range(len(ps))
    fig, ax = plt.subplots(figsize=(COL1*1.3, COL1*0.8))
    for i, en in enumerate(ens):
        rates = [met[p]["exit_rate_by_number"].get(en, 0)*100 for p in ps]
        ax.plot(list(xi), rates, "o-", color=CLASS_COLORS[i % len(CLASS_COLORS)],
                label=f"EE:{en}", ms=5, lw=1.5)

    bb_rates = [(1 - met[p]["ee_rate"])*100 for p in ps]
    ax.plot(list(xi), bb_rates, "s--", color=C_GRAY, label="BB", ms=5, lw=1.2)

    ax.set_xticks(list(xi))
    ax.set_xticklabels(ps, fontsize=6, rotation=35, ha="right")
    ax.set(xlabel="Threshold Profile (EE1/EE2/EE3)", ylabel="% of Samples",
           title="Per-Exit Sample Share vs. Profile")
    ax.legend(fontsize=7)
    plt.tight_layout()
    _save(fig, od, "fig_exit_rate_per_threshold.pdf")



def plot_savings(met, od):
    """Show compute/latency savings from early exits vs full BB."""
    ps = sorted(met.keys())
    valid = [(p, met[p]) for p in ps if met[p].get("savings") is not None]
    if not valid:
        print("  Skip savings plot: no BB timing data for comparison.")
        return

    fig, (ax1, ax2) = plt.subplots(1, 2, figsize=(COL2, 3.8))

    profiles   = [p for p, _ in valid]
    pct_saved  = [m["savings"]["pct_saved"] for _, m in valid]
    time_saved = [m["savings"]["time_saved_ms"] for _, m in valid]
    ee_rates   = [m["ee_rate"] * 100 for _, m in valid]

    actual = [m["savings"]["actual_total_ms"] / 1000 for _, m in valid]
    ref_bb = valid[0][1]["savings"]["hypothetical_all_bb_ms"] / 1000
    xi = range(len(profiles))
    ax1.plot(list(xi), actual, "o-", color=C_BLUE, ms=5, lw=1.5, label="Actual")
    ax1.axhline(ref_bb, color=C_RED, ls="--", lw=1.5, alpha=0.7,
                label=f"No EE baseline ({ref_bb:.1f}s)")
    ax1.fill_between(list(xi), actual, ref_bb, alpha=0.12, color=C_GREEN)
    for i, pct in enumerate(pct_saved):
        ax1.annotate(f"{pct:.0f}%", (i, actual[i]),
                     textcoords="offset points", xytext=(0, -12),
                     ha="center", fontsize=6.5, color=C_GREEN, fontweight="bold")

    ax1.set_xticks(list(xi))
    ax1.set_xticklabels(profiles, fontsize=5.5, rotation=35, ha="right")
    ax1.set_xlabel("Threshold Profile")
    ax1.set_ylabel("Total Inference Time (s)")
    ax1.legend(fontsize=7, loc="lower right")
    ax1.set_title("Actual Time vs No-EE Baseline", fontsize=9)

    ens = sorted({n for _, m in valid for n in m["savings"]["per_exit"]})
    if ens:
        x = np.arange(len(profiles))
        bottom = np.zeros(len(profiles))
        for i, en in enumerate(ens):
            vals = []
            for _, m in valid:
                pe = m["savings"]["per_exit"].get(en)
                vals.append(pe["time_saved_ms"] if pe else 0)
            ax2.bar(x, vals, bottom=bottom, label=f"EE:{en}",
                    color=CLASS_COLORS[i % len(CLASS_COLORS)],
                    edgecolor="white", lw=0.5)
            bottom += np.array(vals)

        ax2.set_xticks(x)
        ax2.set_xticklabels(profiles, fontsize=5.5, rotation=35, ha="right")
        ax2.set_xlabel("Threshold Profile")
        ax2.set_ylabel("Total Time Saved (ms)")
        ax2.set_title("Savings Breakdown by Exit", fontsize=9)
        ax2.legend(fontsize=7)

    fig.suptitle(f"Early Exit Savings: EE vs Full Backbone", fontsize=10)
    plt.tight_layout()
    _save(fig, od, "fig_savings.pdf")

    print("\n  Early Exit Savings Summary")
    print("  " + "=" * 80)
    print(f"  {'Profile':>15s}  {'EE Rate':>8s}  {'All-BB (ms)':>12s}  "
          f"{'Actual (ms)':>12s}  {'Saved (ms)':>11s}  {'Saved':>7s}")
    print("  " + "-" * 80)
    for p, m in valid:
        s = m["savings"]
        print(f"  {p:>15s}  {m['ee_rate']*100:>7.1f}%  "
              f"{s['hypothetical_all_bb_ms']:>12.1f}  {s['actual_total_ms']:>12.1f}  "
              f"{s['time_saved_ms']:>11.1f}  {s['pct_saved']:>6.1f}%")

        for en in sorted(s["per_exit"]):
            pe = s["per_exit"][en]
            print(f"  {'':>15s}   EE:{en}  {pe['count']:>4d} samples  "
                  f"avg {pe['avg_time_ms']:.1f} ms  "
                  f"saved {pe['avg_saving_ms']:.1f} ms/sample  "
                  f"total {pe['time_saved_ms']:.1f} ms")
    print("  " + "=" * 80)


def generate_all_plots(results, od):
    print("\n"+"="*60+"\n  Generating IEEE-quality figures\n"+"="*60)
    met, roc, pr = compute_metrics(results)
    plot_roc_curve(roc, od)
    plot_precision_recall(pr, od)
    plot_metrics_vs_threshold(met, od)
    plot_confusion_matrices(met, od)
    plot_exit_breakdown(met, od)
    plot_early_exit_analysis(met, od)
    plot_latency_distribution(met, od)
    plot_accuracy_latency_tradeoff(met, od)
    plot_score_distributions(results, od)
    plot_per_exit_accuracy(met, od)
    plot_per_exit_latency(met, od)
    plot_3d_tradeoff(met, od)
    plot_combined_tradeoff(met, od)
    plot_exit_accuracy_vs_threshold(met, od)
    plot_savings(met, od)
    plot_summary_table(met, roc, pr, od)
    print(f"\n  Done. Output: {od}/  (PDF + PNG)")


# ======================================================================
#  CLI
# ======================================================================
def main():
    t_start = time.time()
    p = argparse.ArgumentParser(description="FPGA Classifier Bench (10 classes, CIFAR-10)")
    p.add_argument("--port",    default="/dev/ttyUSB2")
    p.add_argument("--baud",    type=int, default=BAUD_RATE)
    p.add_argument("--folder",  type=str)
    p.add_argument("--output",  default="results")
    p.add_argument("--plot-only", type=str, metavar="CSV")
    p.add_argument("--restart", action="store_true")
    a = p.parse_args()

    if a.plot_only:
        if not os.path.exists(a.plot_only): print(f"Not found: {a.plot_only}"); sys.exit(1)
        r = load_csv(a.plot_only); print(f"  Loaded {len(r)} results")
        generate_all_plots(r, a.output)
    else:
        if not a.folder: p.error("--folder required")
        r, _ = run_evaluation(a.port, a.folder, a.output, a.baud, a.restart)
        generate_all_plots(r, a.output)

    elapsed = time.time() - t_start
    m, s = divmod(elapsed, 60)
    h, m = divmod(m, 60)
    print(f"\n  Total script time: {int(h):02d}:{int(m):02d}:{s:05.2f}")


if __name__ == "__main__":
    main()
