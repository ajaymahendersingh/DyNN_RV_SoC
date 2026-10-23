# DyNN-RV-SoC

A dual-core RISC-V SoC with a lightweight INT8 dot-product accelerator and an end-to-end model-to-FPGA pipeline for **early-exit (dynamic) convolutional neural networks**. Prototyped on AMD ZCU102.

Paper: *DyNN-RV: An End-to-End Hardware–Software Co-Design Framework for Dynamic Neural Network Inference on RISC-V SoC* (under review). Tag `v1.0-submission` is the version submitted with the paper; tag `v2.0-revision` adds the files of the revision.

---

## What is, and is not, in this repository

The RISC-V cores in the SoC are instances of Synopsys `trv32p3` (ASIP Designer); the corresponding RTL, microarchitecture description, and toolchain (`chess` compiler) are **Synopsys property**.

### Included

- `software/` — Python toolflow: backbone preparation, exit placement (Algorithm 1 of the paper, `dynn_placement.py`, with the accuracy-aware and measured-cost options), exit-head insertion, training, INT8 post-training quantization (TFLite), and TVM-based bare-metal C generation.
- `accel_codegen/` — Script that rewrites the generated C code so that pointwise convolutions and dense layers, including their requantization, run on the accelerator.
- `rtl/conv_accel/` — Synthesizable Verilog for the AHBconv dot-product accelerator (AHB-Lite slave, dual-clock scratchpad, INT8 SIMD MAC, per-channel requantization).
- `rtl/peripherals/` — AHB-UART, AHB-timer.
- `rtl/top/` — Top-level file, SoC clock and reset control, decoder, multiplexer, AHB data memory, AHB `trv32p3` glue logic (DB+A configuration; `rtl/README.md` describes the six configurations).
- `fpga/` — Vivado constraints, and build instructions for ZCU102.
- `firmware/` — Headers included by the generated firmware, the automated BB/EE split of the generated C code (`firmware/split/`), and tools that convert compiled images to Vivado `.coe` files.
- `models/` — The five deployed multi-exit models: INT8 and FP32 `.tflite`, TVM model library, and the generated C sources of the two cores. `models/revision/` holds the networks built for the revision.
- `data/cifar10_64/` — Specification and sha256 manifest of the 10,000 test images streamed to the FPGA, and a script that rebuilds them from CIFAR-10.
- `scripts/` — `bench/`: the script that ran all FPGA measurements of the paper; `demo/`: streaming images to the FPGA over UART and generating a PPT of the classification results.

### Excluded

- Synopsys ASIP Designer `trv32p3` core RTL, microarchitecture (`.nML`) descriptions, custom-ISA extension sources, and `chess` compiler artefacts.
- Pre-compiled program-memory images that contain `chess`-produced binaries.
  
---

## Repository layout

```
DyNN-RV-SoC/
├── README.md
├── software/
│   ├── README.md
│   ├── model_to_multi_exit_C.ipynb
│   ├── model_to_multi_exit_C__resnet8.ipynb
│   ├── model_to_multi_exit_C__squeezenet.ipynb
│   ├── dynn_placement.py      Algorithm 1 (exit placement), used by the notebooks
│   └── measured_costs/        measured layer costs of the five networks on DE+A
├── accel_codegen/
│   ├── tvm_accel_gen.py
│   ├── conv_accel.h
│   └── README.md
├── rtl/
│   ├── README.md
│   ├── conv_accel/AHBconv.v
│   ├── peripherals/
│   │   ├── uart/    AHBuart.v, fifo.v, uart.v
│   │   └── timer/   AHBtimer.v
│   └── top/         AHBliteTop.v, AHBDCD.v, AHBMUX.v, AHB_DM.v, AHBdummy.v, clock_ctrl.v,
│                    SoC_reset_ctrl.v, AHB_CPU_BB_trv32p3.v, AHB_CPU_EE_trv32p3.v
├── fpga/
│   ├── zcu102.xdc
│   └── README.md
├── firmware/
│   ├── common/      config.h, typedef.h, clock_ctrl.h, timer driver, input buffer
│   ├── split/       TVM model library -> C sources of the BB and EE cores (automated split)
│   └── mem_tools/   program/data images -> .coe, data-memory merge
├── models/
│   ├── MobileNetV1/  MobileNetV2/  MobileNetV3_small/  ResNet8/  SqueezeNet/
│   │   └── Network/ *_int8.tflite, *_fp32.tflite, *_EE_int8_aot.tar, code_partition/{BB,EE}
│   └── revision/
├── data/cifar10_64/
└── scripts/
    ├── bench/
    └── demo/
```

---

## Tool versions

| Step | Tool |
|---|---|
| Training, quantization | TensorFlow 2.12.0 (Google Colab runtime version 2025.07) |
| C code generation | Apache TVM 0.14.dev273 |
| Firmware | Synopsys ASIP Designer W-2024.12 (`chess` compiler, `trv32p3`) |
| FPGA | AMD Vivado 2024.2, ZCU102 |

---

##  Flow steps

### Software pipeline

Go to folder software/ and run the python notebook. See each cell for details. Select the Colab runtime version 2025.07; other versions are not tested and may require minor modifications to be compatible with the TVM and TensorFlow versions.

The output of this notebook would be a tar file containing the C collaterals. 

### Build the binary

The generated C sources from the previous step are split between the BB and EE cores with `firmware/split/make_code_partition.py` (see `firmware/README.md`), which also runs the accelerator code generation. The resulting `default_lib0.c`, `default_lib1.c` and `main.c` of each core are compiled in a Synopsys ASIP Designer project (see models/ folder for examples); the headers they include are in firmware/common/.
To offload some compute to the provided convolution accelerator, use the python script from accel_codegen/ folder (the default answers give the code of the paper).
The output of this step will be a hex of the C code (with or w/o the accelerator intrinsics) that can be used to either download to the processor memory via JTAG or can be directly embedded in the BRAM before generating the bitstream (convert hex to .coe with firmware/mem_tools/)

### FPGA build

The bitstream build expects two RV32IM cores from Synopsys. This along with verilog sources in rtl/ folder and constraints in fpga/ folder can be used to create a Vivado project.

### Running on the board

Use scripts/bench/ to measure accuracy, exits and latency over a set of images and threshold profiles (inputs: data/cifar10_64/), and scripts/demo/ to interact with the model on fpga over UART.

---

## License

MIT (see `LICENSE`). The Synopsys `trv32p3` processor models and tools needed to build the firmware and the bitstream are not part of this repository.

---

## Limitations of this release

- Weights and activations fit entirely in on-chip BRAM. There is no DDR controller in the released SoC.
- The deployed models are trained on CIFAR-10. CIFAR-100 versions of the three MobileNets were evaluated for the revision with the host emulator only.
- The accelerator covers 1×1 pointwise and dense layers only. 3×3 / depthwise convolutions execute in software.
- The cycle-accurate measurements correspond to the `trv32p3` microarchitecture; substituting a different RV32IM core will produce different latencies.

---
