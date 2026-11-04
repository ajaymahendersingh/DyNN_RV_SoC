# CIFAR-100 test images as streamed to the FPGA

The 10,000 CIFAR-100 test images, resized to 64x64 and stored as float32 HWC in [0, 1], one `.bin` file per image.
The preprocessing is the one of the CIFAR-10 images (`data/cifar10_64/`) and of the notebooks.

- `spec.json`: source archive (sha256 of the files) and the exact preprocessing (TF bilinear resize,
  `half_pixel_centers=True`).
- `test_manifest.csv`: one row per image: file name, class, rank within the class, index in the CIFAR-100 test file,
  sha256 of the `.bin`.
- `make_bins.py`: rebuilds the files from the official archive and checks each one against the manifest:

      python make_bins.py cifar-100-python.tar.gz cifar100_64/          # bin/<class>/<class>_<rank>.bin
