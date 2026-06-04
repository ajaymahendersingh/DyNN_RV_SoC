# FPGA Build (AMD Xilinx ZCU102)

This folder holds the **constraints** and the **build instructions** for synthesizing
the dual-core RISC-V SoC RTL onto an AMD Xilinx **ZCU102** evaluation board.
RTL files are one level up, in [`../rtl`](../rtl).

> **Scope.** This README covers RTL → bitstream only. It does **not** cover the
> RISC-V firmware (the BB/EE C code is built with a separate Synopsys ASIP Designer
> toolchain and is not part of this repository), nor device programming / boot.

---

## Prerequisites

| Requirement | Version / Detail |
|---|---|
| AMD Vivado | **2024.2** (the version the design was validated on) |
| Target board | ZCU102 (Zynq UltraScale+ MPSoC, part **`xczu9eg-ffvb1156-2-e`**) |
| OS | Linux or Windows


## build

1. **Create the project.**
   `File → Project → New…` → RTL project (do **not** specify sources yet) →
   set the part to **`xczu9eg-ffvb1156-2-e`** (or pick the ZCU102 board file).

2. **Add the RTL.**
   `Add Sources → Add or create design sources` → add every source file under
   [`../rtl`](../rtl). Set the SoC top module as the project top.

3. **Add the constraints.**
   `Add Sources → Add or create constraints` → add
   `zcu102.xdc`

4. Create BRAM from IP catalog for ROM and dual port RAM using native interface.

5. Run Synthesis → Implementation → Generate Bitstream

