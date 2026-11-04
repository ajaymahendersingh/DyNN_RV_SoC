//#define DUMP_OUTPUTS
#define INCLUDE_ACCEL
#include "config.h"
#include "clock_ctrl.h"
#ifdef INCLUDE_ACCEL
#include "conv_accel.h"
#endif
// tvm target: c -keys=cpu 
#define TVM_EXPORTS
#include "tvm/runtime/c_runtime_api.h"
#include "tvm/runtime/c_backend_api.h"
#include <math.h>
#include <stdbool.h>
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_clip_cast_subtract_fixed_point_multiply_add_clip_cast(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_56_var, uint8_t* global_workspace_57_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_divide_round_add_clip_cast_nn_pad(float* p0, int8_t* T_pad, uint8_t* global_const_workspace_2_var, uint8_t* global_workspace_3_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_mean(int32_t* p0, int32_t* T_divide, uint8_t* global_const_workspace_44_var, uint8_t* global_workspace_45_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_mean_1(int32_t* p0, int32_t* T_divide, uint8_t* global_const_workspace_92_var, uint8_t* global_workspace_93_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_48_var, uint8_t* global_workspace_49_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast_1(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_50_var, uint8_t* global_workspace_51_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_subtract__fa059688879ad8de_(int8_t* p0, float* T_multiply, uint8_t* global_const_workspace_52_var, uint8_t* global_workspace_53_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_subtract__fa059688879ad8de__1(int8_t* p0, float* T_multiply, uint8_t* global_const_workspace_96_var, uint8_t* global_workspace_97_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip(int8_t* p0, int32_t* compute, uint8_t* global_const_workspace_42_var, uint8_t* global_workspace_43_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_1(int8_t* p0, int32_t* compute, uint8_t* global_const_workspace_90_var, uint8_t* global_workspace_91_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_4_var, uint8_t* global_workspace_5_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_1(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_8_var, uint8_t* global_workspace_9_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_10(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_34_var, uint8_t* global_workspace_35_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_11(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_38_var, uint8_t* global_workspace_39_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_12(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_58_var, uint8_t* global_workspace_59_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_13(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_62_var, uint8_t* global_workspace_63_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_14(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_64_var, uint8_t* global_workspace_65_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_15(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_66_var, uint8_t* global_workspace_67_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_16(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_68_var, uint8_t* global_workspace_69_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_17(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_70_var, uint8_t* global_workspace_71_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_18(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_72_var, uint8_t* global_workspace_73_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_19(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_74_var, uint8_t* global_workspace_75_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_2(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_10_var, uint8_t* global_workspace_11_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_20(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_76_var, uint8_t* global_workspace_77_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_21(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_78_var, uint8_t* global_workspace_79_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_22(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_80_var, uint8_t* global_workspace_81_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_23(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_84_var, uint8_t* global_workspace_85_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_24(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_86_var, uint8_t* global_workspace_87_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_3(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_14_var, uint8_t* global_workspace_15_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_4(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_16_var, uint8_t* global_workspace_17_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_5(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_20_var, uint8_t* global_workspace_21_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_6(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_22_var, uint8_t* global_workspace_23_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_7(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_26_var, uint8_t* global_workspace_27_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_8(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_28_var, uint8_t* global_workspace_29_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_9(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_32_var, uint8_t* global_workspace_33_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_6_var, uint8_t* global_workspace_7_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_1(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_12_var, uint8_t* global_workspace_13_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_2(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_18_var, uint8_t* global_workspace_19_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_3(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_24_var, uint8_t* global_workspace_25_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_4(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_30_var, uint8_t* global_workspace_31_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_5(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_36_var, uint8_t* global_workspace_37_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_6(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_40_var, uint8_t* global_workspace_41_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_7(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_60_var, uint8_t* global_workspace_61_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_8(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_82_var, uint8_t* global_workspace_83_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_9(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_88_var, uint8_t* global_workspace_89_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_softmax_divide_round_add_clip_cast_subtract_cast_multiply(float* p0, float* T_multiply, uint8_t* global_const_workspace_54_var, uint8_t* global_workspace_55_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_softmax_divide_round_add_clip_cast_subtract_cast_multiply_1(float* p0, float* T_multiply, uint8_t* global_const_workspace_98_var, uint8_t* global_workspace_99_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_fixed_point_multiply_add_clip_cast_reshape(int32_t* p0, int8_t* T_reshape, uint8_t* global_const_workspace_46_var, uint8_t* global_workspace_47_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_fixed_point_multiply_add_clip_cast_reshape_1(int32_t* p0, int8_t* T_reshape, uint8_t* global_const_workspace_94_var, uint8_t* global_workspace_95_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default___tvm_main__(float* serving_default_input_1_0_buffer_var, float* StatefulPartitionedCall_1_buffer_var, float* StatefulPartitionedCall_0_buffer_var, uint8_t* global_const_workspace_0_var, uint8_t* global_workspace_1_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL float roundf(float);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL float expf(float);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL float roundf(float);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL float expf(float);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL float roundf(float);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_clip_cast_subtract_fixed_point_multiply_add_clip_cast(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_56_var, uint8_t* global_workspace_57_var) {
  void* fused_clip_cast_constant_let = (&(global_const_workspace_56_var[294816]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 4; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 4; ++ax2) {
      for (int32_t ax3_outer = 0; ax3_outer < 4; ++ax3_outer) {
        for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
          int32_t cse_var_1 = ((((ax0_ax1_fused * 256) + (ax2 * 64)) + (ax3_outer * 16)) + ax3_inner);
          int8_t v_ = p0[cse_var_1];
          int8_t v__1 = (int8_t)94;
          int8_t v__2 = (v_) < (v__1) ? (v_) : (v__1);
          int8_t v__3 = (int8_t)14;
          int32_t v__4 = ((int32_t)(((((2 != 0) ? (((int64_t)(((int32_t)((v__2) > (v__3) ? (v__2) : (v__3))) - ((int32_t*)fused_clip_cast_constant_let)[0])) << ((int64_t)2)) : ((int64_t)(((int32_t)((v__2) > (v__3) ? (v__2) : (v__3))) - ((int32_t*)fused_clip_cast_constant_let)[0]))) * (int64_t)1708325887) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31)))) - 128;
          int32_t v__5 = (v__4) < (127) ? (v__4) : (127);
          T_cast[cse_var_1] = ((int8_t)((v__5) > (-128) ? (v__5) : (-128)));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_divide_round_add_clip_cast_nn_pad(float* p0, int8_t* T_pad, uint8_t* global_const_workspace_2_var, uint8_t* global_workspace_3_var) {
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 65; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 65; ++ax2) {
      for (int32_t ax3_inner = 0; ax3_inner < 3; ++ax3_inner) {
        int32_t cse_var_1 = (ax2 * 3);
        float v_ = roundf((p0[(((ax0_ax1_fused * 192) + cse_var_1) + ax3_inner)] * 2.550000e+02f)) + -1.280000e+02f;
        float v__1 = (v_) < (1.270000e+02f) ? (v_) : (1.270000e+02f);
        T_pad[(((ax0_ax1_fused * 195) + cse_var_1) + ax3_inner)] = (((ax0_ax1_fused < 64) && (ax2 < 64)) ? ((int8_t)((v__1) > (-1.280000e+02f) ? (v__1) : (-1.280000e+02f))) : (int8_t)-128);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_mean(int32_t* p0, int32_t* T_divide, uint8_t* global_const_workspace_44_var, uint8_t* global_workspace_45_var) {
  void* p0_red_let = (&(global_workspace_45_var[15616]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 32; ++ax0_ax1_fused) {
    ((int32_t*)p0_red_let)[ax0_ax1_fused] = 0;
    for (int32_t k1 = 0; k1 < 4; ++k1) {
      for (int32_t k2 = 0; k2 < 4; ++k2) {
        ((int32_t*)p0_red_let)[ax0_ax1_fused] = (((int32_t*)p0_red_let)[ax0_ax1_fused] + p0[(((k1 * 128) + (k2 * 32)) + ax0_ax1_fused)]);
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 2; ++ax1_outer) {
    for (int32_t ax1_inner = 0; ax1_inner < 16; ++ax1_inner) {
      int32_t cse_var_1 = ((ax1_outer * 16) + ax1_inner);
      T_divide[cse_var_1] = (((int32_t*)p0_red_let)[cse_var_1] / 16);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_mean_1(int32_t* p0, int32_t* T_divide, uint8_t* global_const_workspace_92_var, uint8_t* global_workspace_93_var) {
  void* p0_red_let = (&(global_workspace_93_var[4096]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 256; ++ax0_ax1_fused) {
    ((int32_t*)p0_red_let)[ax0_ax1_fused] = 0;
    for (int32_t k1 = 0; k1 < 2; ++k1) {
      for (int32_t k2 = 0; k2 < 2; ++k2) {
        ((int32_t*)p0_red_let)[ax0_ax1_fused] = (((int32_t*)p0_red_let)[ax0_ax1_fused] + p0[(((k1 * 512) + (k2 * 256)) + ax0_ax1_fused)]);
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 16; ++ax1_outer) {
    for (int32_t ax1_inner = 0; ax1_inner < 16; ++ax1_inner) {
      int32_t cse_var_1 = ((ax1_outer * 16) + ax1_inner);
      T_divide[cse_var_1] = (((int32_t*)p0_red_let)[cse_var_1] / 4);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_48_var, uint8_t* global_workspace_49_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED] dense: 32->256 (packed [4][8][32][8])
  int32_t* conv_const = (int32_t*)(&global_const_workspace_48_var[247296]);
  int32_t* conv_sub   = (int32_t*)(&global_const_workspace_48_var[246272]);
  int8_t*  weights    = (int8_t*) (&global_const_workspace_48_var[212480]);

  // Padded input vector (aligned to MAC_BYTES)
  static int8_t _inp_pad[32];
  for (int32_t k = 0; k < 32; k++) _inp_pad[k] = p0[k];

  for (int32_t tile = 0; tile < 1; tile++) {
    int32_t oc_base = tile * 256;
    int32_t oc_count = 256;
    if (oc_base + oc_count > 256) oc_count = 256 - oc_base;
    static int8_t rw[8192];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      int32_t goc = oc_base + oc;
      int32_t ax1 = goc / 64;
      int32_t yi  = (goc % 64) / 8;
      int32_t xc  = goc % 8;
      for (int32_t k = 0; k < 32; k++)
        rw[oc * 32 + k] = weights[ax1 * 2048 + yi * 256 + k * 8 + xc];
    }
    accel_spad_write(0x020, rw, oc_count * 32);
    accel_spad_write(0x000, _inp_pad, 32);
    hw_multi_dot(0x000, 0x020, 0x2020, 32, oc_count);
    for (int32_t oc = 0; oc < oc_count; oc++) {
      int32_t ax3 = oc_base + oc;
      int32_t dot = (int32_t)accel_spad_read32(0x2020 + oc * 4);
      int32_t v_ = ((int32_t)(((((int64_t)((dot + conv_sub[ax3]) - conv_const[ax3]))
        * (int64_t)1443327674) + ((int64_t)1 << ((int64_t)((6 + 31) - 1))))
        >> ((int64_t)(6 + 31)))) - 128;
      int32_t v1 = (v_) < (127) ? (v_) : (127);
      T_cast[ax3] = (int8_t)((v1) > (-128) ? (v1) : (-128));
    }
  }
  return 0;

#else

  void* fused_nn_contrib_dense_pack_constant_let = (&(global_const_workspace_48_var[247296]));
  void* fused_nn_contrib_dense_pack_subtract_constant_let = (&(global_const_workspace_48_var[246272]));
  void* fused_constant_14_let = (&(global_const_workspace_48_var[212480]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 4; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_49_var[15744]));
    void* compute_global_let = (&(global_workspace_49_var[16032]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 8; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 32; ++k_outer) {
        for (int32_t x_c = 0; x_c < 8; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[k_outer]) * ((int32_t)((int8_t*)fused_constant_14_let)[((((ax1_outer_ax0_outer_fused * 2048) + (y_inner_outer_x_inner_outer_fused * 256)) + (k_outer * 8)) + x_c)])));
        }
      }
      for (int32_t x_inner_inner = 0; x_inner_inner < 8; ++x_inner_inner) {
        ((int32_t*)compute_let)[((y_inner_outer_x_inner_outer_fused * 8) + x_inner_inner)] = ((int32_t*)compute_global_let)[x_inner_inner];
      }
    }
    for (int32_t ax1_inner_outer = 0; ax1_inner_outer < 8; ++ax1_inner_outer) {
      for (int32_t ax1_inner_inner = 0; ax1_inner_inner < 8; ++ax1_inner_inner) {
        int32_t cse_var_2 = (ax1_inner_outer * 8);
        int32_t cse_var_1 = (((ax1_outer_ax0_outer_fused * 64) + cse_var_2) + ax1_inner_inner);
        int32_t v_ = ((int32_t)(((((0 != 0) ? (((int64_t)((((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_let)[cse_var_1])) << ((int64_t)0)) : ((int64_t)((((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_let)[cse_var_1]))) * (int64_t)1443327674) + ((int64_t)1 << ((int64_t)((6 + 31) - 1)))) >> ((int64_t)(6 + 31)))) - 128;
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        T_cast[cse_var_1] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
      }
    }
  }
  return 0;

#endif
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast_1(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_50_var, uint8_t* global_workspace_51_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED] dense: 256->128 (packed [4][4][256][8])
  int32_t* conv_const = (int32_t*)(&global_const_workspace_50_var[281728]);
  int32_t* conv_sub   = (int32_t*)(&global_const_workspace_50_var[281216]);
  int8_t*  weights    = (int8_t*) (&global_const_workspace_50_var[32768]);

  // Padded input vector (aligned to MAC_BYTES)
  static int8_t _inp_pad[256];
  for (int32_t k = 0; k < 256; k++) _inp_pad[k] = p0[k];

  for (int32_t tile = 0; tile < 4; tile++) {
    int32_t oc_base = tile * 32;
    int32_t oc_count = 32;
    if (oc_base + oc_count > 128) oc_count = 128 - oc_base;
    static int8_t rw[8192];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      int32_t goc = oc_base + oc;
      int32_t ax1 = goc / 32;
      int32_t yi  = (goc % 32) / 8;
      int32_t xc  = goc % 8;
      for (int32_t k = 0; k < 256; k++)
        rw[oc * 256 + k] = weights[ax1 * 8192 + yi * 2048 + k * 8 + xc];
    }
    accel_spad_write(0x100, rw, oc_count * 256);
    accel_spad_write(0x000, _inp_pad, 256);
    hw_multi_dot(0x000, 0x100, 0x2100, 256, oc_count);
    for (int32_t oc = 0; oc < oc_count; oc++) {
      int32_t ax3 = oc_base + oc;
      int32_t dot = (int32_t)accel_spad_read32(0x2100 + oc * 4);
      int32_t v_ = ((int32_t)(((((int64_t)((dot + conv_sub[ax3]) - conv_const[ax3]))
        * (int64_t)1760747438) + ((int64_t)1 << ((int64_t)((9 + 31) - 1))))
        >> ((int64_t)(9 + 31)))) - 128;
      int32_t v1 = (v_) < (127) ? (v_) : (127);
      T_cast[ax3] = (int8_t)((v1) > (-128) ? (v1) : (-128));
    }
  }
  return 0;

#else

  void* fused_nn_contrib_dense_pack_constant_1_let = (&(global_const_workspace_50_var[281728]));
  void* fused_nn_contrib_dense_pack_subtract_constant_1_let = (&(global_const_workspace_50_var[281216]));
  void* fused_constant_15_let = (&(global_const_workspace_50_var[32768]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 4; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_51_var[16016]));
    void* compute_global_let = (&(global_workspace_51_var[16144]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 4; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 256; ++k_outer) {
        for (int32_t x_c = 0; x_c < 8; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[k_outer]) * ((int32_t)((int8_t*)fused_constant_15_let)[((((ax1_outer_ax0_outer_fused * 8192) + (y_inner_outer_x_inner_outer_fused * 2048)) + (k_outer * 8)) + x_c)])));
        }
      }
      for (int32_t x_inner_inner = 0; x_inner_inner < 8; ++x_inner_inner) {
        ((int32_t*)compute_let)[((y_inner_outer_x_inner_outer_fused * 8) + x_inner_inner)] = ((int32_t*)compute_global_let)[x_inner_inner];
      }
    }
    for (int32_t ax1_inner_outer = 0; ax1_inner_outer < 4; ++ax1_inner_outer) {
      for (int32_t ax1_inner_inner = 0; ax1_inner_inner < 8; ++ax1_inner_inner) {
        int32_t cse_var_2 = (ax1_inner_outer * 8);
        int32_t cse_var_1 = (((ax1_outer_ax0_outer_fused * 32) + cse_var_2) + ax1_inner_inner);
        int32_t v_ = ((int32_t)(((((0 != 0) ? (((int64_t)((((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_1_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_1_let)[cse_var_1])) << ((int64_t)0)) : ((int64_t)((((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_1_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_1_let)[cse_var_1]))) * (int64_t)1760747438) + ((int64_t)1 << ((int64_t)((9 + 31) - 1)))) >> ((int64_t)(9 + 31)))) - 128;
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        T_cast[cse_var_1] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
      }
    }
  }
  return 0;

#endif
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_subtract__fa059688879ad8de_(int8_t* p0, float* T_multiply, uint8_t* global_const_workspace_52_var, uint8_t* global_workspace_53_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED] dense: 128->100 (packed [5][4][128][5])
  int32_t* conv_const = (int32_t*)(&global_const_workspace_52_var[283952]);
  int32_t* conv_sub   = (int32_t*)(&global_const_workspace_52_var[283152]);
  int8_t*  weights    = (int8_t*) (&global_const_workspace_52_var[191488]);

  // Padded input vector (aligned to MAC_BYTES)
  static int8_t _inp_pad[128];
  for (int32_t k = 0; k < 128; k++) _inp_pad[k] = p0[k];

  for (int32_t tile = 0; tile < 2; tile++) {
    int32_t oc_base = tile * 64;
    int32_t oc_count = 64;
    if (oc_base + oc_count > 100) oc_count = 100 - oc_base;
    static int8_t rw[8192];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      int32_t goc = oc_base + oc;
      int32_t ax1 = goc / 20;
      int32_t yi  = (goc % 20) / 5;
      int32_t xc  = goc % 5;
      for (int32_t k = 0; k < 128; k++)
        rw[oc * 128 + k] = weights[ax1 * 2560 + yi * 640 + k * 5 + xc];
    }
    accel_spad_write(0x080, rw, oc_count * 128);
    accel_spad_write(0x000, _inp_pad, 128);
    hw_multi_dot(0x000, 0x080, 0x2080, 128, oc_count);
    for (int32_t oc = 0; oc < oc_count; oc++) {
      int32_t ax3 = oc_base + oc;
      int32_t dot = (int32_t)accel_spad_read32(0x2080 + oc * 4);
      int32_t v_ = ((int32_t)(((((int64_t)((dot + conv_sub[ax3]) - conv_const[ax3]))
        * (int64_t)2083437777) + ((int64_t)1 << ((int64_t)((8 + 31) - 1))))
        >> ((int64_t)(8 + 31)))) + 75;
      int32_t v1 = (v_) < (127) ? (v_) : (127);
      T_multiply[ax3] = (((float)(((v1) > (-128) ? (v1) : (-128)) - 75)) * 2.411557e-01f);
    }
  }
  return 0;

#else

  void* fused_nn_contrib_dense_pack_constant_2_let = (&(global_const_workspace_52_var[283952]));
  void* fused_nn_contrib_dense_pack_subtract_constant_2_let = (&(global_const_workspace_52_var[283152]));
  void* fused_constant_16_let = (&(global_const_workspace_52_var[191488]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 5; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_53_var[16016]));
    void* compute_global_let = (&(global_workspace_53_var[16096]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 4; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 5; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 128; ++k_outer) {
        for (int32_t x_c = 0; x_c < 5; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[k_outer]) * ((int32_t)((int8_t*)fused_constant_16_let)[((((ax1_outer_ax0_outer_fused * 2560) + (y_inner_outer_x_inner_outer_fused * 640)) + (k_outer * 5)) + x_c)])));
        }
      }
      for (int32_t x_inner_inner = 0; x_inner_inner < 5; ++x_inner_inner) {
        ((int32_t*)compute_let)[((y_inner_outer_x_inner_outer_fused * 5) + x_inner_inner)] = ((int32_t*)compute_global_let)[x_inner_inner];
      }
    }
    for (int32_t ax1_inner_outer = 0; ax1_inner_outer < 4; ++ax1_inner_outer) {
      for (int32_t ax1_inner_inner = 0; ax1_inner_inner < 5; ++ax1_inner_inner) {
        int32_t cse_var_2 = (ax1_inner_outer * 5);
        int32_t cse_var_1 = (((ax1_outer_ax0_outer_fused * 20) + cse_var_2) + ax1_inner_inner);
        int32_t v_ = ((int32_t)(((((0 != 0) ? (((int64_t)((((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_2_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_2_let)[cse_var_1])) << ((int64_t)0)) : ((int64_t)((((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_2_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_2_let)[cse_var_1]))) * (int64_t)2083437777) + ((int64_t)1 << ((int64_t)((8 + 31) - 1)))) >> ((int64_t)(8 + 31)))) + 75;
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        T_multiply[cse_var_1] = (((float)(((v__1) > (-128) ? (v__1) : (-128)) - 75)) * 2.411557e-01f);
      }
    }
  }
  return 0;

#endif
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_subtract__fa059688879ad8de__1(int8_t* p0, float* T_multiply, uint8_t* global_const_workspace_96_var, uint8_t* global_workspace_97_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED] dense: 256->100 (packed [5][4][256][5])
  int32_t* conv_const = (int32_t*)(&global_const_workspace_96_var[283552]);
  int32_t* conv_sub   = (int32_t*)(&global_const_workspace_96_var[282752]);
  int8_t*  weights    = (int8_t*) (&global_const_workspace_96_var[65536]);

  // Padded input vector (aligned to MAC_BYTES)
  static int8_t _inp_pad[256];
  for (int32_t k = 0; k < 256; k++) _inp_pad[k] = p0[k];

  for (int32_t tile = 0; tile < 4; tile++) {
    int32_t oc_base = tile * 32;
    int32_t oc_count = 32;
    if (oc_base + oc_count > 100) oc_count = 100 - oc_base;
    static int8_t rw[8192];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      int32_t goc = oc_base + oc;
      int32_t ax1 = goc / 20;
      int32_t yi  = (goc % 20) / 5;
      int32_t xc  = goc % 5;
      for (int32_t k = 0; k < 256; k++)
        rw[oc * 256 + k] = weights[ax1 * 5120 + yi * 1280 + k * 5 + xc];
    }
    accel_spad_write(0x100, rw, oc_count * 256);
    accel_spad_write(0x000, _inp_pad, 256);
    hw_multi_dot(0x000, 0x100, 0x2100, 256, oc_count);
    for (int32_t oc = 0; oc < oc_count; oc++) {
      int32_t ax3 = oc_base + oc;
      int32_t dot = (int32_t)accel_spad_read32(0x2100 + oc * 4);
      int32_t v_ = ((int32_t)(((((int64_t)((dot + conv_sub[ax3]) - conv_const[ax3]))
        * (int64_t)1710819546) + ((int64_t)1 << ((int64_t)((8 + 31) - 1))))
        >> ((int64_t)(8 + 31)))) - 14;
      int32_t v1 = (v_) < (127) ? (v_) : (127);
      T_multiply[ax3] = (((float)(((v1) > (-128) ? (v1) : (-128)) + 14)) * 2.251867e-01f);
    }
  }
  return 0;

#else

  void* fused_nn_contrib_dense_pack_constant_3_let = (&(global_const_workspace_96_var[283552]));
  void* fused_nn_contrib_dense_pack_subtract_constant_3_let = (&(global_const_workspace_96_var[282752]));
  void* fused_constant_32_let = (&(global_const_workspace_96_var[65536]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 5; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_97_var[1280]));
    void* compute_global_let = (&(global_workspace_97_var[1360]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 4; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 5; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 256; ++k_outer) {
        for (int32_t x_c = 0; x_c < 5; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[k_outer]) * ((int32_t)((int8_t*)fused_constant_32_let)[((((ax1_outer_ax0_outer_fused * 5120) + (y_inner_outer_x_inner_outer_fused * 1280)) + (k_outer * 5)) + x_c)])));
        }
      }
      for (int32_t x_inner_inner = 0; x_inner_inner < 5; ++x_inner_inner) {
        ((int32_t*)compute_let)[((y_inner_outer_x_inner_outer_fused * 5) + x_inner_inner)] = ((int32_t*)compute_global_let)[x_inner_inner];
      }
    }
    for (int32_t ax1_inner_outer = 0; ax1_inner_outer < 4; ++ax1_inner_outer) {
      for (int32_t ax1_inner_inner = 0; ax1_inner_inner < 5; ++ax1_inner_inner) {
        int32_t cse_var_2 = (ax1_inner_outer * 5);
        int32_t cse_var_1 = (((ax1_outer_ax0_outer_fused * 20) + cse_var_2) + ax1_inner_inner);
        int32_t v_ = ((int32_t)(((((0 != 0) ? (((int64_t)((((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_3_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_3_let)[cse_var_1])) << ((int64_t)0)) : ((int64_t)((((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_3_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_3_let)[cse_var_1]))) * (int64_t)1710819546) + ((int64_t)1 << ((int64_t)((8 + 31) - 1)))) >> ((int64_t)(8 + 31)))) - 14;
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        T_multiply[cse_var_1] = (((float)(((v__1) > (-128) ? (v__1) : (-128)) + 14)) * 2.251867e-01f);
      }
    }
  }
  return 0;

#endif
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip(int8_t* p0, int32_t* compute, uint8_t* global_const_workspace_42_var, uint8_t* global_workspace_43_var) {
  void* fused_nn_conv2d_subtract_add_constant_38_let = (&(global_const_workspace_42_var[291056]));
  void* fused_nn_conv2d_subtract_add_constant_37_let = (&(global_const_workspace_42_var[291184]));
  void* fused_nn_conv2d_subtract_add_constant_36_let = (&(global_const_workspace_42_var[291312]));
  void* fused_nn_conv2d_constant_12_let = (&(global_const_workspace_42_var[293488]));
  void* fused_nn_conv2d_subtract_constant_12_let = (&(global_const_workspace_42_var[290928]));
  void* fused_constant_12_let = (&(global_const_workspace_42_var[91136]));
  void* pad_temp_let = (&(global_workspace_43_var[0]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 6; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 6; ++i2) {
      for (int32_t i3 = 0; i3 < 64; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 384) + (i2 * 64)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 16; ++i0_i1_fused_i2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_43_var[15488]));
    for (int32_t i3_1 = 0; i3_1 < 32; ++i3_1) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t ry = 0; ry < 3; ++ry) {
        for (int32_t rx = 0; rx < 3; ++rx) {
          for (int32_t rc = 0; rc < 64; ++rc) {
            ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((((((i0_i1_fused_i2_fused >> 2) * 384) + (ry * 384)) + (rx * 64)) + ((i0_i1_fused_i2_fused & 3) * 64)) + rc)]) * ((int32_t)((int8_t*)fused_constant_12_let)[((((ry * 6144) + (rx * 2048)) + (rc * 32)) + i3_1)])));
          }
        }
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_12_let)[i3_1]) - ((int32_t*)fused_nn_conv2d_constant_12_let)[i3_1])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_36_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_38_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_38_let)[i3_1] + 31)))) - 128;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      compute[((i0_i1_fused_i2_fused * 32) + i3_1)] = ((v__1) > (-128) ? (v__1) : (-128));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_1(int8_t* p0, int32_t* compute, uint8_t* global_const_workspace_90_var, uint8_t* global_workspace_91_var) {
  void* fused_nn_conv2d_subtract_add_constant_80_let = (&(global_const_workspace_90_var[238080]));
  void* fused_nn_conv2d_subtract_add_constant_79_let = (&(global_const_workspace_90_var[239104]));
  void* fused_nn_conv2d_subtract_add_constant_78_let = (&(global_const_workspace_90_var[240128]));
  void* fused_nn_conv2d_subtract_constant_26_let = (&(global_const_workspace_90_var[236032]));
  void* fused_nn_conv2d_constant_26_let = (&(global_const_workspace_90_var[244224]));
  void* fused_constant_30_let = (&(global_const_workspace_90_var[224768]));
  void* PaddedInput_let = (&(global_workspace_91_var[4096]));
  void* DepthwiseConv2d_let = (&(global_workspace_91_var[8192]));
  for (int32_t i1 = 0; i1 < 4; ++i1) {
    for (int32_t i2 = 0; i2 < 4; ++i2) {
      for (int32_t i3 = 0; i3 < 256; ++i3) {
        int32_t cse_var_1 = (((i1 * 1024) + (i2 * 256)) + i3);
        ((int8_t*)PaddedInput_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t i = 0; i < 2; ++i) {
    for (int32_t j = 0; j < 2; ++j) {
      for (int32_t c = 0; c < 256; ++c) {
        ((int32_t*)DepthwiseConv2d_let)[(((i * 512) + (j * 256)) + c)] = 0;
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            int32_t cse_var_4 = (j * 256);
            int32_t cse_var_3 = (dj * 256);
            int32_t cse_var_2 = (((i * 512) + cse_var_4) + c);
            ((int32_t*)DepthwiseConv2d_let)[cse_var_2] = (((int32_t*)DepthwiseConv2d_let)[cse_var_2] + (((int32_t)((int8_t*)PaddedInput_let)[(((((i * 1024) + (di * 1024)) + cse_var_4) + cse_var_3) + c)]) * ((int32_t)((int8_t*)fused_constant_30_let)[(((di * 768) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 2; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 2; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 256; ++ax3) {
        int32_t cse_var_5 = (((ax1 * 512) + (ax2 * 256)) + ax3);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_5] = (((int32_t*)DepthwiseConv2d_let)[cse_var_5] - ((int32_t*)fused_nn_conv2d_constant_26_let)[ax3]);
      }
    }
  }
  for (int32_t ax1_1 = 0; ax1_1 < 2; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 2; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 256; ++ax3_1) {
        int32_t cse_var_6 = (((ax1_1 * 512) + (ax2_1 * 256)) + ax3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_6] = (((int32_t*)DepthwiseConv2d_let)[cse_var_6] + ((int32_t*)fused_nn_conv2d_subtract_constant_26_let)[ax3_1]);
      }
    }
  }
  for (int32_t i1_1 = 0; i1_1 < 2; ++i1_1) {
    for (int32_t i2_1 = 0; i2_1 < 2; ++i2_1) {
      for (int32_t i3_1 = 0; i3_1 < 256; ++i3_1) {
        int32_t cse_var_7 = (((i1_1 * 512) + (i2_1 * 256)) + i3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_7] = ((int32_t)(((((int64_t)((int32_t*)DepthwiseConv2d_let)[cse_var_7]) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_78_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_80_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_80_let)[i3_1] + 31))));
      }
    }
  }
  for (int32_t ax1_2 = 0; ax1_2 < 2; ++ax1_2) {
    for (int32_t ax2_2 = 0; ax2_2 < 2; ++ax2_2) {
      for (int32_t ax3_2 = 0; ax3_2 < 256; ++ax3_2) {
        int32_t cse_var_8 = (((ax1_2 * 512) + (ax2_2 * 256)) + ax3_2);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_8] = (((int32_t*)DepthwiseConv2d_let)[cse_var_8] + 18);
      }
    }
  }
  for (int32_t i1_2 = 0; i1_2 < 2; ++i1_2) {
    for (int32_t i2_2 = 0; i2_2 < 2; ++i2_2) {
      for (int32_t i3_2 = 0; i3_2 < 256; ++i3_2) {
        int32_t cse_var_9 = (((i1_2 * 512) + (i2_2 * 256)) + i3_2);
        int32_t v_ = ((int32_t*)DepthwiseConv2d_let)[cse_var_9];
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        compute[cse_var_9] = ((v__1) > (-128) ? (v__1) : (-128));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_4_var, uint8_t* global_workspace_5_var) {
  void* fused_nn_conv2d_subtract_add_constant_2_let = (&(global_const_workspace_4_var[294624]));
  void* fused_nn_conv2d_subtract_add_constant_1_let = (&(global_const_workspace_4_var[294656]));
  void* fused_nn_conv2d_subtract_add_constant_let = (&(global_const_workspace_4_var[294688]));
  void* fused_nn_conv2d_constant_let = (&(global_const_workspace_4_var[294752]));
  void* fused_nn_conv2d_subtract_constant_let = (&(global_const_workspace_4_var[294496]));
  void* fused_constant_let = (&(global_const_workspace_4_var[290048]));
  void* pad_temp_let = (&(global_workspace_5_var[0]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 65; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 65; ++i2) {
      for (int32_t i3 = 0; i3 < 3; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 195) + (i2 * 3)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 1024; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_5_var[20872]));
    for (int32_t ax3 = 0; ax3 < 8; ++ax3) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t ry = 0; ry < 3; ++ry) {
        for (int32_t rx = 0; rx < 3; ++rx) {
          for (int32_t rc = 0; rc < 3; ++rc) {
            ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((((((ax0_ax1_fused_ax2_fused >> 5) * 390) + (ry * 195)) + ((ax0_ax1_fused_ax2_fused & 31) * 6)) + (rx * 3)) + rc)]) * ((int32_t)((int8_t*)fused_constant_let)[((((ry * 72) + (rx * 24)) + (rc * 8)) + ax3)])));
          }
        }
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_2_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_2_let)[ax3] + 31)))) - 128;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_cast[((ax0_ax1_fused_ax2_fused * 8) + ax3)] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_1(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_8_var, uint8_t* global_workspace_9_var) {
  void* fused_nn_conv2d_subtract_add_constant_5_let = (&(global_const_workspace_8_var[294528]));
  void* fused_nn_conv2d_subtract_add_constant_4_let = (&(global_const_workspace_8_var[294560]));
  void* fused_nn_conv2d_subtract_add_constant_3_let = (&(global_const_workspace_8_var[294592]));
  void* fused_nn_conv2d_subtract_constant_1_let = (&(global_const_workspace_8_var[294464]));
  void* fused_nn_conv2d_constant_1_let = (&(global_const_workspace_8_var[294720]));
  void* fused_constant_1_let = (&(global_const_workspace_8_var[293744]));
  void* PaddedInput_let = (&(global_workspace_9_var[32768]));
  void* DepthwiseConv2d_let = (&(global_workspace_9_var[0]));
  for (int32_t i1 = 0; i1 < 34; ++i1) {
    for (int32_t i2 = 0; i2 < 34; ++i2) {
      for (int32_t i3 = 0; i3 < 8; ++i3) {
        int32_t cse_var_1 = (((i1 * 272) + (i2 * 8)) + i3);
        ((int8_t*)PaddedInput_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t i = 0; i < 32; ++i) {
    for (int32_t j = 0; j < 32; ++j) {
      for (int32_t c = 0; c < 8; ++c) {
        ((int32_t*)DepthwiseConv2d_let)[(((i * 256) + (j * 8)) + c)] = 0;
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            int32_t cse_var_4 = (j * 8);
            int32_t cse_var_3 = (dj * 8);
            int32_t cse_var_2 = (((i * 256) + cse_var_4) + c);
            ((int32_t*)DepthwiseConv2d_let)[cse_var_2] = (((int32_t*)DepthwiseConv2d_let)[cse_var_2] + (((int32_t)((int8_t*)PaddedInput_let)[(((((i * 272) + (di * 272)) + cse_var_4) + cse_var_3) + c)]) * ((int32_t)((int8_t*)fused_constant_1_let)[(((di * 24) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 32; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 32; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 8; ++ax3) {
        int32_t cse_var_5 = (((ax1 * 256) + (ax2 * 8)) + ax3);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_5] = (((int32_t*)DepthwiseConv2d_let)[cse_var_5] - ((int32_t*)fused_nn_conv2d_constant_1_let)[ax3]);
      }
    }
  }
  for (int32_t ax1_1 = 0; ax1_1 < 32; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 32; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 8; ++ax3_1) {
        int32_t cse_var_6 = (((ax1_1 * 256) + (ax2_1 * 8)) + ax3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_6] = (((int32_t*)DepthwiseConv2d_let)[cse_var_6] + ((int32_t*)fused_nn_conv2d_subtract_constant_1_let)[ax3_1]);
      }
    }
  }
  for (int32_t i1_1 = 0; i1_1 < 32; ++i1_1) {
    for (int32_t i2_1 = 0; i2_1 < 32; ++i2_1) {
      for (int32_t i3_1 = 0; i3_1 < 8; ++i3_1) {
        int32_t cse_var_7 = (((i1_1 * 256) + (i2_1 * 8)) + i3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_7] = ((int32_t)(((((int64_t)((int32_t*)DepthwiseConv2d_let)[cse_var_7]) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_3_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_5_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_5_let)[i3_1] + 31))));
      }
    }
  }
  for (int32_t ax1_2 = 0; ax1_2 < 32; ++ax1_2) {
    for (int32_t ax2_2 = 0; ax2_2 < 32; ++ax2_2) {
      for (int32_t ax3_2 = 0; ax3_2 < 8; ++ax3_2) {
        int32_t cse_var_8 = (((ax1_2 * 256) + (ax2_2 * 8)) + ax3_2);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_8] = (((int32_t*)DepthwiseConv2d_let)[cse_var_8] - 128);
      }
    }
  }
  for (int32_t i1_2 = 0; i1_2 < 32; ++i1_2) {
    for (int32_t i2_2 = 0; i2_2 < 32; ++i2_2) {
      for (int32_t i3_2 = 0; i3_2 < 8; ++i3_2) {
        int32_t cse_var_9 = (((i1_2 * 256) + (i2_2 * 8)) + i3_2);
        int32_t v_ = ((int32_t*)DepthwiseConv2d_let)[cse_var_9];
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_9] = ((v__1) > (-128) ? (v__1) : (-128));
      }
    }
  }
  for (int32_t ax1_3 = 0; ax1_3 < 32; ++ax1_3) {
    for (int32_t ax2_3 = 0; ax2_3 < 32; ++ax2_3) {
      for (int32_t ax3_3 = 0; ax3_3 < 8; ++ax3_3) {
        int32_t cse_var_10 = (((ax1_3 * 256) + (ax2_3 * 8)) + ax3_3);
        T_cast[cse_var_10] = ((int8_t)((int32_t*)DepthwiseConv2d_let)[cse_var_10]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_10(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_34_var, uint8_t* global_workspace_35_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED v8 HW-REQUANT] 1x1 conv: 64->64 channels, 64 spatial positions
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_34_var[286720]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_34_var[287232]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_34_var[289792]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_34_var[285696]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_34_var[220672]);

  // Safe copy: TVM may alias input/output workspace buffers
  static int8_t _inp[4096];
  for (int32_t _i = 0; _i < 4096; _i++) _inp[_i] = p0[_i];

  // Set per-layer zero-point once. The helper is provided by conv_accel.h.
  accel_set_output_zp(-128);

  for (int32_t tile = 0; tile < 1; tile++) {
    int32_t oc_base = tile * 64;
    int32_t oc_count = 64;
    if (oc_base + oc_count > 64) oc_count = 64 - oc_base;

    // Pack weights for this tile (relayout from [rc][oc] to [oc][rc])
    static int8_t rw[4096];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      for (int32_t rc = 0; rc < 64; rc++)
        rw[oc * 64 + rc] = weights[rc * 64 + oc_base + oc];
    }
    accel_spad_write(0x040, rw, oc_count * 64);

    // Pack params for this tile: 16 bytes per OC.
    //   word 0: scale (high 32) and bias (low 32)
    //   word 1: zero  (high 32) and shift (low 32)
    static int32_t params[64 * 4];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      int32_t ax3 = oc_base + oc;
      params[oc*4 + 0] = (conv_sub[ax3] - conv_const[ax3]);         // bias
      params[oc*4 + 1] = quant_scale[ax3];      // scale
      params[oc*4 + 2] = quant_shift[ax3] + 31; // shift
      params[oc*4 + 3] = 0;                     // reserved
    }
    accel_spad_write(0x1140, (int8_t*)params, oc_count * 16);

    for (int32_t sp = 0; sp < 64; sp++) {
      accel_spad_write(0x000, &_inp[sp * 64], 64);
      hw_multi_dot_requant(0x000, 0x040, 0x1040,
                           0x1140, 64, oc_count);
      accel_unpack_i8_outputs(&T_cast[(sp * 64) + oc_base],
                              0x1040, oc_count);
    }
  }
  return 0;

#else

  void* fused_nn_conv2d_subtract_add_constant_32_let = (&(global_const_workspace_34_var[286720]));
  void* fused_nn_conv2d_subtract_add_constant_31_let = (&(global_const_workspace_34_var[286976]));
  void* fused_nn_conv2d_subtract_add_constant_30_let = (&(global_const_workspace_34_var[287232]));
  void* fused_nn_conv2d_constant_10_let = (&(global_const_workspace_34_var[289792]));
  void* fused_nn_conv2d_subtract_constant_10_let = (&(global_const_workspace_34_var[285696]));
  void* fused_constant_10_let = (&(global_const_workspace_34_var[220672]));
  void* pad_temp_let = (&(global_workspace_35_var[9280]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 8; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 8; ++i2) {
      for (int32_t i3 = 0; i3 < 64; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 512) + (i2 * 64)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 64; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_35_var[13376]));
    for (int32_t ff = 0; ff < 64; ++ff) {
      ((int32_t*)conv2d_nhwc_let)[ff] = 0;
      for (int32_t rc = 0; rc < 64; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[ff] = (((int32_t*)conv2d_nhwc_let)[ff] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 64) + rc)]) * ((int32_t)((int8_t*)fused_constant_10_let)[((rc * 64) + ff)])));
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 64; ++ax3_inner) {
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[ax3_inner] + ((int32_t*)fused_nn_conv2d_subtract_constant_10_let)[ax3_inner]) - ((int32_t*)fused_nn_conv2d_constant_10_let)[ax3_inner])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_30_let)[ax3_inner])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_32_let)[ax3_inner] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_32_let)[ax3_inner] + 31)))) - 128;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_cast[((ax0_ax1_fused_ax2_fused * 64) + ax3_inner)] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
    }
  }
  return 0;

#endif
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_11(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_38_var, uint8_t* global_workspace_39_var) {
  void* fused_nn_conv2d_subtract_add_constant_35_let = (&(global_const_workspace_38_var[285952]));
  void* fused_nn_conv2d_subtract_add_constant_34_let = (&(global_const_workspace_38_var[286208]));
  void* fused_nn_conv2d_subtract_add_constant_33_let = (&(global_const_workspace_38_var[286464]));
  void* fused_nn_conv2d_subtract_constant_11_let = (&(global_const_workspace_38_var[285440]));
  void* fused_nn_conv2d_constant_11_let = (&(global_const_workspace_38_var[289536]));
  void* fused_constant_11_let = (&(global_const_workspace_38_var[249920]));
  void* PaddedInput_let = (&(global_workspace_39_var[5184]));
  void* DepthwiseConv2d_let = (&(global_workspace_39_var[10368]));
  for (int32_t i1 = 0; i1 < 9; ++i1) {
    for (int32_t i2 = 0; i2 < 9; ++i2) {
      for (int32_t i3 = 0; i3 < 64; ++i3) {
        int32_t cse_var_1 = (((i1 * 576) + (i2 * 64)) + i3);
        ((int8_t*)PaddedInput_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t i = 0; i < 4; ++i) {
    for (int32_t j = 0; j < 4; ++j) {
      for (int32_t c = 0; c < 64; ++c) {
        ((int32_t*)DepthwiseConv2d_let)[(((i * 256) + (j * 64)) + c)] = 0;
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            int32_t cse_var_3 = (dj * 64);
            int32_t cse_var_2 = (((i * 256) + (j * 64)) + c);
            ((int32_t*)DepthwiseConv2d_let)[cse_var_2] = (((int32_t*)DepthwiseConv2d_let)[cse_var_2] + (((int32_t)((int8_t*)PaddedInput_let)[(((((i * 1152) + (di * 576)) + (j * 128)) + cse_var_3) + c)]) * ((int32_t)((int8_t*)fused_constant_11_let)[(((di * 192) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 4; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 4; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 64; ++ax3) {
        int32_t cse_var_4 = (((ax1 * 256) + (ax2 * 64)) + ax3);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_4] = (((int32_t*)DepthwiseConv2d_let)[cse_var_4] - ((int32_t*)fused_nn_conv2d_constant_11_let)[ax3]);
      }
    }
  }
  for (int32_t ax1_1 = 0; ax1_1 < 4; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 4; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 64; ++ax3_1) {
        int32_t cse_var_5 = (((ax1_1 * 256) + (ax2_1 * 64)) + ax3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_5] = (((int32_t*)DepthwiseConv2d_let)[cse_var_5] + ((int32_t*)fused_nn_conv2d_subtract_constant_11_let)[ax3_1]);
      }
    }
  }
  for (int32_t i1_1 = 0; i1_1 < 4; ++i1_1) {
    for (int32_t i2_1 = 0; i2_1 < 4; ++i2_1) {
      for (int32_t i3_1 = 0; i3_1 < 64; ++i3_1) {
        int32_t cse_var_6 = (((i1_1 * 256) + (i2_1 * 64)) + i3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_6] = ((int32_t)(((((int64_t)((int32_t*)DepthwiseConv2d_let)[cse_var_6]) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_33_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_35_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_35_let)[i3_1] + 31))));
      }
    }
  }
  for (int32_t ax1_2 = 0; ax1_2 < 4; ++ax1_2) {
    for (int32_t ax2_2 = 0; ax2_2 < 4; ++ax2_2) {
      for (int32_t ax3_2 = 0; ax3_2 < 64; ++ax3_2) {
        int32_t cse_var_7 = (((ax1_2 * 256) + (ax2_2 * 64)) + ax3_2);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_7] = (((int32_t*)DepthwiseConv2d_let)[cse_var_7] + 14);
      }
    }
  }
  for (int32_t i1_2 = 0; i1_2 < 4; ++i1_2) {
    for (int32_t i2_2 = 0; i2_2 < 4; ++i2_2) {
      for (int32_t i3_2 = 0; i3_2 < 64; ++i3_2) {
        int32_t cse_var_8 = (((i1_2 * 256) + (i2_2 * 64)) + i3_2);
        int32_t v_ = ((int32_t*)DepthwiseConv2d_let)[cse_var_8];
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_8] = ((v__1) > (-128) ? (v__1) : (-128));
      }
    }
  }
  for (int32_t ax1_3 = 0; ax1_3 < 4; ++ax1_3) {
    for (int32_t ax2_3 = 0; ax2_3 < 4; ++ax2_3) {
      for (int32_t ax3_3 = 0; ax3_3 < 64; ++ax3_3) {
        int32_t cse_var_9 = (((ax1_3 * 256) + (ax2_3 * 64)) + ax3_3);
        T_cast[cse_var_9] = ((int8_t)((int32_t*)DepthwiseConv2d_let)[cse_var_9]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_12(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_58_var, uint8_t* global_workspace_59_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED v8 HW-REQUANT] 1x1 conv: 64->128 channels, 16 spatial positions
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_58_var[273536]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_58_var[274560]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_58_var[280704]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_58_var[256128]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_58_var[204288]);

  // Safe copy: TVM may alias input/output workspace buffers
  static int8_t _inp[1024];
  for (int32_t _i = 0; _i < 1024; _i++) _inp[_i] = p0[_i];

  // Set per-layer zero-point once. The helper is provided by conv_accel.h.
  accel_set_output_zp(-128);

  for (int32_t tile = 0; tile < 1; tile++) {
    int32_t oc_base = tile * 128;
    int32_t oc_count = 128;
    if (oc_base + oc_count > 128) oc_count = 128 - oc_base;

    // Pack weights for this tile (relayout from [rc][oc] to [oc][rc])
    static int8_t rw[8192];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      for (int32_t rc = 0; rc < 64; rc++)
        rw[oc * 64 + rc] = weights[rc * 128 + oc_base + oc];
    }
    accel_spad_write(0x040, rw, oc_count * 64);

    // Pack params for this tile: 16 bytes per OC.
    //   word 0: scale (high 32) and bias (low 32)
    //   word 1: zero  (high 32) and shift (low 32)
    static int32_t params[128 * 4];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      int32_t ax3 = oc_base + oc;
      params[oc*4 + 0] = (conv_sub[ax3] - conv_const[ax3]);         // bias
      params[oc*4 + 1] = quant_scale[ax3];      // scale
      params[oc*4 + 2] = quant_shift[ax3] + 31; // shift
      params[oc*4 + 3] = 0;                     // reserved
    }
    accel_spad_write(0x2240, (int8_t*)params, oc_count * 16);

    for (int32_t sp = 0; sp < 16; sp++) {
      accel_spad_write(0x000, &_inp[sp * 64], 64);
      hw_multi_dot_requant(0x000, 0x040, 0x2040,
                           0x2240, 64, oc_count);
      accel_unpack_i8_outputs(&T_cast[(sp * 128) + oc_base],
                              0x2040, oc_count);
    }
  }
  return 0;

#else

  void* fused_nn_conv2d_subtract_add_constant_41_let = (&(global_const_workspace_58_var[273536]));
  void* fused_nn_conv2d_subtract_add_constant_40_let = (&(global_const_workspace_58_var[274048]));
  void* fused_nn_conv2d_subtract_add_constant_39_let = (&(global_const_workspace_58_var[274560]));
  void* fused_nn_conv2d_constant_13_let = (&(global_const_workspace_58_var[280704]));
  void* fused_nn_conv2d_subtract_constant_13_let = (&(global_const_workspace_58_var[256128]));
  void* fused_constant_17_let = (&(global_const_workspace_58_var[204288]));
  void* pad_temp_let = (&(global_workspace_59_var[6656]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 4; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 4; ++i2) {
      for (int32_t i3 = 0; i3 < 64; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 256) + (i2 * 64)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 16; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_59_var[7680]));
    for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
      for (int32_t ff = 0; ff < 64; ++ff) {
        ((int32_t*)conv2d_nhwc_let)[ff] = 0;
        for (int32_t rc = 0; rc < 64; ++rc) {
          ((int32_t*)conv2d_nhwc_let)[ff] = (((int32_t*)conv2d_nhwc_let)[ff] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 64) + rc)]) * ((int32_t)((int8_t*)fused_constant_17_let)[(((rc * 128) + (ax3_outer * 64)) + ff)])));
        }
      }
      for (int32_t ax3_inner = 0; ax3_inner < 64; ++ax3_inner) {
        int32_t cse_var_3 = (ax3_outer * 64);
        int32_t cse_var_2 = (cse_var_3 + ax3_inner);
        int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[ax3_inner] + ((int32_t*)fused_nn_conv2d_subtract_constant_13_let)[cse_var_2]) - ((int32_t*)fused_nn_conv2d_constant_13_let)[cse_var_2])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_39_let)[cse_var_2])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_41_let)[cse_var_2] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_41_let)[cse_var_2] + 31)))) - 128;
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        T_cast[(((ax0_ax1_fused_ax2_fused * 128) + cse_var_3) + ax3_inner)] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
      }
    }
  }
  return 0;

#endif
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_13(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_62_var, uint8_t* global_workspace_63_var) {
  void* fused_nn_conv2d_subtract_add_constant_44_let = (&(global_const_workspace_62_var[272000]));
  void* fused_nn_conv2d_subtract_add_constant_43_let = (&(global_const_workspace_62_var[272512]));
  void* fused_nn_conv2d_subtract_add_constant_42_let = (&(global_const_workspace_62_var[273024]));
  void* fused_nn_conv2d_subtract_constant_14_let = (&(global_const_workspace_62_var[255616]));
  void* fused_nn_conv2d_constant_14_let = (&(global_const_workspace_62_var[280192]));
  void* fused_constant_18_let = (&(global_const_workspace_62_var[234880]));
  void* PaddedInput_let = (&(global_workspace_63_var[8192]));
  void* DepthwiseConv2d_let = (&(global_workspace_63_var[0]));
  for (int32_t i1 = 0; i1 < 6; ++i1) {
    for (int32_t i2 = 0; i2 < 6; ++i2) {
      for (int32_t i3 = 0; i3 < 128; ++i3) {
        int32_t cse_var_1 = (((i1 * 768) + (i2 * 128)) + i3);
        ((int8_t*)PaddedInput_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t i = 0; i < 4; ++i) {
    for (int32_t j = 0; j < 4; ++j) {
      for (int32_t c = 0; c < 128; ++c) {
        ((int32_t*)DepthwiseConv2d_let)[(((i * 512) + (j * 128)) + c)] = 0;
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            int32_t cse_var_4 = (j * 128);
            int32_t cse_var_3 = (dj * 128);
            int32_t cse_var_2 = (((i * 512) + cse_var_4) + c);
            ((int32_t*)DepthwiseConv2d_let)[cse_var_2] = (((int32_t*)DepthwiseConv2d_let)[cse_var_2] + (((int32_t)((int8_t*)PaddedInput_let)[(((((i * 768) + (di * 768)) + cse_var_4) + cse_var_3) + c)]) * ((int32_t)((int8_t*)fused_constant_18_let)[(((di * 384) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 4; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 4; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 128; ++ax3) {
        int32_t cse_var_5 = (((ax1 * 512) + (ax2 * 128)) + ax3);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_5] = (((int32_t*)DepthwiseConv2d_let)[cse_var_5] - ((int32_t*)fused_nn_conv2d_constant_14_let)[ax3]);
      }
    }
  }
  for (int32_t ax1_1 = 0; ax1_1 < 4; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 4; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 128; ++ax3_1) {
        int32_t cse_var_6 = (((ax1_1 * 512) + (ax2_1 * 128)) + ax3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_6] = (((int32_t*)DepthwiseConv2d_let)[cse_var_6] + ((int32_t*)fused_nn_conv2d_subtract_constant_14_let)[ax3_1]);
      }
    }
  }
  for (int32_t i1_1 = 0; i1_1 < 4; ++i1_1) {
    for (int32_t i2_1 = 0; i2_1 < 4; ++i2_1) {
      for (int32_t i3_1 = 0; i3_1 < 128; ++i3_1) {
        int32_t cse_var_7 = (((i1_1 * 512) + (i2_1 * 128)) + i3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_7] = ((int32_t)(((((int64_t)((int32_t*)DepthwiseConv2d_let)[cse_var_7]) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_42_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_44_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_44_let)[i3_1] + 31))));
      }
    }
  }
  for (int32_t ax1_2 = 0; ax1_2 < 4; ++ax1_2) {
    for (int32_t ax2_2 = 0; ax2_2 < 4; ++ax2_2) {
      for (int32_t ax3_2 = 0; ax3_2 < 128; ++ax3_2) {
        int32_t cse_var_8 = (((ax1_2 * 512) + (ax2_2 * 128)) + ax3_2);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_8] = (((int32_t*)DepthwiseConv2d_let)[cse_var_8] - 128);
      }
    }
  }
  for (int32_t i1_2 = 0; i1_2 < 4; ++i1_2) {
    for (int32_t i2_2 = 0; i2_2 < 4; ++i2_2) {
      for (int32_t i3_2 = 0; i3_2 < 128; ++i3_2) {
        int32_t cse_var_9 = (((i1_2 * 512) + (i2_2 * 128)) + i3_2);
        int32_t v_ = ((int32_t*)DepthwiseConv2d_let)[cse_var_9];
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_9] = ((v__1) > (-128) ? (v__1) : (-128));
      }
    }
  }
  for (int32_t ax1_3 = 0; ax1_3 < 4; ++ax1_3) {
    for (int32_t ax2_3 = 0; ax2_3 < 4; ++ax2_3) {
      for (int32_t ax3_3 = 0; ax3_3 < 128; ++ax3_3) {
        int32_t cse_var_10 = (((ax1_3 * 512) + (ax2_3 * 128)) + ax3_3);
        T_cast[cse_var_10] = ((int8_t)((int32_t*)DepthwiseConv2d_let)[cse_var_10]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_14(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_64_var, uint8_t* global_workspace_65_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED v8 HW-REQUANT] 1x1 conv: 128->128 channels, 16 spatial positions
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_64_var[270464]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_64_var[271488]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_64_var[279680]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_64_var[255104]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_64_var[175104]);

  // Safe copy: TVM may alias input/output workspace buffers
  static int8_t _inp[2048];
  for (int32_t _i = 0; _i < 2048; _i++) _inp[_i] = p0[_i];

  // Set per-layer zero-point once. The helper is provided by conv_accel.h.
  accel_set_output_zp(-128);

  for (int32_t tile = 0; tile < 2; tile++) {
    int32_t oc_base = tile * 64;
    int32_t oc_count = 64;
    if (oc_base + oc_count > 128) oc_count = 128 - oc_base;

    // Pack weights for this tile (relayout from [rc][oc] to [oc][rc])
    static int8_t rw[8192];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      for (int32_t rc = 0; rc < 128; rc++)
        rw[oc * 128 + rc] = weights[rc * 128 + oc_base + oc];
    }
    accel_spad_write(0x080, rw, oc_count * 128);

    // Pack params for this tile: 16 bytes per OC.
    //   word 0: scale (high 32) and bias (low 32)
    //   word 1: zero  (high 32) and shift (low 32)
    static int32_t params[64 * 4];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      int32_t ax3 = oc_base + oc;
      params[oc*4 + 0] = (conv_sub[ax3] - conv_const[ax3]);         // bias
      params[oc*4 + 1] = quant_scale[ax3];      // scale
      params[oc*4 + 2] = quant_shift[ax3] + 31; // shift
      params[oc*4 + 3] = 0;                     // reserved
    }
    accel_spad_write(0x2180, (int8_t*)params, oc_count * 16);

    for (int32_t sp = 0; sp < 16; sp++) {
      accel_spad_write(0x000, &_inp[sp * 128], 128);
      hw_multi_dot_requant(0x000, 0x080, 0x2080,
                           0x2180, 128, oc_count);
      accel_unpack_i8_outputs(&T_cast[(sp * 128) + oc_base],
                              0x2080, oc_count);
    }
  }
  return 0;

#else

  void* fused_nn_conv2d_subtract_add_constant_47_let = (&(global_const_workspace_64_var[270464]));
  void* fused_nn_conv2d_subtract_add_constant_46_let = (&(global_const_workspace_64_var[270976]));
  void* fused_nn_conv2d_subtract_add_constant_45_let = (&(global_const_workspace_64_var[271488]));
  void* fused_nn_conv2d_constant_15_let = (&(global_const_workspace_64_var[279680]));
  void* fused_nn_conv2d_subtract_constant_15_let = (&(global_const_workspace_64_var[255104]));
  void* fused_constant_19_let = (&(global_const_workspace_64_var[175104]));
  void* pad_temp_let = (&(global_workspace_65_var[6656]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 4; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 4; ++i2) {
      for (int32_t i3 = 0; i3 < 128; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 512) + (i2 * 128)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 16; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_65_var[8704]));
    for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
      for (int32_t ff = 0; ff < 64; ++ff) {
        ((int32_t*)conv2d_nhwc_let)[ff] = 0;
        for (int32_t rc = 0; rc < 128; ++rc) {
          ((int32_t*)conv2d_nhwc_let)[ff] = (((int32_t*)conv2d_nhwc_let)[ff] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 128) + rc)]) * ((int32_t)((int8_t*)fused_constant_19_let)[(((rc * 128) + (ax3_outer * 64)) + ff)])));
        }
      }
      for (int32_t ax3_inner = 0; ax3_inner < 64; ++ax3_inner) {
        int32_t cse_var_3 = (ax3_outer * 64);
        int32_t cse_var_2 = (cse_var_3 + ax3_inner);
        int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[ax3_inner] + ((int32_t*)fused_nn_conv2d_subtract_constant_15_let)[cse_var_2]) - ((int32_t*)fused_nn_conv2d_constant_15_let)[cse_var_2])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_45_let)[cse_var_2])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_47_let)[cse_var_2] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_47_let)[cse_var_2] + 31)))) - 128;
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        T_cast[(((ax0_ax1_fused_ax2_fused * 128) + cse_var_3) + ax3_inner)] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
      }
    }
  }
  return 0;

#endif
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_15(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_66_var, uint8_t* global_workspace_67_var) {
  void* fused_nn_conv2d_subtract_add_constant_50_let = (&(global_const_workspace_66_var[268928]));
  void* fused_nn_conv2d_subtract_add_constant_49_let = (&(global_const_workspace_66_var[269440]));
  void* fused_nn_conv2d_subtract_add_constant_48_let = (&(global_const_workspace_66_var[269952]));
  void* fused_nn_conv2d_subtract_constant_16_let = (&(global_const_workspace_66_var[254592]));
  void* fused_nn_conv2d_constant_16_let = (&(global_const_workspace_66_var[279168]));
  void* fused_constant_20_let = (&(global_const_workspace_66_var[233728]));
  void* PaddedInput_let = (&(global_workspace_67_var[8192]));
  void* DepthwiseConv2d_let = (&(global_workspace_67_var[0]));
  for (int32_t i1 = 0; i1 < 6; ++i1) {
    for (int32_t i2 = 0; i2 < 6; ++i2) {
      for (int32_t i3 = 0; i3 < 128; ++i3) {
        int32_t cse_var_1 = (((i1 * 768) + (i2 * 128)) + i3);
        ((int8_t*)PaddedInput_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t i = 0; i < 4; ++i) {
    for (int32_t j = 0; j < 4; ++j) {
      for (int32_t c = 0; c < 128; ++c) {
        ((int32_t*)DepthwiseConv2d_let)[(((i * 512) + (j * 128)) + c)] = 0;
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            int32_t cse_var_4 = (j * 128);
            int32_t cse_var_3 = (dj * 128);
            int32_t cse_var_2 = (((i * 512) + cse_var_4) + c);
            ((int32_t*)DepthwiseConv2d_let)[cse_var_2] = (((int32_t*)DepthwiseConv2d_let)[cse_var_2] + (((int32_t)((int8_t*)PaddedInput_let)[(((((i * 768) + (di * 768)) + cse_var_4) + cse_var_3) + c)]) * ((int32_t)((int8_t*)fused_constant_20_let)[(((di * 384) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 4; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 4; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 128; ++ax3) {
        int32_t cse_var_5 = (((ax1 * 512) + (ax2 * 128)) + ax3);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_5] = (((int32_t*)DepthwiseConv2d_let)[cse_var_5] - ((int32_t*)fused_nn_conv2d_constant_16_let)[ax3]);
      }
    }
  }
  for (int32_t ax1_1 = 0; ax1_1 < 4; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 4; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 128; ++ax3_1) {
        int32_t cse_var_6 = (((ax1_1 * 512) + (ax2_1 * 128)) + ax3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_6] = (((int32_t*)DepthwiseConv2d_let)[cse_var_6] + ((int32_t*)fused_nn_conv2d_subtract_constant_16_let)[ax3_1]);
      }
    }
  }
  for (int32_t i1_1 = 0; i1_1 < 4; ++i1_1) {
    for (int32_t i2_1 = 0; i2_1 < 4; ++i2_1) {
      for (int32_t i3_1 = 0; i3_1 < 128; ++i3_1) {
        int32_t cse_var_7 = (((i1_1 * 512) + (i2_1 * 128)) + i3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_7] = ((int32_t)(((((int64_t)((int32_t*)DepthwiseConv2d_let)[cse_var_7]) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_48_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_50_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_50_let)[i3_1] + 31))));
      }
    }
  }
  for (int32_t ax1_2 = 0; ax1_2 < 4; ++ax1_2) {
    for (int32_t ax2_2 = 0; ax2_2 < 4; ++ax2_2) {
      for (int32_t ax3_2 = 0; ax3_2 < 128; ++ax3_2) {
        int32_t cse_var_8 = (((ax1_2 * 512) + (ax2_2 * 128)) + ax3_2);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_8] = (((int32_t*)DepthwiseConv2d_let)[cse_var_8] - 128);
      }
    }
  }
  for (int32_t i1_2 = 0; i1_2 < 4; ++i1_2) {
    for (int32_t i2_2 = 0; i2_2 < 4; ++i2_2) {
      for (int32_t i3_2 = 0; i3_2 < 128; ++i3_2) {
        int32_t cse_var_9 = (((i1_2 * 512) + (i2_2 * 128)) + i3_2);
        int32_t v_ = ((int32_t*)DepthwiseConv2d_let)[cse_var_9];
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_9] = ((v__1) > (-128) ? (v__1) : (-128));
      }
    }
  }
  for (int32_t ax1_3 = 0; ax1_3 < 4; ++ax1_3) {
    for (int32_t ax2_3 = 0; ax2_3 < 4; ++ax2_3) {
      for (int32_t ax3_3 = 0; ax3_3 < 128; ++ax3_3) {
        int32_t cse_var_10 = (((ax1_3 * 512) + (ax2_3 * 128)) + ax3_3);
        T_cast[cse_var_10] = ((int8_t)((int32_t*)DepthwiseConv2d_let)[cse_var_10]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_16(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_68_var, uint8_t* global_workspace_69_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED v8 HW-REQUANT] 1x1 conv: 128->128 channels, 16 spatial positions
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_68_var[267392]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_68_var[268416]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_68_var[278656]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_68_var[254080]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_68_var[158720]);

  // Safe copy: TVM may alias input/output workspace buffers
  static int8_t _inp[2048];
  for (int32_t _i = 0; _i < 2048; _i++) _inp[_i] = p0[_i];

  // Set per-layer zero-point once. The helper is provided by conv_accel.h.
  accel_set_output_zp(-128);

  for (int32_t tile = 0; tile < 2; tile++) {
    int32_t oc_base = tile * 64;
    int32_t oc_count = 64;
    if (oc_base + oc_count > 128) oc_count = 128 - oc_base;

    // Pack weights for this tile (relayout from [rc][oc] to [oc][rc])
    static int8_t rw[8192];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      for (int32_t rc = 0; rc < 128; rc++)
        rw[oc * 128 + rc] = weights[rc * 128 + oc_base + oc];
    }
    accel_spad_write(0x080, rw, oc_count * 128);

    // Pack params for this tile: 16 bytes per OC.
    //   word 0: scale (high 32) and bias (low 32)
    //   word 1: zero  (high 32) and shift (low 32)
    static int32_t params[64 * 4];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      int32_t ax3 = oc_base + oc;
      params[oc*4 + 0] = (conv_sub[ax3] - conv_const[ax3]);         // bias
      params[oc*4 + 1] = quant_scale[ax3];      // scale
      params[oc*4 + 2] = quant_shift[ax3] + 31; // shift
      params[oc*4 + 3] = 0;                     // reserved
    }
    accel_spad_write(0x2180, (int8_t*)params, oc_count * 16);

    for (int32_t sp = 0; sp < 16; sp++) {
      accel_spad_write(0x000, &_inp[sp * 128], 128);
      hw_multi_dot_requant(0x000, 0x080, 0x2080,
                           0x2180, 128, oc_count);
      accel_unpack_i8_outputs(&T_cast[(sp * 128) + oc_base],
                              0x2080, oc_count);
    }
  }
  return 0;

#else

  void* fused_nn_conv2d_subtract_add_constant_53_let = (&(global_const_workspace_68_var[267392]));
  void* fused_nn_conv2d_subtract_add_constant_52_let = (&(global_const_workspace_68_var[267904]));
  void* fused_nn_conv2d_subtract_add_constant_51_let = (&(global_const_workspace_68_var[268416]));
  void* fused_nn_conv2d_constant_17_let = (&(global_const_workspace_68_var[278656]));
  void* fused_nn_conv2d_subtract_constant_17_let = (&(global_const_workspace_68_var[254080]));
  void* fused_constant_21_let = (&(global_const_workspace_68_var[158720]));
  void* pad_temp_let = (&(global_workspace_69_var[6656]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 4; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 4; ++i2) {
      for (int32_t i3 = 0; i3 < 128; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 512) + (i2 * 128)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 16; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_69_var[8704]));
    for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
      for (int32_t ff = 0; ff < 64; ++ff) {
        ((int32_t*)conv2d_nhwc_let)[ff] = 0;
        for (int32_t rc = 0; rc < 128; ++rc) {
          ((int32_t*)conv2d_nhwc_let)[ff] = (((int32_t*)conv2d_nhwc_let)[ff] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 128) + rc)]) * ((int32_t)((int8_t*)fused_constant_21_let)[(((rc * 128) + (ax3_outer * 64)) + ff)])));
        }
      }
      for (int32_t ax3_inner = 0; ax3_inner < 64; ++ax3_inner) {
        int32_t cse_var_3 = (ax3_outer * 64);
        int32_t cse_var_2 = (cse_var_3 + ax3_inner);
        int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[ax3_inner] + ((int32_t*)fused_nn_conv2d_subtract_constant_17_let)[cse_var_2]) - ((int32_t*)fused_nn_conv2d_constant_17_let)[cse_var_2])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_51_let)[cse_var_2])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_53_let)[cse_var_2] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_53_let)[cse_var_2] + 31)))) - 128;
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        T_cast[(((ax0_ax1_fused_ax2_fused * 128) + cse_var_3) + ax3_inner)] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
      }
    }
  }
  return 0;

#endif
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_17(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_70_var, uint8_t* global_workspace_71_var) {
  void* fused_nn_conv2d_subtract_add_constant_56_let = (&(global_const_workspace_70_var[265856]));
  void* fused_nn_conv2d_subtract_add_constant_55_let = (&(global_const_workspace_70_var[266368]));
  void* fused_nn_conv2d_subtract_add_constant_54_let = (&(global_const_workspace_70_var[266880]));
  void* fused_nn_conv2d_subtract_constant_18_let = (&(global_const_workspace_70_var[253568]));
  void* fused_nn_conv2d_constant_18_let = (&(global_const_workspace_70_var[278144]));
  void* fused_constant_22_let = (&(global_const_workspace_70_var[232576]));
  void* PaddedInput_let = (&(global_workspace_71_var[8192]));
  void* DepthwiseConv2d_let = (&(global_workspace_71_var[0]));
  for (int32_t i1 = 0; i1 < 6; ++i1) {
    for (int32_t i2 = 0; i2 < 6; ++i2) {
      for (int32_t i3 = 0; i3 < 128; ++i3) {
        int32_t cse_var_1 = (((i1 * 768) + (i2 * 128)) + i3);
        ((int8_t*)PaddedInput_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t i = 0; i < 4; ++i) {
    for (int32_t j = 0; j < 4; ++j) {
      for (int32_t c = 0; c < 128; ++c) {
        ((int32_t*)DepthwiseConv2d_let)[(((i * 512) + (j * 128)) + c)] = 0;
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            int32_t cse_var_4 = (j * 128);
            int32_t cse_var_3 = (dj * 128);
            int32_t cse_var_2 = (((i * 512) + cse_var_4) + c);
            ((int32_t*)DepthwiseConv2d_let)[cse_var_2] = (((int32_t*)DepthwiseConv2d_let)[cse_var_2] + (((int32_t)((int8_t*)PaddedInput_let)[(((((i * 768) + (di * 768)) + cse_var_4) + cse_var_3) + c)]) * ((int32_t)((int8_t*)fused_constant_22_let)[(((di * 384) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 4; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 4; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 128; ++ax3) {
        int32_t cse_var_5 = (((ax1 * 512) + (ax2 * 128)) + ax3);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_5] = (((int32_t*)DepthwiseConv2d_let)[cse_var_5] - ((int32_t*)fused_nn_conv2d_constant_18_let)[ax3]);
      }
    }
  }
  for (int32_t ax1_1 = 0; ax1_1 < 4; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 4; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 128; ++ax3_1) {
        int32_t cse_var_6 = (((ax1_1 * 512) + (ax2_1 * 128)) + ax3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_6] = (((int32_t*)DepthwiseConv2d_let)[cse_var_6] + ((int32_t*)fused_nn_conv2d_subtract_constant_18_let)[ax3_1]);
      }
    }
  }
  for (int32_t i1_1 = 0; i1_1 < 4; ++i1_1) {
    for (int32_t i2_1 = 0; i2_1 < 4; ++i2_1) {
      for (int32_t i3_1 = 0; i3_1 < 128; ++i3_1) {
        int32_t cse_var_7 = (((i1_1 * 512) + (i2_1 * 128)) + i3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_7] = ((int32_t)(((((int64_t)((int32_t*)DepthwiseConv2d_let)[cse_var_7]) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_54_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_56_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_56_let)[i3_1] + 31))));
      }
    }
  }
  for (int32_t ax1_2 = 0; ax1_2 < 4; ++ax1_2) {
    for (int32_t ax2_2 = 0; ax2_2 < 4; ++ax2_2) {
      for (int32_t ax3_2 = 0; ax3_2 < 128; ++ax3_2) {
        int32_t cse_var_8 = (((ax1_2 * 512) + (ax2_2 * 128)) + ax3_2);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_8] = (((int32_t*)DepthwiseConv2d_let)[cse_var_8] - 128);
      }
    }
  }
  for (int32_t i1_2 = 0; i1_2 < 4; ++i1_2) {
    for (int32_t i2_2 = 0; i2_2 < 4; ++i2_2) {
      for (int32_t i3_2 = 0; i3_2 < 128; ++i3_2) {
        int32_t cse_var_9 = (((i1_2 * 512) + (i2_2 * 128)) + i3_2);
        int32_t v_ = ((int32_t*)DepthwiseConv2d_let)[cse_var_9];
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_9] = ((v__1) > (-128) ? (v__1) : (-128));
      }
    }
  }
  for (int32_t ax1_3 = 0; ax1_3 < 4; ++ax1_3) {
    for (int32_t ax2_3 = 0; ax2_3 < 4; ++ax2_3) {
      for (int32_t ax3_3 = 0; ax3_3 < 128; ++ax3_3) {
        int32_t cse_var_10 = (((ax1_3 * 512) + (ax2_3 * 128)) + ax3_3);
        T_cast[cse_var_10] = ((int8_t)((int32_t*)DepthwiseConv2d_let)[cse_var_10]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_18(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_72_var, uint8_t* global_workspace_73_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED v8 HW-REQUANT] 1x1 conv: 128->128 channels, 16 spatial positions
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_72_var[264320]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_72_var[265344]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_72_var[277632]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_72_var[253056]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_72_var[142336]);

  // Safe copy: TVM may alias input/output workspace buffers
  static int8_t _inp[2048];
  for (int32_t _i = 0; _i < 2048; _i++) _inp[_i] = p0[_i];

  // Set per-layer zero-point once. The helper is provided by conv_accel.h.
  accel_set_output_zp(-128);

  for (int32_t tile = 0; tile < 2; tile++) {
    int32_t oc_base = tile * 64;
    int32_t oc_count = 64;
    if (oc_base + oc_count > 128) oc_count = 128 - oc_base;

    // Pack weights for this tile (relayout from [rc][oc] to [oc][rc])
    static int8_t rw[8192];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      for (int32_t rc = 0; rc < 128; rc++)
        rw[oc * 128 + rc] = weights[rc * 128 + oc_base + oc];
    }
    accel_spad_write(0x080, rw, oc_count * 128);

    // Pack params for this tile: 16 bytes per OC.
    //   word 0: scale (high 32) and bias (low 32)
    //   word 1: zero  (high 32) and shift (low 32)
    static int32_t params[64 * 4];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      int32_t ax3 = oc_base + oc;
      params[oc*4 + 0] = (conv_sub[ax3] - conv_const[ax3]);         // bias
      params[oc*4 + 1] = quant_scale[ax3];      // scale
      params[oc*4 + 2] = quant_shift[ax3] + 31; // shift
      params[oc*4 + 3] = 0;                     // reserved
    }
    accel_spad_write(0x2180, (int8_t*)params, oc_count * 16);

    for (int32_t sp = 0; sp < 16; sp++) {
      accel_spad_write(0x000, &_inp[sp * 128], 128);
      hw_multi_dot_requant(0x000, 0x080, 0x2080,
                           0x2180, 128, oc_count);
      accel_unpack_i8_outputs(&T_cast[(sp * 128) + oc_base],
                              0x2080, oc_count);
    }
  }
  return 0;

#else

  void* fused_nn_conv2d_subtract_add_constant_59_let = (&(global_const_workspace_72_var[264320]));
  void* fused_nn_conv2d_subtract_add_constant_58_let = (&(global_const_workspace_72_var[264832]));
  void* fused_nn_conv2d_subtract_add_constant_57_let = (&(global_const_workspace_72_var[265344]));
  void* fused_nn_conv2d_constant_19_let = (&(global_const_workspace_72_var[277632]));
  void* fused_nn_conv2d_subtract_constant_19_let = (&(global_const_workspace_72_var[253056]));
  void* fused_constant_23_let = (&(global_const_workspace_72_var[142336]));
  void* pad_temp_let = (&(global_workspace_73_var[6656]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 4; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 4; ++i2) {
      for (int32_t i3 = 0; i3 < 128; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 512) + (i2 * 128)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 16; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_73_var[8704]));
    for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
      for (int32_t ff = 0; ff < 64; ++ff) {
        ((int32_t*)conv2d_nhwc_let)[ff] = 0;
        for (int32_t rc = 0; rc < 128; ++rc) {
          ((int32_t*)conv2d_nhwc_let)[ff] = (((int32_t*)conv2d_nhwc_let)[ff] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 128) + rc)]) * ((int32_t)((int8_t*)fused_constant_23_let)[(((rc * 128) + (ax3_outer * 64)) + ff)])));
        }
      }
      for (int32_t ax3_inner = 0; ax3_inner < 64; ++ax3_inner) {
        int32_t cse_var_3 = (ax3_outer * 64);
        int32_t cse_var_2 = (cse_var_3 + ax3_inner);
        int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[ax3_inner] + ((int32_t*)fused_nn_conv2d_subtract_constant_19_let)[cse_var_2]) - ((int32_t*)fused_nn_conv2d_constant_19_let)[cse_var_2])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_57_let)[cse_var_2])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_59_let)[cse_var_2] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_59_let)[cse_var_2] + 31)))) - 128;
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        T_cast[(((ax0_ax1_fused_ax2_fused * 128) + cse_var_3) + ax3_inner)] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
      }
    }
  }
  return 0;

#endif
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_19(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_74_var, uint8_t* global_workspace_75_var) {
  void* fused_nn_conv2d_subtract_add_constant_62_let = (&(global_const_workspace_74_var[262784]));
  void* fused_nn_conv2d_subtract_add_constant_61_let = (&(global_const_workspace_74_var[263296]));
  void* fused_nn_conv2d_subtract_add_constant_60_let = (&(global_const_workspace_74_var[263808]));
  void* fused_nn_conv2d_subtract_constant_20_let = (&(global_const_workspace_74_var[252544]));
  void* fused_nn_conv2d_constant_20_let = (&(global_const_workspace_74_var[277120]));
  void* fused_constant_24_let = (&(global_const_workspace_74_var[231424]));
  void* PaddedInput_let = (&(global_workspace_75_var[8192]));
  void* DepthwiseConv2d_let = (&(global_workspace_75_var[0]));
  for (int32_t i1 = 0; i1 < 6; ++i1) {
    for (int32_t i2 = 0; i2 < 6; ++i2) {
      for (int32_t i3 = 0; i3 < 128; ++i3) {
        int32_t cse_var_1 = (((i1 * 768) + (i2 * 128)) + i3);
        ((int8_t*)PaddedInput_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t i = 0; i < 4; ++i) {
    for (int32_t j = 0; j < 4; ++j) {
      for (int32_t c = 0; c < 128; ++c) {
        ((int32_t*)DepthwiseConv2d_let)[(((i * 512) + (j * 128)) + c)] = 0;
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            int32_t cse_var_4 = (j * 128);
            int32_t cse_var_3 = (dj * 128);
            int32_t cse_var_2 = (((i * 512) + cse_var_4) + c);
            ((int32_t*)DepthwiseConv2d_let)[cse_var_2] = (((int32_t*)DepthwiseConv2d_let)[cse_var_2] + (((int32_t)((int8_t*)PaddedInput_let)[(((((i * 768) + (di * 768)) + cse_var_4) + cse_var_3) + c)]) * ((int32_t)((int8_t*)fused_constant_24_let)[(((di * 384) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 4; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 4; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 128; ++ax3) {
        int32_t cse_var_5 = (((ax1 * 512) + (ax2 * 128)) + ax3);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_5] = (((int32_t*)DepthwiseConv2d_let)[cse_var_5] - ((int32_t*)fused_nn_conv2d_constant_20_let)[ax3]);
      }
    }
  }
  for (int32_t ax1_1 = 0; ax1_1 < 4; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 4; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 128; ++ax3_1) {
        int32_t cse_var_6 = (((ax1_1 * 512) + (ax2_1 * 128)) + ax3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_6] = (((int32_t*)DepthwiseConv2d_let)[cse_var_6] + ((int32_t*)fused_nn_conv2d_subtract_constant_20_let)[ax3_1]);
      }
    }
  }
  for (int32_t i1_1 = 0; i1_1 < 4; ++i1_1) {
    for (int32_t i2_1 = 0; i2_1 < 4; ++i2_1) {
      for (int32_t i3_1 = 0; i3_1 < 128; ++i3_1) {
        int32_t cse_var_7 = (((i1_1 * 512) + (i2_1 * 128)) + i3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_7] = ((int32_t)(((((int64_t)((int32_t*)DepthwiseConv2d_let)[cse_var_7]) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_60_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_62_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_62_let)[i3_1] + 31))));
      }
    }
  }
  for (int32_t ax1_2 = 0; ax1_2 < 4; ++ax1_2) {
    for (int32_t ax2_2 = 0; ax2_2 < 4; ++ax2_2) {
      for (int32_t ax3_2 = 0; ax3_2 < 128; ++ax3_2) {
        int32_t cse_var_8 = (((ax1_2 * 512) + (ax2_2 * 128)) + ax3_2);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_8] = (((int32_t*)DepthwiseConv2d_let)[cse_var_8] - 128);
      }
    }
  }
  for (int32_t i1_2 = 0; i1_2 < 4; ++i1_2) {
    for (int32_t i2_2 = 0; i2_2 < 4; ++i2_2) {
      for (int32_t i3_2 = 0; i3_2 < 128; ++i3_2) {
        int32_t cse_var_9 = (((i1_2 * 512) + (i2_2 * 128)) + i3_2);
        int32_t v_ = ((int32_t*)DepthwiseConv2d_let)[cse_var_9];
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_9] = ((v__1) > (-128) ? (v__1) : (-128));
      }
    }
  }
  for (int32_t ax1_3 = 0; ax1_3 < 4; ++ax1_3) {
    for (int32_t ax2_3 = 0; ax2_3 < 4; ++ax2_3) {
      for (int32_t ax3_3 = 0; ax3_3 < 128; ++ax3_3) {
        int32_t cse_var_10 = (((ax1_3 * 512) + (ax2_3 * 128)) + ax3_3);
        T_cast[cse_var_10] = ((int8_t)((int32_t*)DepthwiseConv2d_let)[cse_var_10]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_2(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_10_var, uint8_t* global_workspace_11_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED v8 HW-REQUANT] 1x1 conv: 8->16 channels, 1024 spatial positions
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_10_var[294016]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_10_var[294144]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_10_var[294400]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_10_var[293888]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_10_var[293616]);

  // Safe copy: TVM may alias input/output workspace buffers
  static int8_t _inp[8192];
  for (int32_t _i = 0; _i < 8192; _i++) _inp[_i] = p0[_i];

  // Set per-layer zero-point once. The helper is provided by conv_accel.h.
  accel_set_output_zp(-128);

  for (int32_t tile = 0; tile < 1; tile++) {
    int32_t oc_base = tile * 16;
    int32_t oc_count = 16;
    if (oc_base + oc_count > 16) oc_count = 16 - oc_base;

    // Pack weights for this tile (relayout from [rc][oc] to [oc][rc])
    static int8_t rw[128];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      for (int32_t rc = 0; rc < 8; rc++)
        rw[oc * 8 + rc] = weights[rc * 16 + oc_base + oc];
    }
    accel_spad_write(0x008, rw, oc_count * 8);

    // Pack params for this tile: 16 bytes per OC.
    //   word 0: scale (high 32) and bias (low 32)
    //   word 1: zero  (high 32) and shift (low 32)
    static int32_t params[16 * 4];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      int32_t ax3 = oc_base + oc;
      params[oc*4 + 0] = (conv_sub[ax3] - conv_const[ax3]);         // bias
      params[oc*4 + 1] = quant_scale[ax3];      // scale
      params[oc*4 + 2] = quant_shift[ax3] + 31; // shift
      params[oc*4 + 3] = 0;                     // reserved
    }
    accel_spad_write(0x0C8, (int8_t*)params, oc_count * 16);

    for (int32_t sp = 0; sp < 1024; sp++) {
      accel_spad_write(0x000, &_inp[sp * 8], 8);
      hw_multi_dot_requant(0x000, 0x008, 0x088,
                           0x0C8, 8, oc_count);
      accel_unpack_i8_outputs(&T_cast[(sp * 16) + oc_base],
                              0x088, oc_count);
    }
  }
  return 0;

#else

  void* fused_nn_conv2d_subtract_add_constant_8_let = (&(global_const_workspace_10_var[294016]));
  void* fused_nn_conv2d_subtract_add_constant_7_let = (&(global_const_workspace_10_var[294080]));
  void* fused_nn_conv2d_subtract_add_constant_6_let = (&(global_const_workspace_10_var[294144]));
  void* fused_nn_conv2d_constant_2_let = (&(global_const_workspace_10_var[294400]));
  void* fused_nn_conv2d_subtract_constant_2_let = (&(global_const_workspace_10_var[293888]));
  void* fused_constant_2_let = (&(global_const_workspace_10_var[293616]));
  void* pad_temp_let = (&(global_workspace_11_var[33808]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 32; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 32; ++i2) {
      for (int32_t i3 = 0; i3 < 8; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 256) + (i2 * 8)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 1024; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_11_var[42000]));
    for (int32_t ax3 = 0; ax3 < 16; ++ax3) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 8; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 8) + rc)]) * ((int32_t)((int8_t*)fused_constant_2_let)[((rc * 16) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_2_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_2_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_6_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_8_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_8_let)[ax3] + 31)))) - 128;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_cast[((ax0_ax1_fused_ax2_fused * 16) + ax3)] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
    }
  }
  return 0;

#endif
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_20(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_76_var, uint8_t* global_workspace_77_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED v8 HW-REQUANT] 1x1 conv: 128->128 channels, 16 spatial positions
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_76_var[261248]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_76_var[262272]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_76_var[276608]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_76_var[252032]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_76_var[125952]);

  // Safe copy: TVM may alias input/output workspace buffers
  static int8_t _inp[2048];
  for (int32_t _i = 0; _i < 2048; _i++) _inp[_i] = p0[_i];

  // Set per-layer zero-point once. The helper is provided by conv_accel.h.
  accel_set_output_zp(-128);

  for (int32_t tile = 0; tile < 2; tile++) {
    int32_t oc_base = tile * 64;
    int32_t oc_count = 64;
    if (oc_base + oc_count > 128) oc_count = 128 - oc_base;

    // Pack weights for this tile (relayout from [rc][oc] to [oc][rc])
    static int8_t rw[8192];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      for (int32_t rc = 0; rc < 128; rc++)
        rw[oc * 128 + rc] = weights[rc * 128 + oc_base + oc];
    }
    accel_spad_write(0x080, rw, oc_count * 128);

    // Pack params for this tile: 16 bytes per OC.
    //   word 0: scale (high 32) and bias (low 32)
    //   word 1: zero  (high 32) and shift (low 32)
    static int32_t params[64 * 4];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      int32_t ax3 = oc_base + oc;
      params[oc*4 + 0] = (conv_sub[ax3] - conv_const[ax3]);         // bias
      params[oc*4 + 1] = quant_scale[ax3];      // scale
      params[oc*4 + 2] = quant_shift[ax3] + 31; // shift
      params[oc*4 + 3] = 0;                     // reserved
    }
    accel_spad_write(0x2180, (int8_t*)params, oc_count * 16);

    for (int32_t sp = 0; sp < 16; sp++) {
      accel_spad_write(0x000, &_inp[sp * 128], 128);
      hw_multi_dot_requant(0x000, 0x080, 0x2080,
                           0x2180, 128, oc_count);
      accel_unpack_i8_outputs(&T_cast[(sp * 128) + oc_base],
                              0x2080, oc_count);
    }
  }
  return 0;

#else

  void* fused_nn_conv2d_subtract_add_constant_65_let = (&(global_const_workspace_76_var[261248]));
  void* fused_nn_conv2d_subtract_add_constant_64_let = (&(global_const_workspace_76_var[261760]));
  void* fused_nn_conv2d_subtract_add_constant_63_let = (&(global_const_workspace_76_var[262272]));
  void* fused_nn_conv2d_constant_21_let = (&(global_const_workspace_76_var[276608]));
  void* fused_nn_conv2d_subtract_constant_21_let = (&(global_const_workspace_76_var[252032]));
  void* fused_constant_25_let = (&(global_const_workspace_76_var[125952]));
  void* pad_temp_let = (&(global_workspace_77_var[6656]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 4; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 4; ++i2) {
      for (int32_t i3 = 0; i3 < 128; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 512) + (i2 * 128)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 16; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_77_var[8704]));
    for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
      for (int32_t ff = 0; ff < 64; ++ff) {
        ((int32_t*)conv2d_nhwc_let)[ff] = 0;
        for (int32_t rc = 0; rc < 128; ++rc) {
          ((int32_t*)conv2d_nhwc_let)[ff] = (((int32_t*)conv2d_nhwc_let)[ff] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 128) + rc)]) * ((int32_t)((int8_t*)fused_constant_25_let)[(((rc * 128) + (ax3_outer * 64)) + ff)])));
        }
      }
      for (int32_t ax3_inner = 0; ax3_inner < 64; ++ax3_inner) {
        int32_t cse_var_3 = (ax3_outer * 64);
        int32_t cse_var_2 = (cse_var_3 + ax3_inner);
        int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[ax3_inner] + ((int32_t*)fused_nn_conv2d_subtract_constant_21_let)[cse_var_2]) - ((int32_t*)fused_nn_conv2d_constant_21_let)[cse_var_2])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_63_let)[cse_var_2])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_65_let)[cse_var_2] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_65_let)[cse_var_2] + 31)))) - 128;
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        T_cast[(((ax0_ax1_fused_ax2_fused * 128) + cse_var_3) + ax3_inner)] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
      }
    }
  }
  return 0;

#endif
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_21(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_78_var, uint8_t* global_workspace_79_var) {
  void* fused_nn_conv2d_subtract_add_constant_68_let = (&(global_const_workspace_78_var[259712]));
  void* fused_nn_conv2d_subtract_add_constant_67_let = (&(global_const_workspace_78_var[260224]));
  void* fused_nn_conv2d_subtract_add_constant_66_let = (&(global_const_workspace_78_var[260736]));
  void* fused_nn_conv2d_subtract_constant_22_let = (&(global_const_workspace_78_var[251520]));
  void* fused_nn_conv2d_constant_22_let = (&(global_const_workspace_78_var[276096]));
  void* fused_constant_26_let = (&(global_const_workspace_78_var[230272]));
  void* PaddedInput_let = (&(global_workspace_79_var[8192]));
  void* DepthwiseConv2d_let = (&(global_workspace_79_var[0]));
  for (int32_t i1 = 0; i1 < 6; ++i1) {
    for (int32_t i2 = 0; i2 < 6; ++i2) {
      for (int32_t i3 = 0; i3 < 128; ++i3) {
        int32_t cse_var_1 = (((i1 * 768) + (i2 * 128)) + i3);
        ((int8_t*)PaddedInput_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t i = 0; i < 4; ++i) {
    for (int32_t j = 0; j < 4; ++j) {
      for (int32_t c = 0; c < 128; ++c) {
        ((int32_t*)DepthwiseConv2d_let)[(((i * 512) + (j * 128)) + c)] = 0;
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            int32_t cse_var_4 = (j * 128);
            int32_t cse_var_3 = (dj * 128);
            int32_t cse_var_2 = (((i * 512) + cse_var_4) + c);
            ((int32_t*)DepthwiseConv2d_let)[cse_var_2] = (((int32_t*)DepthwiseConv2d_let)[cse_var_2] + (((int32_t)((int8_t*)PaddedInput_let)[(((((i * 768) + (di * 768)) + cse_var_4) + cse_var_3) + c)]) * ((int32_t)((int8_t*)fused_constant_26_let)[(((di * 384) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 4; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 4; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 128; ++ax3) {
        int32_t cse_var_5 = (((ax1 * 512) + (ax2 * 128)) + ax3);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_5] = (((int32_t*)DepthwiseConv2d_let)[cse_var_5] - ((int32_t*)fused_nn_conv2d_constant_22_let)[ax3]);
      }
    }
  }
  for (int32_t ax1_1 = 0; ax1_1 < 4; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 4; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 128; ++ax3_1) {
        int32_t cse_var_6 = (((ax1_1 * 512) + (ax2_1 * 128)) + ax3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_6] = (((int32_t*)DepthwiseConv2d_let)[cse_var_6] + ((int32_t*)fused_nn_conv2d_subtract_constant_22_let)[ax3_1]);
      }
    }
  }
  for (int32_t i1_1 = 0; i1_1 < 4; ++i1_1) {
    for (int32_t i2_1 = 0; i2_1 < 4; ++i2_1) {
      for (int32_t i3_1 = 0; i3_1 < 128; ++i3_1) {
        int32_t cse_var_7 = (((i1_1 * 512) + (i2_1 * 128)) + i3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_7] = ((int32_t)(((((int64_t)((int32_t*)DepthwiseConv2d_let)[cse_var_7]) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_66_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_68_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_68_let)[i3_1] + 31))));
      }
    }
  }
  for (int32_t ax1_2 = 0; ax1_2 < 4; ++ax1_2) {
    for (int32_t ax2_2 = 0; ax2_2 < 4; ++ax2_2) {
      for (int32_t ax3_2 = 0; ax3_2 < 128; ++ax3_2) {
        int32_t cse_var_8 = (((ax1_2 * 512) + (ax2_2 * 128)) + ax3_2);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_8] = (((int32_t*)DepthwiseConv2d_let)[cse_var_8] - 128);
      }
    }
  }
  for (int32_t i1_2 = 0; i1_2 < 4; ++i1_2) {
    for (int32_t i2_2 = 0; i2_2 < 4; ++i2_2) {
      for (int32_t i3_2 = 0; i3_2 < 128; ++i3_2) {
        int32_t cse_var_9 = (((i1_2 * 512) + (i2_2 * 128)) + i3_2);
        int32_t v_ = ((int32_t*)DepthwiseConv2d_let)[cse_var_9];
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_9] = ((v__1) > (-128) ? (v__1) : (-128));
      }
    }
  }
  for (int32_t ax1_3 = 0; ax1_3 < 4; ++ax1_3) {
    for (int32_t ax2_3 = 0; ax2_3 < 4; ++ax2_3) {
      for (int32_t ax3_3 = 0; ax3_3 < 128; ++ax3_3) {
        int32_t cse_var_10 = (((ax1_3 * 512) + (ax2_3 * 128)) + ax3_3);
        T_cast[cse_var_10] = ((int8_t)((int32_t*)DepthwiseConv2d_let)[cse_var_10]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_22(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_80_var, uint8_t* global_workspace_81_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED v8 HW-REQUANT] 1x1 conv: 128->128 channels, 16 spatial positions
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_80_var[258176]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_80_var[259200]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_80_var[275584]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_80_var[251008]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_80_var[109568]);

  // Safe copy: TVM may alias input/output workspace buffers
  static int8_t _inp[2048];
  for (int32_t _i = 0; _i < 2048; _i++) _inp[_i] = p0[_i];

  // Set per-layer zero-point once. The helper is provided by conv_accel.h.
  accel_set_output_zp(-128);

  for (int32_t tile = 0; tile < 2; tile++) {
    int32_t oc_base = tile * 64;
    int32_t oc_count = 64;
    if (oc_base + oc_count > 128) oc_count = 128 - oc_base;

    // Pack weights for this tile (relayout from [rc][oc] to [oc][rc])
    static int8_t rw[8192];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      for (int32_t rc = 0; rc < 128; rc++)
        rw[oc * 128 + rc] = weights[rc * 128 + oc_base + oc];
    }
    accel_spad_write(0x080, rw, oc_count * 128);

    // Pack params for this tile: 16 bytes per OC.
    //   word 0: scale (high 32) and bias (low 32)
    //   word 1: zero  (high 32) and shift (low 32)
    static int32_t params[64 * 4];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      int32_t ax3 = oc_base + oc;
      params[oc*4 + 0] = (conv_sub[ax3] - conv_const[ax3]);         // bias
      params[oc*4 + 1] = quant_scale[ax3];      // scale
      params[oc*4 + 2] = quant_shift[ax3] + 31; // shift
      params[oc*4 + 3] = 0;                     // reserved
    }
    accel_spad_write(0x2180, (int8_t*)params, oc_count * 16);

    for (int32_t sp = 0; sp < 16; sp++) {
      accel_spad_write(0x000, &_inp[sp * 128], 128);
      hw_multi_dot_requant(0x000, 0x080, 0x2080,
                           0x2180, 128, oc_count);
      accel_unpack_i8_outputs(&T_cast[(sp * 128) + oc_base],
                              0x2080, oc_count);
    }
  }
  return 0;

#else

  void* fused_nn_conv2d_subtract_add_constant_71_let = (&(global_const_workspace_80_var[258176]));
  void* fused_nn_conv2d_subtract_add_constant_70_let = (&(global_const_workspace_80_var[258688]));
  void* fused_nn_conv2d_subtract_add_constant_69_let = (&(global_const_workspace_80_var[259200]));
  void* fused_nn_conv2d_constant_23_let = (&(global_const_workspace_80_var[275584]));
  void* fused_nn_conv2d_subtract_constant_23_let = (&(global_const_workspace_80_var[251008]));
  void* fused_constant_27_let = (&(global_const_workspace_80_var[109568]));
  void* pad_temp_let = (&(global_workspace_81_var[5248]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 4; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 4; ++i2) {
      for (int32_t i3 = 0; i3 < 128; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 512) + (i2 * 128)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 16; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_81_var[7296]));
    for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
      for (int32_t ff = 0; ff < 64; ++ff) {
        ((int32_t*)conv2d_nhwc_let)[ff] = 0;
        for (int32_t rc = 0; rc < 128; ++rc) {
          ((int32_t*)conv2d_nhwc_let)[ff] = (((int32_t*)conv2d_nhwc_let)[ff] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 128) + rc)]) * ((int32_t)((int8_t*)fused_constant_27_let)[(((rc * 128) + (ax3_outer * 64)) + ff)])));
        }
      }
      for (int32_t ax3_inner = 0; ax3_inner < 64; ++ax3_inner) {
        int32_t cse_var_3 = (ax3_outer * 64);
        int32_t cse_var_2 = (cse_var_3 + ax3_inner);
        int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[ax3_inner] + ((int32_t*)fused_nn_conv2d_subtract_constant_23_let)[cse_var_2]) - ((int32_t*)fused_nn_conv2d_constant_23_let)[cse_var_2])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_69_let)[cse_var_2])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_71_let)[cse_var_2] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_71_let)[cse_var_2] + 31)))) - 128;
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        T_cast[(((ax0_ax1_fused_ax2_fused * 128) + cse_var_3) + ax3_inner)] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
      }
    }
  }
  return 0;

#endif
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_23(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_84_var, uint8_t* global_workspace_85_var) {
  void* fused_nn_conv2d_subtract_add_constant_74_let = (&(global_const_workspace_84_var[256640]));
  void* fused_nn_conv2d_subtract_add_constant_73_let = (&(global_const_workspace_84_var[257152]));
  void* fused_nn_conv2d_subtract_add_constant_72_let = (&(global_const_workspace_84_var[257664]));
  void* fused_nn_conv2d_subtract_constant_24_let = (&(global_const_workspace_84_var[250496]));
  void* fused_nn_conv2d_constant_24_let = (&(global_const_workspace_84_var[275072]));
  void* fused_constant_28_let = (&(global_const_workspace_84_var[229120]));
  void* PaddedInput_let = (&(global_workspace_85_var[3200]));
  void* DepthwiseConv2d_let = (&(global_workspace_85_var[6400]));
  for (int32_t i1 = 0; i1 < 5; ++i1) {
    for (int32_t i2 = 0; i2 < 5; ++i2) {
      for (int32_t i3 = 0; i3 < 128; ++i3) {
        int32_t cse_var_1 = (((i1 * 640) + (i2 * 128)) + i3);
        ((int8_t*)PaddedInput_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t i = 0; i < 2; ++i) {
    for (int32_t j = 0; j < 2; ++j) {
      for (int32_t c = 0; c < 128; ++c) {
        ((int32_t*)DepthwiseConv2d_let)[(((i * 256) + (j * 128)) + c)] = 0;
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            int32_t cse_var_3 = (dj * 128);
            int32_t cse_var_2 = (((i * 256) + (j * 128)) + c);
            ((int32_t*)DepthwiseConv2d_let)[cse_var_2] = (((int32_t*)DepthwiseConv2d_let)[cse_var_2] + (((int32_t)((int8_t*)PaddedInput_let)[(((((i * 1280) + (di * 640)) + (j * 256)) + cse_var_3) + c)]) * ((int32_t)((int8_t*)fused_constant_28_let)[(((di * 384) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 2; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 2; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 128; ++ax3) {
        int32_t cse_var_4 = (((ax1 * 256) + (ax2 * 128)) + ax3);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_4] = (((int32_t*)DepthwiseConv2d_let)[cse_var_4] - ((int32_t*)fused_nn_conv2d_constant_24_let)[ax3]);
      }
    }
  }
  for (int32_t ax1_1 = 0; ax1_1 < 2; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 2; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 128; ++ax3_1) {
        int32_t cse_var_5 = (((ax1_1 * 256) + (ax2_1 * 128)) + ax3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_5] = (((int32_t*)DepthwiseConv2d_let)[cse_var_5] + ((int32_t*)fused_nn_conv2d_subtract_constant_24_let)[ax3_1]);
      }
    }
  }
  for (int32_t i1_1 = 0; i1_1 < 2; ++i1_1) {
    for (int32_t i2_1 = 0; i2_1 < 2; ++i2_1) {
      for (int32_t i3_1 = 0; i3_1 < 128; ++i3_1) {
        int32_t cse_var_6 = (((i1_1 * 256) + (i2_1 * 128)) + i3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_6] = ((int32_t)(((((int64_t)((int32_t*)DepthwiseConv2d_let)[cse_var_6]) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_72_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_74_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_74_let)[i3_1] + 31))));
      }
    }
  }
  for (int32_t ax1_2 = 0; ax1_2 < 2; ++ax1_2) {
    for (int32_t ax2_2 = 0; ax2_2 < 2; ++ax2_2) {
      for (int32_t ax3_2 = 0; ax3_2 < 128; ++ax3_2) {
        int32_t cse_var_7 = (((ax1_2 * 256) + (ax2_2 * 128)) + ax3_2);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_7] = (((int32_t*)DepthwiseConv2d_let)[cse_var_7] - 128);
      }
    }
  }
  for (int32_t i1_2 = 0; i1_2 < 2; ++i1_2) {
    for (int32_t i2_2 = 0; i2_2 < 2; ++i2_2) {
      for (int32_t i3_2 = 0; i3_2 < 128; ++i3_2) {
        int32_t cse_var_8 = (((i1_2 * 256) + (i2_2 * 128)) + i3_2);
        int32_t v_ = ((int32_t*)DepthwiseConv2d_let)[cse_var_8];
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_8] = ((v__1) > (-128) ? (v__1) : (-128));
      }
    }
  }
  for (int32_t ax1_3 = 0; ax1_3 < 2; ++ax1_3) {
    for (int32_t ax2_3 = 0; ax2_3 < 2; ++ax2_3) {
      for (int32_t ax3_3 = 0; ax3_3 < 128; ++ax3_3) {
        int32_t cse_var_9 = (((ax1_3 * 256) + (ax2_3 * 128)) + ax3_3);
        T_cast[cse_var_9] = ((int8_t)((int32_t*)DepthwiseConv2d_let)[cse_var_9]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_24(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_86_var, uint8_t* global_workspace_87_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED v8 HW-REQUANT] 1x1 conv: 128->256 channels, 4 spatial positions
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_86_var[241152]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_86_var[243200]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_86_var[245248]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_86_var[237056]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_86_var[0]);

  // Safe copy: TVM may alias input/output workspace buffers
  static int8_t _inp[512];
  for (int32_t _i = 0; _i < 512; _i++) _inp[_i] = p0[_i];

  // Set per-layer zero-point once. The helper is provided by conv_accel.h.
  accel_set_output_zp(-128);

  for (int32_t tile = 0; tile < 4; tile++) {
    int32_t oc_base = tile * 64;
    int32_t oc_count = 64;
    if (oc_base + oc_count > 256) oc_count = 256 - oc_base;

    // Pack weights for this tile (relayout from [rc][oc] to [oc][rc])
    static int8_t rw[8192];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      for (int32_t rc = 0; rc < 128; rc++)
        rw[oc * 128 + rc] = weights[rc * 256 + oc_base + oc];
    }
    accel_spad_write(0x080, rw, oc_count * 128);

    // Pack params for this tile: 16 bytes per OC.
    //   word 0: scale (high 32) and bias (low 32)
    //   word 1: zero  (high 32) and shift (low 32)
    static int32_t params[64 * 4];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      int32_t ax3 = oc_base + oc;
      params[oc*4 + 0] = (conv_sub[ax3] - conv_const[ax3]);         // bias
      params[oc*4 + 1] = quant_scale[ax3];      // scale
      params[oc*4 + 2] = quant_shift[ax3] + 31; // shift
      params[oc*4 + 3] = 0;                     // reserved
    }
    accel_spad_write(0x2180, (int8_t*)params, oc_count * 16);

    for (int32_t sp = 0; sp < 4; sp++) {
      accel_spad_write(0x000, &_inp[sp * 128], 128);
      hw_multi_dot_requant(0x000, 0x080, 0x2080,
                           0x2180, 128, oc_count);
      accel_unpack_i8_outputs(&T_cast[(sp * 256) + oc_base],
                              0x2080, oc_count);
    }
  }
  return 0;

#else

  void* fused_nn_conv2d_subtract_add_constant_77_let = (&(global_const_workspace_86_var[241152]));
  void* fused_nn_conv2d_subtract_add_constant_76_let = (&(global_const_workspace_86_var[242176]));
  void* fused_nn_conv2d_subtract_add_constant_75_let = (&(global_const_workspace_86_var[243200]));
  void* fused_nn_conv2d_constant_25_let = (&(global_const_workspace_86_var[245248]));
  void* fused_nn_conv2d_subtract_constant_25_let = (&(global_const_workspace_86_var[237056]));
  void* fused_constant_29_let = (&(global_const_workspace_86_var[0]));
  void* pad_temp_let = (&(global_workspace_87_var[5120]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 2; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 2; ++i2) {
      for (int32_t i3 = 0; i3 < 128; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 256) + (i2 * 128)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 4; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_87_var[5632]));
    for (int32_t ax3_outer = 0; ax3_outer < 4; ++ax3_outer) {
      for (int32_t ff = 0; ff < 64; ++ff) {
        ((int32_t*)conv2d_nhwc_let)[ff] = 0;
        for (int32_t rc = 0; rc < 128; ++rc) {
          ((int32_t*)conv2d_nhwc_let)[ff] = (((int32_t*)conv2d_nhwc_let)[ff] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 128) + rc)]) * ((int32_t)((int8_t*)fused_constant_29_let)[(((rc * 256) + (ax3_outer * 64)) + ff)])));
        }
      }
      for (int32_t ax3_inner = 0; ax3_inner < 64; ++ax3_inner) {
        int32_t cse_var_3 = (ax3_outer * 64);
        int32_t cse_var_2 = (cse_var_3 + ax3_inner);
        int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[ax3_inner] + ((int32_t*)fused_nn_conv2d_subtract_constant_25_let)[cse_var_2]) - ((int32_t*)fused_nn_conv2d_constant_25_let)[cse_var_2])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_75_let)[cse_var_2])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_77_let)[cse_var_2] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_77_let)[cse_var_2] + 31)))) - 128;
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        T_cast[(((ax0_ax1_fused_ax2_fused * 256) + cse_var_3) + ax3_inner)] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
      }
    }
  }
  return 0;

#endif
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_3(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_14_var, uint8_t* global_workspace_15_var) {
  void* fused_nn_conv2d_subtract_add_constant_11_let = (&(global_const_workspace_14_var[294208]));
  void* fused_nn_conv2d_subtract_add_constant_10_let = (&(global_const_workspace_14_var[294272]));
  void* fused_nn_conv2d_subtract_add_constant_9_let = (&(global_const_workspace_14_var[293952]));
  void* fused_nn_conv2d_subtract_constant_3_let = (&(global_const_workspace_14_var[293824]));
  void* fused_nn_conv2d_constant_3_let = (&(global_const_workspace_14_var[294336]));
  void* fused_constant_3_let = (&(global_const_workspace_14_var[290272]));
  void* PaddedInput_let = (&(global_workspace_15_var[17424]));
  void* DepthwiseConv2d_let = (&(global_workspace_15_var[34848]));
  for (int32_t i1 = 0; i1 < 33; ++i1) {
    for (int32_t i2 = 0; i2 < 33; ++i2) {
      for (int32_t i3 = 0; i3 < 16; ++i3) {
        int32_t cse_var_1 = (((i1 * 528) + (i2 * 16)) + i3);
        ((int8_t*)PaddedInput_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t i = 0; i < 16; ++i) {
    for (int32_t j = 0; j < 16; ++j) {
      for (int32_t c = 0; c < 16; ++c) {
        ((int32_t*)DepthwiseConv2d_let)[(((i * 256) + (j * 16)) + c)] = 0;
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            int32_t cse_var_3 = (dj * 16);
            int32_t cse_var_2 = (((i * 256) + (j * 16)) + c);
            ((int32_t*)DepthwiseConv2d_let)[cse_var_2] = (((int32_t*)DepthwiseConv2d_let)[cse_var_2] + (((int32_t)((int8_t*)PaddedInput_let)[(((((i * 1056) + (di * 528)) + (j * 32)) + cse_var_3) + c)]) * ((int32_t)((int8_t*)fused_constant_3_let)[(((di * 48) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 16; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 16; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 16; ++ax3) {
        int32_t cse_var_4 = (((ax1 * 256) + (ax2 * 16)) + ax3);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_4] = (((int32_t*)DepthwiseConv2d_let)[cse_var_4] - ((int32_t*)fused_nn_conv2d_constant_3_let)[ax3]);
      }
    }
  }
  for (int32_t ax1_1 = 0; ax1_1 < 16; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 16; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 16; ++ax3_1) {
        int32_t cse_var_5 = (((ax1_1 * 256) + (ax2_1 * 16)) + ax3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_5] = (((int32_t*)DepthwiseConv2d_let)[cse_var_5] + ((int32_t*)fused_nn_conv2d_subtract_constant_3_let)[ax3_1]);
      }
    }
  }
  for (int32_t i1_1 = 0; i1_1 < 16; ++i1_1) {
    for (int32_t i2_1 = 0; i2_1 < 16; ++i2_1) {
      for (int32_t i3_1 = 0; i3_1 < 16; ++i3_1) {
        int32_t cse_var_6 = (((i1_1 * 256) + (i2_1 * 16)) + i3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_6] = ((int32_t)(((((int64_t)((int32_t*)DepthwiseConv2d_let)[cse_var_6]) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_9_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_11_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_11_let)[i3_1] + 31))));
      }
    }
  }
  for (int32_t ax1_2 = 0; ax1_2 < 16; ++ax1_2) {
    for (int32_t ax2_2 = 0; ax2_2 < 16; ++ax2_2) {
      for (int32_t ax3_2 = 0; ax3_2 < 16; ++ax3_2) {
        int32_t cse_var_7 = (((ax1_2 * 256) + (ax2_2 * 16)) + ax3_2);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_7] = (((int32_t*)DepthwiseConv2d_let)[cse_var_7] - 128);
      }
    }
  }
  for (int32_t i1_2 = 0; i1_2 < 16; ++i1_2) {
    for (int32_t i2_2 = 0; i2_2 < 16; ++i2_2) {
      for (int32_t i3_2 = 0; i3_2 < 16; ++i3_2) {
        int32_t cse_var_8 = (((i1_2 * 256) + (i2_2 * 16)) + i3_2);
        int32_t v_ = ((int32_t*)DepthwiseConv2d_let)[cse_var_8];
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_8] = ((v__1) > (-128) ? (v__1) : (-128));
      }
    }
  }
  for (int32_t ax1_3 = 0; ax1_3 < 16; ++ax1_3) {
    for (int32_t ax2_3 = 0; ax2_3 < 16; ++ax2_3) {
      for (int32_t ax3_3 = 0; ax3_3 < 16; ++ax3_3) {
        int32_t cse_var_9 = (((ax1_3 * 256) + (ax2_3 * 16)) + ax3_3);
        T_cast[cse_var_9] = ((int8_t)((int32_t*)DepthwiseConv2d_let)[cse_var_9]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_4(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_16_var, uint8_t* global_workspace_17_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED v8 HW-REQUANT] 1x1 conv: 16->32 channels, 256 spatial positions
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_16_var[292592]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_16_var[292848]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_16_var[293360]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_16_var[290800]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_16_var[282240]);

  // Safe copy: TVM may alias input/output workspace buffers
  static int8_t _inp[4096];
  for (int32_t _i = 0; _i < 4096; _i++) _inp[_i] = p0[_i];

  // Set per-layer zero-point once. The helper is provided by conv_accel.h.
  accel_set_output_zp(-128);

  for (int32_t tile = 0; tile < 1; tile++) {
    int32_t oc_base = tile * 32;
    int32_t oc_count = 32;
    if (oc_base + oc_count > 32) oc_count = 32 - oc_base;

    // Pack weights for this tile (relayout from [rc][oc] to [oc][rc])
    static int8_t rw[512];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      for (int32_t rc = 0; rc < 16; rc++)
        rw[oc * 16 + rc] = weights[rc * 32 + oc_base + oc];
    }
    accel_spad_write(0x010, rw, oc_count * 16);

    // Pack params for this tile: 16 bytes per OC.
    //   word 0: scale (high 32) and bias (low 32)
    //   word 1: zero  (high 32) and shift (low 32)
    static int32_t params[32 * 4];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      int32_t ax3 = oc_base + oc;
      params[oc*4 + 0] = (conv_sub[ax3] - conv_const[ax3]);         // bias
      params[oc*4 + 1] = quant_scale[ax3];      // scale
      params[oc*4 + 2] = quant_shift[ax3] + 31; // shift
      params[oc*4 + 3] = 0;                     // reserved
    }
    accel_spad_write(0x290, (int8_t*)params, oc_count * 16);

    for (int32_t sp = 0; sp < 256; sp++) {
      accel_spad_write(0x000, &_inp[sp * 16], 16);
      hw_multi_dot_requant(0x000, 0x010, 0x210,
                           0x290, 16, oc_count);
      accel_unpack_i8_outputs(&T_cast[(sp * 32) + oc_base],
                              0x210, oc_count);
    }
  }
  return 0;

#else

  void* fused_nn_conv2d_subtract_add_constant_14_let = (&(global_const_workspace_16_var[292592]));
  void* fused_nn_conv2d_subtract_add_constant_13_let = (&(global_const_workspace_16_var[292720]));
  void* fused_nn_conv2d_subtract_add_constant_12_let = (&(global_const_workspace_16_var[292848]));
  void* fused_nn_conv2d_constant_4_let = (&(global_const_workspace_16_var[293360]));
  void* fused_nn_conv2d_subtract_constant_4_let = (&(global_const_workspace_16_var[290800]));
  void* fused_constant_4_let = (&(global_const_workspace_16_var[282240]));
  void* pad_temp_let = (&(global_workspace_17_var[18560]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 16; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 16; ++i2) {
      for (int32_t i3 = 0; i3 < 16; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 256) + (i2 * 16)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 256; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_17_var[22656]));
    for (int32_t ax3 = 0; ax3 < 32; ++ax3) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 16; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 16) + rc)]) * ((int32_t)((int8_t*)fused_constant_4_let)[((rc * 32) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_4_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_4_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_12_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_14_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_14_let)[ax3] + 31)))) - 128;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_cast[((ax0_ax1_fused_ax2_fused * 32) + ax3)] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
    }
  }
  return 0;

#endif
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_5(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_20_var, uint8_t* global_workspace_21_var) {
  void* fused_nn_conv2d_subtract_add_constant_17_let = (&(global_const_workspace_20_var[292208]));
  void* fused_nn_conv2d_subtract_add_constant_16_let = (&(global_const_workspace_20_var[292336]));
  void* fused_nn_conv2d_subtract_add_constant_15_let = (&(global_const_workspace_20_var[292464]));
  void* fused_nn_conv2d_subtract_constant_5_let = (&(global_const_workspace_20_var[290672]));
  void* fused_nn_conv2d_constant_5_let = (&(global_const_workspace_20_var[293232]));
  void* fused_constant_5_let = (&(global_const_workspace_20_var[284640]));
  void* PaddedInput_let = (&(global_workspace_21_var[32768]));
  void* DepthwiseConv2d_let = (&(global_workspace_21_var[0]));
  for (int32_t i1 = 0; i1 < 18; ++i1) {
    for (int32_t i2 = 0; i2 < 18; ++i2) {
      for (int32_t i3 = 0; i3 < 32; ++i3) {
        int32_t cse_var_1 = (((i1 * 576) + (i2 * 32)) + i3);
        ((int8_t*)PaddedInput_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t i = 0; i < 16; ++i) {
    for (int32_t j = 0; j < 16; ++j) {
      for (int32_t c = 0; c < 32; ++c) {
        ((int32_t*)DepthwiseConv2d_let)[(((i * 512) + (j * 32)) + c)] = 0;
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            int32_t cse_var_4 = (j * 32);
            int32_t cse_var_3 = (dj * 32);
            int32_t cse_var_2 = (((i * 512) + cse_var_4) + c);
            ((int32_t*)DepthwiseConv2d_let)[cse_var_2] = (((int32_t*)DepthwiseConv2d_let)[cse_var_2] + (((int32_t)((int8_t*)PaddedInput_let)[(((((i * 576) + (di * 576)) + cse_var_4) + cse_var_3) + c)]) * ((int32_t)((int8_t*)fused_constant_5_let)[(((di * 96) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 16; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 16; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 32; ++ax3) {
        int32_t cse_var_5 = (((ax1 * 512) + (ax2 * 32)) + ax3);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_5] = (((int32_t*)DepthwiseConv2d_let)[cse_var_5] - ((int32_t*)fused_nn_conv2d_constant_5_let)[ax3]);
      }
    }
  }
  for (int32_t ax1_1 = 0; ax1_1 < 16; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 16; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 32; ++ax3_1) {
        int32_t cse_var_6 = (((ax1_1 * 512) + (ax2_1 * 32)) + ax3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_6] = (((int32_t*)DepthwiseConv2d_let)[cse_var_6] + ((int32_t*)fused_nn_conv2d_subtract_constant_5_let)[ax3_1]);
      }
    }
  }
  for (int32_t i1_1 = 0; i1_1 < 16; ++i1_1) {
    for (int32_t i2_1 = 0; i2_1 < 16; ++i2_1) {
      for (int32_t i3_1 = 0; i3_1 < 32; ++i3_1) {
        int32_t cse_var_7 = (((i1_1 * 512) + (i2_1 * 32)) + i3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_7] = ((int32_t)(((((int64_t)((int32_t*)DepthwiseConv2d_let)[cse_var_7]) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_15_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_17_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_17_let)[i3_1] + 31))));
      }
    }
  }
  for (int32_t ax1_2 = 0; ax1_2 < 16; ++ax1_2) {
    for (int32_t ax2_2 = 0; ax2_2 < 16; ++ax2_2) {
      for (int32_t ax3_2 = 0; ax3_2 < 32; ++ax3_2) {
        int32_t cse_var_8 = (((ax1_2 * 512) + (ax2_2 * 32)) + ax3_2);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_8] = (((int32_t*)DepthwiseConv2d_let)[cse_var_8] - 128);
      }
    }
  }
  for (int32_t i1_2 = 0; i1_2 < 16; ++i1_2) {
    for (int32_t i2_2 = 0; i2_2 < 16; ++i2_2) {
      for (int32_t i3_2 = 0; i3_2 < 32; ++i3_2) {
        int32_t cse_var_9 = (((i1_2 * 512) + (i2_2 * 32)) + i3_2);
        int32_t v_ = ((int32_t*)DepthwiseConv2d_let)[cse_var_9];
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_9] = ((v__1) > (-128) ? (v__1) : (-128));
      }
    }
  }
  for (int32_t ax1_3 = 0; ax1_3 < 16; ++ax1_3) {
    for (int32_t ax2_3 = 0; ax2_3 < 16; ++ax2_3) {
      for (int32_t ax3_3 = 0; ax3_3 < 32; ++ax3_3) {
        int32_t cse_var_10 = (((ax1_3 * 512) + (ax2_3 * 32)) + ax3_3);
        T_cast[cse_var_10] = ((int8_t)((int32_t*)DepthwiseConv2d_let)[cse_var_10]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_6(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_22_var, uint8_t* global_workspace_23_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED v8 HW-REQUANT] 1x1 conv: 32->32 channels, 256 spatial positions
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_22_var[291824]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_22_var[292080]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_22_var[293104]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_22_var[290544]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_22_var[248320]);

  // Safe copy: TVM may alias input/output workspace buffers
  static int8_t _inp[8192];
  for (int32_t _i = 0; _i < 8192; _i++) _inp[_i] = p0[_i];

  // Set per-layer zero-point once. The helper is provided by conv_accel.h.
  accel_set_output_zp(-128);

  for (int32_t tile = 0; tile < 1; tile++) {
    int32_t oc_base = tile * 32;
    int32_t oc_count = 32;
    if (oc_base + oc_count > 32) oc_count = 32 - oc_base;

    // Pack weights for this tile (relayout from [rc][oc] to [oc][rc])
    static int8_t rw[1024];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      for (int32_t rc = 0; rc < 32; rc++)
        rw[oc * 32 + rc] = weights[rc * 32 + oc_base + oc];
    }
    accel_spad_write(0x020, rw, oc_count * 32);

    // Pack params for this tile: 16 bytes per OC.
    //   word 0: scale (high 32) and bias (low 32)
    //   word 1: zero  (high 32) and shift (low 32)
    static int32_t params[32 * 4];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      int32_t ax3 = oc_base + oc;
      params[oc*4 + 0] = (conv_sub[ax3] - conv_const[ax3]);         // bias
      params[oc*4 + 1] = quant_scale[ax3];      // scale
      params[oc*4 + 2] = quant_shift[ax3] + 31; // shift
      params[oc*4 + 3] = 0;                     // reserved
    }
    accel_spad_write(0x4A0, (int8_t*)params, oc_count * 16);

    for (int32_t sp = 0; sp < 256; sp++) {
      accel_spad_write(0x000, &_inp[sp * 32], 32);
      hw_multi_dot_requant(0x000, 0x020, 0x420,
                           0x4A0, 32, oc_count);
      accel_unpack_i8_outputs(&T_cast[(sp * 32) + oc_base],
                              0x420, oc_count);
    }
  }
  return 0;

#else

  void* fused_nn_conv2d_subtract_add_constant_20_let = (&(global_const_workspace_22_var[291824]));
  void* fused_nn_conv2d_subtract_add_constant_19_let = (&(global_const_workspace_22_var[291952]));
  void* fused_nn_conv2d_subtract_add_constant_18_let = (&(global_const_workspace_22_var[292080]));
  void* fused_nn_conv2d_constant_6_let = (&(global_const_workspace_22_var[293104]));
  void* fused_nn_conv2d_subtract_constant_6_let = (&(global_const_workspace_22_var[290544]));
  void* fused_constant_6_let = (&(global_const_workspace_22_var[248320]));
  void* pad_temp_let = (&(global_workspace_23_var[17440]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 16; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 16; ++i2) {
      for (int32_t i3 = 0; i3 < 32; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 512) + (i2 * 32)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 256; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_23_var[25632]));
    for (int32_t ax3 = 0; ax3 < 32; ++ax3) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 32; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 32) + rc)]) * ((int32_t)((int8_t*)fused_constant_6_let)[((rc * 32) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_6_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_6_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_18_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_20_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_20_let)[ax3] + 31)))) - 128;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_cast[((ax0_ax1_fused_ax2_fused * 32) + ax3)] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
    }
  }
  return 0;

#endif
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_7(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_26_var, uint8_t* global_workspace_27_var) {
  void* fused_nn_conv2d_subtract_add_constant_23_let = (&(global_const_workspace_26_var[291440]));
  void* fused_nn_conv2d_subtract_add_constant_22_let = (&(global_const_workspace_26_var[291568]));
  void* fused_nn_conv2d_subtract_add_constant_21_let = (&(global_const_workspace_26_var[291696]));
  void* fused_nn_conv2d_subtract_constant_7_let = (&(global_const_workspace_26_var[290416]));
  void* fused_nn_conv2d_constant_7_let = (&(global_const_workspace_26_var[292976]));
  void* fused_constant_7_let = (&(global_const_workspace_26_var[284352]));
  void* PaddedInput_let = (&(global_workspace_27_var[9248]));
  void* DepthwiseConv2d_let = (&(global_workspace_27_var[18496]));
  for (int32_t i1 = 0; i1 < 17; ++i1) {
    for (int32_t i2 = 0; i2 < 17; ++i2) {
      for (int32_t i3 = 0; i3 < 32; ++i3) {
        int32_t cse_var_1 = (((i1 * 544) + (i2 * 32)) + i3);
        ((int8_t*)PaddedInput_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t i = 0; i < 8; ++i) {
    for (int32_t j = 0; j < 8; ++j) {
      for (int32_t c = 0; c < 32; ++c) {
        ((int32_t*)DepthwiseConv2d_let)[(((i * 256) + (j * 32)) + c)] = 0;
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            int32_t cse_var_3 = (dj * 32);
            int32_t cse_var_2 = (((i * 256) + (j * 32)) + c);
            ((int32_t*)DepthwiseConv2d_let)[cse_var_2] = (((int32_t*)DepthwiseConv2d_let)[cse_var_2] + (((int32_t)((int8_t*)PaddedInput_let)[(((((i * 1088) + (di * 544)) + (j * 64)) + cse_var_3) + c)]) * ((int32_t)((int8_t*)fused_constant_7_let)[(((di * 96) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 8; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 8; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 32; ++ax3) {
        int32_t cse_var_4 = (((ax1 * 256) + (ax2 * 32)) + ax3);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_4] = (((int32_t*)DepthwiseConv2d_let)[cse_var_4] - ((int32_t*)fused_nn_conv2d_constant_7_let)[ax3]);
      }
    }
  }
  for (int32_t ax1_1 = 0; ax1_1 < 8; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 8; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 32; ++ax3_1) {
        int32_t cse_var_5 = (((ax1_1 * 256) + (ax2_1 * 32)) + ax3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_5] = (((int32_t*)DepthwiseConv2d_let)[cse_var_5] + ((int32_t*)fused_nn_conv2d_subtract_constant_7_let)[ax3_1]);
      }
    }
  }
  for (int32_t i1_1 = 0; i1_1 < 8; ++i1_1) {
    for (int32_t i2_1 = 0; i2_1 < 8; ++i2_1) {
      for (int32_t i3_1 = 0; i3_1 < 32; ++i3_1) {
        int32_t cse_var_6 = (((i1_1 * 256) + (i2_1 * 32)) + i3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_6] = ((int32_t)(((((int64_t)((int32_t*)DepthwiseConv2d_let)[cse_var_6]) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_21_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_23_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_23_let)[i3_1] + 31))));
      }
    }
  }
  for (int32_t ax1_2 = 0; ax1_2 < 8; ++ax1_2) {
    for (int32_t ax2_2 = 0; ax2_2 < 8; ++ax2_2) {
      for (int32_t ax3_2 = 0; ax3_2 < 32; ++ax3_2) {
        int32_t cse_var_7 = (((ax1_2 * 256) + (ax2_2 * 32)) + ax3_2);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_7] = (((int32_t*)DepthwiseConv2d_let)[cse_var_7] - 128);
      }
    }
  }
  for (int32_t i1_2 = 0; i1_2 < 8; ++i1_2) {
    for (int32_t i2_2 = 0; i2_2 < 8; ++i2_2) {
      for (int32_t i3_2 = 0; i3_2 < 32; ++i3_2) {
        int32_t cse_var_8 = (((i1_2 * 256) + (i2_2 * 32)) + i3_2);
        int32_t v_ = ((int32_t*)DepthwiseConv2d_let)[cse_var_8];
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_8] = ((v__1) > (-128) ? (v__1) : (-128));
      }
    }
  }
  for (int32_t ax1_3 = 0; ax1_3 < 8; ++ax1_3) {
    for (int32_t ax2_3 = 0; ax2_3 < 8; ++ax2_3) {
      for (int32_t ax3_3 = 0; ax3_3 < 32; ++ax3_3) {
        int32_t cse_var_9 = (((ax1_3 * 256) + (ax2_3 * 32)) + ax3_3);
        T_cast[cse_var_9] = ((int8_t)((int32_t*)DepthwiseConv2d_let)[cse_var_9]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_8(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_28_var, uint8_t* global_workspace_29_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED v8 HW-REQUANT] 1x1 conv: 32->64 channels, 64 spatial positions
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_28_var[288256]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_28_var[288768]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_28_var[289280]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_28_var[285184]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_28_var[227072]);

  // Safe copy: TVM may alias input/output workspace buffers
  static int8_t _inp[2048];
  for (int32_t _i = 0; _i < 2048; _i++) _inp[_i] = p0[_i];

  // Set per-layer zero-point once. The helper is provided by conv_accel.h.
  accel_set_output_zp(-128);

  for (int32_t tile = 0; tile < 1; tile++) {
    int32_t oc_base = tile * 64;
    int32_t oc_count = 64;
    if (oc_base + oc_count > 64) oc_count = 64 - oc_base;

    // Pack weights for this tile (relayout from [rc][oc] to [oc][rc])
    static int8_t rw[2048];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      for (int32_t rc = 0; rc < 32; rc++)
        rw[oc * 32 + rc] = weights[rc * 64 + oc_base + oc];
    }
    accel_spad_write(0x020, rw, oc_count * 32);

    // Pack params for this tile: 16 bytes per OC.
    //   word 0: scale (high 32) and bias (low 32)
    //   word 1: zero  (high 32) and shift (low 32)
    static int32_t params[64 * 4];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      int32_t ax3 = oc_base + oc;
      params[oc*4 + 0] = (conv_sub[ax3] - conv_const[ax3]);         // bias
      params[oc*4 + 1] = quant_scale[ax3];      // scale
      params[oc*4 + 2] = quant_shift[ax3] + 31; // shift
      params[oc*4 + 3] = 0;                     // reserved
    }
    accel_spad_write(0x920, (int8_t*)params, oc_count * 16);

    for (int32_t sp = 0; sp < 64; sp++) {
      accel_spad_write(0x000, &_inp[sp * 32], 32);
      hw_multi_dot_requant(0x000, 0x020, 0x820,
                           0x920, 32, oc_count);
      accel_unpack_i8_outputs(&T_cast[(sp * 64) + oc_base],
                              0x820, oc_count);
    }
  }
  return 0;

#else

  void* fused_nn_conv2d_subtract_add_constant_26_let = (&(global_const_workspace_28_var[288256]));
  void* fused_nn_conv2d_subtract_add_constant_25_let = (&(global_const_workspace_28_var[288512]));
  void* fused_nn_conv2d_subtract_add_constant_24_let = (&(global_const_workspace_28_var[288768]));
  void* fused_nn_conv2d_constant_8_let = (&(global_const_workspace_28_var[289280]));
  void* fused_nn_conv2d_subtract_constant_8_let = (&(global_const_workspace_28_var[285184]));
  void* fused_constant_8_let = (&(global_const_workspace_28_var[227072]));
  void* pad_temp_let = (&(global_workspace_29_var[10496]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 8; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 8; ++i2) {
      for (int32_t i3 = 0; i3 < 32; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 256) + (i2 * 32)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 64; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_29_var[12544]));
    for (int32_t ff = 0; ff < 64; ++ff) {
      ((int32_t*)conv2d_nhwc_let)[ff] = 0;
      for (int32_t rc = 0; rc < 32; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[ff] = (((int32_t*)conv2d_nhwc_let)[ff] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 32) + rc)]) * ((int32_t)((int8_t*)fused_constant_8_let)[((rc * 64) + ff)])));
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 64; ++ax3_inner) {
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[ax3_inner] + ((int32_t*)fused_nn_conv2d_subtract_constant_8_let)[ax3_inner]) - ((int32_t*)fused_nn_conv2d_constant_8_let)[ax3_inner])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_24_let)[ax3_inner])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_26_let)[ax3_inner] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_26_let)[ax3_inner] + 31)))) - 128;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_cast[((ax0_ax1_fused_ax2_fused * 64) + ax3_inner)] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
    }
  }
  return 0;

#endif
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_9(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_32_var, uint8_t* global_workspace_33_var) {
  void* fused_nn_conv2d_subtract_add_constant_29_let = (&(global_const_workspace_32_var[287488]));
  void* fused_nn_conv2d_subtract_add_constant_28_let = (&(global_const_workspace_32_var[287744]));
  void* fused_nn_conv2d_subtract_add_constant_27_let = (&(global_const_workspace_32_var[288000]));
  void* fused_nn_conv2d_subtract_constant_9_let = (&(global_const_workspace_32_var[284928]));
  void* fused_nn_conv2d_constant_9_let = (&(global_const_workspace_32_var[289024]));
  void* fused_constant_9_let = (&(global_const_workspace_32_var[249344]));
  void* PaddedInput_let = (&(global_workspace_33_var[16384]));
  void* DepthwiseConv2d_let = (&(global_workspace_33_var[0]));
  for (int32_t i1 = 0; i1 < 10; ++i1) {
    for (int32_t i2 = 0; i2 < 10; ++i2) {
      for (int32_t i3 = 0; i3 < 64; ++i3) {
        int32_t cse_var_1 = (((i1 * 640) + (i2 * 64)) + i3);
        ((int8_t*)PaddedInput_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t i = 0; i < 8; ++i) {
    for (int32_t j = 0; j < 8; ++j) {
      for (int32_t c = 0; c < 64; ++c) {
        ((int32_t*)DepthwiseConv2d_let)[(((i * 512) + (j * 64)) + c)] = 0;
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            int32_t cse_var_4 = (j * 64);
            int32_t cse_var_3 = (dj * 64);
            int32_t cse_var_2 = (((i * 512) + cse_var_4) + c);
            ((int32_t*)DepthwiseConv2d_let)[cse_var_2] = (((int32_t*)DepthwiseConv2d_let)[cse_var_2] + (((int32_t)((int8_t*)PaddedInput_let)[(((((i * 640) + (di * 640)) + cse_var_4) + cse_var_3) + c)]) * ((int32_t)((int8_t*)fused_constant_9_let)[(((di * 192) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 8; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 8; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 64; ++ax3) {
        int32_t cse_var_5 = (((ax1 * 512) + (ax2 * 64)) + ax3);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_5] = (((int32_t*)DepthwiseConv2d_let)[cse_var_5] - ((int32_t*)fused_nn_conv2d_constant_9_let)[ax3]);
      }
    }
  }
  for (int32_t ax1_1 = 0; ax1_1 < 8; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 8; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 64; ++ax3_1) {
        int32_t cse_var_6 = (((ax1_1 * 512) + (ax2_1 * 64)) + ax3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_6] = (((int32_t*)DepthwiseConv2d_let)[cse_var_6] + ((int32_t*)fused_nn_conv2d_subtract_constant_9_let)[ax3_1]);
      }
    }
  }
  for (int32_t i1_1 = 0; i1_1 < 8; ++i1_1) {
    for (int32_t i2_1 = 0; i2_1 < 8; ++i2_1) {
      for (int32_t i3_1 = 0; i3_1 < 64; ++i3_1) {
        int32_t cse_var_7 = (((i1_1 * 512) + (i2_1 * 64)) + i3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_7] = ((int32_t)(((((int64_t)((int32_t*)DepthwiseConv2d_let)[cse_var_7]) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_27_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_29_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_29_let)[i3_1] + 31))));
      }
    }
  }
  for (int32_t ax1_2 = 0; ax1_2 < 8; ++ax1_2) {
    for (int32_t ax2_2 = 0; ax2_2 < 8; ++ax2_2) {
      for (int32_t ax3_2 = 0; ax3_2 < 64; ++ax3_2) {
        int32_t cse_var_8 = (((ax1_2 * 512) + (ax2_2 * 64)) + ax3_2);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_8] = (((int32_t*)DepthwiseConv2d_let)[cse_var_8] - 128);
      }
    }
  }
  for (int32_t i1_2 = 0; i1_2 < 8; ++i1_2) {
    for (int32_t i2_2 = 0; i2_2 < 8; ++i2_2) {
      for (int32_t i3_2 = 0; i3_2 < 64; ++i3_2) {
        int32_t cse_var_9 = (((i1_2 * 512) + (i2_2 * 64)) + i3_2);
        int32_t v_ = ((int32_t*)DepthwiseConv2d_let)[cse_var_9];
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_9] = ((v__1) > (-128) ? (v__1) : (-128));
      }
    }
  }
  for (int32_t ax1_3 = 0; ax1_3 < 8; ++ax1_3) {
    for (int32_t ax2_3 = 0; ax2_3 < 8; ++ax2_3) {
      for (int32_t ax3_3 = 0; ax3_3 < 64; ++ax3_3) {
        int32_t cse_var_10 = (((ax1_3 * 512) + (ax2_3 * 64)) + ax3_3);
        T_cast[cse_var_10] = ((int8_t)((int32_t*)DepthwiseConv2d_let)[cse_var_10]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_6_var, uint8_t* global_workspace_7_var) {
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 34; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 34; ++ax2) {
      for (int32_t ax3_inner = 0; ax3_inner < 8; ++ax3_inner) {
        int32_t cse_var_1 = (ax2 * 8);
        T_pad[(((ax0_ax1_fused * 272) + cse_var_1) + ax3_inner)] = (((((1 <= ax0_ax1_fused) && (ax0_ax1_fused < 33)) && (1 <= ax2)) && (ax2 < 33)) ? p0[((((ax0_ax1_fused * 256) + cse_var_1) + ax3_inner) - 264)] : (int8_t)-128);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_1(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_12_var, uint8_t* global_workspace_13_var) {
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 33; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 33; ++ax2) {
      for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
        int32_t cse_var_1 = (ax2 * 16);
        T_pad[(((ax0_ax1_fused * 528) + cse_var_1) + ax3_inner)] = (((ax0_ax1_fused < 32) && (ax2 < 32)) ? p0[(((ax0_ax1_fused * 512) + cse_var_1) + ax3_inner)] : (int8_t)-128);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_2(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_18_var, uint8_t* global_workspace_19_var) {
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 18; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 18; ++ax2) {
      for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
        for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
          int32_t cse_var_2 = (ax2 * 32);
          int32_t cse_var_1 = (ax3_outer * 16);
          T_pad[((((ax0_ax1_fused * 576) + cse_var_2) + cse_var_1) + ax3_inner)] = (((((1 <= ax0_ax1_fused) && (ax0_ax1_fused < 17)) && (1 <= ax2)) && (ax2 < 17)) ? p0[(((((ax0_ax1_fused * 512) + cse_var_2) + cse_var_1) + ax3_inner) - 544)] : (int8_t)-128);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_3(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_24_var, uint8_t* global_workspace_25_var) {
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 17; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 17; ++ax2) {
      for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
        for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
          int32_t cse_var_2 = (ax2 * 32);
          int32_t cse_var_1 = (ax3_outer * 16);
          T_pad[((((ax0_ax1_fused * 544) + cse_var_2) + cse_var_1) + ax3_inner)] = (((ax0_ax1_fused < 16) && (ax2 < 16)) ? p0[((((ax0_ax1_fused * 512) + cse_var_2) + cse_var_1) + ax3_inner)] : (int8_t)-128);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_4(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_30_var, uint8_t* global_workspace_31_var) {
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 10; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 10; ++ax2) {
      for (int32_t ax3_outer = 0; ax3_outer < 4; ++ax3_outer) {
        for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
          int32_t cse_var_2 = (ax2 * 64);
          int32_t cse_var_1 = (ax3_outer * 16);
          T_pad[((((ax0_ax1_fused * 640) + cse_var_2) + cse_var_1) + ax3_inner)] = (((((1 <= ax0_ax1_fused) && (ax0_ax1_fused < 9)) && (1 <= ax2)) && (ax2 < 9)) ? p0[(((((ax0_ax1_fused * 512) + cse_var_2) + cse_var_1) + ax3_inner) - 576)] : (int8_t)-128);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_5(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_36_var, uint8_t* global_workspace_37_var) {
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 9; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 9; ++ax2) {
      for (int32_t ax3_outer = 0; ax3_outer < 4; ++ax3_outer) {
        for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
          int32_t cse_var_2 = (ax2 * 64);
          int32_t cse_var_1 = (ax3_outer * 16);
          T_pad[((((ax0_ax1_fused * 576) + cse_var_2) + cse_var_1) + ax3_inner)] = (((ax0_ax1_fused < 8) && (ax2 < 8)) ? p0[((((ax0_ax1_fused * 512) + cse_var_2) + cse_var_1) + ax3_inner)] : (int8_t)-128);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_6(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_40_var, uint8_t* global_workspace_41_var) {
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 6; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 6; ++ax2) {
      for (int32_t ax3_outer = 0; ax3_outer < 4; ++ax3_outer) {
        for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
          int32_t cse_var_2 = (ax2 * 64);
          int32_t cse_var_1 = (ax3_outer * 16);
          T_pad[((((ax0_ax1_fused * 384) + cse_var_2) + cse_var_1) + ax3_inner)] = (((((1 <= ax0_ax1_fused) && (ax0_ax1_fused < 5)) && (1 <= ax2)) && (ax2 < 5)) ? p0[(((((ax0_ax1_fused * 256) + cse_var_2) + cse_var_1) + ax3_inner) - 320)] : (int8_t)14);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_7(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_60_var, uint8_t* global_workspace_61_var) {
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 6; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 6; ++ax2) {
      for (int32_t ax3_outer = 0; ax3_outer < 8; ++ax3_outer) {
        for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
          int32_t cse_var_2 = (ax2 * 128);
          int32_t cse_var_1 = (ax3_outer * 16);
          T_pad[((((ax0_ax1_fused * 768) + cse_var_2) + cse_var_1) + ax3_inner)] = (((((1 <= ax0_ax1_fused) && (ax0_ax1_fused < 5)) && (1 <= ax2)) && (ax2 < 5)) ? p0[(((((ax0_ax1_fused * 512) + cse_var_2) + cse_var_1) + ax3_inner) - 640)] : (int8_t)-128);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_8(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_82_var, uint8_t* global_workspace_83_var) {
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 5; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 5; ++ax2) {
      for (int32_t ax3_outer = 0; ax3_outer < 8; ++ax3_outer) {
        for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
          int32_t cse_var_2 = (ax2 * 128);
          int32_t cse_var_1 = (ax3_outer * 16);
          T_pad[((((ax0_ax1_fused * 640) + cse_var_2) + cse_var_1) + ax3_inner)] = (((ax0_ax1_fused < 4) && (ax2 < 4)) ? p0[((((ax0_ax1_fused * 512) + cse_var_2) + cse_var_1) + ax3_inner)] : (int8_t)-128);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_9(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_88_var, uint8_t* global_workspace_89_var) {
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 4; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 4; ++ax2) {
      for (int32_t ax3_outer = 0; ax3_outer < 16; ++ax3_outer) {
        for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
          int32_t cse_var_2 = (ax2 * 256);
          int32_t cse_var_1 = (ax3_outer * 16);
          T_pad[((((ax0_ax1_fused * 1024) + cse_var_2) + cse_var_1) + ax3_inner)] = (((((1 <= ax0_ax1_fused) && (ax0_ax1_fused < 3)) && (1 <= ax2)) && (ax2 < 3)) ? p0[(((((ax0_ax1_fused * 512) + cse_var_2) + cse_var_1) + ax3_inner) - 768)] : (int8_t)-128);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_softmax_divide_round_add_clip_cast_subtract_cast_multiply(float* p0, float* T_multiply, uint8_t* global_const_workspace_54_var, uint8_t* global_workspace_55_var) {
  void* T_softmax_maxelem_let = (&(global_workspace_55_var[16288]));
  void* T_softmax_exp_let = (&(global_workspace_55_var[15888]));
  void* T_softmax_expsum_let = (&(global_workspace_55_var[16288]));
  ((float*)T_softmax_maxelem_let)[0] = -3.402823e+38f;
  for (int32_t k = 0; k < 100; ++k) {
    float v_ = ((float*)T_softmax_maxelem_let)[0];
    float v__1 = p0[k];
    ((float*)T_softmax_maxelem_let)[0] = ((v_) > (v__1) ? (v_) : (v__1));
  }
  for (int32_t i1 = 0; i1 < 100; ++i1) {
    ((float*)T_softmax_exp_let)[i1] = expf((p0[i1] - ((float*)T_softmax_maxelem_let)[0]));
  }
  ((float*)T_softmax_expsum_let)[0] = 0.000000e+00f;
  for (int32_t k_1 = 0; k_1 < 100; ++k_1) {
    ((float*)T_softmax_expsum_let)[0] = (((float*)T_softmax_expsum_let)[0] + ((float*)T_softmax_exp_let)[k_1]);
  }
  for (int32_t i1_1 = 0; i1_1 < 100; ++i1_1) {
    ((float*)T_softmax_exp_let)[i1_1] = (((float*)T_softmax_exp_let)[i1_1] / ((float*)T_softmax_expsum_let)[0]);
  }
  for (int32_t ax1 = 0; ax1 < 100; ++ax1) {
    float v__2 = roundf((((float*)T_softmax_exp_let)[ax1] * 2.560000e+02f)) + -1.280000e+02f;
    float v__3 = (v__2) < (1.270000e+02f) ? (v__2) : (1.270000e+02f);
    T_multiply[ax1] = (((float)(((int32_t)((v__3) > (-1.280000e+02f) ? (v__3) : (-1.280000e+02f))) + 128)) * 3.906250e-03f);
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_softmax_divide_round_add_clip_cast_subtract_cast_multiply_1(float* p0, float* T_multiply, uint8_t* global_const_workspace_98_var, uint8_t* global_workspace_99_var) {
  void* T_softmax_maxelem_let = (&(global_workspace_99_var[800]));
  void* T_softmax_exp_let = (&(global_workspace_99_var[400]));
  void* T_softmax_expsum_let = (&(global_workspace_99_var[800]));
  ((float*)T_softmax_maxelem_let)[0] = -3.402823e+38f;
  for (int32_t k = 0; k < 100; ++k) {
    float v_ = ((float*)T_softmax_maxelem_let)[0];
    float v__1 = p0[k];
    ((float*)T_softmax_maxelem_let)[0] = ((v_) > (v__1) ? (v_) : (v__1));
  }
  for (int32_t i1 = 0; i1 < 100; ++i1) {
    ((float*)T_softmax_exp_let)[i1] = expf((p0[i1] - ((float*)T_softmax_maxelem_let)[0]));
  }
  ((float*)T_softmax_expsum_let)[0] = 0.000000e+00f;
  for (int32_t k_1 = 0; k_1 < 100; ++k_1) {
    ((float*)T_softmax_expsum_let)[0] = (((float*)T_softmax_expsum_let)[0] + ((float*)T_softmax_exp_let)[k_1]);
  }
  for (int32_t i1_1 = 0; i1_1 < 100; ++i1_1) {
    ((float*)T_softmax_exp_let)[i1_1] = (((float*)T_softmax_exp_let)[i1_1] / ((float*)T_softmax_expsum_let)[0]);
  }
  for (int32_t ax1 = 0; ax1 < 100; ++ax1) {
    float v__2 = roundf((((float*)T_softmax_exp_let)[ax1] * 2.560000e+02f)) + -1.280000e+02f;
    float v__3 = (v__2) < (1.270000e+02f) ? (v__2) : (1.270000e+02f);
    T_multiply[ax1] = (((float)(((int32_t)((v__3) > (-1.280000e+02f) ? (v__3) : (-1.280000e+02f))) + 128)) * 3.906250e-03f);
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_fixed_point_multiply_add_clip_cast_reshape(int32_t* p0, int8_t* T_reshape, uint8_t* global_const_workspace_46_var, uint8_t* global_workspace_47_var) {
  void* fused_constant_13_let = (&(global_const_workspace_46_var[294800]));
  for (int32_t ax1_outer = 0; ax1_outer < 2; ++ax1_outer) {
    for (int32_t ax1_inner = 0; ax1_inner < 16; ++ax1_inner) {
      int32_t cse_var_1 = ((ax1_outer * 16) + ax1_inner);
      int32_t v_ = ((int32_t)(((((1 != 0) ? (((int64_t)(p0[cse_var_1] - ((int32_t*)fused_constant_13_let)[0])) << ((int64_t)1)) : ((int64_t)(p0[cse_var_1] - ((int32_t*)fused_constant_13_let)[0]))) * (int64_t)2053544599) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31)))) - 128;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_reshape[cse_var_1] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_fixed_point_multiply_add_clip_cast_reshape_1(int32_t* p0, int8_t* T_reshape, uint8_t* global_const_workspace_94_var, uint8_t* global_workspace_95_var) {
  void* fused_constant_31_let = (&(global_const_workspace_94_var[294784]));
  for (int32_t ax1_outer = 0; ax1_outer < 16; ++ax1_outer) {
    for (int32_t ax1_inner = 0; ax1_inner < 16; ++ax1_inner) {
      int32_t cse_var_1 = ((ax1_outer * 16) + ax1_inner);
      int32_t v_ = ((int32_t)(((((1 != 0) ? (((int64_t)(p0[cse_var_1] - ((int32_t*)fused_constant_31_let)[0])) << ((int64_t)1)) : ((int64_t)(p0[cse_var_1] - ((int32_t*)fused_constant_31_let)[0]))) * (int64_t)1230044772) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31)))) + 27;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_reshape[cse_var_1] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default___tvm_main__(float* serving_default_input_1_0_buffer_var, float* StatefulPartitionedCall_1_buffer_var, float* StatefulPartitionedCall_0_buffer_var, uint8_t* global_const_workspace_0_var, uint8_t* global_workspace_1_var) {
  void* sid_43_let = (&(global_workspace_1_var[8192]));
  void* sid_42_let = (&(global_workspace_1_var[0]));
  void* sid_46_let = (&(global_workspace_1_var[8448]));
  void* sid_35_let = (&(global_workspace_1_var[4608]));
  void* sid_41_let = (&(global_workspace_1_var[4608]));
  void* sid_33_let = (&(global_workspace_1_var[0]));
  void* sid_29_let = (&(global_workspace_1_var[4608]));
  void* sid_45_let = (&(global_workspace_1_var[0]));
  void* sid_36_let = (&(global_workspace_1_var[0]));
  void* sid_32_let = (&(global_workspace_1_var[4608]));
  void* sid_31_let = (&(global_workspace_1_var[8704]));
  void* sid_28_let = (&(global_workspace_1_var[15488]));
  void* sid_26_let = (&(global_workspace_1_var[15488]));
  void* sid_25_let = (&(global_workspace_1_var[15888]));
  void* sid_10_let = (&(global_workspace_1_var[32768]));
  void* sid_48_let = (&(global_workspace_1_var[0]));
  void* sid_9_let = (&(global_workspace_1_var[0]));
  void* sid_24_let = (&(global_workspace_1_var[15488]));
  void* sid_34_let = (&(global_workspace_1_var[8704]));
  void* sid_39_let = (&(global_workspace_1_var[0]));
  void* sid_19_let = (&(global_workspace_1_var[14464]));
  void* sid_4_let = (&(global_workspace_1_var[42000]));
  void* sid_13_let = (&(global_workspace_1_var[26688]));
  void* sid_49_let = (&(global_workspace_1_var[0]));
  void* sid_37_let = (&(global_workspace_1_var[8704]));
  void* sid_11_let = (&(global_workspace_1_var[9248]));
  void* sid_47_let = (&(global_workspace_1_var[4096]));
  void* sid_30_let = (&(global_workspace_1_var[0]));
  void* sid_6_let = (&(global_workspace_1_var[0]));
  void* sid_5_let = (&(global_workspace_1_var[17424]));
  void* sid_44_let = (&(global_workspace_1_var[3200]));
  void* sid_8_let = (&(global_workspace_1_var[10368]));
  void* sid_14_let = (&(global_workspace_1_var[6400]));
  void* sid_1_let = (&(global_workspace_1_var[12680]));
  void* sid_21_let = (&(global_workspace_1_var[2304]));
  void* sid_7_let = (&(global_workspace_1_var[51232]));
  void* sid_12_let = (&(global_workspace_1_var[0]));
  void* sid_15_let = (&(global_workspace_1_var[0]));
  void* sid_40_let = (&(global_workspace_1_var[8704]));
  void* sid_52_let = (&(global_workspace_1_var[0]));
  void* sid_3_let = (&(global_workspace_1_var[0]));
  void* sid_17_let = (&(global_workspace_1_var[5184]));
  void* sid_2_let = (&(global_workspace_1_var[12680]));
  void* sid_18_let = (&(global_workspace_1_var[0]));
  void* sid_20_let = (&(global_workspace_1_var[2304]));
  void* sid_22_let = (&(global_workspace_1_var[15488]));
  void* sid_38_let = (&(global_workspace_1_var[4608]));
  void* sid_16_let = (&(global_workspace_1_var[16384]));
  void* sid_51_let = (&(global_workspace_1_var[1024]));
  void* sid_23_let = (&(global_workspace_1_var[16000]));
  void* sid_50_let = (&(global_workspace_1_var[0]));
  if (tvmgen_default_fused_divide_round_add_clip_cast_nn_pad(serving_default_input_1_0_buffer_var, sid_1_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast(sid_1_let, sid_2_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_pad(sid_2_let, sid_3_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_1(sid_3_let, sid_4_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_2(sid_4_let, sid_5_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_pad_1(sid_5_let, sid_6_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_3(sid_6_let, sid_7_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_4(sid_7_let, sid_8_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_pad_2(sid_8_let, sid_9_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_5(sid_9_let, sid_10_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_6(sid_10_let, sid_11_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_pad_3(sid_11_let, sid_12_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_7(sid_12_let, sid_13_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_8(sid_13_let, sid_14_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_pad_4(sid_14_let, sid_15_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_9(sid_15_let, sid_16_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_10(sid_16_let, sid_17_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_pad_5(sid_17_let, sid_18_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_11(sid_18_let, sid_19_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;

  while(*HANDSHAKE != 0xC0);
  clock_ungate_signal();
  while(*HANDSHAKE != 0xCF);

  // if (tvmgen_default_fused_nn_pad_6(sid_19_let, sid_20_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip(sid_20_let, sid_21_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_mean(sid_21_let, sid_22_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_subtract_fixed_point_multiply_add_clip_cast_reshape(sid_22_let, sid_23_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast(sid_23_let, sid_24_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast_1(sid_24_let, sid_25_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_subtract__fa059688879ad8de_(sid_25_let, sid_26_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_softmax_divide_round_add_clip_cast_subtract_cast_multiply(sid_26_let, StatefulPartitionedCall_1_buffer_var, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_clip_cast_subtract_fixed_point_multiply_add_clip_cast(sid_19_let, sid_28_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_12(sid_28_let, sid_29_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_pad_7(sid_29_let, sid_30_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_13(sid_30_let, sid_31_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_14(sid_31_let, sid_32_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_pad_7(sid_32_let, sid_33_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_15(sid_33_let, sid_34_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_16(sid_34_let, sid_35_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_pad_7(sid_35_let, sid_36_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_17(sid_36_let, sid_37_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_18(sid_37_let, sid_38_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_pad_7(sid_38_let, sid_39_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_19(sid_39_let, sid_40_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_20(sid_40_let, sid_41_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_pad_7(sid_41_let, sid_42_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_21(sid_42_let, sid_43_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_22(sid_43_let, sid_44_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_pad_8(sid_44_let, sid_45_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_23(sid_45_let, sid_46_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_24(sid_46_let, sid_47_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_pad_9(sid_47_let, sid_48_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_1(sid_48_let, sid_49_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_mean_1(sid_49_let, sid_50_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_subtract_fixed_point_multiply_add_clip_cast_reshape_1(sid_50_let, sid_51_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_subtract__fa059688879ad8de__1(sid_51_let, sid_52_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_softmax_divide_round_add_clip_cast_subtract_cast_multiply_1(sid_52_let, StatefulPartitionedCall_0_buffer_var, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  return 0;
}

