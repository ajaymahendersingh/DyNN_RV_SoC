# Firmware

The firmware of each model is in `models/<model>/Network/code_partition/{BB,EE}/` (and
`models/revision/<network>/code_partition/` for the networks of the revision).

| Path | Content |
|---|---|
| `common/config.h` | Clock frequency and the shared-memory addresses used by the two cores |
| `common/clock_ctrl.h` | Prototypes of the clock-gating signals (implemented with inline assembly in the EE `main.c`) |
| `common/timer_def.h`, `common/libtimer.c` | 64-bit profiling timer |
| `common/typedef.h` | Integer types |
| `common/test_data.c`, `common/test_data.h` | Input buffer of one 64x64x3 float32 image |
| `split/make_code_partition.py` | TVM C code -> accelerator-instrumented C code -> C sources of the BB and EE cores |
| `split/split_dual_core.py` | The BB/EE split itself |
| `mem_tools/` | Convert the compiled program and data images to Vivado `.coe` files and merge data-memory images |

## From a trained network to the C sources of the two cores

The notebooks in `software/` write the TVM model library of a multi-exit network (`<model>_EE_int8_aot.tar`).

    python split/make_code_partition.py <model>_EE_int8_aot.tar <out> --main-from models/MobileNetV2/Network/code_partition

writes `<out>/BB` and `<out>/EE` with `default_lib0.c`, `default_lib1.c` and `main.c`:

1. `accel_codegen/tvm_accel_gen.py` rewrites the generated code so that pointwise convolutions and dense layers run on
   the accelerator. `--interactive` answers its prompts by hand; `--no-accel`
   skips this step for configurations without the accelerator (SB, SE, DB, DE).
2. `split_dual_core.py` assigns the operators of the TVM main function to the two cores. An operator whose output
   leads only to an early exit belongs to the exit head and runs on the EE core; all others run on the BB core. After
   the operator that writes the input of exit k, the BB core waits until the EE core is idle, ungates its clock and
   waits until it has read the features; the EE core evaluates the head, writes its result and gates itself. The EE core reads the features and the constants from the BB core's workspaces.
3. `main.c` of both cores is copied from `--main-from`, a network with the same number of exits, with the name of the
   network input replaced.

For MobileNetV1, MobileNetV2, MobileNetV3-Small and SqueezeNet, the output is the code in
`models/*/Network/code_partition`. For ResNet-8, the code generator also offloads the 1x1 projection convolution, which the evaluated ResNet-8 runs in software (answer "n" for it with `--interactive` to obtain the code). The networks in `models/revision/` were split with these scripts.

## Building

The C sources are compiled for the two `trv32p3` cores with the `chess` compiler of Synopsys ASIP Designer
(W-2024.12), one project per core, with the generated `default_lib0.c`, `default_lib1.c`, `main.c`, the TVM runtime
headers of the model library, `common/` and, for the BB core, `accel_codegen/conv_accel.h`. ASIP Designer, the
`trv32p3` processor model and the project files are Synopsys property and are not part of this repository. The
compiled program and data images are converted with `mem_tools/` into the `.coe` files of the three BRAMs (BB program
memory, EE program memory, shared data memory), which are loaded via JTAG or embedded in the bitstream (`fpga/`).

The BB `main.c` of each model also includes one C array per CIFAR-10 class (`samples/<class>.c`) for the stand-alone
demo (when `USE_UART` is not defined); these can be generated with `data/cifar10_64/make_bins.py --c`.
