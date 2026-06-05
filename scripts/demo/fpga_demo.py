#!/usr/bin/env python3
"""
FPGA Classifier Demo (10-class, per-exit thresholds)
====================================================

Preprocesses a folder of JPG/PNG images (resize 64x64, normalize to
[0,1] float32), sends each to the FPGA over UART, and collects the
10-class classification result. Writes results.json + thumbnails for
the PowerPoint generator (generate_demo_pptx.js).

main.c for each model prompts for three per-exit thresholds (EE1, EE2, EE3).

Usage:
    python fpga_demo.py --port /dev/ttyUSB2 --images ./photos --profile 90/80/70
    python fpga_demo.py --port /dev/ttyUSB2 --images ./photos --profile 90/80/70 --label CAT

Output:
    demo_output/
      results.json        results for the PPTX generator
      thumbnails/*.png     256x256 thumbnails for the slides
      bin_cache/*.bin      converted float32 inputs
"""

import os, sys, json, re, time, argparse, glob

try:
    import serial
except ImportError:
    serial = None

import numpy as np
from PIL import Image

# Constants 
IMAGE_SIZE      = 49152          # 64*64*3 float32
IMG_DIM         = (64, 64)       # H, W
BAUD_RATE       = 2000000        
SEND_CHUNK      = 4096
CHUNK_DELAY     = 0.005
SETTLE_DELAY    = 0.25
TIMEOUT_PROMPT  = 30
TIMEOUT_FIRST   = 120
TIMEOUT_IMG_ACK = 15
TIMEOUT_RESULT  = 60
TIMEOUT_DRAIN   = 30
THUMB_SIZE      = (256, 256)

NUM_EXITS  = 3
EXIT_NAMES = ["EE1", "EE2", "EE3"]

NUM_CLASSES = 10
CLASS_NAMES = ["AIRPLANE", "AUTOMOBILE", "BIRD", "CAT", "DEER",
               "DOG", "FROG", "HORSE", "SHIP", "TRUCK"]
_CLASS_PAT  = "|".join(CLASS_NAMES)

PROMPT_MARKERS    = ["Send image file for classification",
                     "(Exactly 49152 bytes)"]
THRESHOLD_MARKERS = ["Confidence threshold for",
                     "confidence threshold", "threshold for EE"]


# Image preprocessing
def preprocess_image(img_path, bin_path, thumb_path):
    """Resize to 64x64, normalize to [0,1] float32, save .bin + thumbnail."""
    img = Image.open(img_path).convert("RGB")

    # Square center-cropped thumbnail for the slides
    thumb = img.copy()
    thumb.thumbnail((THUMB_SIZE[0] * 2, THUMB_SIZE[1] * 2), Image.LANCZOS)
    w, h = thumb.size
    side = min(w, h)
    thumb = thumb.crop(((w - side) // 2, (h - side) // 2,
                        (w - side) // 2 + side, (h - side) // 2 + side))
    thumb.resize(THUMB_SIZE, Image.LANCZOS).save(thumb_path, "PNG")

    # 64x64 float32 input for the FPGA
    arr = np.array(img.resize((IMG_DIM[1], IMG_DIM[0]), Image.LANCZOS),
                   dtype=np.float32) / 255.0
    raw = arr.tobytes()
    assert len(raw) == IMAGE_SIZE, f"Expected {IMAGE_SIZE} bytes, got {len(raw)}"
    with open(bin_path, "wb") as f:
        f.write(raw)
    return raw


# UART communication
class FPGADemo:
    """Serial driver.
       After each result, drain trailing output until the next image prompt, then settle."""

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

    def _fill_rx(self):
        n = self.ser.in_waiting
        if n > 0:
            self.rx_buf += self.ser.read(n).decode("ascii", errors="replace")

    def _read_until_any(self, markers, timeout):
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
        out = self.rx_buf; self.rx_buf = ""; return out

    def _read_until_regex(self, pattern, timeout):
        rx = re.compile(pattern, re.IGNORECASE | re.DOTALL)
        t0 = time.time()
        while time.time() - t0 < timeout:
            self._fill_rx()
            m = rx.search(self.rx_buf)
            if m:
                out = self.rx_buf[:m.end()]
                self.rx_buf = self.rx_buf[m.end():]
                return out
            time.sleep(0.02)
        out = self.rx_buf; self.rx_buf = ""; return out

    def _settle(self):
        time.sleep(SETTLE_DELAY)
        self._fill_rx(); self.rx_buf = ""

    def _contains_prompt(self, text):
        return any(m in text for m in PROMPT_MARKERS)

    def wait_for_prompt(self, timeout=TIMEOUT_PROMPT):
        buf = self._read_until_any(PROMPT_MARKERS, timeout)
        if not self._contains_prompt(buf):
            raise TimeoutError(f"No prompt within {timeout}s.\nTail: {buf[-300:]}")
        self._settle()
        return buf

    def send_image(self, data):
        assert len(data) == IMAGE_SIZE
        for off in range(0, IMAGE_SIZE, SEND_CHUNK):
            self.ser.write(data[off:off + SEND_CHUNK])
            if off + SEND_CHUNK < IMAGE_SIZE:
                time.sleep(CHUNK_DELAY)
        self.ser.flush()

    def wait_for_ack(self, timeout=TIMEOUT_IMG_ACK):
        buf = self._read_until_any(["Image received"], timeout)
        if "Image received" not in buf:
            raise TimeoutError(f"No ack within {timeout}s.\nTail: {buf[-300:]}")

    def send_thresholds(self, profile, timeout=8):
        """Answer the three per-exit threshold prompts (EE1, EE2, EE3)."""
        for i, th in enumerate(profile):
            buf = self._read_until_any(THRESHOLD_MARKERS, timeout)
            if not any(m in buf for m in THRESHOLD_MARKERS):
                raise TimeoutError(f"No threshold prompt for {EXIT_NAMES[i]} "
                                   f"within {timeout}s.\nTail: {buf[-300:]}")
            self.ser.write(f"{th}\n".encode("ascii")); self.ser.flush()

    def read_result(self, timeout=TIMEOUT_RESULT):
        buf = self._read_until_regex(r"Time:\s*[\d.]+\s*ms", timeout)
        if "Time:" not in buf:
            raise TimeoutError(f"No result within {timeout}s.\nTail: {buf[-300:]}")
        return buf

    def drain_to_next_prompt(self, timeout=TIMEOUT_DRAIN):
        buf = self._read_until_any(PROMPT_MARKERS, timeout)
        found = self._contains_prompt(buf)
        if found:
            self._settle()
        self._prompt_ready = found
        return found

    def resync(self, timeout=60):
        """Recover from desync: drain, else push a dummy cycle through."""
        print("    Resyncing...", end=" ", flush=True)
        self.ser.reset_input_buffer(); self.rx_buf = ""; self._prompt_ready = False
        if self.drain_to_next_prompt(timeout=10):
            print("OK"); return True
        print("dummy cycle...", end=" ", flush=True)
        try:
            self.send_image(b"\x00" * IMAGE_SIZE)
            try: self.wait_for_ack(timeout=15)
            except TimeoutError: pass
            try:
                self.send_thresholds((50, 50, 50), timeout=10)
            except TimeoutError:
                for _ in range(NUM_EXITS):
                    self.ser.write(b"50\n"); self.ser.flush(); time.sleep(0.1)
            if self.drain_to_next_prompt(timeout=timeout):
                print("OK"); return True
        except Exception:
            pass
        print("FAILED"); return False

    def classify(self, img_bytes, profile, first=False):
        """prompt -> image -> ack -> 3 thresholds -> result -> drain."""
        if first or not self._prompt_ready:
            t = TIMEOUT_FIRST if first else TIMEOUT_PROMPT
            self.wait_for_prompt(timeout=t)
        self._prompt_ready = False
        self.send_image(img_bytes)
        self.wait_for_ack()
        self.send_thresholds(profile)
        raw = self.read_result()
        result = parse_result(raw, profile)
        self.drain_to_next_prompt(timeout=TIMEOUT_DRAIN)
        return result


# Result parsing (10-class)
def parse_result(raw_text, profile):
    """Parse one FPGA result into a record.

    Early exit:  "The image you sent is: CLASSNAME (EE: N)"
    Backbone:    "Result: CLASSNAME DETECTED" or "Result: UNCERTAIN"
    Scores:      "Scores: [v0, v1, ..., v9]"
    """
    result = {
        "profile": "/".join(str(t) for t in profile),
        "exit_type": "UNKNOWN", "exit_number": None,
        "classification": "UNKNOWN",
        "scores": [None] * NUM_CLASSES,
        "cycles": None, "time_ms": None,
    }

    ee = re.search(r"image you sent is:\s*(" + _CLASS_PAT + r")\s*\(EE:\s*(\d+)\)",
                   raw_text, re.IGNORECASE)
    if ee:
        result["exit_number"] = int(ee.group(2))
        result["exit_type"] = f"EE:{ee.group(2)}"
        result["classification"] = ee.group(1).upper()
    else:
        bb = re.search(r"Result:\s*(UNCERTAIN|(?:" + _CLASS_PAT + r")\s+DETECTED)",
                       raw_text, re.IGNORECASE)
        if bb:
            result["exit_type"] = "BB"
            txt = bb.group(1).upper()
            if "UNCERTAIN" in txt:
                result["classification"] = "UNCERTAIN"
            else:
                cls = re.match(r"(" + _CLASS_PAT + r")", txt, re.IGNORECASE)
                result["classification"] = cls.group(1).upper() if cls else "UNKNOWN"

    s = re.search(r"Scores:\s*\[([^\]]+)\]", raw_text)
    if s:
        vals = [v.strip() for v in s.group(1).split(",")]
        for i in range(min(len(vals), NUM_CLASSES)):
            try:
                result["scores"][i] = float(vals[i])
            except ValueError:
                pass

    c = re.search(r"Cycles:\s*(\d+)", raw_text)
    if c: result["cycles"] = int(c.group(1))
    t = re.search(r"Time:\s*([\d.]+)\s*ms", raw_text)
    if t: result["time_ms"] = float(t.group(1))
    return result


# Main
def parse_profile(s):
    parts = s.split("/")
    if len(parts) != NUM_EXITS:
        raise argparse.ArgumentTypeError(
            f"--profile must be EE1/EE2/EE3 (got '{s}')")
    return tuple(int(p) for p in parts)


def main():
    p = argparse.ArgumentParser(
        description="FPGA demo: JPG/PNG -> FPGA -> results.json + thumbnails")
    p.add_argument("--port",    default="/dev/ttyUSB2")
    p.add_argument("--baud",    type=int, default=BAUD_RATE)
    p.add_argument("--images",  required=True, help="Folder of JPG/PNG images")
    p.add_argument("--profile", type=parse_profile, default="90/80/70",
                   help="Per-exit thresholds EE1/EE2/EE3 (default 90/80/70)")
    p.add_argument("--output",  default="demo_output")
    p.add_argument("--label",   default=None,
                   help="Optional ground-truth class for all images")
    a = p.parse_args()

    exts = ("*.jpg", "*.jpeg", "*.png", "*.bmp", "*.webp")
    imgs = []
    for ext in exts:
        imgs += glob.glob(os.path.join(a.images, ext))
        imgs += glob.glob(os.path.join(a.images, ext.upper()))
    imgs = sorted(set(imgs))
    if not imgs:
        print(f"No images found in {a.images}"); sys.exit(1)

    thumb_dir = os.path.join(a.output, "thumbnails")
    bin_dir   = os.path.join(a.output, "bin_cache")
    os.makedirs(thumb_dir, exist_ok=True)
    os.makedirs(bin_dir, exist_ok=True)

    profile_label = "/".join(str(t) for t in a.profile)
    print("=" * 60)
    print("  FPGA Classifier Demo (10-class, per-exit thresholds)")
    print("=" * 60)
    print(f"  Images:   {len(imgs)} in {a.images}")
    print(f"  Profile:  {profile_label} (EE1/EE2/EE3)")
    print(f"  Port:     {a.port} @ {a.baud}")
    print(f"  Output:   {a.output}/")
    print("=" * 60)

    print("\n  Preprocessing images...")
    entries = []
    for i, img_path in enumerate(imgs):
        name = re.sub(r"[^\w\-.]", "_", os.path.splitext(os.path.basename(img_path))[0])
        thumb_path = os.path.join(thumb_dir, f"{name}.png")
        bin_path   = os.path.join(bin_dir, f"{name}.bin")
        raw = preprocess_image(img_path, bin_path, thumb_path)
        entries.append({
            "index": i,
            "filename": os.path.basename(img_path),
            "thumb_file": os.path.basename(thumb_path),
            "bin_data": raw,
            "true_label": a.label,
        })
        print(f"    [{i+1}/{len(imgs)}] {os.path.basename(img_path)}")

    print(f"\n  Classifying {len(entries)} images on FPGA...\n")
    fpga = FPGADemo(a.port, a.baud)
    results = []
    try:
        for i, e in enumerate(entries):
            print(f"  [{i+1}/{len(entries)}] {e['filename']}", end="  ", flush=True)
            res = None
            for attempt in range(1, 4):
                try:
                    res = fpga.classify(e["bin_data"], a.profile, first=(i == 0))
                    break
                except TimeoutError as err:
                    if attempt < 3:
                        print(f"\n    Retry {attempt}/3: {err}")
                        fpga.resync()
                    else:
                        print("\n    FAILED after 3 attempts")
            if res is None:
                res = {"exit_type": "ERROR", "classification": "ERROR",
                       "scores": [None] * NUM_CLASSES, "exit_number": None,
                       "cycles": None, "time_ms": None,
                       "profile": profile_label}

            scores = res["scores"]
            valid  = [s for s in scores if s is not None]
            conf   = max(valid) * 100 if valid else 0.0
            results.append({
                "index": e["index"],
                "filename": e["filename"],
                "thumb_file": e["thumb_file"],
                "true_label": e["true_label"],
                "classification": res["classification"],
                "exit_type": res["exit_type"],
                "exit_number": res.get("exit_number"),
                "scores": scores,
                "confidence": conf,
                "cycles": res["cycles"],
                "time_ms": res["time_ms"],
                "profile": profile_label,
            })
            tms = res.get("time_ms")
            tms = f"{tms:.0f} ms" if tms is not None else "? ms"
            print(f"-> {res['classification']:11s} ({res['exit_type']})  "
                  f"conf={conf:.1f}%  {tms}")
    except KeyboardInterrupt:
        print("\n  Interrupted.")
    finally:
        fpga.close()

    # Summary
    class_counts = {c: sum(1 for r in results if r["classification"] == c)
                    for c in CLASS_NAMES}
    times   = [r["time_ms"] for r in results if r["time_ms"] is not None]
    ee_count = sum(1 for r in results if r["exit_type"].startswith("EE"))
    summary = {
        "total_images": len(results),
        "profile": profile_label,
        "class_counts": class_counts,
        "classified_uncertain": sum(1 for r in results if r["classification"] == "UNCERTAIN"),
        "errors": sum(1 for r in results if r["classification"] == "ERROR"),
        "early_exit_rate": ee_count / len(results) * 100 if results else 0.0,
        "avg_time_ms": float(np.mean(times)) if times else 0.0,
        "min_time_ms": min(times) if times else 0.0,
        "max_time_ms": max(times) if times else 0.0,
    }

    output = {
        "summary": summary,
        "results": results,
        "config": {
            "port": a.port, "baud": a.baud, "profile": profile_label,
            "class_names": CLASS_NAMES,
            "image_size": "64x64x3", "preprocessing": "resize + /255 float32",
            "model": "MobileNetV3 (microTVM)",
            "processor": "Synopsys TRV32P3 with early exit",
        },
    }
    json_path = os.path.join(a.output, "results.json")
    with open(json_path, "w") as f:
        json.dump(output, f, indent=2)

    print(f"\n{'='*60}")
    print("  Demo complete.")
    top = sorted(class_counts.items(), key=lambda kv: -kv[1])
    print("  Class counts: " + ", ".join(f"{k}={v}" for k, v in top if v))
    print(f"  Early exit rate: {summary['early_exit_rate']:.1f}%")
    print(f"  Avg inference:   {summary['avg_time_ms']:.1f} ms")
    print(f"  Results: {json_path}")
    print(f"{'='*60}")
    print(f"\n  Generate the slides with:\n    node generate_demo_pptx.js {a.output}")


if __name__ == "__main__":
    main()
