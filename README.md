# DyNN-RV-SoC

A dual-core RISC-V SoC with a lightweight INT8 dot-product accelerator and an end-to-end model-to-FPGA pipeline for **early-exit (dynamic) convolutional neural networks**. Prototyped on AMD ZCU102.

---

## What is, and is not, in this repository

The RISC-V cores in the SoC are instances of Synopsys `trv32p3` (ASIP Designer); the corresponding RTL, microarchitecture description, and toolchain (`chess` compiler) are **Synopsys property**.

### Included

- `software/` — Python toolflow: backbone preparation, exit-head insertion, training, INT8 post-training quantization (TFLite), and TVM-based bare-metal C generation.
- `accel_codegen/` — Script to convert C code for pointwise / dense / layers / requantization logic into accelerator intrinsics.
- `rtl/conv_accel/` — Synthesizable Verilog for the AHBconv dot-product accelerator (AHB-Lite slave, dual-clock scratchpad, INT8 SIMD MAC, per-channel requantization).
- `rtl/peripherals/` — AHB-UART, AHB-timer.
- `rtl/top/` - Top level file, SoC clock and reset control, Decoder, Multiplexer, AHB data memory, AHB trv32p3 glue logic.
- `fpga/` — Vivado constraints, and build instructions for ZCU102.
- `models/` — Generated INT8 multi-exit MobileNetV1 / V2 / V3-Small networks (Network A and Network B), with generated C sources for each.
- `scripts/` — demo scripts for streaming images to fpga over UART and generating a PPT of the classification results.

### Excluded

- Synopsys ASIP Designer `trv32p3` core RTL, microarchitecture (`.nML`) descriptions, custom-ISA extension sources, and `chess` compiler artefacts.
- Pre-compiled program-memory images that contain `chess`-produced binaries.
  
---

## Repository layout

```
DyNN-RV-SoC/
├── README.md
├── software/
│   ├── model_to_multi_exit_C.ipynb
├── accel_codegen/
│   ├── tvm_accel_gen.py
│   └── AHBconv.h
├── rtl/
│   ├── ahbconv/
│   │   ├── AHBconv.v
│   ├── peripherals/
|   |   ├── uart
|   |   |   ├── AHBuart.v
|   |   |   ├── fifo.v
|   |   |   ├── uart.v
|   |   ├── timer
│   │   |   ├── AHBtimer.v
├── fpga/
│   ├── constraints/zcu102.xdc
│   └── README.md
├── models/
│   ├── MobileNetV1/
│   ├── MobileNetV2/
│   └── MobileNetV3small/
├── scripts/
│   └── demo/
```

---

##  Flow steps

### Software pipeline

Go to folder software/ and run the python notebook. See each cell for details. You will need to select Python 2025.07 in the colab environment. Other versions are not tested but may require minor modifications to be compatible with the TVM and TF versions.

The output of this notebook would be a tar file containing the C collaterals. 

### Build the binary

The generated C sources from previous step will be used to create a project in Synopsys ASIP Designer and a main.c should be created (see models/ folder for examples).
To offload some compute to the provided convolution accelerator, use the python script from accel_codegen/ folder.
The output of this step will be a hex of the C code (with or w/o the accelerator intrinsics) that can be used to either download to the processor memory via JTAG or can be dorectly embedded in the BRAM before geenerating the bitstream (will need to convert hex to .coe)

### FPGA build

The bitstream build expects two RV32IM cores from Synopsys. This along with verilog sources in rtl/ folder and constraints in fpga/ folder can be used to create a Vivado project.

### Running on the board

Use scripts/demo/ folder to interact with the model on fpga over UART.

---

## Limitations of this release

- Weights and activations fit entirely in on-chip BRAM. There is no DDR controller in the released SoC.
- Trained on CIFAR-10 only.
- The accelerator covers 1×1 pointwise and dense layers only. 3×3 / depthwise convolutions execute in software.
- The cycle-accurate measurements correspond to the `trv32p3` microarchitecture; substituting a different RV32IM core will produce different latencies.

---

## Citing this work


