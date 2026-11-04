#!/usr/bin/env python3
"""Rebuild the 10,000 CIFAR-100 test images streamed to the FPGA (64x64x3 float32, HWC, values in [0, 1]).

    python make_bins.py <cifar-100-python.tar.gz> <out_dir>

Writes <out_dir>/bin/<class>/<class>_<rank>.bin (100 images per class, fine labels) and checks every file against
the sha256 in test_manifest.csv. The archive is https://www.cs.toronto.edu/~kriz/cifar-100-python.tar.gz; spec.json
gives the sha256 of the test file and the preprocessing, which is the one of the CIFAR-10 images
(data/cifar10_64/make_bins.py) and of the notebooks (tf.image.resize).
"""
import csv, hashlib, io, json, pickle, sys, tarfile
from pathlib import Path

import numpy as np

HERE = Path(__file__).resolve().parent


class _Unpickler(pickle.Unpickler):
    """Reads the CIFAR pickles (dicts, lists, bytes, numpy arrays) and refuses anything else."""
    ALLOWED = {("numpy.core.multiarray", "_reconstruct"), ("numpy", "ndarray"), ("numpy", "dtype"),
               ("numpy.core.multiarray", "scalar"), ("_codecs", "encode")}

    def find_class(self, module, name):
        if (module, name) not in self.ALLOWED:
            raise pickle.UnpicklingError(f"refused {module}.{name}")
        return super().find_class(module, name)


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


def load_test(archive):
    """Images (N, 32, 32, 3) uint8 and fine labels of the test file, checked against spec.json."""
    spec = json.loads((HERE / "spec.json").read_text())
    with tarfile.open(archive) as t:
        raw = t.extractfile("cifar-100-python/test").read()
    assert hashlib.sha256(raw).hexdigest() == spec["source"]["sha256"]["test"], \
        "test file differs from the CIFAR-100 archive in spec.json"
    d = _Unpickler(io.BytesIO(raw), encoding="bytes").load()
    return d[b"data"].reshape(-1, 3, 32, 32).transpose(0, 2, 3, 1), np.array(d[b"fine_labels"])


def main():
    if len(sys.argv) < 3:
        sys.exit(__doc__)
    archive, out = Path(sys.argv[1]), Path(sys.argv[2])
    x, _ = load_test(archive)
    rows = list(csv.DictReader(open(HERE / "test_manifest.csv")))
    for k, r in enumerate(rows):
        img = resize_bilinear_half_pixel(x[int(r["source_index"])][None].astype(np.float32) / 255.0, 64, 64)[0]
        data = img.astype("<f4").tobytes()
        assert hashlib.sha256(data).hexdigest() == r["sha256"], f"{r['relpath']}: not identical to the FPGA input"
        p = out / r["relpath"]
        p.parent.mkdir(parents=True, exist_ok=True)
        p.write_bytes(data)
        if (k + 1) % 1000 == 0:
            print(f"{k + 1} images")
    print(f"{len(rows)} images written to {out}, all identical to the FPGA inputs (sha256)")


if __name__ == "__main__":
    main()
