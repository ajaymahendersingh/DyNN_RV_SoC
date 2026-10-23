# RTL

| Folder | Content |
|---|---|
| `conv_accel/AHBconv.v` | AHBconv dot-product accelerator: AHB-Lite slave, 12-KB dual-clock scratchpad, 8-way INT8 MAC, per-channel requantization |
| `peripherals/` | AHB-UART (2 Mbaud) and the 64-bit AHB timer used for all latency measurements |
| `top/` | Top level, address decoder and multiplexer, AHB data memory, clock-gating and reset controllers, bus glue of the two `trv32p3` cores |

## The six configurations of the paper

| Configuration | Cores | ISA extensions | Accelerator | Clock-gating controller |
|---|---|---|---|---|
| SB | 1 | – | – | – |
| SE | 1 | yes | – | – |
| DB | 2 | – | – | yes |
| DE | 2 | yes | – | yes |
| DB+A | 2 | – | yes | yes |
| DE+A | 2 | yes | yes | yes |

`top/` holds the **DB+A** configuration. The other configurations differ in these files only:

- `AHBliteTop.v` instantiates one or two cores, with or without the accelerator.
- `AHB_DM.v` is a single-port (SB, SE) or dual-port (DB, DE, DB+A, DE+A) data memory, with the interface of the base or
  the extended core.
- `AHBDCD.v` adds the accelerator to the address map in DB+A and DE+A.
- The bus glue of the cores differs between the base and the extended `trv32p3`.

UART, timer, multiplexer, reset controller and the accelerator datapath are the same in all configurations.
`AHBconv.v` here has an additional debug output (`fsm_busy`).

The `trv32p3` cores themselves (base and with the ISA extensions of the paper) are Synopsys ASIP Designer models and
are not included.
