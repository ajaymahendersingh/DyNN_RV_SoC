# DyNN-RV-SoC

A dual-core RISC-V SoC with a lightweight INT8 dot-product accelerator and an end-to-end model-to-FPGA pipeline for **early-exit (dynamic) convolutional neural networks**. Prototyped on AMD ZCU102.

---

## What is, and is not, in this repository

**This repository is a partial release.** The RISC-V cores in the published SoC are instances of Synopsys `trv32p3` (ASIP Designer); the corresponding RTL, microarchitecture description, and toolchain (`chess` compiler) are **Synopsys property**.

### Included

- `software/` — Python toolflow: backbone preparation, exit-head insertion, training, INT8 post-training quantization (TFLite), and TVM-based bare-metal C generation.
- `accel_codegen/` — Post-generation rewriting pass that converts TVM-emitted C for pointwise / dense layers into accelerator-tiled intrinsics.
- `rtl/ahbconv/` — Synthesizable Verilog for the AHBconv dot-product accelerator (AHB-Lite slave, dual-clock scratchpad, INT8 SIMD MAC, per-channel requantization).
- `rtl/peripherals/` — AHB-UART, AHB-timer, dual-port BRAM wrapper.
- `fpga/` — Vivado constraints, and a build instructions for ZCU102.
- `models/` — Generated INT8 multi-exit MobileNetV1 / V2 / V3-Small networks (Network A and Network B), with generated C sources for each.
- `scripts/` — Host-side measurement harness (UART protocol, image streaming, latency capture).
- `docs/` — Architectural diagrams, register map, AHB transactions, mailbox layout.

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
│   │   ├── ahbconv_top.v
│   │   ├── ahb_slave.v
│   │   ├── scratchpad.v
│   │   ├── mac_engine.v
│   │   ├── requant.v
│   │   └── cdc.v
│   ├── peripherals/
│   │   ├── ahb_uart.v
│   │   ├── ahb_timer.v
│   │   └── bram_dp.v
├── fpga/
│   ├── constraints/zcu102.xdc
│   └── README.md
├── models/
│   ├── mnv1/  (network_A.c, network_B.c, weights/)
│   ├── mnv2/
│   └── mnv3s/
├── scripts/
│   ├── host_measure.py
│   ├── uart_protocol.md
└── docs/
    ├── architecture.md
    ├── core_interface.md
    ├── ahbconv_regmap.md
    ├── mailbox.md
    └── figures/
```

---

## Quick start

### Software pipeline (no FPGA required)

```bash
# 1. Environment
python -m venv .venv && source .venv/bin/activate
pip install -r pipeline/requirements.txt

# 2. Prepare backbone, attach exits, train, quantize
python pipeline/prepare_backbone.py --model mobilenetv2 --dataset cifar10
python pipeline/insert_exits.py     --config configs/mnv2_netA.yaml
python pipeline/train_multiexit.py  --epochs 50
python pipeline/quantize_int8.py    --representative-data data/calib.npz

# 3. Hardware-aware exit placement
python placement/place_exits.py \
    --backbone mobilenetv2 \
    --alpha-acc 0.25 \
    --nmax 3 \
    --d-min 10 --d-l 55 90 --d-tar 70 --lambda 10

# 4. TVM compile to C, then rewrite for the accelerator
python pipeline/tvm_compile.py      --target c --out build/mnv2_netB/
python accel_codegen/rewrite_pass.py build/mnv2_netB/ --tile auto
```

### FPGA build

The bitstream build expects two RV32IM core blackboxes. We do not distribute them. Two routes:

1. **Internal Synopsys ASIP Designer users**: drop the `trv32p3` outputs into `fpga/cores/` following the interface in `docs/core_interface.md`. Set `USE_SYNOPSYS_TRV32P3=1` in `build_zcu102.tcl`.
2. **External users**: any RV32IM core exposing the documented AHB-Lite master interface and `x19`-mapped clock-gate hooks will work. We have not validated this path; the custom-ISA performance figures are not reproducible without the extension instructions.

```bash
cd fpga
vivado -mode batch -source build_zcu102.tcl
# bitstream: out/dynn_rv_soc.bit
```

### Running on the board

```bash
# Program the board (out-of-tree), then:
python scripts/host_measure.py \
    --port /dev/ttyUSB0 --baud 2000000 \
    --network models/mnv2/network_B.c \
    --thresholds 90 85 80 \
    --images scripts/cifar10_subset.npz
```

Output: per-image latency (from 64-bit hardware timer), exit index taken, predicted class, top-1 accuracy across the 500-image subset.

---

## Reproducing the results in the paper

The 6 SoC configurations evaluated in Table IV of the paper are:

| Tag    | Cores | ISA       | Accelerator |
|--------|-------|-----------|-------------|
| `SB`   | 1     | RV32IM    | —           |
| `DB`   | 2     | RV32IM    | —           |
| `DB+A` | 2     | RV32IM    | AHBconv     |
| `SE`   | 1     | extended  | —           |
| `DE`   | 2     | extended  | —           |
| `DE+A` | 2     | extended  | AHBconv     |

Only the configurations that do **not** depend on the ISA extension (`SB`, `DB`, `DB+A`) are reproducible outside our internal toolchain. The `*E` configurations require the Synopsys ASIP Designer flow to instantiate the custom instructions.

`scripts/run_sweep.sh` drives the full (config × model × threshold) sweep used to produce Figs. 7–10 of the paper.

---

## Limitations of this release

- Weights and activations fit entirely in on-chip BRAM. There is no DDR controller in the released SoC.
- Trained on CIFAR-10 only. The pipeline is dataset-agnostic; the released checkpoints are not.
- The accelerator covers 1×1 pointwise and dense layers only. 3×3 / depthwise convolutions execute in software.
- The released cycle-accurate measurements correspond to the `trv32p3` microarchitecture; substituting a different RV32IM core will produce different latencies.

---

## Citing this work

```bibtex
@article{dynn_rv_soc_2026,
  title  = {Towards enabling RISC-V based hardware platform for Dynamic Neural Network Inference on Edge devices},
  author = {Kumar M, Ajay and Shanker, Shreejith and John, Deepu},
  journal= {IEEE Transactions on Circuits and Systems I: Regular Papers},
  year   = {2026},
  note   = {Under review}
}
```

---

## License

Apache-2.0 for source we authored. RTL files have an SPDX header. Generated C files inherit the TVM Apache-2.0 license. Model weights are released under CC-BY-4.0.

The Synopsys `trv32p3` core, ASIP Designer toolchain, and `chess` compiler are property of Synopsys, Inc., and are **not** covered by this repository's license.

## Acknowledgement

Funded by Taighde Éireann – Research Ireland through the Centre for Research Training in Machine Learning (18/CRT/6183).
