//#define DUMP_OUTPUTS
//#define INCLUDE_ACCEL
#include "config.h"
#include "clock_ctrl.h"
//#include "conv_accel.h"
// tvm target: c -keys=cpu 
#define TVM_EXPORTS
#include "tvm/runtime/c_runtime_api.h"
#include "tvm/runtime/c_backend_api.h"
#include <math.h>
#include <stdbool.h>
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point__7462b0c1d1f4a4f5_(int8_t* p0, int8_t* p1, int8_t* T_cast, uint8_t* global_const_workspace_12_var, uint8_t* global_workspace_13_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_divide_round_add_clip_cast_nn_pad(float* p0, int8_t* T_pad, uint8_t* global_const_workspace_2_var, uint8_t* global_workspace_3_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_mean(int32_t* p0, int32_t* T_divide, uint8_t* global_const_workspace_28_var, uint8_t* global_workspace_29_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_mean_1(int32_t* p0, int32_t* T_divide, uint8_t* global_const_workspace_50_var, uint8_t* global_workspace_51_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_32_var, uint8_t* global_workspace_33_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast_1(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_34_var, uint8_t* global_workspace_35_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_subtract__fa059688879ad8de_(int8_t* p0, float* T_multiply, uint8_t* global_const_workspace_36_var, uint8_t* global_workspace_37_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_subtract__fa059688879ad8de__1(int8_t* p0, float* T_multiply, uint8_t* global_const_workspace_54_var, uint8_t* global_workspace_55_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip(int8_t* p0, int32_t* compute, uint8_t* global_const_workspace_26_var, uint8_t* global_workspace_27_var);
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
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_2(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_16_var, uint8_t* global_workspace_17_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_3(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_42_var, uint8_t* global_workspace_43_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_subtract_fix_8b7503320bf54f1a_(int8_t* p0, int32_t* T_add, uint8_t* global_const_workspace_20_var, uint8_t* global_workspace_21_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_subtract_fix_8b7503320bf54f1a__1(int8_t* p0, int32_t* T_add, uint8_t* global_const_workspace_46_var, uint8_t* global_workspace_47_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_subtract_fix_d451e3e81cf58779_(int8_t* p0, int32_t* p1, int32_t* compute, uint8_t* global_const_workspace_48_var, uint8_t* global_workspace_49_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_subtract_fix_f03c5364e8b12ad6_(int8_t* p0, int32_t* p1, int8_t* T_cast, uint8_t* global_const_workspace_22_var, uint8_t* global_workspace_23_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_6_var, uint8_t* global_workspace_7_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_1(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_10_var, uint8_t* global_workspace_11_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_2(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_14_var, uint8_t* global_workspace_15_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_3(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_18_var, uint8_t* global_workspace_19_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_4(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_24_var, uint8_t* global_workspace_25_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_5(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_40_var, uint8_t* global_workspace_41_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_6(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_44_var, uint8_t* global_workspace_45_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_softmax_divide_round_add_clip_cast_subtract_cast_multiply(float* p0, float* T_multiply, uint8_t* global_const_workspace_38_var, uint8_t* global_workspace_39_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_softmax_divide_round_add_clip_cast_subtract_cast_multiply_1(float* p0, float* T_multiply, uint8_t* global_const_workspace_56_var, uint8_t* global_workspace_57_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_fixed_point_multiply_add_clip_cast_reshape(int32_t* p0, int8_t* T_reshape, uint8_t* global_const_workspace_30_var, uint8_t* global_workspace_31_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_fixed_point_multiply_add_clip_cast_reshape_1(int32_t* p0, int8_t* T_reshape, uint8_t* global_const_workspace_52_var, uint8_t* global_workspace_53_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default___tvm_main__(float* serving_default_image_0_buffer_var, float* StatefulPartitionedCall_1_buffer_var, float* StatefulPartitionedCall_0_buffer_var, uint8_t* global_const_workspace_0_var, uint8_t* global_workspace_1_var);
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
TVM_DLL int32_t tvmgen_default_fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point__7462b0c1d1f4a4f5_(int8_t* p0, int8_t* p1, int8_t* T_cast, uint8_t* global_const_workspace_12_var, uint8_t* global_workspace_13_var) {
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_let = (&(global_const_workspace_12_var[158224]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_2_let = (&(global_const_workspace_12_var[157872]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_1_let = (&(global_const_workspace_12_var[157936]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_let = (&(global_const_workspace_12_var[158000]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_constant_let = (&(global_const_workspace_12_var[158064]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_constant_let = (&(global_const_workspace_12_var[157808]));
  void* fused_cast_constant_let = (&(global_const_workspace_12_var[158240]));
  void* fused_cast_subtract_fixed_point_multiply_add_constant_let = (&(global_const_workspace_12_var[140800]));
  void* pad_temp_let = (&(global_workspace_13_var[0]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 34; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 34; ++i2) {
      for (int32_t i3 = 0; i3 < 16; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 544) + (i2 * 16)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p1[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 1024; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_13_var[67616]));
    for (int32_t ax3 = 0; ax3 < 16; ++ax3) {
      int32_t cse_var_2 = ((ax0_ax1_fused_ax2_fused * 16) + ax3);
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t ry = 0; ry < 3; ++ry) {
        for (int32_t rx = 0; rx < 3; ++rx) {
          for (int32_t rc = 0; rc < 16; ++rc) {
            ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((((((ax0_ax1_fused_ax2_fused >> 5) * 544) + (ry * 544)) + (rx * 16)) + ((ax0_ax1_fused_ax2_fused & 31) * 16)) + rc)]) * ((int32_t)((int8_t*)fused_cast_subtract_fixed_point_multiply_add_constant_let)[((((ry * 768) + (rx * 256)) + (rc * 16)) + ax3)])));
          }
        }
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_constant_let)[ax3]) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_constant_let)[ax3])) * ((int64_t)((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_2_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_2_let)[ax3] + 31)))) + 17;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      int32_t v__2 = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_constant_let)[ax3]) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_constant_let)[ax3])) * ((int64_t)((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_2_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_2_let)[ax3] + 31)))) + 17;
      int32_t v__3 = (v__2) < (127) ? (v__2) : (127);
      int32_t v__4 = (((int32_t)(((((0 != 0) ? (((int64_t)(((int32_t)p0[cse_var_2]) - ((int32_t*)fused_cast_constant_let)[0])) << ((int64_t)0)) : ((int64_t)(((int32_t)p0[cse_var_2]) - ((int32_t*)fused_cast_constant_let)[0]))) * (int64_t)1409054301) + ((int64_t)1 << ((int64_t)((1 + 31) - 1)))) >> ((int64_t)(1 + 31)))) + ((int32_t)(((((2 != 0) ? (((int64_t)(((v__1) > (-128) ? (v__1) : (-128)) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_let)[0])) << ((int64_t)2)) : ((int64_t)(((v__3) > (-128) ? (v__3) : (-128)) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_let)[0]))) * (int64_t)1248336629) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31))))) - 128;
      int32_t v__5 = (v__4) < (127) ? (v__4) : (127);
      T_cast[cse_var_2] = ((int8_t)((v__5) > (-128) ? (v__5) : (-128)));
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
TVM_DLL int32_t tvmgen_default_fused_mean(int32_t* p0, int32_t* T_divide, uint8_t* global_const_workspace_28_var, uint8_t* global_workspace_29_var) {
  void* p0_red_let = (&(global_workspace_29_var[74928]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 32; ++ax0_ax1_fused) {
    ((int32_t*)p0_red_let)[ax0_ax1_fused] = 0;
    for (int32_t k1 = 0; k1 < 16; ++k1) {
      for (int32_t k2 = 0; k2 < 16; ++k2) {
        ((int32_t*)p0_red_let)[ax0_ax1_fused] = (((int32_t*)p0_red_let)[ax0_ax1_fused] + p0[(((k1 * 512) + (k2 * 32)) + ax0_ax1_fused)]);
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 2; ++ax1_outer) {
    for (int32_t ax1_inner = 0; ax1_inner < 16; ++ax1_inner) {
      int32_t cse_var_1 = ((ax1_outer * 16) + ax1_inner);
      T_divide[cse_var_1] = (((int32_t*)p0_red_let)[cse_var_1] / 256);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_mean_1(int32_t* p0, int32_t* T_divide, uint8_t* global_const_workspace_50_var, uint8_t* global_workspace_51_var) {
  void* p0_red_let = (&(global_workspace_51_var[32768]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 64; ++ax0_ax1_fused) {
    ((int32_t*)p0_red_let)[ax0_ax1_fused] = 0;
    for (int32_t k1 = 0; k1 < 8; ++k1) {
      for (int32_t k2 = 0; k2 < 8; ++k2) {
        ((int32_t*)p0_red_let)[ax0_ax1_fused] = (((int32_t*)p0_red_let)[ax0_ax1_fused] + p0[(((k1 * 512) + (k2 * 64)) + ax0_ax1_fused)]);
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 4; ++ax1_outer) {
    for (int32_t ax1_inner = 0; ax1_inner < 16; ++ax1_inner) {
      int32_t cse_var_1 = ((ax1_outer * 16) + ax1_inner);
      T_divide[cse_var_1] = (((int32_t*)p0_red_let)[cse_var_1] / 64);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_32_var, uint8_t* global_workspace_33_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED] dense: 32->256 (packed [4][8][32][8])
  int32_t* conv_const = (int32_t*)(&global_const_workspace_32_var[146176]);
  int32_t* conv_sub   = (int32_t*)(&global_const_workspace_32_var[145152]);
  int8_t*  weights    = (int8_t*) (&global_const_workspace_32_var[119296]);

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
        * (int64_t)2016959702) + ((int64_t)1 << ((int64_t)((7 + 31) - 1))))
        >> ((int64_t)(7 + 31)))) - 128;
      int32_t v1 = (v_) < (127) ? (v_) : (127);
      T_cast[ax3] = (int8_t)((v1) > (-128) ? (v1) : (-128));
    }
  }
  return 0;

#else

  void* fused_nn_contrib_dense_pack_constant_let = (&(global_const_workspace_32_var[146176]));
  void* fused_nn_contrib_dense_pack_subtract_constant_let = (&(global_const_workspace_32_var[145152]));
  void* fused_constant_7_let = (&(global_const_workspace_32_var[119296]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 4; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_33_var[75056]));
    void* compute_global_let = (&(global_workspace_33_var[75344]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 8; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 32; ++k_outer) {
        for (int32_t x_c = 0; x_c < 8; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[k_outer]) * ((int32_t)((int8_t*)fused_constant_7_let)[((((ax1_outer_ax0_outer_fused * 2048) + (y_inner_outer_x_inner_outer_fused * 256)) + (k_outer * 8)) + x_c)])));
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
        int32_t v_ = ((int32_t)(((((0 != 0) ? (((int64_t)((((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_let)[cse_var_1])) << ((int64_t)0)) : ((int64_t)((((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_let)[cse_var_1]))) * (int64_t)2016959702) + ((int64_t)1 << ((int64_t)((7 + 31) - 1)))) >> ((int64_t)(7 + 31)))) - 128;
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
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast_1(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_34_var, uint8_t* global_workspace_35_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED] dense: 256->128 (packed [4][4][256][8])
  int32_t* conv_const = (int32_t*)(&global_const_workspace_34_var[147712]);
  int32_t* conv_sub   = (int32_t*)(&global_const_workspace_34_var[147200]);
  int8_t*  weights    = (int8_t*) (&global_const_workspace_34_var[36864]);

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
        * (int64_t)2029071455) + ((int64_t)1 << ((int64_t)((9 + 31) - 1))))
        >> ((int64_t)(9 + 31)))) - 128;
      int32_t v1 = (v_) < (127) ? (v_) : (127);
      T_cast[ax3] = (int8_t)((v1) > (-128) ? (v1) : (-128));
    }
  }
  return 0;

#else

  void* fused_nn_contrib_dense_pack_constant_1_let = (&(global_const_workspace_34_var[147712]));
  void* fused_nn_contrib_dense_pack_subtract_constant_1_let = (&(global_const_workspace_34_var[147200]));
  void* fused_constant_8_let = (&(global_const_workspace_34_var[36864]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 4; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_35_var[75328]));
    void* compute_global_let = (&(global_workspace_35_var[75456]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 4; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 256; ++k_outer) {
        for (int32_t x_c = 0; x_c < 8; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[k_outer]) * ((int32_t)((int8_t*)fused_constant_8_let)[((((ax1_outer_ax0_outer_fused * 8192) + (y_inner_outer_x_inner_outer_fused * 2048)) + (k_outer * 8)) + x_c)])));
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
        int32_t v_ = ((int32_t)(((((0 != 0) ? (((int64_t)((((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_1_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_1_let)[cse_var_1])) << ((int64_t)0)) : ((int64_t)((((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_1_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_1_let)[cse_var_1]))) * (int64_t)2029071455) + ((int64_t)1 << ((int64_t)((9 + 31) - 1)))) >> ((int64_t)(9 + 31)))) - 128;
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
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_subtract__fa059688879ad8de_(int8_t* p0, float* T_multiply, uint8_t* global_const_workspace_36_var, uint8_t* global_workspace_37_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED] dense: 128->100 (packed [5][4][128][5])
  int32_t* conv_const = (int32_t*)(&global_const_workspace_36_var[150368]);
  int32_t* conv_sub   = (int32_t*)(&global_const_workspace_36_var[149568]);
  int8_t*  weights    = (int8_t*) (&global_const_workspace_36_var[88064]);

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
        * (int64_t)1827625667) + ((int64_t)1 << ((int64_t)((9 + 31) - 1))))
        >> ((int64_t)(9 + 31)))) + 59;
      int32_t v1 = (v_) < (127) ? (v_) : (127);
      T_multiply[ax3] = (((float)(((v1) > (-128) ? (v1) : (-128)) - 59)) * 2.084051e-01f);
    }
  }
  return 0;

#else

  void* fused_nn_contrib_dense_pack_constant_2_let = (&(global_const_workspace_36_var[150368]));
  void* fused_nn_contrib_dense_pack_subtract_constant_2_let = (&(global_const_workspace_36_var[149568]));
  void* fused_constant_9_let = (&(global_const_workspace_36_var[88064]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 5; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_37_var[75328]));
    void* compute_global_let = (&(global_workspace_37_var[75408]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 4; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 5; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 128; ++k_outer) {
        for (int32_t x_c = 0; x_c < 5; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[k_outer]) * ((int32_t)((int8_t*)fused_constant_9_let)[((((ax1_outer_ax0_outer_fused * 2560) + (y_inner_outer_x_inner_outer_fused * 640)) + (k_outer * 5)) + x_c)])));
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
        int32_t v_ = ((int32_t)(((((0 != 0) ? (((int64_t)((((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_2_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_2_let)[cse_var_1])) << ((int64_t)0)) : ((int64_t)((((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_2_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_2_let)[cse_var_1]))) * (int64_t)1827625667) + ((int64_t)1 << ((int64_t)((9 + 31) - 1)))) >> ((int64_t)(9 + 31)))) + 59;
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        T_multiply[cse_var_1] = (((float)(((v__1) > (-128) ? (v__1) : (-128)) - 59)) * 2.084051e-01f);
      }
    }
  }
  return 0;

#endif
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_subtract__fa059688879ad8de__1(int8_t* p0, float* T_multiply, uint8_t* global_const_workspace_54_var, uint8_t* global_workspace_55_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED] dense: 64->100 (packed [5][4][64][5])
  int32_t* conv_const = (int32_t*)(&global_const_workspace_54_var[149968]);
  int32_t* conv_sub   = (int32_t*)(&global_const_workspace_54_var[149168]);
  int8_t*  weights    = (int8_t*) (&global_const_workspace_54_var[127488]);

  // Padded input vector (aligned to MAC_BYTES)
  static int8_t _inp_pad[64];
  for (int32_t k = 0; k < 64; k++) _inp_pad[k] = p0[k];

  for (int32_t tile = 0; tile < 1; tile++) {
    int32_t oc_base = tile * 100;
    int32_t oc_count = 100;
    if (oc_base + oc_count > 100) oc_count = 100 - oc_base;
    static int8_t rw[6400];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      int32_t goc = oc_base + oc;
      int32_t ax1 = goc / 20;
      int32_t yi  = (goc % 20) / 5;
      int32_t xc  = goc % 5;
      for (int32_t k = 0; k < 64; k++)
        rw[oc * 64 + k] = weights[ax1 * 1280 + yi * 320 + k * 5 + xc];
    }
    accel_spad_write(0x040, rw, oc_count * 64);
    accel_spad_write(0x000, _inp_pad, 64);
    hw_multi_dot(0x000, 0x040, 0x1940, 64, oc_count);
    for (int32_t oc = 0; oc < oc_count; oc++) {
      int32_t ax3 = oc_base + oc;
      int32_t dot = (int32_t)accel_spad_read32(0x1940 + oc * 4);
      int32_t v_ = ((int32_t)(((((int64_t)((dot + conv_sub[ax3]) - conv_const[ax3]))
        * (int64_t)1317228959) + ((int64_t)1 << ((int64_t)((8 + 31) - 1))))
        >> ((int64_t)(8 + 31)))) - 18;
      int32_t v1 = (v_) < (127) ? (v_) : (127);
      T_multiply[ax3] = (((float)(((v1) > (-128) ? (v1) : (-128)) + 18)) * 3.257704e-01f);
    }
  }
  return 0;

#else

  void* fused_nn_contrib_dense_pack_constant_3_let = (&(global_const_workspace_54_var[149968]));
  void* fused_nn_contrib_dense_pack_subtract_constant_3_let = (&(global_const_workspace_54_var[149168]));
  void* fused_constant_14_let = (&(global_const_workspace_54_var[127488]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 5; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_55_var[400]));
    void* compute_global_let = (&(global_workspace_55_var[544]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 4; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 5; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 64; ++k_outer) {
        for (int32_t x_c = 0; x_c < 5; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[k_outer]) * ((int32_t)((int8_t*)fused_constant_14_let)[((((ax1_outer_ax0_outer_fused * 1280) + (y_inner_outer_x_inner_outer_fused * 320)) + (k_outer * 5)) + x_c)])));
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
        int32_t v_ = ((int32_t)(((((0 != 0) ? (((int64_t)((((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_3_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_3_let)[cse_var_1])) << ((int64_t)0)) : ((int64_t)((((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_3_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_3_let)[cse_var_1]))) * (int64_t)1317228959) + ((int64_t)1 << ((int64_t)((8 + 31) - 1)))) >> ((int64_t)(8 + 31)))) - 18;
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        T_multiply[cse_var_1] = (((float)(((v__1) > (-128) ? (v__1) : (-128)) + 18)) * 3.257704e-01f);
      }
    }
  }
  return 0;

#endif
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip(int8_t* p0, int32_t* compute, uint8_t* global_const_workspace_26_var, uint8_t* global_workspace_27_var) {
  void* fused_nn_conv2d_subtract_add_constant_17_let = (&(global_const_workspace_26_var[155632]));
  void* fused_nn_conv2d_subtract_add_constant_16_let = (&(global_const_workspace_26_var[155760]));
  void* fused_nn_conv2d_subtract_add_constant_15_let = (&(global_const_workspace_26_var[155888]));
  void* fused_nn_conv2d_constant_5_let = (&(global_const_workspace_26_var[156656]));
  void* fused_nn_conv2d_subtract_constant_5_let = (&(global_const_workspace_26_var[154608]));
  void* fused_constant_5_let = (&(global_const_workspace_26_var[100864]));
  void* pad_temp_let = (&(global_workspace_27_var[32768]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 18; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 18; ++i2) {
      for (int32_t i3 = 0; i3 < 32; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 576) + (i2 * 32)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 256; ++i0_i1_fused_i2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_27_var[74800]));
    for (int32_t i3_1 = 0; i3_1 < 32; ++i3_1) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t ry = 0; ry < 3; ++ry) {
        for (int32_t rx = 0; rx < 3; ++rx) {
          for (int32_t rc = 0; rc < 32; ++rc) {
            ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((((((i0_i1_fused_i2_fused >> 4) * 576) + (ry * 576)) + (rx * 32)) + ((i0_i1_fused_i2_fused & 15) * 32)) + rc)]) * ((int32_t)((int8_t*)fused_constant_5_let)[((((ry * 3072) + (rx * 1024)) + (rc * 32)) + i3_1)])));
          }
        }
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_5_let)[i3_1]) - ((int32_t*)fused_nn_conv2d_constant_5_let)[i3_1])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_15_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_17_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_17_let)[i3_1] + 31)))) - 128;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      compute[((i0_i1_fused_i2_fused * 32) + i3_1)] = ((v__1) > (-128) ? (v__1) : (-128));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_4_var, uint8_t* global_workspace_5_var) {
  void* fused_nn_conv2d_subtract_add_constant_2_let = (&(global_const_workspace_4_var[157488]));
  void* fused_nn_conv2d_subtract_add_constant_1_let = (&(global_const_workspace_4_var[157552]));
  void* fused_nn_conv2d_subtract_add_constant_let = (&(global_const_workspace_4_var[157616]));
  void* fused_nn_conv2d_constant_let = (&(global_const_workspace_4_var[157744]));
  void* fused_nn_conv2d_subtract_constant_let = (&(global_const_workspace_4_var[157232]));
  void* fused_constant_let = (&(global_const_workspace_4_var[148736]));
  void* pad_temp_let = (&(global_workspace_5_var[67616]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 65; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 65; ++i2) {
      for (int32_t i3 = 0; i3 < 3; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 195) + (i2 * 3)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 1024; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_5_var[80296]));
    for (int32_t ax3 = 0; ax3 < 16; ++ax3) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t ry = 0; ry < 3; ++ry) {
        for (int32_t rx = 0; rx < 3; ++rx) {
          for (int32_t rc = 0; rc < 3; ++rc) {
            ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((((((ax0_ax1_fused_ax2_fused >> 5) * 390) + (ry * 195)) + ((ax0_ax1_fused_ax2_fused & 31) * 6)) + (rx * 3)) + rc)]) * ((int32_t)((int8_t*)fused_constant_let)[((((ry * 144) + (rx * 48)) + (rc * 16)) + ax3)])));
          }
        }
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_2_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_2_let)[ax3] + 31)))) - 128;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_cast[((ax0_ax1_fused_ax2_fused * 16) + ax3)] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_1(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_8_var, uint8_t* global_workspace_9_var) {
  void* fused_nn_conv2d_subtract_add_constant_5_let = (&(global_const_workspace_8_var[157296]));
  void* fused_nn_conv2d_subtract_add_constant_4_let = (&(global_const_workspace_8_var[157360]));
  void* fused_nn_conv2d_subtract_add_constant_3_let = (&(global_const_workspace_8_var[157424]));
  void* fused_nn_conv2d_constant_1_let = (&(global_const_workspace_8_var[157680]));
  void* fused_nn_conv2d_subtract_constant_1_let = (&(global_const_workspace_8_var[157168]));
  void* fused_constant_1_let = (&(global_const_workspace_8_var[138496]));
  void* pad_temp_let = (&(global_workspace_9_var[0]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 34; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 34; ++i2) {
      for (int32_t i3 = 0; i3 < 16; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 544) + (i2 * 16)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 1024; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_9_var[84000]));
    for (int32_t ax3 = 0; ax3 < 16; ++ax3) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t ry = 0; ry < 3; ++ry) {
        for (int32_t rx = 0; rx < 3; ++rx) {
          for (int32_t rc = 0; rc < 16; ++rc) {
            ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((((((ax0_ax1_fused_ax2_fused >> 5) * 544) + (ry * 544)) + (rx * 16)) + ((ax0_ax1_fused_ax2_fused & 31) * 16)) + rc)]) * ((int32_t)((int8_t*)fused_constant_1_let)[((((ry * 768) + (rx * 256)) + (rc * 16)) + ax3)])));
          }
        }
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_1_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_1_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_3_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_5_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_5_let)[ax3] + 31)))) - 128;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_cast[((ax0_ax1_fused_ax2_fused * 16) + ax3)] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_2(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_16_var, uint8_t* global_workspace_17_var) {
  void* fused_nn_conv2d_subtract_add_constant_8_let = (&(global_const_workspace_16_var[155248]));
  void* fused_nn_conv2d_subtract_add_constant_7_let = (&(global_const_workspace_16_var[155376]));
  void* fused_nn_conv2d_subtract_add_constant_6_let = (&(global_const_workspace_16_var[155504]));
  void* fused_nn_conv2d_constant_2_let = (&(global_const_workspace_16_var[157040]));
  void* fused_nn_conv2d_subtract_constant_2_let = (&(global_const_workspace_16_var[154992]));
  void* fused_constant_2_let = (&(global_const_workspace_16_var[133888]));
  void* pad_temp_let = (&(global_workspace_17_var[0]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 33; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 33; ++i2) {
      for (int32_t i3 = 0; i3 < 16; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 528) + (i2 * 16)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 256; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_17_var[80160]));
    for (int32_t ax3 = 0; ax3 < 32; ++ax3) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t ry = 0; ry < 3; ++ry) {
        for (int32_t rx = 0; rx < 3; ++rx) {
          for (int32_t rc = 0; rc < 16; ++rc) {
            ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((((((ax0_ax1_fused_ax2_fused >> 4) * 1056) + (ry * 528)) + ((ax0_ax1_fused_ax2_fused & 15) * 32)) + (rx * 16)) + rc)]) * ((int32_t)((int8_t*)fused_constant_2_let)[((((ry * 1536) + (rx * 512)) + (rc * 32)) + ax3)])));
          }
        }
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_2_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_2_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_6_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_8_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_8_let)[ax3] + 31)))) - 128;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_cast[((ax0_ax1_fused_ax2_fused * 32) + ax3)] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_3(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_42_var, uint8_t* global_workspace_43_var) {
  void* fused_nn_conv2d_subtract_add_constant_20_let = (&(global_const_workspace_42_var[153072]));
  void* fused_nn_conv2d_subtract_add_constant_19_let = (&(global_const_workspace_42_var[153328]));
  void* fused_nn_conv2d_subtract_add_constant_18_let = (&(global_const_workspace_42_var[153584]));
  void* fused_nn_conv2d_constant_6_let = (&(global_const_workspace_42_var[154352]));
  void* fused_nn_conv2d_subtract_constant_6_let = (&(global_const_workspace_42_var[151280]));
  void* fused_constant_10_let = (&(global_const_workspace_42_var[69632]));
  void* pad_temp_let = (&(global_workspace_43_var[0]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 17; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 17; ++i2) {
      for (int32_t i3 = 0; i3 < 32; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 544) + (i2 * 32)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 64; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_43_var[91696]));
    for (int32_t ff = 0; ff < 64; ++ff) {
      ((int32_t*)conv2d_nhwc_let)[ff] = 0;
      for (int32_t ry = 0; ry < 3; ++ry) {
        for (int32_t rx = 0; rx < 3; ++rx) {
          for (int32_t rc = 0; rc < 32; ++rc) {
            ((int32_t*)conv2d_nhwc_let)[ff] = (((int32_t*)conv2d_nhwc_let)[ff] + (((int32_t)((int8_t*)pad_temp_let)[((((((ax0_ax1_fused_ax2_fused >> 3) * 1088) + (ry * 544)) + ((ax0_ax1_fused_ax2_fused & 7) * 64)) + (rx * 32)) + rc)]) * ((int32_t)((int8_t*)fused_constant_10_let)[((((ry * 6144) + (rx * 2048)) + (rc * 64)) + ff)])));
          }
        }
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 64; ++ax3_inner) {
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[ax3_inner] + ((int32_t*)fused_nn_conv2d_subtract_constant_6_let)[ax3_inner]) - ((int32_t*)fused_nn_conv2d_constant_6_let)[ax3_inner])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_18_let)[ax3_inner])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_20_let)[ax3_inner] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_20_let)[ax3_inner] + 31)))) - 128;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_cast[((ax0_ax1_fused_ax2_fused * 64) + ax3_inner)] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_subtract_fix_8b7503320bf54f1a_(int8_t* p0, int32_t* T_add, uint8_t* global_const_workspace_20_var, uint8_t* global_workspace_21_var) {
  void* fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_let = (&(global_const_workspace_20_var[158176]));
  void* fused_nn_conv2d_subtract_add_constant_11_let = (&(global_const_workspace_20_var[156400]));
  void* fused_nn_conv2d_subtract_add_constant_10_let = (&(global_const_workspace_20_var[156528]));
  void* fused_nn_conv2d_subtract_add_constant_9_let = (&(global_const_workspace_20_var[155120]));
  void* fused_nn_conv2d_constant_3_let = (&(global_const_workspace_20_var[156912]));
  void* fused_nn_conv2d_subtract_constant_3_let = (&(global_const_workspace_20_var[154864]));
  void* fused_constant_3_let = (&(global_const_workspace_20_var[110080]));
  void* pad_temp_let = (&(global_workspace_21_var[51232]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 18; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 18; ++i2) {
      for (int32_t i3 = 0; i3 < 32; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 576) + (i2 * 32)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 256; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_21_var[61600]));
    for (int32_t ax3 = 0; ax3 < 32; ++ax3) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t ry = 0; ry < 3; ++ry) {
        for (int32_t rx = 0; rx < 3; ++rx) {
          for (int32_t rc = 0; rc < 32; ++rc) {
            ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((((((ax0_ax1_fused_ax2_fused >> 4) * 576) + (ry * 576)) + (rx * 32)) + ((ax0_ax1_fused_ax2_fused & 15) * 32)) + rc)]) * ((int32_t)((int8_t*)fused_constant_3_let)[((((ry * 3072) + (rx * 1024)) + (rc * 32)) + ax3)])));
          }
        }
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_3_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_3_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_9_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_11_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_11_let)[ax3] + 31)))) + 15;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      int32_t v__2 = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_3_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_3_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_9_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_11_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_11_let)[ax3] + 31)))) + 15;
      int32_t v__3 = (v__2) < (127) ? (v__2) : (127);
      T_add[((ax0_ax1_fused_ax2_fused * 32) + ax3)] = (((int32_t)(((((2 != 0) ? (((int64_t)(((v__1) > (-128) ? (v__1) : (-128)) - ((int32_t*)fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_let)[0])) << ((int64_t)2)) : ((int64_t)(((v__3) > (-128) ? (v__3) : (-128)) - ((int32_t*)fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_let)[0]))) * (int64_t)1112133324) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31)))) - 128);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_subtract_fix_8b7503320bf54f1a__1(int8_t* p0, int32_t* T_add, uint8_t* global_const_workspace_46_var, uint8_t* global_workspace_47_var) {
  void* fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_2_let = (&(global_const_workspace_46_var[158144]));
  void* fused_nn_conv2d_subtract_add_constant_23_let = (&(global_const_workspace_46_var[152304]));
  void* fused_nn_conv2d_subtract_add_constant_22_let = (&(global_const_workspace_46_var[152560]));
  void* fused_nn_conv2d_subtract_add_constant_21_let = (&(global_const_workspace_46_var[152816]));
  void* fused_nn_conv2d_constant_7_let = (&(global_const_workspace_46_var[154096]));
  void* fused_nn_conv2d_subtract_constant_7_let = (&(global_const_workspace_46_var[151024]));
  void* fused_constant_11_let = (&(global_const_workspace_46_var[0]));
  void* pad_temp_let = (&(global_workspace_47_var[74800]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 10; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 10; ++i2) {
      for (int32_t i3 = 0; i3 < 64; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 640) + (i2 * 64)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 64; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_47_var[81200]));
    for (int32_t ff = 0; ff < 64; ++ff) {
      ((int32_t*)conv2d_nhwc_let)[ff] = 0;
      for (int32_t ry = 0; ry < 3; ++ry) {
        for (int32_t rx = 0; rx < 3; ++rx) {
          for (int32_t rc = 0; rc < 64; ++rc) {
            ((int32_t*)conv2d_nhwc_let)[ff] = (((int32_t*)conv2d_nhwc_let)[ff] + (((int32_t)((int8_t*)pad_temp_let)[((((((ax0_ax1_fused_ax2_fused >> 3) * 640) + (ry * 640)) + (rx * 64)) + ((ax0_ax1_fused_ax2_fused & 7) * 64)) + rc)]) * ((int32_t)((int8_t*)fused_constant_11_let)[((((ry * 12288) + (rx * 4096)) + (rc * 64)) + ff)])));
          }
        }
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 64; ++ax3_inner) {
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[ax3_inner] + ((int32_t*)fused_nn_conv2d_subtract_constant_7_let)[ax3_inner]) - ((int32_t*)fused_nn_conv2d_constant_7_let)[ax3_inner])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_21_let)[ax3_inner])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_23_let)[ax3_inner] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_23_let)[ax3_inner] + 31)))) + 3;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_add[((ax0_ax1_fused_ax2_fused * 64) + ax3_inner)] = (((int32_t)(((((2 != 0) ? (((int64_t)(((v__1) > (-128) ? (v__1) : (-128)) - ((int32_t*)fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_2_let)[0])) << ((int64_t)2)) : ((int64_t)(((v__1) > (-128) ? (v__1) : (-128)) - ((int32_t*)fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_2_let)[0]))) * (int64_t)1210484978) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31)))) - 128);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_subtract_fix_d451e3e81cf58779_(int8_t* p0, int32_t* p1, int32_t* compute, uint8_t* global_const_workspace_48_var, uint8_t* global_workspace_49_var) {
  void* fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_3_let = (&(global_const_workspace_48_var[158128]));
  void* fused_nn_conv2d_subtract_add_constant_26_let = (&(global_const_workspace_48_var[151536]));
  void* fused_nn_conv2d_subtract_add_constant_25_let = (&(global_const_workspace_48_var[151792]));
  void* fused_nn_conv2d_subtract_add_constant_24_let = (&(global_const_workspace_48_var[152048]));
  void* fused_nn_conv2d_constant_8_let = (&(global_const_workspace_48_var[153840]));
  void* fused_nn_conv2d_subtract_constant_8_let = (&(global_const_workspace_48_var[150768]));
  void* fused_constant_12_let = (&(global_const_workspace_48_var[143104]));
  void* pad_temp_let = (&(global_workspace_49_var[74800]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 15; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 15; ++i2) {
      for (int32_t i3 = 0; i3 < 32; ++i3) {
        int32_t cse_var_1 = (i2 * 32);
        ((int8_t*)pad_temp_let)[(((i0_i1_fused * 480) + cse_var_1) + i3)] = p0[(((i0_i1_fused * 512) + cse_var_1) + i3)];
      }
    }
  }
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 64; ++i0_i1_fused_i2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_49_var[82000]));
    for (int32_t ff = 0; ff < 64; ++ff) {
      ((int32_t*)conv2d_nhwc_let)[ff] = 0;
      for (int32_t rc = 0; rc < 32; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[ff] = (((int32_t*)conv2d_nhwc_let)[ff] + (((int32_t)((int8_t*)pad_temp_let)[((((i0_i1_fused_i2_fused >> 3) * 960) + ((i0_i1_fused_i2_fused & 7) * 64)) + rc)]) * ((int32_t)((int8_t*)fused_constant_12_let)[((rc * 64) + ff)])));
      }
    }
    for (int32_t i3_inner = 0; i3_inner < 64; ++i3_inner) {
      int32_t cse_var_2 = ((i0_i1_fused_i2_fused * 64) + i3_inner);
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[i3_inner] + ((int32_t*)fused_nn_conv2d_subtract_constant_8_let)[i3_inner]) - ((int32_t*)fused_nn_conv2d_constant_8_let)[i3_inner])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_24_let)[i3_inner])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_26_let)[i3_inner] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_26_let)[i3_inner] + 31)))) + 93;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      int32_t v__2 = ((int32_t)(((((0 != 0) ? (((int64_t)(((v__1) > (-128) ? (v__1) : (-128)) - ((int32_t*)fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_3_let)[0])) << ((int64_t)0)) : ((int64_t)(((v__1) > (-128) ? (v__1) : (-128)) - ((int32_t*)fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_3_let)[0]))) * (int64_t)1185260686) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31)))) + p1[cse_var_2];
      int32_t v__3 = (v__2) < (127) ? (v__2) : (127);
      compute[cse_var_2] = ((v__3) > (-128) ? (v__3) : (-128));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_subtract_fix_f03c5364e8b12ad6_(int8_t* p0, int32_t* p1, int8_t* T_cast, uint8_t* global_const_workspace_22_var, uint8_t* global_workspace_23_var) {
  void* fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_1_let = (&(global_const_workspace_22_var[158160]));
  void* fused_nn_conv2d_subtract_add_constant_14_let = (&(global_const_workspace_22_var[156016]));
  void* fused_nn_conv2d_subtract_add_constant_13_let = (&(global_const_workspace_22_var[156144]));
  void* fused_nn_conv2d_subtract_add_constant_12_let = (&(global_const_workspace_22_var[156272]));
  void* fused_nn_conv2d_constant_4_let = (&(global_const_workspace_22_var[156784]));
  void* fused_nn_conv2d_subtract_constant_4_let = (&(global_const_workspace_22_var[154736]));
  void* fused_constant_4_let = (&(global_const_workspace_22_var[148224]));
  void* pad_temp_let = (&(global_workspace_23_var[51232]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 31; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 31; ++i2) {
      for (int32_t i3 = 0; i3 < 16; ++i3) {
        int32_t cse_var_1 = (i2 * 16);
        ((int8_t*)pad_temp_let)[(((i0_i1_fused * 496) + cse_var_1) + i3)] = p0[(((i0_i1_fused * 512) + cse_var_1) + i3)];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 256; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_23_var[74800]));
    for (int32_t ax3 = 0; ax3 < 32; ++ax3) {
      int32_t cse_var_2 = ((ax0_ax1_fused_ax2_fused * 32) + ax3);
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 16; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((((ax0_ax1_fused_ax2_fused >> 4) * 992) + ((ax0_ax1_fused_ax2_fused & 15) * 32)) + rc)]) * ((int32_t)((int8_t*)fused_constant_4_let)[((rc * 32) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_4_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_4_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_12_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_14_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_14_let)[ax3] + 31)))) - 7;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      int32_t v__2 = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_4_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_4_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_12_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_14_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_14_let)[ax3] + 31)))) - 7;
      int32_t v__3 = (v__2) < (127) ? (v__2) : (127);
      int32_t v__4 = ((int32_t)(((((0 != 0) ? (((int64_t)(((v__1) > (-128) ? (v__1) : (-128)) - ((int32_t*)fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_1_let)[0])) << ((int64_t)0)) : ((int64_t)(((v__3) > (-128) ? (v__3) : (-128)) - ((int32_t*)fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_1_let)[0]))) * (int64_t)1743300748) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31)))) + p1[cse_var_2];
      int32_t v__5 = (v__4) < (127) ? (v__4) : (127);
      T_cast[cse_var_2] = ((int8_t)((v__5) > (-128) ? (v__5) : (-128)));
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
      for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
        int32_t cse_var_1 = (ax2 * 16);
        T_pad[(((ax0_ax1_fused * 544) + cse_var_1) + ax3_inner)] = (((((1 <= ax0_ax1_fused) && (ax0_ax1_fused < 33)) && (1 <= ax2)) && (ax2 < 33)) ? p0[((((ax0_ax1_fused * 512) + cse_var_1) + ax3_inner) - 528)] : (int8_t)-128);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_1(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_10_var, uint8_t* global_workspace_11_var) {
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 34; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 34; ++ax2) {
      for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
        int32_t cse_var_1 = (ax2 * 16);
        T_pad[(((ax0_ax1_fused * 544) + cse_var_1) + ax3_inner)] = (((((1 <= ax0_ax1_fused) && (ax0_ax1_fused < 33)) && (1 <= ax2)) && (ax2 < 33)) ? p0[((((ax0_ax1_fused * 512) + cse_var_1) + ax3_inner) - 528)] : (int8_t)-128);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_2(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_14_var, uint8_t* global_workspace_15_var) {
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
TVM_DLL int32_t tvmgen_default_fused_nn_pad_3(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_18_var, uint8_t* global_workspace_19_var) {
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
TVM_DLL int32_t tvmgen_default_fused_nn_pad_4(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_24_var, uint8_t* global_workspace_25_var) {
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
TVM_DLL int32_t tvmgen_default_fused_nn_pad_5(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_40_var, uint8_t* global_workspace_41_var) {
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
TVM_DLL int32_t tvmgen_default_fused_nn_pad_6(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_44_var, uint8_t* global_workspace_45_var) {
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
TVM_DLL int32_t tvmgen_default_fused_nn_softmax_divide_round_add_clip_cast_subtract_cast_multiply(float* p0, float* T_multiply, uint8_t* global_const_workspace_38_var, uint8_t* global_workspace_39_var) {
  void* T_softmax_maxelem_let = (&(global_workspace_39_var[75600]));
  void* T_softmax_exp_let = (&(global_workspace_39_var[75200]));
  void* T_softmax_expsum_let = (&(global_workspace_39_var[75600]));
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
TVM_DLL int32_t tvmgen_default_fused_nn_softmax_divide_round_add_clip_cast_subtract_cast_multiply_1(float* p0, float* T_multiply, uint8_t* global_const_workspace_56_var, uint8_t* global_workspace_57_var) {
  void* T_softmax_maxelem_let = (&(global_workspace_57_var[800]));
  void* T_softmax_exp_let = (&(global_workspace_57_var[400]));
  void* T_softmax_expsum_let = (&(global_workspace_57_var[800]));
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
TVM_DLL int32_t tvmgen_default_fused_subtract_fixed_point_multiply_add_clip_cast_reshape(int32_t* p0, int8_t* T_reshape, uint8_t* global_const_workspace_30_var, uint8_t* global_workspace_31_var) {
  void* fused_constant_6_let = (&(global_const_workspace_30_var[158192]));
  for (int32_t ax1_outer = 0; ax1_outer < 2; ++ax1_outer) {
    for (int32_t ax1_inner = 0; ax1_inner < 16; ++ax1_inner) {
      int32_t cse_var_1 = ((ax1_outer * 16) + ax1_inner);
      int32_t v_ = ((int32_t)(((((2 != 0) ? (((int64_t)(p0[cse_var_1] - ((int32_t*)fused_constant_6_let)[0])) << ((int64_t)2)) : ((int64_t)(p0[cse_var_1] - ((int32_t*)fused_constant_6_let)[0]))) * (int64_t)1704589240) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31)))) - 128;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_reshape[cse_var_1] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_fixed_point_multiply_add_clip_cast_reshape_1(int32_t* p0, int8_t* T_reshape, uint8_t* global_const_workspace_52_var, uint8_t* global_workspace_53_var) {
  void* fused_constant_13_let = (&(global_const_workspace_52_var[158208]));
  for (int32_t ax1_outer = 0; ax1_outer < 4; ++ax1_outer) {
    for (int32_t ax1_inner = 0; ax1_inner < 16; ++ax1_inner) {
      int32_t cse_var_1 = ((ax1_outer * 16) + ax1_inner);
      int32_t v_ = ((int32_t)(((((3 != 0) ? (((int64_t)(p0[cse_var_1] - ((int32_t*)fused_constant_13_let)[0])) << ((int64_t)3)) : ((int64_t)(p0[cse_var_1] - ((int32_t*)fused_constant_13_let)[0]))) * (int64_t)1672611513) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31)))) - 128;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_reshape[cse_var_1] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default___tvm_main__(float* serving_default_image_0_buffer_var, float* StatefulPartitionedCall_1_buffer_var, float* StatefulPartitionedCall_0_buffer_var, uint8_t* global_const_workspace_0_var, uint8_t* global_workspace_1_var) {
  void* sid_22_let = (&(global_workspace_1_var[81200]));
  void* sid_17_let = (&(global_workspace_1_var[75200]));
  void* sid_13_let = (&(global_workspace_1_var[0]));
  void* sid_20_let = (&(global_workspace_1_var[9248]));
  void* sid_4_let = (&(global_workspace_1_var[67616]));
  void* sid_5_let = (&(global_workspace_1_var[18496]));
  void* sid_8_let = (&(global_workspace_1_var[71968]));
  void* sid_3_let = (&(global_workspace_1_var[18496]));
  void* sid_18_let = (&(global_workspace_1_var[74800]));
  void* sid_15_let = (&(global_workspace_1_var[75312]));
  void* sid_14_let = (&(global_workspace_1_var[74800]));
  void* sid_2_let = (&(global_workspace_1_var[51232]));
  void* sid_16_let = (&(global_workspace_1_var[74800]));
  void* sid_6_let = (&(global_workspace_1_var[34848]));
  void* sid_7_let = (&(global_workspace_1_var[17424]));
  void* sid_21_let = (&(global_workspace_1_var[87600]));
  void* sid_12_let = (&(global_workspace_1_var[43136]));
  void* sid_9_let = (&(global_workspace_1_var[61600]));
  void* sid_10_let = (&(global_workspace_1_var[0]));
  void* sid_1_let = (&(global_workspace_1_var[80296]));
  void* sid_11_let = (&(((uint8_t*)(*BB_GLOBAL_WS_ADDR))[66608]));
  void* sid_23_let = (&(global_workspace_1_var[0]));
  void* sid_24_let = (&(global_workspace_1_var[16384]));
  void* sid_25_let = (&(global_workspace_1_var[0]));
  void* sid_26_let = (&(global_workspace_1_var[480]));
  void* sid_27_let = (&(global_workspace_1_var[0]));
  // if (tvmgen_default_fused_divide_round_add_clip_cast_nn_pad(serving_default_image_0_buffer_var, sid_1_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast(sid_1_let, sid_2_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_pad(sid_2_let, sid_3_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_1(sid_3_let, sid_4_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_pad_1(sid_4_let, sid_5_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point__7462b0c1d1f4a4f5_(sid_2_let, sid_5_let, sid_6_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_pad_2(sid_6_let, sid_7_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_2(sid_7_let, sid_8_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_pad_3(sid_8_let, sid_9_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_subtract_fix_8b7503320bf54f1a_(sid_9_let, sid_10_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_subtract_fix_f03c5364e8b12ad6_(sid_6_let, sid_10_let, sid_11_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_pad_5(sid_11_let, sid_20_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_3(sid_20_let, sid_21_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_pad_6(sid_21_let, sid_22_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_subtract_fix_8b7503320bf54f1a__1(sid_22_let, sid_23_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_subtract_fix_d451e3e81cf58779_(sid_11_let, sid_23_let, sid_24_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_mean_1(sid_24_let, sid_25_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_subtract_fixed_point_multiply_add_clip_cast_reshape_1(sid_25_let, sid_26_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_subtract__fa059688879ad8de__1(sid_26_let, sid_27_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_softmax_divide_round_add_clip_cast_subtract_cast_multiply_1(sid_27_let, StatefulPartitionedCall_0_buffer_var, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;

  if (tvmgen_default_fused_nn_pad_4(sid_11_let, sid_12_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  *HANDSHAKE= 0xCF;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip(sid_12_let, sid_13_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_mean(sid_13_let, sid_14_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_subtract_fixed_point_multiply_add_clip_cast_reshape(sid_14_let, sid_15_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast(sid_15_let, sid_16_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast_1(sid_16_let, sid_17_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_subtract__fa059688879ad8de_(sid_17_let, sid_18_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_softmax_divide_round_add_clip_cast_subtract_cast_multiply(sid_18_let, StatefulPartitionedCall_1_buffer_var, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;

  eval(StatefulPartitionedCall_1_buffer_var);
  *HANDSHAKE= 0xC0;
  clock_gate_signal();
  return 0;
}

