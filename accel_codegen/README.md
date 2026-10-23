# Accelerator code generation

`tvm_accel_gen.py` rewrites the TVM-generated `default_lib1.c` of a model so that pointwise convolutions and dense layers run on the AHBconv accelerator. Pointwise layers with INT8 output use the on-chip requantization; layers with a fused hard-swish or float output use the accelerator for the dot products and requantize in software.

    python tvm_accel_gen.py default_lib1.c -o default_lib1_accel.c
