#!/usr/bin/env python3
"""Rebuild the 10,000 CIFAR-10 test images streamed to the FPGA (64x64x3 float32, HWC, values in [0, 1]).

    python make_bins.py <cifar-10-python.tar.gz> <out_dir> [--c]

Writes <out_dir>/bin/<class>/<class>_<rank>.bin (the --folder input of scripts/bench/fpga_classifier_bench.py) and
checks every file against the sha256 in test_manifest.csv. With --c, also writes the images as C arrays
(<out_dir>/c/<class>/<class>_<first>_<last>.c, 50 arrays per file), the format of the demo samples included by the
BB main.c. The archive is https://www.cs.toronto.edu/~kriz/cifar-10-python.tar.gz; spec.json gives the sha256 of
each batch and the preprocessing.
"""
import csv, hashlib, json, pickle, sys, tarfile
from pathlib import Path

import numpy as np

HERE = Path(__file__).resolve().parent


def resize_bilinear_half_pixel(x, out_h, out_w):
    """Bit-exact float32 re-implementation of TF ResizeBilinear (half_pixel_centers=True, align_corners=False)."""
    n, h, w, c = x.shape

    def weights(out_size, in_size):
        scale = np.float32(in_size) / np.float32(out_size)
        o = np.arange(out_size, dtype=np.float32)
        inn = (o + np.float32(0.5)) * scale - np.float32(0.5)
        inf = np.floor(inn)
        lo = np.maximum(inf.astype(np.int64), 0)
        hi = np.minimum(np.ceil(inn).astype(np.int64), in_size - 1)
        return lo, hi, (inn - inf).astype(np.float32)

    ylo, yhi, yl = weights(out_h, h)
    xlo, xhi, xl = weights(out_w, w)
    tl = x[:, ylo][:, :, xlo]; tr = x[:, ylo][:, :, xhi]
    bl = x[:, yhi][:, :, xlo]; br = x[:, yhi][:, :, xhi]
    xl_ = xl[None, None, :, None]; yl_ = yl[None, :, None, None]
    top = tl + (tr - tl) * xl_
    bot = bl + (br - bl) * xl_
    return (top + (bot - top) * yl_).astype(np.float32)


def hexf(v):
    """C99 hex float literal of a float32 value, without trailing zeros (lossless)."""
    m, e = float(v).hex().split("p")
    m = m.rstrip("0").rstrip(".") if "." in m else m
    return f"{m}p{e}f"


def main():
    if len(sys.argv) < 3:
        sys.exit(__doc__)
    archive, out = Path(sys.argv[1]), Path(sys.argv[2])
    spec = json.loads((HERE / "spec.json").read_text())
    with tarfile.open(archive) as t:
        raw = t.extractfile("cifar-10-batches-py/test_batch").read()
    want = spec["source"]["sha256"]["test_batch"]
    assert hashlib.sha256(raw).hexdigest() == want, "test_batch differs from the CIFAR-10 archive in spec.json"
    d = pickle.loads(raw, encoding="bytes")
    x = d[b"data"].reshape(-1, 3, 32, 32).transpose(0, 2, 3, 1)
    rows = list(csv.DictReader(open(HERE / "test_manifest.csv")))
    c_files = {}
    for k, r in enumerate(rows):
        img = resize_bilinear_half_pixel(x[int(r["source_index"])][None].astype(np.float32) / 255.0, 64, 64)[0]
        data = img.astype("<f4").tobytes()
        assert hashlib.sha256(data).hexdigest() == r["sha256"], f"{r['relpath']}: not identical to the FPGA input"
        p = out / r["relpath"]
        p.parent.mkdir(parents=True, exist_ok=True)
        p.write_bytes(data)
        if "--c" in sys.argv:
            vals = img.reshape(-1)
            lines = [", ".join(hexf(v) for v in vals[i:i + 8]) for i in range(0, vals.size, 8)]
            c_files.setdefault(r["c_relpath"], []).append(
                f"static const float {r['c_symbol']}[] = {{\n    " + ",\n    ".join(lines) + "\n};\n")
        if (k + 1) % 1000 == 0:
            print(f"{k + 1} images")
    for rel, arrays in c_files.items():
        p = out / rel
        p.parent.mkdir(parents=True, exist_ok=True)
        p.write_text('#ifdef __cplusplus\nextern "C" {\n#endif\n\n' + "\n".join(arrays) + '\n#ifdef __cplusplus\n}\n#endif\n')
    print(f"{len(rows)} images written to {out}, all identical to the FPGA inputs (sha256)")


if __name__ == "__main__":
    main()
