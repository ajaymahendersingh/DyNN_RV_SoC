# CIFAR-10 test images as streamed to the FPGA

The 10,000 CIFAR-10 test images, resized to 64x64 and stored as float32 HWC in [0, 1], one `.bin` file per image.

- `spec.json`: source archive (sha256 of every batch) and the exact preprocessing (TF bilinear resize,
  `half_pixel_centers=True`).
- `test_manifest.csv`: one row per image: file name, class, index in the CIFAR-10 test batch, sha256 of the `.bin`.
- `make_bins.py`: rebuilds the files from the official archive and checks each one against the manifest:

      python make_bins.py cifar-10-python.tar.gz cifar10_64/          # bin/<class>/<class>_<rank>.bin
      python make_bins.py cifar-10-python.tar.gz cifar10_64/ --c      # also the C arrays of the demo samples
