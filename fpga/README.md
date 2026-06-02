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
| OS | Linux or Windows; Linux assumed below |


## Manual build (Vivado GUI)

Prefer clicking through the GUI? Follow these steps.

1. **Create the project.**
   `File → Project → New…` → RTL project (do **not** specify sources yet) →
   set the part to **`xczu9eg-ffvb1156-2-e`** (or pick the ZCU102 board file).

2. **Add the RTL.**
   `Add Sources → Add or create design sources` → add every source file under
   [`../rtl`](../rtl). Set the SoC top module as the project top.

3. **Add the constraints.**
   `Add Sources → Add or create constraints` → add
   [`constraints/zcu102.xdc`](constraints/).

4. **Synthesize.** `Run Synthesis`.

5. **Implement.** `Run Implementation`.

6. **Generate the bitstream.** `Generate Bitstream`.

7. **Inspect reports.** After implementation, open
   `Reports → Timing Summary` and `Reports → Utilization` to confirm the
   design meets timing and fits (see [Expected results](#expected-results)).

---

---

## Clocking note

The SoC is a **multi-clock** design: the AHB-Lite interface and configuration
logic run at **100 MHz** while the accelerator compute datapath (MAC engine and
requantization pipeline) runs at **200 MHz**, with a CDC boundary between them.
Make sure `constraints/zcu102.xdc` declares **both** clocks and any
`set_clock_groups` / false-path or max-delay constraints across the CDC, or
timing closure and CDC analysis will be incorrect. Review the timing summary
for both clock domains, not just the slowest path.

---

## Expected results

For reference, the fully-featured configuration (dual extended-ISA cores +
`AHBconv` accelerator) reported in the paper occupies roughly:

| Metric | Approx. value (full config) |
|---|---|
| LUT utilization | ~6.5 % of ZCU102 |
| Register utilization | ~1.1 % |
| BRAM | ~94 % (held constant across configs by the model footprint) |
| Dynamic power (Vivado estimate) | ~495 mW |

Your exact numbers will vary with the RTL configuration you build and with
Vivado seed/version. Treat these as ballpark sanity checks, not pass/fail gates.

---

## Troubleshooting

- **`ERROR: [Synth] top module not found`** — `TOP` in the script (or the GUI
  project top) does not match the module name in `../rtl`. Set it correctly.
- **No constraint file picked up** — verify the path `fpga/constraints/zcu102.xdc`
  exists and that you launched Vivado from the repo root (the script uses
  relative paths).
- **BRAM over-utilization** — the design intentionally uses most of the on-chip
  BRAM. If it overflows, you are likely building a configuration whose model
  footprint exceeds what was validated; reduce it or target a larger part.
- **Timing failure on the 200 MHz domain** — re-check the CDC and multi-clock
  constraints described in the [Clocking note](#clocking-note).
- **Part not recognized** — install/enable the ZCU102 board files for Vivado
  2024.2, or use the explicit part string `xczu9eg-ffvb1156-2-e`.

---

## Notes

- Validated with **Vivado 2024.2**. Other versions may synthesize but are not
  guaranteed to reproduce the reported utilization or timing.
- Firmware, the model-to-C pipeline, and device programming are out of scope for
  this folder. See the top-level repository README for those components.
