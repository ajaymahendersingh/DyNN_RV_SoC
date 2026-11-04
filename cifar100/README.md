# CIFAR-100

The five networks of the repository trained on CIFAR-100, with the same flow as the CIFAR-10 networks.

| Folder | Content |
|---|---|
| `software/` | The three notebooks for CIFAR-100 (MobileNets, ResNet-8, SqueezeNet). They use `software/dynn_placement.py` of the repository. |
| `models/<model>/Network/` | INT8 and FP32 `.tflite`, TVM model library (`*_EE_int8_aot.tar`), and the generated C sources of the two cores (`code_partition/{BB,EE}`) |
| `data/cifar100_64/` | Specification of the 10,000 test images streamed to the FPGA, and a script that rebuilds them from CIFAR-100 |

## Differences from the CIFAR-10 flow

Exit heads. With 100 classes, the CIFAR-10 head is too narrow: after pooling, exits 2 and 3 have only 16 features.
The CIFAR-100 heads are wider. The second convolution uses a 1×1 kernel, which keeps the head cost low.

| Exit-head layer | CIFAR-10 | CIFAR-100 |
|---|---|---|
| First convolution (all exits) | 3×3, 32 filters | 3×3, 32 filters |
| Second convolution (exits 2 and 3) | 3×3, 16 filters | 1×1, 128 filters |
| Hidden fully connected layers | 128 and 64 units | 256 and 128 units |
| Output layer | 10 units | 100 units |

Training. MobileNets and SqueezeNet: random horizontal flips and shifts of the training images, 30 epochs with a
cosine decay of the learning rate, and the epoch with the best validation result is kept (CIFAR-10: 10 epochs
without these additions). ResNet-8: the backbone is trained as for CIFAR-10; the exit heads are trained for 30 epochs
with the cosine decay and the best epoch. SqueezeNet uses a learning rate of 2e-4 instead of 5e-4: it has no batch
normalization, and with 5e-4 its training did not always start.

Firmware. The class number in the early-exit flag goes up to 99. The EE core passes only the top-1 class and its
score to the BB core, because the shared memory region for the scores holds ten values.

Unchanged: Algorithm 1 and its parameters, INT8 quantization, TVM compilation, accelerator code generation
(`accel_codegen/`) and the BB/EE split (`firmware/split/`).

## Running the notebooks

On Colab, as the CIFAR-10 notebooks (runtime version 2025.07). They can also run locally with TensorFlow 2.12.0 and
TVM 0.14.dev273; outside Colab, files are written under the folder given by the environment variable `DYNN_WORK`
(default `./work`) instead of Google Drive. Locally, Part A of the SqueezeNet notebook (conversion of the PyTorch
weights) needs its own environment with PyTorch, `tf_keras` and `onnx2keras` 0.0.24; Part B reads the converted
backbone from `DYNN_WORK`.
