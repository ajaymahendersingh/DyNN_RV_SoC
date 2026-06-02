# FPGA Build (AMD Xilinx ZCU102)

This folder holds the **constraints** and the **build instructions** for synthesizing
the dual-core RISC-V SoC RTL onto an AMD Xilinx **ZCU102** evaluation board.
The RTL itself lives one level up, in [`../rtl`](../rtl).

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
| Disk | ~30 GB free for the Vivado project and build artifacts |

Confirm Vivado is on your `PATH`:

```bash
vivado -version      # should report v2024.2
```

---

## Repository layout

```
.
├── rtl/                      # SoC RTL sources  (one level up from this folder)
│   └── *.v / *.sv            #   processor glue, AHB-Lite bus, scratchpad,
│                             #   clock-gating + reset controllers, AHBconv, ...
└── fpga/                     # ← you are here
    ├── README.md             # this file
    └── constraints/          # ZCU102 .xdc constraint file(s)
        └── zcu102.xdc
```

> If your local paths differ, adjust the `add_files` / `read_xdc` lines in the
> build script below to match.

---

## Quick build (recommended)

A non-project (scripted) flow is the most reproducible. From the **repository root**:

```bash
vivado -mode batch -source fpga/build_zcu102.tcl
```

If you do not yet have `build_zcu102.tcl`, create it from the template in the
[Build script](#build-script-buildzcu102tcl) section below.

On success you will find the bitstream at:

```
build/dynn_soc.bit
```

and the post-route utilization / timing reports under `build/`.

---

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

## Build script (`build_zcu102.tcl`)

Save this as `fpga/build_zcu102.tcl`. Paths are written relative to the
**repository root** (where you launch Vivado).

```tcl
# build_zcu102.tcl — non-project synth/impl/bitstream for the DyNN RISC-V SoC
# Run from the repo root:  vivado -mode batch -source fpga/build_zcu102.tcl

set PART     xczu9eg-ffvb1156-2-e
set TOP      soc_top                       ;# <-- set to your actual top module
set OUTDIR   build
set RTL_DIR  rtl
set XDC      fpga/constraints/zcu102.xdc

file mkdir $OUTDIR

# --- read sources ---------------------------------------------------------
# Picks up .v, .sv, and .vhd under rtl/. Adjust globs to match your sources.
foreach f [glob -nocomplain $RTL_DIR/*.v $RTL_DIR/*.sv] {
    read_verilog -sv $f
}
foreach f [glob -nocomplain $RTL_DIR/*.vhd] {
    read_vhdl $f
}
read_xdc $XDC

# --- synthesis ------------------------------------------------------------
synth_design -top $TOP -part $PART
write_checkpoint -force $OUTDIR/post_synth.dcp
report_utilization -file $OUTDIR/post_synth_util.rpt

# --- implementation -------------------------------------------------------
opt_design
place_design
phys_opt_design
route_design
write_checkpoint -force $OUTDIR/post_route.dcp

# --- reports --------------------------------------------------------------
report_timing_summary -file $OUTDIR/timing_summary.rpt
report_utilization    -file $OUTDIR/post_route_util.rpt
report_power          -file $OUTDIR/power.rpt

# --- bitstream ------------------------------------------------------------
write_bitstream -force $OUTDIR/dynn_soc.bit
puts "BUILD COMPLETE -> $OUTDIR/dynn_soc.bit"
```

Two things to set before the first run:

- **`TOP`** — change `soc_top` to the actual top-level module name in `../rtl`.
- **Source globs** — if your RTL uses other extensions or subdirectories,
  extend the `glob` patterns in the `read_*` loops.

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
