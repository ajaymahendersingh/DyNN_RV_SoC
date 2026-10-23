# Networks built for the revision

These networks have the same backbones and final classifiers as the deployed models in `models/<model>/Network/`;
only the exit layers (and therefore the exit heads) differ. They were built with only the memory contents changed (500 images x 9 threshold profiles), and extended to the 10,000 test images with a bit-exact host emulator of the generated C code.

| Folder | Placement | Exit layers | Best-EE on DE+A (10,000 images) |
|---|---|---|---|
| `MobileNetV2_accuracy_aware` | Algorithm 1, accuracy-aware option | `block_6_project_BN`, `block_9_add`, `block_13_project_BN` | 224.8 ms, 79.4 % (deployed: 255.2 ms, 79.7 %) |
| `MobileNetV3Small_measured_cost` | Algorithm 1, measured layer costs + accuracy-aware option | `expanded_conv_2/project/BatchNorm`, `expanded_conv_3/project/BatchNorm`, `expanded_conv_4/Add` | 304.2 ms, 62.6 % (deployed: 331.5 ms, 63.4 %) |
| `MobileNetV1_alpha1` | Algorithm 1 with alpha_acc = 1 (no accelerator) | `conv_dw_4_bn`, `conv_dw_9_bn` | 151.2 ms, 78.3 % (deployed: 134.7 ms, 78.2 %) |
| `MobileNetV2_alpha1` | Algorithm 1 with alpha_acc = 1 | `block_1_project`, `block_5_project_BN`, `block_12_expand` | 265.6 ms, 78.8 % |
| `MobileNetV3Small_alpha1` | Algorithm 1 with alpha_acc = 1 | `expanded_conv_1/project/BatchNorm`, `expanded_conv_4/project/BatchNorm`, `expanded_conv_8/project/BatchNorm` | 376.1 ms, 61.2 % |

Files: `*_EE_int8_aot.tar` (TVM model library format), for the two accuracy-aware networks the INT8 and FP32
`.tflite`, and `code_partition/{BB,EE}`: the C sources of the two cores, made with `firmware/split/make_code_partition.py`
(`main.c` from the deployed network with the same number of exits; for the alpha = 1 networks, from their earlier
builds). `default_lib0.c` and `default_lib1.c` are the code that ran on the FPGA. On DE+A, the second exit of
`MobileNetV1_alpha1` is never taken: its head is still running when the backbone finishes.
