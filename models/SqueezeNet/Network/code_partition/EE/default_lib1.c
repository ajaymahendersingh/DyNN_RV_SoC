//#define INCLUDE_ACCEL
#include "config.h"
#include "clock_ctrl.h"
// tvm target: c -keys=cpu 
#define TVM_EXPORTS
#include "tvm/runtime/c_runtime_api.h"
#include "tvm/runtime/c_backend_api.h"
#include <math.h>
#include <stdbool.h>
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_cast_mean(int8_t* p0, int32_t* T_divide, uint8_t* global_const_workspace_112_var, uint8_t* global_workspace_113_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_concatenate(int8_t* p0, int8_t* p1, int8_t* concatenate_ext, uint8_t* global_const_workspace_32_var, uint8_t* global_workspace_33_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_concatenate_1(int8_t* p0, int8_t* p1, int8_t* concatenate_ext, uint8_t* global_const_workspace_70_var, uint8_t* global_workspace_71_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_concatenate_2(int8_t* p0, int8_t* p1, int8_t* concatenate_ext, uint8_t* global_const_workspace_88_var, uint8_t* global_workspace_89_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_concatenate_3(int8_t* p0, int8_t* p1, int8_t* concatenate_ext, uint8_t* global_const_workspace_104_var, uint8_t* global_workspace_105_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_divide_round_add_clip_cast(float* p0, int8_t* T_cast, uint8_t* global_const_workspace_2_var, uint8_t* global_workspace_3_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_mean(int32_t* p0, int32_t* T_divide, uint8_t* global_const_workspace_12_var, uint8_t* global_workspace_13_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_mean_1(int32_t* p0, int32_t* T_divide, uint8_t* global_const_workspace_50_var, uint8_t* global_workspace_51_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_mean_2(int32_t* p0, int32_t* T_divide, uint8_t* global_const_workspace_128_var, uint8_t* global_workspace_129_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_16_var, uint8_t* global_workspace_17_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast_1(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_18_var, uint8_t* global_workspace_19_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast_2(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_54_var, uint8_t* global_workspace_55_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast_3(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_56_var, uint8_t* global_workspace_57_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast_4(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_132_var, uint8_t* global_workspace_133_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast_5(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_134_var, uint8_t* global_workspace_135_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_subtract__fa059688879ad8de_(int8_t* p0, float* T_multiply, uint8_t* global_const_workspace_20_var, uint8_t* global_workspace_21_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_subtract__fa059688879ad8de__1(int8_t* p0, float* T_multiply, uint8_t* global_const_workspace_58_var, uint8_t* global_workspace_59_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_subtract__fa059688879ad8de__2(int8_t* p0, float* T_multiply, uint8_t* global_const_workspace_116_var, uint8_t* global_workspace_117_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_subtract__fa059688879ad8de__3(int8_t* p0, float* T_multiply, uint8_t* global_const_workspace_136_var, uint8_t* global_workspace_137_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip(int8_t* p0, int32_t* compute, uint8_t* global_const_workspace_10_var, uint8_t* global_workspace_11_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_1(int8_t* p0, int32_t* compute, uint8_t* global_const_workspace_48_var, uint8_t* global_workspace_49_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_2(int8_t* p0, int32_t* compute, uint8_t* global_const_workspace_126_var, uint8_t* global_workspace_127_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_4_var, uint8_t* global_workspace_5_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_1(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_24_var, uint8_t* global_workspace_25_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_10(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_68_var, uint8_t* global_workspace_69_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_11(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_72_var, uint8_t* global_workspace_73_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_12(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_74_var, uint8_t* global_workspace_75_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_13(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_76_var, uint8_t* global_workspace_77_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_14(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_80_var, uint8_t* global_workspace_81_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_15(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_82_var, uint8_t* global_workspace_83_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_16(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_86_var, uint8_t* global_workspace_87_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_17(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_90_var, uint8_t* global_workspace_91_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_18(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_92_var, uint8_t* global_workspace_93_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_19(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_94_var, uint8_t* global_workspace_95_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_2(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_26_var, uint8_t* global_workspace_27_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_20(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_96_var, uint8_t* global_workspace_97_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_21(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_98_var, uint8_t* global_workspace_99_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_22(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_102_var, uint8_t* global_workspace_103_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_23(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_106_var, uint8_t* global_workspace_107_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_24(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_108_var, uint8_t* global_workspace_109_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_25(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_110_var, uint8_t* global_workspace_111_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_26(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_122_var, uint8_t* global_workspace_123_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_3(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_30_var, uint8_t* global_workspace_31_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_4(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_34_var, uint8_t* global_workspace_35_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_5(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_36_var, uint8_t* global_workspace_37_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_6(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_38_var, uint8_t* global_workspace_39_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_7(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_44_var, uint8_t* global_workspace_45_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_8(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_62_var, uint8_t* global_workspace_63_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_9(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_64_var, uint8_t* global_workspace_65_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_max_pool2d(int8_t* p0, int8_t* pool_max, uint8_t* global_const_workspace_6_var, uint8_t* global_workspace_7_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_max_pool2d_1(int8_t* p0, int8_t* pool_max, uint8_t* global_const_workspace_40_var, uint8_t* global_workspace_41_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_max_pool2d_2(int8_t* p0, int8_t* pool_max, uint8_t* global_const_workspace_78_var, uint8_t* global_workspace_79_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_8_var, uint8_t* global_workspace_9_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_1(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_28_var, uint8_t* global_workspace_29_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_2(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_42_var, uint8_t* global_workspace_43_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_3(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_46_var, uint8_t* global_workspace_47_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_4(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_66_var, uint8_t* global_workspace_67_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_5(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_84_var, uint8_t* global_workspace_85_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_6(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_100_var, uint8_t* global_workspace_101_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_7(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_120_var, uint8_t* global_workspace_121_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_8(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_124_var, uint8_t* global_workspace_125_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_softmax_divide_round_add_clip_cast_subtract_cast_multiply(float* p0, float* T_multiply, uint8_t* global_const_workspace_22_var, uint8_t* global_workspace_23_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_softmax_divide_round_add_clip_cast_subtract_cast_multiply_1(float* p0, float* T_multiply, uint8_t* global_const_workspace_60_var, uint8_t* global_workspace_61_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_softmax_divide_round_add_clip_cast_subtract_cast_multiply_2(float* p0, float* T_multiply, uint8_t* global_const_workspace_118_var, uint8_t* global_workspace_119_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_softmax_divide_round_add_clip_cast_subtract_cast_multiply_3(float* p0, float* T_multiply, uint8_t* global_const_workspace_138_var, uint8_t* global_workspace_139_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_fixed_point_multiply_add_clip_cast_reshape(int32_t* p0, int8_t* T_reshape, uint8_t* global_const_workspace_14_var, uint8_t* global_workspace_15_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_fixed_point_multiply_add_clip_cast_reshape_1(int32_t* p0, int8_t* T_reshape, uint8_t* global_const_workspace_52_var, uint8_t* global_workspace_53_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_fixed_point_multiply_add_clip_cast_reshape_2(int32_t* p0, int8_t* T_reshape, uint8_t* global_const_workspace_114_var, uint8_t* global_workspace_115_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_fixed_point_multiply_add_clip_cast_reshape_3(int32_t* p0, int8_t* T_reshape, uint8_t* global_const_workspace_130_var, uint8_t* global_workspace_131_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default___tvm_main__(float* serving_default_input_0_buffer_var, float* StatefulPartitionedCall_1_buffer_var, float* StatefulPartitionedCall_2_buffer_var, float* StatefulPartitionedCall_0_buffer_var, float* StatefulPartitionedCall_3_buffer_var, uint8_t* global_const_workspace_0_var, uint8_t* global_workspace_1_var);
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
TVM_DLL int32_t tvmgen_default_fused_cast_mean(int8_t* p0, int32_t* T_divide, uint8_t* global_const_workspace_112_var, uint8_t* global_workspace_113_var) {
  void* T_cast_red_let = (&(global_workspace_113_var[17152]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 512; ++ax0_ax1_fused) {
    ((int32_t*)T_cast_red_let)[ax0_ax1_fused] = 0;
    for (int32_t k1 = 0; k1 < 3; ++k1) {
      for (int32_t k2 = 0; k2 < 3; ++k2) {
        ((int32_t*)T_cast_red_let)[ax0_ax1_fused] = (((int32_t*)T_cast_red_let)[ax0_ax1_fused] + ((int32_t)p0[(((k1 * 1536) + (k2 * 512)) + ax0_ax1_fused)]));
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 32; ++ax1_outer) {
    for (int32_t ax1_inner = 0; ax1_inner < 16; ++ax1_inner) {
      int32_t cse_var_1 = ((ax1_outer * 16) + ax1_inner);
      T_divide[cse_var_1] = (((int32_t*)T_cast_red_let)[cse_var_1] / 9);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_concatenate(int8_t* p0, int8_t* p1, int8_t* concatenate_ext, uint8_t* global_const_workspace_32_var, uint8_t* global_workspace_33_var) {
  for (int32_t inn = 0; inn < 225; ++inn) {
    for (int32_t j = 0; j < 64; ++j) {
      concatenate_ext[((inn * 128) + j)] = p0[((inn * 64) + j)];
    }
    for (int32_t j_1 = 0; j_1 < 64; ++j_1) {
      concatenate_ext[(((inn * 128) + j_1) + 64)] = p1[((inn * 64) + j_1)];
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_concatenate_1(int8_t* p0, int8_t* p1, int8_t* concatenate_ext, uint8_t* global_const_workspace_70_var, uint8_t* global_workspace_71_var) {
  for (int32_t inn = 0; inn < 49; ++inn) {
    for (int32_t j = 0; j < 128; ++j) {
      concatenate_ext[((inn * 256) + j)] = p0[((inn * 128) + j)];
    }
    for (int32_t j_1 = 0; j_1 < 128; ++j_1) {
      concatenate_ext[(((inn * 256) + j_1) + 128)] = p1[((inn * 128) + j_1)];
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_concatenate_2(int8_t* p0, int8_t* p1, int8_t* concatenate_ext, uint8_t* global_const_workspace_88_var, uint8_t* global_workspace_89_var) {
  for (int32_t inn = 0; inn < 9; ++inn) {
    for (int32_t j = 0; j < 192; ++j) {
      concatenate_ext[((inn * 384) + j)] = p0[((inn * 192) + j)];
    }
    for (int32_t j_1 = 0; j_1 < 192; ++j_1) {
      concatenate_ext[(((inn * 384) + j_1) + 192)] = p1[((inn * 192) + j_1)];
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_concatenate_3(int8_t* p0, int8_t* p1, int8_t* concatenate_ext, uint8_t* global_const_workspace_104_var, uint8_t* global_workspace_105_var) {
  for (int32_t inn = 0; inn < 9; ++inn) {
    for (int32_t j = 0; j < 256; ++j) {
      concatenate_ext[((inn * 512) + j)] = p0[((inn * 256) + j)];
    }
    for (int32_t j_1 = 0; j_1 < 256; ++j_1) {
      concatenate_ext[(((inn * 512) + j_1) + 256)] = p1[((inn * 256) + j_1)];
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_divide_round_add_clip_cast(float* p0, int8_t* T_cast, uint8_t* global_const_workspace_2_var, uint8_t* global_workspace_3_var) {
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 64; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 64; ++ax2) {
      for (int32_t ax3_inner = 0; ax3_inner < 3; ++ax3_inner) {
        int32_t cse_var_1 = (((ax0_ax1_fused * 192) + (ax2 * 3)) + ax3_inner);
        float v_ = roundf((p0[cse_var_1] * 2.550000e+02f)) + -1.280000e+02f;
        float v__1 = (v_) < (1.270000e+02f) ? (v_) : (1.270000e+02f);
        T_cast[cse_var_1] = ((int8_t)((v__1) > (-1.280000e+02f) ? (v__1) : (-1.280000e+02f)));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_mean(int32_t* p0, int32_t* T_divide, uint8_t* global_const_workspace_12_var, uint8_t* global_workspace_13_var) {
  void* p0_red_let = (&(global_workspace_13_var[80320]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 32; ++ax0_ax1_fused) {
    ((int32_t*)p0_red_let)[ax0_ax1_fused] = 0;
    for (int32_t k1 = 0; k1 < 15; ++k1) {
      for (int32_t k2 = 0; k2 < 15; ++k2) {
        ((int32_t*)p0_red_let)[ax0_ax1_fused] = (((int32_t*)p0_red_let)[ax0_ax1_fused] + p0[(((k1 * 480) + (k2 * 32)) + ax0_ax1_fused)]);
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 2; ++ax1_outer) {
    for (int32_t ax1_inner = 0; ax1_inner < 16; ++ax1_inner) {
      int32_t cse_var_1 = ((ax1_outer * 16) + ax1_inner);
      T_divide[cse_var_1] = (((int32_t*)p0_red_let)[cse_var_1] / 225);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_mean_1(int32_t* p0, int32_t* T_divide, uint8_t* global_const_workspace_50_var, uint8_t* global_workspace_51_var) {
  void* p0_red_let = (&(global_workspace_51_var[38208]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 16; ++ax0_ax1_fused) {
    ((int32_t*)p0_red_let)[ax0_ax1_fused] = 0;
    for (int32_t k1 = 0; k1 < 7; ++k1) {
      for (int32_t k2 = 0; k2 < 7; ++k2) {
        ((int32_t*)p0_red_let)[ax0_ax1_fused] = (((int32_t*)p0_red_let)[ax0_ax1_fused] + p0[(((k1 * 112) + (k2 * 16)) + ax0_ax1_fused)]);
      }
    }
  }
  for (int32_t ax1_inner = 0; ax1_inner < 16; ++ax1_inner) {
    T_divide[ax1_inner] = (((int32_t*)p0_red_let)[ax1_inner] / 49);
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_mean_2(int32_t* p0, int32_t* T_divide, uint8_t* global_const_workspace_128_var, uint8_t* global_workspace_129_var) {
  void* p0_red_let = (&(global_workspace_129_var[1376]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 16; ++ax0_ax1_fused) {
    ((int32_t*)p0_red_let)[ax0_ax1_fused] = 0;
    for (int32_t k1 = 0; k1 < 3; ++k1) {
      for (int32_t k2 = 0; k2 < 3; ++k2) {
        ((int32_t*)p0_red_let)[ax0_ax1_fused] = (((int32_t*)p0_red_let)[ax0_ax1_fused] + p0[(((k1 * 48) + (k2 * 16)) + ax0_ax1_fused)]);
      }
    }
  }
  for (int32_t ax1_inner = 0; ax1_inner < 16; ++ax1_inner) {
    T_divide[ax1_inner] = (((int32_t*)p0_red_let)[ax1_inner] / 9);
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_16_var, uint8_t* global_workspace_17_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED] dense: 32->128 (packed [4][4][32][8])
  int32_t* conv_const = (int32_t*)(&global_const_workspace_16_var[946240]);
  int32_t* conv_sub   = (int32_t*)(&global_const_workspace_16_var[944704]);
  int8_t*  weights    = (int8_t*) (&global_const_workspace_16_var[868352]);

  // Padded input vector (aligned to MAC_BYTES)
  static int8_t _inp_pad[32];
  for (int32_t k = 0; k < 32; k++) _inp_pad[k] = p0[k];

  for (int32_t tile = 0; tile < 1; tile++) {
    int32_t oc_base = tile * 128;
    int32_t oc_count = 128;
    if (oc_base + oc_count > 128) oc_count = 128 - oc_base;
    static int8_t rw[4096];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      int32_t goc = oc_base + oc;
      int32_t ax1 = goc / 32;
      int32_t yi  = (goc % 32) / 8;
      int32_t xc  = goc % 8;
      for (int32_t k = 0; k < 32; k++)
        rw[oc * 32 + k] = weights[ax1 * 1024 + yi * 256 + k * 8 + xc];
    }
    accel_spad_write(0x020, rw, oc_count * 32);
    accel_spad_write(0x000, _inp_pad, 32);
    hw_multi_dot(0x000, 0x020, 0x1020, 32, oc_count);
    for (int32_t oc = 0; oc < oc_count; oc++) {
      int32_t ax3 = oc_base + oc;
      int32_t dot = (int32_t)accel_spad_read32(0x1020 + oc * 4);
      int32_t v_ = ((int32_t)(((((int64_t)((dot + conv_sub[ax3]) - conv_const[ax3]))
        * (int64_t)1164319887) + ((int64_t)1 << ((int64_t)((6 + 31) - 1))))
        >> ((int64_t)(6 + 31)))) - 128;
      int32_t v1 = (v_) < (127) ? (v_) : (127);
      T_cast[ax3] = (int8_t)((v1) > (-128) ? (v1) : (-128));
    }
  }
  return 0;

#else

  void* fused_nn_contrib_dense_pack_constant_let = (&(global_const_workspace_16_var[946240]));
  void* fused_nn_contrib_dense_pack_subtract_constant_let = (&(global_const_workspace_16_var[944704]));
  void* fused_constant_3_let = (&(global_const_workspace_16_var[868352]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 4; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_17_var[80320]));
    void* compute_global_let = (&(global_workspace_17_var[80480]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 4; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 32; ++k_outer) {
        for (int32_t x_c = 0; x_c < 8; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[k_outer]) * ((int32_t)((int8_t*)fused_constant_3_let)[((((ax1_outer_ax0_outer_fused * 1024) + (y_inner_outer_x_inner_outer_fused * 256)) + (k_outer * 8)) + x_c)])));
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
        int32_t v_ = ((int32_t)(((((0 != 0) ? (((int64_t)((((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_let)[cse_var_1])) << ((int64_t)0)) : ((int64_t)((((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_let)[cse_var_1]))) * (int64_t)1164319887) + ((int64_t)1 << ((int64_t)((6 + 31) - 1)))) >> ((int64_t)(6 + 31)))) - 128;
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
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast_1(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_18_var, uint8_t* global_workspace_19_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED] dense: 128->64 (packed [4][2][128][8])
  int32_t* conv_const = (int32_t*)(&global_const_workspace_18_var[956992]);
  int32_t* conv_sub   = (int32_t*)(&global_const_workspace_18_var[956224]);
  int8_t*  weights    = (int8_t*) (&global_const_workspace_18_var[829440]);

  // Padded input vector (aligned to MAC_BYTES)
  static int8_t _inp_pad[128];
  for (int32_t k = 0; k < 128; k++) _inp_pad[k] = p0[k];

  for (int32_t tile = 0; tile < 1; tile++) {
    int32_t oc_base = tile * 64;
    int32_t oc_count = 64;
    if (oc_base + oc_count > 64) oc_count = 64 - oc_base;
    static int8_t rw[8192];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      int32_t goc = oc_base + oc;
      int32_t ax1 = goc / 16;
      int32_t yi  = (goc % 16) / 8;
      int32_t xc  = goc % 8;
      for (int32_t k = 0; k < 128; k++)
        rw[oc * 128 + k] = weights[ax1 * 2048 + yi * 1024 + k * 8 + xc];
    }
    accel_spad_write(0x080, rw, oc_count * 128);
    accel_spad_write(0x000, _inp_pad, 128);
    hw_multi_dot(0x000, 0x080, 0x2080, 128, oc_count);
    for (int32_t oc = 0; oc < oc_count; oc++) {
      int32_t ax3 = oc_base + oc;
      int32_t dot = (int32_t)accel_spad_read32(0x2080 + oc * 4);
      int32_t v_ = ((int32_t)(((((int64_t)((dot + conv_sub[ax3]) - conv_const[ax3]))
        * (int64_t)1348220197) + ((int64_t)1 << ((int64_t)((8 + 31) - 1))))
        >> ((int64_t)(8 + 31)))) - 128;
      int32_t v1 = (v_) < (127) ? (v_) : (127);
      T_cast[ax3] = (int8_t)((v1) > (-128) ? (v1) : (-128));
    }
  }
  return 0;

#else

  void* fused_nn_contrib_dense_pack_constant_1_let = (&(global_const_workspace_18_var[956992]));
  void* fused_nn_contrib_dense_pack_subtract_constant_1_let = (&(global_const_workspace_18_var[956224]));
  void* fused_constant_4_let = (&(global_const_workspace_18_var[829440]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 4; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_19_var[80384]));
    void* compute_global_let = (&(global_workspace_19_var[80448]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 2; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 128; ++k_outer) {
        for (int32_t x_c = 0; x_c < 8; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[k_outer]) * ((int32_t)((int8_t*)fused_constant_4_let)[((((ax1_outer_ax0_outer_fused * 2048) + (y_inner_outer_x_inner_outer_fused * 1024)) + (k_outer * 8)) + x_c)])));
        }
      }
      for (int32_t x_inner_inner = 0; x_inner_inner < 8; ++x_inner_inner) {
        ((int32_t*)compute_let)[((y_inner_outer_x_inner_outer_fused * 8) + x_inner_inner)] = ((int32_t*)compute_global_let)[x_inner_inner];
      }
    }
    for (int32_t ax1_inner_outer = 0; ax1_inner_outer < 2; ++ax1_inner_outer) {
      for (int32_t ax1_inner_inner = 0; ax1_inner_inner < 8; ++ax1_inner_inner) {
        int32_t cse_var_2 = (ax1_inner_outer * 8);
        int32_t cse_var_1 = (((ax1_outer_ax0_outer_fused * 16) + cse_var_2) + ax1_inner_inner);
        int32_t v_ = ((int32_t)(((((0 != 0) ? (((int64_t)((((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_1_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_1_let)[cse_var_1])) << ((int64_t)0)) : ((int64_t)((((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_1_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_1_let)[cse_var_1]))) * (int64_t)1348220197) + ((int64_t)1 << ((int64_t)((8 + 31) - 1)))) >> ((int64_t)(8 + 31)))) - 128;
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
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast_2(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_54_var, uint8_t* global_workspace_55_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED] dense: 16->128 (packed [4][4][16][8])
  int32_t* conv_const = (int32_t*)(&global_const_workspace_54_var[945728]);
  int32_t* conv_sub   = (int32_t*)(&global_const_workspace_54_var[944192]);
  int8_t*  weights    = (int8_t*) (&global_const_workspace_54_var[888832]);

  // Padded input vector (aligned to MAC_BYTES)
  static int8_t _inp_pad[16];
  for (int32_t k = 0; k < 16; k++) _inp_pad[k] = p0[k];

  for (int32_t tile = 0; tile < 1; tile++) {
    int32_t oc_base = tile * 128;
    int32_t oc_count = 128;
    if (oc_base + oc_count > 128) oc_count = 128 - oc_base;
    static int8_t rw[2048];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      int32_t goc = oc_base + oc;
      int32_t ax1 = goc / 32;
      int32_t yi  = (goc % 32) / 8;
      int32_t xc  = goc % 8;
      for (int32_t k = 0; k < 16; k++)
        rw[oc * 16 + k] = weights[ax1 * 512 + yi * 128 + k * 8 + xc];
    }
    accel_spad_write(0x010, rw, oc_count * 16);
    accel_spad_write(0x000, _inp_pad, 16);
    hw_multi_dot(0x000, 0x010, 0x810, 16, oc_count);
    for (int32_t oc = 0; oc < oc_count; oc++) {
      int32_t ax3 = oc_base + oc;
      int32_t dot = (int32_t)accel_spad_read32(0x810 + oc * 4);
      int32_t v_ = ((int32_t)(((((int64_t)((dot + conv_sub[ax3]) - conv_const[ax3]))
        * (int64_t)1846707438) + ((int64_t)1 << ((int64_t)((7 + 31) - 1))))
        >> ((int64_t)(7 + 31)))) - 128;
      int32_t v1 = (v_) < (127) ? (v_) : (127);
      T_cast[ax3] = (int8_t)((v1) > (-128) ? (v1) : (-128));
    }
  }
  return 0;

#else

  void* fused_nn_contrib_dense_pack_constant_3_let = (&(global_const_workspace_54_var[945728]));
  void* fused_nn_contrib_dense_pack_subtract_constant_3_let = (&(global_const_workspace_54_var[944192]));
  void* fused_constant_15_let = (&(global_const_workspace_54_var[888832]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 4; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_55_var[35200]));
    void* compute_global_let = (&(global_workspace_55_var[35328]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 4; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 16; ++k_outer) {
        for (int32_t x_c = 0; x_c < 8; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[k_outer]) * ((int32_t)((int8_t*)fused_constant_15_let)[((((ax1_outer_ax0_outer_fused * 512) + (y_inner_outer_x_inner_outer_fused * 128)) + (k_outer * 8)) + x_c)])));
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
        int32_t v_ = ((int32_t)(((((0 != 0) ? (((int64_t)((((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_3_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_3_let)[cse_var_1])) << ((int64_t)0)) : ((int64_t)((((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_3_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_3_let)[cse_var_1]))) * (int64_t)1846707438) + ((int64_t)1 << ((int64_t)((7 + 31) - 1)))) >> ((int64_t)(7 + 31)))) - 128;
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
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast_3(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_56_var, uint8_t* global_workspace_57_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED] dense: 128->64 (packed [4][2][128][8])
  int32_t* conv_const = (int32_t*)(&global_const_workspace_56_var[956736]);
  int32_t* conv_sub   = (int32_t*)(&global_const_workspace_56_var[955968]);
  int8_t*  weights    = (int8_t*) (&global_const_workspace_56_var[845824]);

  // Padded input vector (aligned to MAC_BYTES)
  static int8_t _inp_pad[128];
  for (int32_t k = 0; k < 128; k++) _inp_pad[k] = p0[k];

  for (int32_t tile = 0; tile < 1; tile++) {
    int32_t oc_base = tile * 64;
    int32_t oc_count = 64;
    if (oc_base + oc_count > 64) oc_count = 64 - oc_base;
    static int8_t rw[8192];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      int32_t goc = oc_base + oc;
      int32_t ax1 = goc / 16;
      int32_t yi  = (goc % 16) / 8;
      int32_t xc  = goc % 8;
      for (int32_t k = 0; k < 128; k++)
        rw[oc * 128 + k] = weights[ax1 * 2048 + yi * 1024 + k * 8 + xc];
    }
    accel_spad_write(0x080, rw, oc_count * 128);
    accel_spad_write(0x000, _inp_pad, 128);
    hw_multi_dot(0x000, 0x080, 0x2080, 128, oc_count);
    for (int32_t oc = 0; oc < oc_count; oc++) {
      int32_t ax3 = oc_base + oc;
      int32_t dot = (int32_t)accel_spad_read32(0x2080 + oc * 4);
      int32_t v_ = ((int32_t)(((((int64_t)((dot + conv_sub[ax3]) - conv_const[ax3]))
        * (int64_t)1528336296) + ((int64_t)1 << ((int64_t)((9 + 31) - 1))))
        >> ((int64_t)(9 + 31)))) - 128;
      int32_t v1 = (v_) < (127) ? (v_) : (127);
      T_cast[ax3] = (int8_t)((v1) > (-128) ? (v1) : (-128));
    }
  }
  return 0;

#else

  void* fused_nn_contrib_dense_pack_constant_4_let = (&(global_const_workspace_56_var[956736]));
  void* fused_nn_contrib_dense_pack_subtract_constant_4_let = (&(global_const_workspace_56_var[955968]));
  void* fused_constant_16_let = (&(global_const_workspace_56_var[845824]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 4; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_57_var[35264]));
    void* compute_global_let = (&(global_workspace_57_var[35328]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 2; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 128; ++k_outer) {
        for (int32_t x_c = 0; x_c < 8; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[k_outer]) * ((int32_t)((int8_t*)fused_constant_16_let)[((((ax1_outer_ax0_outer_fused * 2048) + (y_inner_outer_x_inner_outer_fused * 1024)) + (k_outer * 8)) + x_c)])));
        }
      }
      for (int32_t x_inner_inner = 0; x_inner_inner < 8; ++x_inner_inner) {
        ((int32_t*)compute_let)[((y_inner_outer_x_inner_outer_fused * 8) + x_inner_inner)] = ((int32_t*)compute_global_let)[x_inner_inner];
      }
    }
    for (int32_t ax1_inner_outer = 0; ax1_inner_outer < 2; ++ax1_inner_outer) {
      for (int32_t ax1_inner_inner = 0; ax1_inner_inner < 8; ++ax1_inner_inner) {
        int32_t cse_var_2 = (ax1_inner_outer * 8);
        int32_t cse_var_1 = (((ax1_outer_ax0_outer_fused * 16) + cse_var_2) + ax1_inner_inner);
        int32_t v_ = ((int32_t)(((((0 != 0) ? (((int64_t)((((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_4_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_4_let)[cse_var_1])) << ((int64_t)0)) : ((int64_t)((((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_4_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_4_let)[cse_var_1]))) * (int64_t)1528336296) + ((int64_t)1 << ((int64_t)((9 + 31) - 1)))) >> ((int64_t)(9 + 31)))) - 128;
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
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast_4(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_132_var, uint8_t* global_workspace_133_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED] dense: 16->128 (packed [4][4][16][8])
  int32_t* conv_const = (int32_t*)(&global_const_workspace_132_var[945216]);
  int32_t* conv_sub   = (int32_t*)(&global_const_workspace_132_var[943680]);
  int8_t*  weights    = (int8_t*) (&global_const_workspace_132_var[886784]);

  // Padded input vector (aligned to MAC_BYTES)
  static int8_t _inp_pad[16];
  for (int32_t k = 0; k < 16; k++) _inp_pad[k] = p0[k];

  for (int32_t tile = 0; tile < 1; tile++) {
    int32_t oc_base = tile * 128;
    int32_t oc_count = 128;
    if (oc_base + oc_count > 128) oc_count = 128 - oc_base;
    static int8_t rw[2048];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      int32_t goc = oc_base + oc;
      int32_t ax1 = goc / 32;
      int32_t yi  = (goc % 32) / 8;
      int32_t xc  = goc % 8;
      for (int32_t k = 0; k < 16; k++)
        rw[oc * 16 + k] = weights[ax1 * 512 + yi * 128 + k * 8 + xc];
    }
    accel_spad_write(0x010, rw, oc_count * 16);
    accel_spad_write(0x000, _inp_pad, 16);
    hw_multi_dot(0x000, 0x010, 0x810, 16, oc_count);
    for (int32_t oc = 0; oc < oc_count; oc++) {
      int32_t ax3 = oc_base + oc;
      int32_t dot = (int32_t)accel_spad_read32(0x810 + oc * 4);
      int32_t v_ = ((int32_t)(((((int64_t)((dot + conv_sub[ax3]) - conv_const[ax3]))
        * (int64_t)1689393398) + ((int64_t)1 << ((int64_t)((7 + 31) - 1))))
        >> ((int64_t)(7 + 31)))) - 128;
      int32_t v1 = (v_) < (127) ? (v_) : (127);
      T_cast[ax3] = (int8_t)((v1) > (-128) ? (v1) : (-128));
    }
  }
  return 0;

#else

  void* fused_nn_contrib_dense_pack_constant_7_let = (&(global_const_workspace_132_var[945216]));
  void* fused_nn_contrib_dense_pack_subtract_constant_7_let = (&(global_const_workspace_132_var[943680]));
  void* fused_constant_41_let = (&(global_const_workspace_132_var[886784]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 4; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_133_var[128]));
    void* compute_global_let = (&(global_workspace_133_var[256]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 4; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 16; ++k_outer) {
        for (int32_t x_c = 0; x_c < 8; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[k_outer]) * ((int32_t)((int8_t*)fused_constant_41_let)[((((ax1_outer_ax0_outer_fused * 512) + (y_inner_outer_x_inner_outer_fused * 128)) + (k_outer * 8)) + x_c)])));
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
        int32_t v_ = ((int32_t)(((((0 != 0) ? (((int64_t)((((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_7_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_7_let)[cse_var_1])) << ((int64_t)0)) : ((int64_t)((((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_7_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_7_let)[cse_var_1]))) * (int64_t)1689393398) + ((int64_t)1 << ((int64_t)((7 + 31) - 1)))) >> ((int64_t)(7 + 31)))) - 128;
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
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast_5(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_134_var, uint8_t* global_workspace_135_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED] dense: 128->64 (packed [4][2][128][8])
  int32_t* conv_const = (int32_t*)(&global_const_workspace_134_var[956480]);
  int32_t* conv_sub   = (int32_t*)(&global_const_workspace_134_var[955712]);
  int8_t*  weights    = (int8_t*) (&global_const_workspace_134_var[821248]);

  // Padded input vector (aligned to MAC_BYTES)
  static int8_t _inp_pad[128];
  for (int32_t k = 0; k < 128; k++) _inp_pad[k] = p0[k];

  for (int32_t tile = 0; tile < 1; tile++) {
    int32_t oc_base = tile * 64;
    int32_t oc_count = 64;
    if (oc_base + oc_count > 64) oc_count = 64 - oc_base;
    static int8_t rw[8192];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      int32_t goc = oc_base + oc;
      int32_t ax1 = goc / 16;
      int32_t yi  = (goc % 16) / 8;
      int32_t xc  = goc % 8;
      for (int32_t k = 0; k < 128; k++)
        rw[oc * 128 + k] = weights[ax1 * 2048 + yi * 1024 + k * 8 + xc];
    }
    accel_spad_write(0x080, rw, oc_count * 128);
    accel_spad_write(0x000, _inp_pad, 128);
    hw_multi_dot(0x000, 0x080, 0x2080, 128, oc_count);
    for (int32_t oc = 0; oc < oc_count; oc++) {
      int32_t ax3 = oc_base + oc;
      int32_t dot = (int32_t)accel_spad_read32(0x2080 + oc * 4);
      int32_t v_ = ((int32_t)(((((int64_t)((dot + conv_sub[ax3]) - conv_const[ax3]))
        * (int64_t)1374907953) + ((int64_t)1 << ((int64_t)((8 + 31) - 1))))
        >> ((int64_t)(8 + 31)))) - 128;
      int32_t v1 = (v_) < (127) ? (v_) : (127);
      T_cast[ax3] = (int8_t)((v1) > (-128) ? (v1) : (-128));
    }
  }
  return 0;

#else

  void* fused_nn_contrib_dense_pack_constant_8_let = (&(global_const_workspace_134_var[956480]));
  void* fused_nn_contrib_dense_pack_subtract_constant_8_let = (&(global_const_workspace_134_var[955712]));
  void* fused_constant_42_let = (&(global_const_workspace_134_var[821248]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 4; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_135_var[192]));
    void* compute_global_let = (&(global_workspace_135_var[256]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 2; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 128; ++k_outer) {
        for (int32_t x_c = 0; x_c < 8; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[k_outer]) * ((int32_t)((int8_t*)fused_constant_42_let)[((((ax1_outer_ax0_outer_fused * 2048) + (y_inner_outer_x_inner_outer_fused * 1024)) + (k_outer * 8)) + x_c)])));
        }
      }
      for (int32_t x_inner_inner = 0; x_inner_inner < 8; ++x_inner_inner) {
        ((int32_t*)compute_let)[((y_inner_outer_x_inner_outer_fused * 8) + x_inner_inner)] = ((int32_t*)compute_global_let)[x_inner_inner];
      }
    }
    for (int32_t ax1_inner_outer = 0; ax1_inner_outer < 2; ++ax1_inner_outer) {
      for (int32_t ax1_inner_inner = 0; ax1_inner_inner < 8; ++ax1_inner_inner) {
        int32_t cse_var_2 = (ax1_inner_outer * 8);
        int32_t cse_var_1 = (((ax1_outer_ax0_outer_fused * 16) + cse_var_2) + ax1_inner_inner);
        int32_t v_ = ((int32_t)(((((0 != 0) ? (((int64_t)((((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_8_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_8_let)[cse_var_1])) << ((int64_t)0)) : ((int64_t)((((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_8_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_8_let)[cse_var_1]))) * (int64_t)1374907953) + ((int64_t)1 << ((int64_t)((8 + 31) - 1)))) >> ((int64_t)(8 + 31)))) - 128;
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
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_subtract__fa059688879ad8de_(int8_t* p0, float* T_multiply, uint8_t* global_const_workspace_20_var, uint8_t* global_workspace_21_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED] dense: 64->10 (packed [2][1][64][5])
  int32_t* conv_const = (int32_t*)(&global_const_workspace_20_var[963984]);
  int32_t* conv_sub   = (int32_t*)(&global_const_workspace_20_var[963792]);
  int8_t*  weights    = (int8_t*) (&global_const_workspace_20_var[931520]);

  // Padded input vector (aligned to MAC_BYTES)
  static int8_t _inp_pad[64];
  for (int32_t k = 0; k < 64; k++) _inp_pad[k] = p0[k];

  for (int32_t tile = 0; tile < 1; tile++) {
    int32_t oc_base = tile * 10;
    int32_t oc_count = 10;
    if (oc_base + oc_count > 10) oc_count = 10 - oc_base;
    static int8_t rw[640];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      int32_t goc = oc_base + oc;
      int32_t ax1 = goc / 5;
      int32_t yi  = (goc % 5) / 5;
      int32_t xc  = goc % 5;
      for (int32_t k = 0; k < 64; k++)
        rw[oc * 64 + k] = weights[ax1 * 320 + yi * 320 + k * 5 + xc];
    }
    accel_spad_write(0x040, rw, oc_count * 64);
    accel_spad_write(0x000, _inp_pad, 64);
    hw_multi_dot(0x000, 0x040, 0x2C0, 64, oc_count);
    for (int32_t oc = 0; oc < oc_count; oc++) {
      int32_t ax3 = oc_base + oc;
      int32_t dot = (int32_t)accel_spad_read32(0x2C0 + oc * 4);
      int32_t v_ = ((int32_t)(((((int64_t)((dot + conv_sub[ax3]) - conv_const[ax3]))
        * (int64_t)2085923054) + ((int64_t)1 << ((int64_t)((9 + 31) - 1))))
        >> ((int64_t)(9 + 31)))) + 19;
      int32_t v1 = (v_) < (127) ? (v_) : (127);
      T_multiply[ax3] = (((float)(((v1) > (-128) ? (v1) : (-128)) - 19)) * 7.106052e-02f);
    }
  }
  return 0;

#else

  void* fused_nn_contrib_dense_pack_constant_2_let = (&(global_const_workspace_20_var[963984]));
  void* fused_nn_contrib_dense_pack_subtract_constant_2_let = (&(global_const_workspace_20_var[963792]));
  void* fused_constant_5_let = (&(global_const_workspace_20_var[931520]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 2; ++ax1_outer_ax0_outer_fused) {
    void* compute_global_let = (&(global_workspace_21_var[80424]));
    for (int32_t x_c_init = 0; x_c_init < 5; ++x_c_init) {
      ((int32_t*)compute_global_let)[x_c_init] = 0;
    }
    for (int32_t k_outer = 0; k_outer < 64; ++k_outer) {
      for (int32_t x_c = 0; x_c < 5; ++x_c) {
        ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[k_outer]) * ((int32_t)((int8_t*)fused_constant_5_let)[(((ax1_outer_ax0_outer_fused * 320) + (k_outer * 5)) + x_c)])));
      }
    }
    for (int32_t ax1_inner_inner = 0; ax1_inner_inner < 5; ++ax1_inner_inner) {
      int32_t cse_var_1 = ((ax1_outer_ax0_outer_fused * 5) + ax1_inner_inner);
      int32_t v_ = ((int32_t)(((((0 != 0) ? (((int64_t)((((int32_t*)compute_global_let)[ax1_inner_inner] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_2_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_2_let)[cse_var_1])) << ((int64_t)0)) : ((int64_t)((((int32_t*)compute_global_let)[ax1_inner_inner] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_2_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_2_let)[cse_var_1]))) * (int64_t)2085923054) + ((int64_t)1 << ((int64_t)((9 + 31) - 1)))) >> ((int64_t)(9 + 31)))) + 19;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_multiply[cse_var_1] = (((float)(((v__1) > (-128) ? (v__1) : (-128)) - 19)) * 7.106052e-02f);
    }
  }
  return 0;

#endif
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_subtract__fa059688879ad8de__1(int8_t* p0, float* T_multiply, uint8_t* global_const_workspace_58_var, uint8_t* global_workspace_59_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED] dense: 64->10 (packed [2][1][64][5])
  int32_t* conv_const = (int32_t*)(&global_const_workspace_58_var[963936]);
  int32_t* conv_sub   = (int32_t*)(&global_const_workspace_58_var[963744]);
  int8_t*  weights    = (int8_t*) (&global_const_workspace_58_var[932800]);

  // Padded input vector (aligned to MAC_BYTES)
  static int8_t _inp_pad[64];
  for (int32_t k = 0; k < 64; k++) _inp_pad[k] = p0[k];

  for (int32_t tile = 0; tile < 1; tile++) {
    int32_t oc_base = tile * 10;
    int32_t oc_count = 10;
    if (oc_base + oc_count > 10) oc_count = 10 - oc_base;
    static int8_t rw[640];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      int32_t goc = oc_base + oc;
      int32_t ax1 = goc / 5;
      int32_t yi  = (goc % 5) / 5;
      int32_t xc  = goc % 5;
      for (int32_t k = 0; k < 64; k++)
        rw[oc * 64 + k] = weights[ax1 * 320 + yi * 320 + k * 5 + xc];
    }
    accel_spad_write(0x040, rw, oc_count * 64);
    accel_spad_write(0x000, _inp_pad, 64);
    hw_multi_dot(0x000, 0x040, 0x2C0, 64, oc_count);
    for (int32_t oc = 0; oc < oc_count; oc++) {
      int32_t ax3 = oc_base + oc;
      int32_t dot = (int32_t)accel_spad_read32(0x2C0 + oc * 4);
      int32_t v_ = ((int32_t)(((((int64_t)((dot + conv_sub[ax3]) - conv_const[ax3]))
        * (int64_t)1485395216) + ((int64_t)1 << ((int64_t)((8 + 31) - 1))))
        >> ((int64_t)(8 + 31)))) - 38;
      int32_t v1 = (v_) < (127) ? (v_) : (127);
      T_multiply[ax3] = (((float)(((v1) > (-128) ? (v1) : (-128)) + 38)) * 1.294841e-01f);
    }
  }
  return 0;

#else

  void* fused_nn_contrib_dense_pack_constant_5_let = (&(global_const_workspace_58_var[963936]));
  void* fused_nn_contrib_dense_pack_subtract_constant_5_let = (&(global_const_workspace_58_var[963744]));
  void* fused_constant_17_let = (&(global_const_workspace_58_var[932800]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 2; ++ax1_outer_ax0_outer_fused) {
    void* compute_global_let = (&(global_workspace_59_var[35304]));
    for (int32_t x_c_init = 0; x_c_init < 5; ++x_c_init) {
      ((int32_t*)compute_global_let)[x_c_init] = 0;
    }
    for (int32_t k_outer = 0; k_outer < 64; ++k_outer) {
      for (int32_t x_c = 0; x_c < 5; ++x_c) {
        ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[k_outer]) * ((int32_t)((int8_t*)fused_constant_17_let)[(((ax1_outer_ax0_outer_fused * 320) + (k_outer * 5)) + x_c)])));
      }
    }
    for (int32_t ax1_inner_inner = 0; ax1_inner_inner < 5; ++ax1_inner_inner) {
      int32_t cse_var_1 = ((ax1_outer_ax0_outer_fused * 5) + ax1_inner_inner);
      int32_t v_ = ((int32_t)(((((0 != 0) ? (((int64_t)((((int32_t*)compute_global_let)[ax1_inner_inner] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_5_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_5_let)[cse_var_1])) << ((int64_t)0)) : ((int64_t)((((int32_t*)compute_global_let)[ax1_inner_inner] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_5_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_5_let)[cse_var_1]))) * (int64_t)1485395216) + ((int64_t)1 << ((int64_t)((8 + 31) - 1)))) >> ((int64_t)(8 + 31)))) - 38;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_multiply[cse_var_1] = (((float)(((v__1) > (-128) ? (v__1) : (-128)) + 38)) * 1.294841e-01f);
    }
  }
  return 0;

#endif
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_subtract__fa059688879ad8de__2(int8_t* p0, float* T_multiply, uint8_t* global_const_workspace_116_var, uint8_t* global_workspace_117_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED] dense: 512->10 (packed [2][1][512][5])
  int32_t* conv_const = (int32_t*)(&global_const_workspace_116_var[963888]);
  int32_t* conv_sub   = (int32_t*)(&global_const_workspace_116_var[963696]);
  int8_t*  weights    = (int8_t*) (&global_const_workspace_116_var[854016]);

  // Padded input vector (aligned to MAC_BYTES)
  static int8_t _inp_pad[512];
  for (int32_t k = 0; k < 512; k++) _inp_pad[k] = p0[k];

  for (int32_t tile = 0; tile < 1; tile++) {
    int32_t oc_base = tile * 10;
    int32_t oc_count = 10;
    if (oc_base + oc_count > 10) oc_count = 10 - oc_base;
    static int8_t rw[5120];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      int32_t goc = oc_base + oc;
      int32_t ax1 = goc / 5;
      int32_t yi  = (goc % 5) / 5;
      int32_t xc  = goc % 5;
      for (int32_t k = 0; k < 512; k++)
        rw[oc * 512 + k] = weights[ax1 * 2560 + yi * 2560 + k * 5 + xc];
    }
    accel_spad_write(0x200, rw, oc_count * 512);
    accel_spad_write(0x000, _inp_pad, 512);
    hw_multi_dot(0x000, 0x200, 0x1600, 512, oc_count);
    for (int32_t oc = 0; oc < oc_count; oc++) {
      int32_t ax3 = oc_base + oc;
      int32_t dot = (int32_t)accel_spad_read32(0x1600 + oc * 4);
      int32_t v_ = ((int32_t)(((((int64_t)((dot + conv_sub[ax3]) - conv_const[ax3]))
        * (int64_t)1101731684) + ((int64_t)1 << ((int64_t)((7 + 31) - 1))))
        >> ((int64_t)(7 + 31)))) + 39;
      int32_t v1 = (v_) < (127) ? (v_) : (127);
      T_multiply[ax3] = (((float)(((v1) > (-128) ? (v1) : (-128)) - 39)) * 3.505795e-01f);
    }
  }
  return 0;

#else

  void* fused_nn_contrib_dense_pack_constant_6_let = (&(global_const_workspace_116_var[963888]));
  void* fused_nn_contrib_dense_pack_subtract_constant_6_let = (&(global_const_workspace_116_var[963696]));
  void* fused_constant_37_let = (&(global_const_workspace_116_var[854016]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 2; ++ax1_outer_ax0_outer_fused) {
    void* compute_global_let = (&(global_workspace_117_var[17704]));
    for (int32_t x_c_init = 0; x_c_init < 5; ++x_c_init) {
      ((int32_t*)compute_global_let)[x_c_init] = 0;
    }
    for (int32_t k_outer = 0; k_outer < 512; ++k_outer) {
      for (int32_t x_c = 0; x_c < 5; ++x_c) {
        ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[k_outer]) * ((int32_t)((int8_t*)fused_constant_37_let)[(((ax1_outer_ax0_outer_fused * 2560) + (k_outer * 5)) + x_c)])));
      }
    }
    for (int32_t ax1_inner_inner = 0; ax1_inner_inner < 5; ++ax1_inner_inner) {
      int32_t cse_var_1 = ((ax1_outer_ax0_outer_fused * 5) + ax1_inner_inner);
      int32_t v_ = ((int32_t)(((((0 != 0) ? (((int64_t)((((int32_t*)compute_global_let)[ax1_inner_inner] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_6_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_6_let)[cse_var_1])) << ((int64_t)0)) : ((int64_t)((((int32_t*)compute_global_let)[ax1_inner_inner] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_6_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_6_let)[cse_var_1]))) * (int64_t)1101731684) + ((int64_t)1 << ((int64_t)((7 + 31) - 1)))) >> ((int64_t)(7 + 31)))) + 39;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_multiply[cse_var_1] = (((float)(((v__1) > (-128) ? (v__1) : (-128)) - 39)) * 3.505795e-01f);
    }
  }
  return 0;

#endif
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_subtract__fa059688879ad8de__3(int8_t* p0, float* T_multiply, uint8_t* global_const_workspace_136_var, uint8_t* global_workspace_137_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED] dense: 64->10 (packed [2][1][64][5])
  int32_t* conv_const = (int32_t*)(&global_const_workspace_136_var[963840]);
  int32_t* conv_sub   = (int32_t*)(&global_const_workspace_136_var[963648]);
  int8_t*  weights    = (int8_t*) (&global_const_workspace_136_var[932160]);

  // Padded input vector (aligned to MAC_BYTES)
  static int8_t _inp_pad[64];
  for (int32_t k = 0; k < 64; k++) _inp_pad[k] = p0[k];

  for (int32_t tile = 0; tile < 1; tile++) {
    int32_t oc_base = tile * 10;
    int32_t oc_count = 10;
    if (oc_base + oc_count > 10) oc_count = 10 - oc_base;
    static int8_t rw[640];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      int32_t goc = oc_base + oc;
      int32_t ax1 = goc / 5;
      int32_t yi  = (goc % 5) / 5;
      int32_t xc  = goc % 5;
      for (int32_t k = 0; k < 64; k++)
        rw[oc * 64 + k] = weights[ax1 * 320 + yi * 320 + k * 5 + xc];
    }
    accel_spad_write(0x040, rw, oc_count * 64);
    accel_spad_write(0x000, _inp_pad, 64);
    hw_multi_dot(0x000, 0x040, 0x2C0, 64, oc_count);
    for (int32_t oc = 0; oc < oc_count; oc++) {
      int32_t ax3 = oc_base + oc;
      int32_t dot = (int32_t)accel_spad_read32(0x2C0 + oc * 4);
      int32_t v_ = ((int32_t)(((((int64_t)((dot + conv_sub[ax3]) - conv_const[ax3]))
        * (int64_t)2085577750) + ((int64_t)1 << ((int64_t)((9 + 31) - 1))))
        >> ((int64_t)(9 + 31)))) - 27;
      int32_t v1 = (v_) < (127) ? (v_) : (127);
      T_multiply[ax3] = (((float)(((v1) > (-128) ? (v1) : (-128)) + 27)) * 2.862905e-01f);
    }
  }
  return 0;

#else

  void* fused_nn_contrib_dense_pack_constant_9_let = (&(global_const_workspace_136_var[963840]));
  void* fused_nn_contrib_dense_pack_subtract_constant_9_let = (&(global_const_workspace_136_var[963648]));
  void* fused_constant_43_let = (&(global_const_workspace_136_var[932160]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 2; ++ax1_outer_ax0_outer_fused) {
    void* compute_global_let = (&(global_workspace_137_var[232]));
    for (int32_t x_c_init = 0; x_c_init < 5; ++x_c_init) {
      ((int32_t*)compute_global_let)[x_c_init] = 0;
    }
    for (int32_t k_outer = 0; k_outer < 64; ++k_outer) {
      for (int32_t x_c = 0; x_c < 5; ++x_c) {
        ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[k_outer]) * ((int32_t)((int8_t*)fused_constant_43_let)[(((ax1_outer_ax0_outer_fused * 320) + (k_outer * 5)) + x_c)])));
      }
    }
    for (int32_t ax1_inner_inner = 0; ax1_inner_inner < 5; ++ax1_inner_inner) {
      int32_t cse_var_1 = ((ax1_outer_ax0_outer_fused * 5) + ax1_inner_inner);
      int32_t v_ = ((int32_t)(((((0 != 0) ? (((int64_t)((((int32_t*)compute_global_let)[ax1_inner_inner] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_9_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_9_let)[cse_var_1])) << ((int64_t)0)) : ((int64_t)((((int32_t*)compute_global_let)[ax1_inner_inner] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_9_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_9_let)[cse_var_1]))) * (int64_t)2085577750) + ((int64_t)1 << ((int64_t)((9 + 31) - 1)))) >> ((int64_t)(9 + 31)))) - 27;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_multiply[cse_var_1] = (((float)(((v__1) > (-128) ? (v__1) : (-128)) + 27)) * 2.862905e-01f);
    }
  }
  return 0;

#endif
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip(int8_t* p0, int32_t* compute, uint8_t* global_const_workspace_10_var, uint8_t* global_workspace_11_var) {
  void* fused_nn_conv2d_subtract_add_constant_5_let = (&(global_const_workspace_10_var[960192]));
  void* fused_nn_conv2d_subtract_add_constant_4_let = (&(global_const_workspace_10_var[960576]));
  void* fused_nn_conv2d_subtract_add_constant_3_let = (&(global_const_workspace_10_var[961216]));
  void* fused_nn_conv2d_constant_1_let = (&(global_const_workspace_10_var[962240]));
  void* fused_nn_conv2d_subtract_constant_1_let = (&(global_const_workspace_10_var[959680]));
  void* fused_constant_1_let = (&(global_const_workspace_10_var[720896]));
  void* pad_temp_let = (&(global_workspace_11_var[28800]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 17; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 17; ++i2) {
      for (int32_t i3 = 0; i3 < 64; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 1088) + (i2 * 64)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 225; ++i0_i1_fused_i2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_11_var[80192]));
    for (int32_t i3_1 = 0; i3_1 < 32; ++i3_1) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t ry = 0; ry < 3; ++ry) {
        for (int32_t rx = 0; rx < 3; ++rx) {
          for (int32_t rc = 0; rc < 64; ++rc) {
            ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((((((i0_i1_fused_i2_fused / 15) * 1088) + (ry * 1088)) + (rx * 64)) + ((i0_i1_fused_i2_fused % 15) * 64)) + rc)]) * ((int32_t)((int8_t*)fused_constant_1_let)[((((ry * 6144) + (rx * 2048)) + (rc * 32)) + i3_1)])));
          }
        }
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_1_let)[i3_1]) - ((int32_t*)fused_nn_conv2d_constant_1_let)[i3_1])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_3_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_5_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_5_let)[i3_1] + 31)))) - 128;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      compute[((i0_i1_fused_i2_fused * 32) + i3_1)] = ((v__1) > (-128) ? (v__1) : (-128));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_1(int8_t* p0, int32_t* compute, uint8_t* global_const_workspace_48_var, uint8_t* global_workspace_49_var) {
  void* fused_nn_conv2d_subtract_add_constant_29_let = (&(global_const_workspace_48_var[963008]));
  void* fused_nn_conv2d_subtract_add_constant_28_let = (&(global_const_workspace_48_var[963072]));
  void* fused_nn_conv2d_subtract_add_constant_27_let = (&(global_const_workspace_48_var[963136]));
  void* fused_nn_conv2d_constant_9_let = (&(global_const_workspace_48_var[963392]));
  void* fused_nn_conv2d_subtract_constant_9_let = (&(global_const_workspace_48_var[962368]));
  void* fused_constant_13_let = (&(global_const_workspace_48_var[863744]));
  void* pad_temp_let = (&(global_workspace_49_var[38208]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 9; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 9; ++i2) {
      for (int32_t i3 = 0; i3 < 32; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 288) + (i2 * 32)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 49; ++i0_i1_fused_i2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_49_var[40800]));
    for (int32_t i3_1 = 0; i3_1 < 16; ++i3_1) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t ry = 0; ry < 3; ++ry) {
        for (int32_t rx = 0; rx < 3; ++rx) {
          for (int32_t rc = 0; rc < 32; ++rc) {
            ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((((((i0_i1_fused_i2_fused / 7) * 288) + (ry * 288)) + (rx * 32)) + ((i0_i1_fused_i2_fused % 7) * 32)) + rc)]) * ((int32_t)((int8_t*)fused_constant_13_let)[((((ry * 1536) + (rx * 512)) + (rc * 16)) + i3_1)])));
          }
        }
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_9_let)[i3_1]) - ((int32_t*)fused_nn_conv2d_constant_9_let)[i3_1])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_27_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_29_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_29_let)[i3_1] + 31)))) - 128;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      compute[((i0_i1_fused_i2_fused * 16) + i3_1)] = ((v__1) > (-128) ? (v__1) : (-128));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_2(int8_t* p0, int32_t* compute, uint8_t* global_const_workspace_126_var, uint8_t* global_workspace_127_var) {
  void* fused_nn_conv2d_subtract_add_constant_89_let = (&(global_const_workspace_126_var[962624]));
  void* fused_nn_conv2d_subtract_add_constant_88_let = (&(global_const_workspace_126_var[962688]));
  void* fused_nn_conv2d_subtract_add_constant_87_let = (&(global_const_workspace_126_var[962752]));
  void* fused_nn_conv2d_constant_29_let = (&(global_const_workspace_126_var[963520]));
  void* fused_nn_conv2d_subtract_constant_29_let = (&(global_const_workspace_126_var[962496]));
  void* fused_constant_39_let = (&(global_const_workspace_126_var[859136]));
  void* pad_temp_let = (&(global_workspace_127_var[0]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 5; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 5; ++i2) {
      for (int32_t i3 = 0; i3 < 32; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 160) + (i2 * 32)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 9; ++i0_i1_fused_i2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_127_var[1376]));
    for (int32_t i3_1 = 0; i3_1 < 16; ++i3_1) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t ry = 0; ry < 3; ++ry) {
        for (int32_t rx = 0; rx < 3; ++rx) {
          for (int32_t rc = 0; rc < 32; ++rc) {
            ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((((((i0_i1_fused_i2_fused / 3) * 160) + (ry * 160)) + (rx * 32)) + ((i0_i1_fused_i2_fused % 3) * 32)) + rc)]) * ((int32_t)((int8_t*)fused_constant_39_let)[((((ry * 1536) + (rx * 512)) + (rc * 16)) + i3_1)])));
          }
        }
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_29_let)[i3_1]) - ((int32_t*)fused_nn_conv2d_constant_29_let)[i3_1])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_87_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_89_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_89_let)[i3_1] + 31)))) - 128;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      compute[((i0_i1_fused_i2_fused * 16) + i3_1)] = ((v__1) > (-128) ? (v__1) : (-128));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_4_var, uint8_t* global_workspace_5_var) {
  void* fused_nn_conv2d_subtract_add_constant_2_let = (&(global_const_workspace_4_var[951360]));
  void* fused_nn_conv2d_subtract_add_constant_1_let = (&(global_const_workspace_4_var[953408]));
  void* fused_nn_conv2d_subtract_add_constant_let = (&(global_const_workspace_4_var[953664]));
  void* fused_nn_conv2d_constant_let = (&(global_const_workspace_4_var[955456]));
  void* fused_nn_conv2d_subtract_constant_let = (&(global_const_workspace_4_var[948288]));
  void* fused_constant_let = (&(global_const_workspace_4_var[890880]));
  void* pad_temp_let = (&(global_workspace_5_var[61504]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 63; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 63; ++i2) {
      for (int32_t i3 = 0; i3 < 3; ++i3) {
        int32_t cse_var_1 = (i2 * 3);
        ((int8_t*)pad_temp_let)[(((i0_i1_fused * 189) + cse_var_1) + i3)] = p0[(((i0_i1_fused * 192) + cse_var_1) + i3)];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 961; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_5_var[73416]));
    for (int32_t ff = 0; ff < 64; ++ff) {
      ((int32_t*)conv2d_nhwc_let)[ff] = 0;
      for (int32_t ry = 0; ry < 3; ++ry) {
        for (int32_t rx = 0; rx < 3; ++rx) {
          for (int32_t rc = 0; rc < 3; ++rc) {
            ((int32_t*)conv2d_nhwc_let)[ff] = (((int32_t*)conv2d_nhwc_let)[ff] + (((int32_t)((int8_t*)pad_temp_let)[((((((ax0_ax1_fused_ax2_fused / 31) * 378) + (ry * 189)) + ((ax0_ax1_fused_ax2_fused % 31) * 6)) + (rx * 3)) + rc)]) * ((int32_t)((int8_t*)fused_constant_let)[((((ry * 576) + (rx * 192)) + (rc * 64)) + ff)])));
          }
        }
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 64; ++ax3_inner) {
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[ax3_inner] + ((int32_t*)fused_nn_conv2d_subtract_constant_let)[ax3_inner]) - ((int32_t*)fused_nn_conv2d_constant_let)[ax3_inner])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_let)[ax3_inner])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_2_let)[ax3_inner] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_2_let)[ax3_inner] + 31)))) - 128;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_cast[((ax0_ax1_fused_ax2_fused * 64) + ax3_inner)] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_1(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_24_var, uint8_t* global_workspace_25_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED v8 HW-REQUANT] 1x1 conv: 64->16 channels, 225 spatial positions
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_24_var[962816]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_24_var[962944]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_24_var[963584]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_24_var[962560]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_24_var[914112]);

  // Safe copy: TVM may alias input/output workspace buffers
  static int8_t _inp[14400];
  for (int32_t _i = 0; _i < 14400; _i++) _inp[_i] = p0[_i];

  // Set per-layer zero-point once. The helper is provided by conv_accel.h.
  accel_set_output_zp(-128);

  for (int32_t tile = 0; tile < 1; tile++) {
    int32_t oc_base = tile * 16;
    int32_t oc_count = 16;
    if (oc_base + oc_count > 16) oc_count = 16 - oc_base;

    // Pack weights for this tile (relayout from [rc][oc] to [oc][rc])
    static int8_t rw[1024];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      for (int32_t rc = 0; rc < 64; rc++)
        rw[oc * 64 + rc] = weights[rc * 16 + oc_base + oc];
    }
    accel_spad_write(0x040, rw, oc_count * 64);

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
    accel_spad_write(0x480, (int8_t*)params, oc_count * 16);

    for (int32_t sp = 0; sp < 225; sp++) {
      accel_spad_write(0x000, &_inp[sp * 64], 64);
      hw_multi_dot_requant(0x000, 0x040, 0x440,
                           0x480, 64, oc_count);
      accel_unpack_i8_outputs(&T_cast[(sp * 16) + oc_base],
                              0x440, oc_count);
    }
  }
  return 0;

#else

  void* fused_nn_conv2d_subtract_add_constant_8_let = (&(global_const_workspace_24_var[962816]));
  void* fused_nn_conv2d_subtract_add_constant_7_let = (&(global_const_workspace_24_var[962880]));
  void* fused_nn_conv2d_subtract_add_constant_6_let = (&(global_const_workspace_24_var[962944]));
  void* fused_nn_conv2d_constant_2_let = (&(global_const_workspace_24_var[963584]));
  void* fused_nn_conv2d_subtract_constant_2_let = (&(global_const_workspace_24_var[962560]));
  void* fused_constant_6_let = (&(global_const_workspace_24_var[914112]));
  void* pad_temp_let = (&(global_workspace_25_var[80192]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 15; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 15; ++i2) {
      for (int32_t i3 = 0; i3 < 64; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 960) + (i2 * 64)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 225; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_25_var[98192]));
    for (int32_t ax3 = 0; ax3 < 16; ++ax3) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 64; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 64) + rc)]) * ((int32_t)((int8_t*)fused_constant_6_let)[((rc * 16) + ax3)])));
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
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_10(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_68_var, uint8_t* global_workspace_69_var) {
  void* fused_nn_conv2d_subtract_add_constant_38_let = (&(global_const_workspace_68_var[938560]));
  void* fused_nn_conv2d_subtract_add_constant_37_let = (&(global_const_workspace_68_var[939072]));
  void* fused_nn_conv2d_subtract_add_constant_36_let = (&(global_const_workspace_68_var[939584]));
  void* fused_nn_conv2d_constant_12_let = (&(global_const_workspace_68_var[942656]));
  void* fused_nn_conv2d_subtract_constant_12_let = (&(global_const_workspace_68_var[934464]));
  void* fused_constant_20_let = (&(global_const_workspace_68_var[571392]));
  void* pad_temp_let = (&(global_workspace_69_var[25088]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 9; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 9; ++i2) {
      for (int32_t i3 = 0; i3 < 32; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 288) + (i2 * 32)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 49; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_69_var[27680]));
    for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
      for (int32_t ff = 0; ff < 64; ++ff) {
        ((int32_t*)conv2d_nhwc_let)[ff] = 0;
        for (int32_t ry = 0; ry < 3; ++ry) {
          for (int32_t rx = 0; rx < 3; ++rx) {
            for (int32_t rc = 0; rc < 32; ++rc) {
              ((int32_t*)conv2d_nhwc_let)[ff] = (((int32_t*)conv2d_nhwc_let)[ff] + (((int32_t)((int8_t*)pad_temp_let)[((((((ax0_ax1_fused_ax2_fused / 7) * 288) + (ry * 288)) + (rx * 32)) + ((ax0_ax1_fused_ax2_fused % 7) * 32)) + rc)]) * ((int32_t)((int8_t*)fused_constant_20_let)[(((((ry * 12288) + (rx * 4096)) + (rc * 128)) + (ax3_outer * 64)) + ff)])));
            }
          }
        }
      }
      for (int32_t ax3_inner = 0; ax3_inner < 64; ++ax3_inner) {
        int32_t cse_var_3 = (ax3_outer * 64);
        int32_t cse_var_2 = (cse_var_3 + ax3_inner);
        int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[ax3_inner] + ((int32_t*)fused_nn_conv2d_subtract_constant_12_let)[cse_var_2]) - ((int32_t*)fused_nn_conv2d_constant_12_let)[cse_var_2])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_36_let)[cse_var_2])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_38_let)[cse_var_2] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_38_let)[cse_var_2] + 31)))) - 128;
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        T_cast[(((ax0_ax1_fused_ax2_fused * 128) + cse_var_3) + ax3_inner)] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_11(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_72_var, uint8_t* global_workspace_73_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED v8 HW-REQUANT] 1x1 conv: 256->32 channels, 49 spatial positions
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_72_var[960320]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_72_var[960704]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_72_var[961984]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_72_var[959424]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_72_var[837632]);

  // Safe copy: TVM may alias input/output workspace buffers
  static int8_t _inp[12544];
  for (int32_t _i = 0; _i < 12544; _i++) _inp[_i] = p0[_i];

  // Set per-layer zero-point once. The helper is provided by conv_accel.h.
  accel_set_output_zp(-128);

  for (int32_t tile = 0; tile < 1; tile++) {
    int32_t oc_base = tile * 32;
    int32_t oc_count = 32;
    if (oc_base + oc_count > 32) oc_count = 32 - oc_base;

    // Pack weights for this tile (relayout from [rc][oc] to [oc][rc])
    static int8_t rw[8192];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      for (int32_t rc = 0; rc < 256; rc++)
        rw[oc * 256 + rc] = weights[rc * 32 + oc_base + oc];
    }
    accel_spad_write(0x100, rw, oc_count * 256);

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
    accel_spad_write(0x2180, (int8_t*)params, oc_count * 16);

    for (int32_t sp = 0; sp < 49; sp++) {
      accel_spad_write(0x000, &_inp[sp * 256], 256);
      hw_multi_dot_requant(0x000, 0x100, 0x2100,
                           0x2180, 256, oc_count);
      accel_unpack_i8_outputs(&T_cast[(sp * 32) + oc_base],
                              0x2100, oc_count);
    }
  }
  return 0;

#else

  void* fused_nn_conv2d_subtract_add_constant_41_let = (&(global_const_workspace_72_var[960320]));
  void* fused_nn_conv2d_subtract_add_constant_40_let = (&(global_const_workspace_72_var[960448]));
  void* fused_nn_conv2d_subtract_add_constant_39_let = (&(global_const_workspace_72_var[960704]));
  void* fused_nn_conv2d_constant_13_let = (&(global_const_workspace_72_var[961984]));
  void* fused_nn_conv2d_subtract_constant_13_let = (&(global_const_workspace_72_var[959424]));
  void* fused_constant_21_let = (&(global_const_workspace_72_var[837632]));
  void* pad_temp_let = (&(global_workspace_73_var[12544]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 7; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 7; ++i2) {
      for (int32_t i3 = 0; i3 < 256; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 1792) + (i2 * 256)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 49; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_73_var[31840]));
    for (int32_t ax3 = 0; ax3 < 32; ++ax3) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 256; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 256) + rc)]) * ((int32_t)((int8_t*)fused_constant_21_let)[((rc * 32) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_13_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_13_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_39_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_41_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_41_let)[ax3] + 31)))) - 128;
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
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_12(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_74_var, uint8_t* global_workspace_75_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED v8 HW-REQUANT] 1x1 conv: 32->128 channels, 49 spatial positions
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_74_var[937024]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_74_var[938048]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_74_var[942144]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_74_var[933952]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_74_var[872448]);

  // Safe copy: TVM may alias input/output workspace buffers
  static int8_t _inp[1568];
  for (int32_t _i = 0; _i < 1568; _i++) _inp[_i] = p0[_i];

  // Set per-layer zero-point once. The helper is provided by conv_accel.h.
  accel_set_output_zp(-128);

  for (int32_t tile = 0; tile < 1; tile++) {
    int32_t oc_base = tile * 128;
    int32_t oc_count = 128;
    if (oc_base + oc_count > 128) oc_count = 128 - oc_base;

    // Pack weights for this tile (relayout from [rc][oc] to [oc][rc])
    static int8_t rw[4096];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      for (int32_t rc = 0; rc < 32; rc++)
        rw[oc * 32 + rc] = weights[rc * 128 + oc_base + oc];
    }
    accel_spad_write(0x020, rw, oc_count * 32);

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
    accel_spad_write(0x1220, (int8_t*)params, oc_count * 16);

    for (int32_t sp = 0; sp < 49; sp++) {
      accel_spad_write(0x000, &_inp[sp * 32], 32);
      hw_multi_dot_requant(0x000, 0x020, 0x1020,
                           0x1220, 32, oc_count);
      accel_unpack_i8_outputs(&T_cast[(sp * 128) + oc_base],
                              0x1020, oc_count);
    }
  }
  return 0;

#else

  void* fused_nn_conv2d_subtract_add_constant_44_let = (&(global_const_workspace_74_var[937024]));
  void* fused_nn_conv2d_subtract_add_constant_43_let = (&(global_const_workspace_74_var[937536]));
  void* fused_nn_conv2d_subtract_add_constant_42_let = (&(global_const_workspace_74_var[938048]));
  void* fused_nn_conv2d_constant_14_let = (&(global_const_workspace_74_var[942144]));
  void* fused_nn_conv2d_subtract_constant_14_let = (&(global_const_workspace_74_var[933952]));
  void* fused_constant_22_let = (&(global_const_workspace_74_var[872448]));
  void* pad_temp_let = (&(global_workspace_75_var[31840]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 7; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 7; ++i2) {
      for (int32_t i3 = 0; i3 < 32; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 224) + (i2 * 32)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 49; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_75_var[33408]));
    for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
      for (int32_t ff = 0; ff < 64; ++ff) {
        ((int32_t*)conv2d_nhwc_let)[ff] = 0;
        for (int32_t rc = 0; rc < 32; ++rc) {
          ((int32_t*)conv2d_nhwc_let)[ff] = (((int32_t*)conv2d_nhwc_let)[ff] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 32) + rc)]) * ((int32_t)((int8_t*)fused_constant_22_let)[(((rc * 128) + (ax3_outer * 64)) + ff)])));
        }
      }
      for (int32_t ax3_inner = 0; ax3_inner < 64; ++ax3_inner) {
        int32_t cse_var_3 = (ax3_outer * 64);
        int32_t cse_var_2 = (cse_var_3 + ax3_inner);
        int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[ax3_inner] + ((int32_t*)fused_nn_conv2d_subtract_constant_14_let)[cse_var_2]) - ((int32_t*)fused_nn_conv2d_constant_14_let)[cse_var_2])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_42_let)[cse_var_2])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_44_let)[cse_var_2] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_44_let)[cse_var_2] + 31)))) - 128;
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
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_13(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_76_var, uint8_t* global_workspace_77_var) {
  void* fused_nn_conv2d_subtract_add_constant_47_let = (&(global_const_workspace_76_var[935488]));
  void* fused_nn_conv2d_subtract_add_constant_46_let = (&(global_const_workspace_76_var[936000]));
  void* fused_nn_conv2d_subtract_add_constant_45_let = (&(global_const_workspace_76_var[936512]));
  void* fused_nn_conv2d_constant_15_let = (&(global_const_workspace_76_var[941632]));
  void* fused_nn_conv2d_subtract_constant_15_let = (&(global_const_workspace_76_var[933440]));
  void* fused_constant_23_let = (&(global_const_workspace_76_var[534528]));
  void* pad_temp_let = (&(global_workspace_77_var[25088]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 9; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 9; ++i2) {
      for (int32_t i3 = 0; i3 < 32; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 288) + (i2 * 32)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 49; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_77_var[27680]));
    for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
      for (int32_t ff = 0; ff < 64; ++ff) {
        ((int32_t*)conv2d_nhwc_let)[ff] = 0;
        for (int32_t ry = 0; ry < 3; ++ry) {
          for (int32_t rx = 0; rx < 3; ++rx) {
            for (int32_t rc = 0; rc < 32; ++rc) {
              ((int32_t*)conv2d_nhwc_let)[ff] = (((int32_t*)conv2d_nhwc_let)[ff] + (((int32_t)((int8_t*)pad_temp_let)[((((((ax0_ax1_fused_ax2_fused / 7) * 288) + (ry * 288)) + (rx * 32)) + ((ax0_ax1_fused_ax2_fused % 7) * 32)) + rc)]) * ((int32_t)((int8_t*)fused_constant_23_let)[(((((ry * 12288) + (rx * 4096)) + (rc * 128)) + (ax3_outer * 64)) + ff)])));
            }
          }
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
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_14(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_80_var, uint8_t* global_workspace_81_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED v8 HW-REQUANT] 1x1 conv: 256->48 channels, 9 spatial positions
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_80_var[958208]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_80_var[958592]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_80_var[958976]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_80_var[957440]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_80_var[772096]);

  // Safe copy: TVM may alias input/output workspace buffers
  static int8_t _inp[2304];
  for (int32_t _i = 0; _i < 2304; _i++) _inp[_i] = p0[_i];

  // Set per-layer zero-point once. The helper is provided by conv_accel.h.
  accel_set_output_zp(-128);

  for (int32_t tile = 0; tile < 2; tile++) {
    int32_t oc_base = tile * 32;
    int32_t oc_count = 32;
    if (oc_base + oc_count > 48) oc_count = 48 - oc_base;

    // Pack weights for this tile (relayout from [rc][oc] to [oc][rc])
    static int8_t rw[8192];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      for (int32_t rc = 0; rc < 256; rc++)
        rw[oc * 256 + rc] = weights[rc * 48 + oc_base + oc];
    }
    accel_spad_write(0x100, rw, oc_count * 256);

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
    accel_spad_write(0x2180, (int8_t*)params, oc_count * 16);

    for (int32_t sp = 0; sp < 9; sp++) {
      accel_spad_write(0x000, &_inp[sp * 256], 256);
      hw_multi_dot_requant(0x000, 0x100, 0x2100,
                           0x2180, 256, oc_count);
      accel_unpack_i8_outputs(&T_cast[(sp * 48) + oc_base],
                              0x2100, oc_count);
    }
  }
  return 0;

#else

  void* fused_nn_conv2d_subtract_add_constant_50_let = (&(global_const_workspace_80_var[958208]));
  void* fused_nn_conv2d_subtract_add_constant_49_let = (&(global_const_workspace_80_var[958400]));
  void* fused_nn_conv2d_subtract_add_constant_48_let = (&(global_const_workspace_80_var[958592]));
  void* fused_nn_conv2d_constant_16_let = (&(global_const_workspace_80_var[958976]));
  void* fused_nn_conv2d_subtract_constant_16_let = (&(global_const_workspace_80_var[957440]));
  void* fused_constant_24_let = (&(global_const_workspace_80_var[772096]));
  void* pad_temp_let = (&(global_workspace_81_var[15104]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 3; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 3; ++i2) {
      for (int32_t i3 = 0; i3 < 256; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 768) + (i2 * 256)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 9; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_81_var[21392]));
    for (int32_t ax3 = 0; ax3 < 48; ++ax3) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 256; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 256) + rc)]) * ((int32_t)((int8_t*)fused_constant_24_let)[((rc * 48) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_16_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_16_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_48_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_50_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_50_let)[ax3] + 31)))) - 128;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_cast[((ax0_ax1_fused_ax2_fused * 48) + ax3)] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
    }
  }
  return 0;

#endif
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_15(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_82_var, uint8_t* global_workspace_83_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED v8 HW-REQUANT] 1x1 conv: 48->192 channels, 9 spatial positions
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_82_var[926144]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_82_var[927680]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_82_var[930752]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_82_var[918464]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_82_var[802816]);

  // Safe copy: TVM may alias input/output workspace buffers
  static int8_t _inp[432];
  for (int32_t _i = 0; _i < 432; _i++) _inp[_i] = p0[_i];

  // Set per-layer zero-point once. The helper is provided by conv_accel.h.
  accel_set_output_zp(-128);

  for (int32_t tile = 0; tile < 2; tile++) {
    int32_t oc_base = tile * 128;
    int32_t oc_count = 128;
    if (oc_base + oc_count > 192) oc_count = 192 - oc_base;

    // Pack weights for this tile (relayout from [rc][oc] to [oc][rc])
    static int8_t rw[6144];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      for (int32_t rc = 0; rc < 48; rc++)
        rw[oc * 48 + rc] = weights[rc * 192 + oc_base + oc];
    }
    accel_spad_write(0x030, rw, oc_count * 48);

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
    accel_spad_write(0x1A30, (int8_t*)params, oc_count * 16);

    for (int32_t sp = 0; sp < 9; sp++) {
      accel_spad_write(0x000, &_inp[sp * 48], 48);
      hw_multi_dot_requant(0x000, 0x030, 0x1830,
                           0x1A30, 48, oc_count);
      accel_unpack_i8_outputs(&T_cast[(sp * 192) + oc_base],
                              0x1830, oc_count);
    }
  }
  return 0;

#else

  void* fused_nn_conv2d_subtract_add_constant_53_let = (&(global_const_workspace_82_var[926144]));
  void* fused_nn_conv2d_subtract_add_constant_52_let = (&(global_const_workspace_82_var[926912]));
  void* fused_nn_conv2d_subtract_add_constant_51_let = (&(global_const_workspace_82_var[927680]));
  void* fused_nn_conv2d_constant_17_let = (&(global_const_workspace_82_var[930752]));
  void* fused_nn_conv2d_subtract_constant_17_let = (&(global_const_workspace_82_var[918464]));
  void* fused_constant_25_let = (&(global_const_workspace_82_var[802816]));
  void* pad_temp_let = (&(global_workspace_83_var[21392]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 3; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 3; ++i2) {
      for (int32_t i3 = 0; i3 < 48; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 144) + (i2 * 48)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 9; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_83_var[21824]));
    for (int32_t ax3_outer = 0; ax3_outer < 3; ++ax3_outer) {
      for (int32_t ff = 0; ff < 64; ++ff) {
        ((int32_t*)conv2d_nhwc_let)[ff] = 0;
        for (int32_t rc = 0; rc < 48; ++rc) {
          ((int32_t*)conv2d_nhwc_let)[ff] = (((int32_t*)conv2d_nhwc_let)[ff] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 48) + rc)]) * ((int32_t)((int8_t*)fused_constant_25_let)[(((rc * 192) + (ax3_outer * 64)) + ff)])));
        }
      }
      for (int32_t ax3_inner = 0; ax3_inner < 64; ++ax3_inner) {
        int32_t cse_var_3 = (ax3_outer * 64);
        int32_t cse_var_2 = (cse_var_3 + ax3_inner);
        int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[ax3_inner] + ((int32_t*)fused_nn_conv2d_subtract_constant_17_let)[cse_var_2]) - ((int32_t*)fused_nn_conv2d_constant_17_let)[cse_var_2])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_51_let)[cse_var_2])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_53_let)[cse_var_2] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_53_let)[cse_var_2] + 31)))) - 128;
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        T_cast[(((ax0_ax1_fused_ax2_fused * 192) + cse_var_3) + ax3_inner)] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
      }
    }
  }
  return 0;

#endif
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_16(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_86_var, uint8_t* global_workspace_87_var) {
  void* fused_nn_conv2d_subtract_add_constant_56_let = (&(global_const_workspace_86_var[923840]));
  void* fused_nn_conv2d_subtract_add_constant_55_let = (&(global_const_workspace_86_var[924608]));
  void* fused_nn_conv2d_subtract_add_constant_54_let = (&(global_const_workspace_86_var[925376]));
  void* fused_nn_conv2d_constant_18_let = (&(global_const_workspace_86_var[929984]));
  void* fused_nn_conv2d_subtract_constant_18_let = (&(global_const_workspace_86_var[917696]));
  void* fused_constant_26_let = (&(global_const_workspace_86_var[377856]));
  void* pad_temp_let = (&(global_workspace_87_var[18560]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 5; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 5; ++i2) {
      for (int32_t i3 = 0; i3 < 48; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 240) + (i2 * 48)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 9; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_87_var[19760]));
    for (int32_t ax3_outer = 0; ax3_outer < 3; ++ax3_outer) {
      for (int32_t ff = 0; ff < 64; ++ff) {
        ((int32_t*)conv2d_nhwc_let)[ff] = 0;
        for (int32_t ry = 0; ry < 3; ++ry) {
          for (int32_t rx = 0; rx < 3; ++rx) {
            for (int32_t rc = 0; rc < 48; ++rc) {
              ((int32_t*)conv2d_nhwc_let)[ff] = (((int32_t*)conv2d_nhwc_let)[ff] + (((int32_t)((int8_t*)pad_temp_let)[((((((ax0_ax1_fused_ax2_fused / 3) * 240) + (ry * 240)) + (rx * 48)) + ((ax0_ax1_fused_ax2_fused % 3) * 48)) + rc)]) * ((int32_t)((int8_t*)fused_constant_26_let)[(((((ry * 27648) + (rx * 9216)) + (rc * 192)) + (ax3_outer * 64)) + ff)])));
            }
          }
        }
      }
      for (int32_t ax3_inner = 0; ax3_inner < 64; ++ax3_inner) {
        int32_t cse_var_3 = (ax3_outer * 64);
        int32_t cse_var_2 = (cse_var_3 + ax3_inner);
        int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[ax3_inner] + ((int32_t*)fused_nn_conv2d_subtract_constant_18_let)[cse_var_2]) - ((int32_t*)fused_nn_conv2d_constant_18_let)[cse_var_2])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_54_let)[cse_var_2])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_56_let)[cse_var_2] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_56_let)[cse_var_2] + 31)))) - 128;
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        T_cast[(((ax0_ax1_fused_ax2_fused * 192) + cse_var_3) + ax3_inner)] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_17(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_90_var, uint8_t* global_workspace_91_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED v8 HW-REQUANT] 1x1 conv: 384->48 channels, 9 spatial positions
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_90_var[957632]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_90_var[958016]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_90_var[958784]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_90_var[957248]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_90_var[702464]);

  // Safe copy: TVM may alias input/output workspace buffers
  static int8_t _inp[3456];
  for (int32_t _i = 0; _i < 3456; _i++) _inp[_i] = p0[_i];

  // Set per-layer zero-point once. The helper is provided by conv_accel.h.
  accel_set_output_zp(-128);

  for (int32_t tile = 0; tile < 3; tile++) {
    int32_t oc_base = tile * 16;
    int32_t oc_count = 16;
    if (oc_base + oc_count > 48) oc_count = 48 - oc_base;

    // Pack weights for this tile (relayout from [rc][oc] to [oc][rc])
    static int8_t rw[6144];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      for (int32_t rc = 0; rc < 384; rc++)
        rw[oc * 384 + rc] = weights[rc * 48 + oc_base + oc];
    }
    accel_spad_write(0x180, rw, oc_count * 384);

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
    accel_spad_write(0x19C0, (int8_t*)params, oc_count * 16);

    for (int32_t sp = 0; sp < 9; sp++) {
      accel_spad_write(0x000, &_inp[sp * 384], 384);
      hw_multi_dot_requant(0x000, 0x180, 0x1980,
                           0x19C0, 384, oc_count);
      accel_unpack_i8_outputs(&T_cast[(sp * 48) + oc_base],
                              0x1980, oc_count);
    }
  }
  return 0;

#else

  void* fused_nn_conv2d_subtract_add_constant_59_let = (&(global_const_workspace_90_var[957632]));
  void* fused_nn_conv2d_subtract_add_constant_58_let = (&(global_const_workspace_90_var[957824]));
  void* fused_nn_conv2d_subtract_add_constant_57_let = (&(global_const_workspace_90_var[958016]));
  void* fused_nn_conv2d_constant_19_let = (&(global_const_workspace_90_var[958784]));
  void* fused_nn_conv2d_subtract_constant_19_let = (&(global_const_workspace_90_var[957248]));
  void* fused_constant_27_let = (&(global_const_workspace_90_var[702464]));
  void* pad_temp_let = (&(global_workspace_91_var[3456]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 3; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 3; ++i2) {
      for (int32_t i3 = 0; i3 < 384; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 1152) + (i2 * 384)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 9; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_91_var[21392]));
    for (int32_t ax3 = 0; ax3 < 48; ++ax3) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 384; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 384) + rc)]) * ((int32_t)((int8_t*)fused_constant_27_let)[((rc * 48) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_19_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_19_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_57_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_59_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_59_let)[ax3] + 31)))) - 128;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_cast[((ax0_ax1_fused_ax2_fused * 48) + ax3)] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
    }
  }
  return 0;

#endif
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_18(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_92_var, uint8_t* global_workspace_93_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED v8 HW-REQUANT] 1x1 conv: 48->192 channels, 9 spatial positions
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_92_var[921536]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_92_var[923072]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_92_var[929216]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_92_var[916928]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_92_var[793600]);

  // Safe copy: TVM may alias input/output workspace buffers
  static int8_t _inp[432];
  for (int32_t _i = 0; _i < 432; _i++) _inp[_i] = p0[_i];

  // Set per-layer zero-point once. The helper is provided by conv_accel.h.
  accel_set_output_zp(-128);

  for (int32_t tile = 0; tile < 2; tile++) {
    int32_t oc_base = tile * 128;
    int32_t oc_count = 128;
    if (oc_base + oc_count > 192) oc_count = 192 - oc_base;

    // Pack weights for this tile (relayout from [rc][oc] to [oc][rc])
    static int8_t rw[6144];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      for (int32_t rc = 0; rc < 48; rc++)
        rw[oc * 48 + rc] = weights[rc * 192 + oc_base + oc];
    }
    accel_spad_write(0x030, rw, oc_count * 48);

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
    accel_spad_write(0x1A30, (int8_t*)params, oc_count * 16);

    for (int32_t sp = 0; sp < 9; sp++) {
      accel_spad_write(0x000, &_inp[sp * 48], 48);
      hw_multi_dot_requant(0x000, 0x030, 0x1830,
                           0x1A30, 48, oc_count);
      accel_unpack_i8_outputs(&T_cast[(sp * 192) + oc_base],
                              0x1830, oc_count);
    }
  }
  return 0;

#else

  void* fused_nn_conv2d_subtract_add_constant_62_let = (&(global_const_workspace_92_var[921536]));
  void* fused_nn_conv2d_subtract_add_constant_61_let = (&(global_const_workspace_92_var[922304]));
  void* fused_nn_conv2d_subtract_add_constant_60_let = (&(global_const_workspace_92_var[923072]));
  void* fused_nn_conv2d_constant_20_let = (&(global_const_workspace_92_var[929216]));
  void* fused_nn_conv2d_subtract_constant_20_let = (&(global_const_workspace_92_var[916928]));
  void* fused_constant_28_let = (&(global_const_workspace_92_var[793600]));
  void* pad_temp_let = (&(global_workspace_93_var[21392]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 3; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 3; ++i2) {
      for (int32_t i3 = 0; i3 < 48; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 144) + (i2 * 48)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 9; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_93_var[21824]));
    for (int32_t ax3_outer = 0; ax3_outer < 3; ++ax3_outer) {
      for (int32_t ff = 0; ff < 64; ++ff) {
        ((int32_t*)conv2d_nhwc_let)[ff] = 0;
        for (int32_t rc = 0; rc < 48; ++rc) {
          ((int32_t*)conv2d_nhwc_let)[ff] = (((int32_t*)conv2d_nhwc_let)[ff] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 48) + rc)]) * ((int32_t)((int8_t*)fused_constant_28_let)[(((rc * 192) + (ax3_outer * 64)) + ff)])));
        }
      }
      for (int32_t ax3_inner = 0; ax3_inner < 64; ++ax3_inner) {
        int32_t cse_var_3 = (ax3_outer * 64);
        int32_t cse_var_2 = (cse_var_3 + ax3_inner);
        int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[ax3_inner] + ((int32_t*)fused_nn_conv2d_subtract_constant_20_let)[cse_var_2]) - ((int32_t*)fused_nn_conv2d_constant_20_let)[cse_var_2])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_60_let)[cse_var_2])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_62_let)[cse_var_2] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_62_let)[cse_var_2] + 31)))) - 128;
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        T_cast[(((ax0_ax1_fused_ax2_fused * 192) + cse_var_3) + ax3_inner)] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
      }
    }
  }
  return 0;

#endif
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_19(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_94_var, uint8_t* global_workspace_95_var) {
  void* fused_nn_conv2d_subtract_add_constant_65_let = (&(global_const_workspace_94_var[919232]));
  void* fused_nn_conv2d_subtract_add_constant_64_let = (&(global_const_workspace_94_var[920000]));
  void* fused_nn_conv2d_subtract_add_constant_63_let = (&(global_const_workspace_94_var[920768]));
  void* fused_nn_conv2d_constant_21_let = (&(global_const_workspace_94_var[928448]));
  void* fused_nn_conv2d_subtract_constant_21_let = (&(global_const_workspace_94_var[916160]));
  void* fused_constant_29_let = (&(global_const_workspace_94_var[294912]));
  void* pad_temp_let = (&(global_workspace_95_var[18560]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 5; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 5; ++i2) {
      for (int32_t i3 = 0; i3 < 48; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 240) + (i2 * 48)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 9; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_95_var[19760]));
    for (int32_t ax3_outer = 0; ax3_outer < 3; ++ax3_outer) {
      for (int32_t ff = 0; ff < 64; ++ff) {
        ((int32_t*)conv2d_nhwc_let)[ff] = 0;
        for (int32_t ry = 0; ry < 3; ++ry) {
          for (int32_t rx = 0; rx < 3; ++rx) {
            for (int32_t rc = 0; rc < 48; ++rc) {
              ((int32_t*)conv2d_nhwc_let)[ff] = (((int32_t*)conv2d_nhwc_let)[ff] + (((int32_t)((int8_t*)pad_temp_let)[((((((ax0_ax1_fused_ax2_fused / 3) * 240) + (ry * 240)) + (rx * 48)) + ((ax0_ax1_fused_ax2_fused % 3) * 48)) + rc)]) * ((int32_t)((int8_t*)fused_constant_29_let)[(((((ry * 27648) + (rx * 9216)) + (rc * 192)) + (ax3_outer * 64)) + ff)])));
            }
          }
        }
      }
      for (int32_t ax3_inner = 0; ax3_inner < 64; ++ax3_inner) {
        int32_t cse_var_3 = (ax3_outer * 64);
        int32_t cse_var_2 = (cse_var_3 + ax3_inner);
        int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[ax3_inner] + ((int32_t*)fused_nn_conv2d_subtract_constant_21_let)[cse_var_2]) - ((int32_t*)fused_nn_conv2d_constant_21_let)[cse_var_2])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_63_let)[cse_var_2])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_65_let)[cse_var_2] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_65_let)[cse_var_2] + 31)))) - 128;
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        T_cast[(((ax0_ax1_fused_ax2_fused * 192) + cse_var_3) + ax3_inner)] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_2(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_26_var, uint8_t* global_workspace_27_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED v8 HW-REQUANT] 1x1 conv: 16->64 channels, 225 spatial positions
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_26_var[952896]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_26_var[948544]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_26_var[954688]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_26_var[947520]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_26_var[913088]);

  // Safe copy: TVM may alias input/output workspace buffers
  static int8_t _inp[3600];
  for (int32_t _i = 0; _i < 3600; _i++) _inp[_i] = p0[_i];

  // Set per-layer zero-point once. The helper is provided by conv_accel.h.
  accel_set_output_zp(-128);

  for (int32_t tile = 0; tile < 1; tile++) {
    int32_t oc_base = tile * 64;
    int32_t oc_count = 64;
    if (oc_base + oc_count > 64) oc_count = 64 - oc_base;

    // Pack weights for this tile (relayout from [rc][oc] to [oc][rc])
    static int8_t rw[1024];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      for (int32_t rc = 0; rc < 16; rc++)
        rw[oc * 16 + rc] = weights[rc * 64 + oc_base + oc];
    }
    accel_spad_write(0x010, rw, oc_count * 16);

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
    accel_spad_write(0x510, (int8_t*)params, oc_count * 16);

    for (int32_t sp = 0; sp < 225; sp++) {
      accel_spad_write(0x000, &_inp[sp * 16], 16);
      hw_multi_dot_requant(0x000, 0x010, 0x410,
                           0x510, 16, oc_count);
      accel_unpack_i8_outputs(&T_cast[(sp * 64) + oc_base],
                              0x410, oc_count);
    }
  }
  return 0;

#else

  void* fused_nn_conv2d_subtract_add_constant_11_let = (&(global_const_workspace_26_var[952896]));
  void* fused_nn_conv2d_subtract_add_constant_10_let = (&(global_const_workspace_26_var[953152]));
  void* fused_nn_conv2d_subtract_add_constant_9_let = (&(global_const_workspace_26_var[948544]));
  void* fused_nn_conv2d_constant_3_let = (&(global_const_workspace_26_var[954688]));
  void* fused_nn_conv2d_subtract_constant_3_let = (&(global_const_workspace_26_var[947520]));
  void* fused_constant_7_let = (&(global_const_workspace_26_var[913088]));
  void* pad_temp_let = (&(global_workspace_27_var[98192]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 15; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 15; ++i2) {
      for (int32_t i3 = 0; i3 < 16; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 240) + (i2 * 16)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 225; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_27_var[101792]));
    for (int32_t ff = 0; ff < 64; ++ff) {
      ((int32_t*)conv2d_nhwc_let)[ff] = 0;
      for (int32_t rc = 0; rc < 16; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[ff] = (((int32_t*)conv2d_nhwc_let)[ff] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 16) + rc)]) * ((int32_t)((int8_t*)fused_constant_7_let)[((rc * 64) + ff)])));
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 64; ++ax3_inner) {
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[ax3_inner] + ((int32_t*)fused_nn_conv2d_subtract_constant_3_let)[ax3_inner]) - ((int32_t*)fused_nn_conv2d_constant_3_let)[ax3_inner])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_9_let)[ax3_inner])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_11_let)[ax3_inner] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_11_let)[ax3_inner] + 31)))) - 128;
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
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_20(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_96_var, uint8_t* global_workspace_97_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED v8 HW-REQUANT] 1x1 conv: 384->64 channels, 9 spatial positions
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_96_var[949568]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_96_var[950080]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_96_var[955200]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_96_var[948032]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_96_var[677888]);

  // Safe copy: TVM may alias input/output workspace buffers
  static int8_t _inp[3456];
  for (int32_t _i = 0; _i < 3456; _i++) _inp[_i] = p0[_i];

  // Set per-layer zero-point once. The helper is provided by conv_accel.h.
  accel_set_output_zp(-128);

  for (int32_t tile = 0; tile < 4; tile++) {
    int32_t oc_base = tile * 16;
    int32_t oc_count = 16;
    if (oc_base + oc_count > 64) oc_count = 64 - oc_base;

    // Pack weights for this tile (relayout from [rc][oc] to [oc][rc])
    static int8_t rw[6144];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      for (int32_t rc = 0; rc < 384; rc++)
        rw[oc * 384 + rc] = weights[rc * 64 + oc_base + oc];
    }
    accel_spad_write(0x180, rw, oc_count * 384);

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
    accel_spad_write(0x19C0, (int8_t*)params, oc_count * 16);

    for (int32_t sp = 0; sp < 9; sp++) {
      accel_spad_write(0x000, &_inp[sp * 384], 384);
      hw_multi_dot_requant(0x000, 0x180, 0x1980,
                           0x19C0, 384, oc_count);
      accel_unpack_i8_outputs(&T_cast[(sp * 64) + oc_base],
                              0x1980, oc_count);
    }
  }
  return 0;

#else

  void* fused_nn_conv2d_subtract_add_constant_68_let = (&(global_const_workspace_96_var[949568]));
  void* fused_nn_conv2d_subtract_add_constant_67_let = (&(global_const_workspace_96_var[949824]));
  void* fused_nn_conv2d_subtract_add_constant_66_let = (&(global_const_workspace_96_var[950080]));
  void* fused_nn_conv2d_constant_22_let = (&(global_const_workspace_96_var[955200]));
  void* fused_nn_conv2d_subtract_constant_22_let = (&(global_const_workspace_96_var[948032]));
  void* fused_constant_30_let = (&(global_const_workspace_96_var[677888]));
  void* pad_temp_let = (&(global_workspace_97_var[3456]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 3; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 3; ++i2) {
      for (int32_t i3 = 0; i3 < 384; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 1152) + (i2 * 384)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 9; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_97_var[23488]));
    for (int32_t ff = 0; ff < 64; ++ff) {
      ((int32_t*)conv2d_nhwc_let)[ff] = 0;
      for (int32_t rc = 0; rc < 384; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[ff] = (((int32_t*)conv2d_nhwc_let)[ff] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 384) + rc)]) * ((int32_t)((int8_t*)fused_constant_30_let)[((rc * 64) + ff)])));
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 64; ++ax3_inner) {
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[ax3_inner] + ((int32_t*)fused_nn_conv2d_subtract_constant_22_let)[ax3_inner]) - ((int32_t*)fused_nn_conv2d_constant_22_let)[ax3_inner])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_66_let)[ax3_inner])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_68_let)[ax3_inner] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_68_let)[ax3_inner] + 31)))) - 128;
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
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_21(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_98_var, uint8_t* global_workspace_99_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED v8 HW-REQUANT] 1x1 conv: 64->256 channels, 9 spatial positions
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_98_var[905920]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_98_var[907968]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_98_var[912064]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_98_var[895680]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_98_var[755712]);

  // Safe copy: TVM may alias input/output workspace buffers
  static int8_t _inp[576];
  for (int32_t _i = 0; _i < 576; _i++) _inp[_i] = p0[_i];

  // Set per-layer zero-point once. The helper is provided by conv_accel.h.
  accel_set_output_zp(-128);

  for (int32_t tile = 0; tile < 2; tile++) {
    int32_t oc_base = tile * 128;
    int32_t oc_count = 128;
    if (oc_base + oc_count > 256) oc_count = 256 - oc_base;

    // Pack weights for this tile (relayout from [rc][oc] to [oc][rc])
    static int8_t rw[8192];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      for (int32_t rc = 0; rc < 64; rc++)
        rw[oc * 64 + rc] = weights[rc * 256 + oc_base + oc];
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

    for (int32_t sp = 0; sp < 9; sp++) {
      accel_spad_write(0x000, &_inp[sp * 64], 64);
      hw_multi_dot_requant(0x000, 0x040, 0x2040,
                           0x2240, 64, oc_count);
      accel_unpack_i8_outputs(&T_cast[(sp * 256) + oc_base],
                              0x2040, oc_count);
    }
  }
  return 0;

#else

  void* fused_nn_conv2d_subtract_add_constant_71_let = (&(global_const_workspace_98_var[905920]));
  void* fused_nn_conv2d_subtract_add_constant_70_let = (&(global_const_workspace_98_var[906944]));
  void* fused_nn_conv2d_subtract_add_constant_69_let = (&(global_const_workspace_98_var[907968]));
  void* fused_nn_conv2d_constant_23_let = (&(global_const_workspace_98_var[912064]));
  void* fused_nn_conv2d_subtract_constant_23_let = (&(global_const_workspace_98_var[895680]));
  void* fused_constant_31_let = (&(global_const_workspace_98_var[755712]));
  void* pad_temp_let = (&(global_workspace_99_var[23488]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 3; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 3; ++i2) {
      for (int32_t i3 = 0; i3 < 64; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 192) + (i2 * 64)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 9; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_99_var[24064]));
    for (int32_t ax3_outer = 0; ax3_outer < 4; ++ax3_outer) {
      for (int32_t ff = 0; ff < 64; ++ff) {
        ((int32_t*)conv2d_nhwc_let)[ff] = 0;
        for (int32_t rc = 0; rc < 64; ++rc) {
          ((int32_t*)conv2d_nhwc_let)[ff] = (((int32_t*)conv2d_nhwc_let)[ff] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 64) + rc)]) * ((int32_t)((int8_t*)fused_constant_31_let)[(((rc * 256) + (ax3_outer * 64)) + ff)])));
        }
      }
      for (int32_t ax3_inner = 0; ax3_inner < 64; ++ax3_inner) {
        int32_t cse_var_3 = (ax3_outer * 64);
        int32_t cse_var_2 = (cse_var_3 + ax3_inner);
        int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[ax3_inner] + ((int32_t*)fused_nn_conv2d_subtract_constant_23_let)[cse_var_2]) - ((int32_t*)fused_nn_conv2d_constant_23_let)[cse_var_2])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_69_let)[cse_var_2])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_71_let)[cse_var_2] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_71_let)[cse_var_2] + 31)))) - 128;
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
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_22(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_102_var, uint8_t* global_workspace_103_var) {
  void* fused_nn_conv2d_subtract_add_constant_74_let = (&(global_const_workspace_102_var[902848]));
  void* fused_nn_conv2d_subtract_add_constant_73_let = (&(global_const_workspace_102_var[903872]));
  void* fused_nn_conv2d_subtract_add_constant_72_let = (&(global_const_workspace_102_var[904896]));
  void* fused_nn_conv2d_constant_24_let = (&(global_const_workspace_102_var[911040]));
  void* fused_nn_conv2d_subtract_constant_24_let = (&(global_const_workspace_102_var[894656]));
  void* fused_constant_32_let = (&(global_const_workspace_102_var[147456]));
  void* pad_temp_let = (&(global_workspace_103_var[19712]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 5; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 5; ++i2) {
      for (int32_t i3 = 0; i3 < 64; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 320) + (i2 * 64)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 9; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_103_var[21312]));
    for (int32_t ax3_outer = 0; ax3_outer < 4; ++ax3_outer) {
      for (int32_t ff = 0; ff < 64; ++ff) {
        ((int32_t*)conv2d_nhwc_let)[ff] = 0;
        for (int32_t ry = 0; ry < 3; ++ry) {
          for (int32_t rx = 0; rx < 3; ++rx) {
            for (int32_t rc = 0; rc < 64; ++rc) {
              ((int32_t*)conv2d_nhwc_let)[ff] = (((int32_t*)conv2d_nhwc_let)[ff] + (((int32_t)((int8_t*)pad_temp_let)[((((((ax0_ax1_fused_ax2_fused / 3) * 320) + (ry * 320)) + (rx * 64)) + ((ax0_ax1_fused_ax2_fused % 3) * 64)) + rc)]) * ((int32_t)((int8_t*)fused_constant_32_let)[(((((ry * 49152) + (rx * 16384)) + (rc * 256)) + (ax3_outer * 64)) + ff)])));
            }
          }
        }
      }
      for (int32_t ax3_inner = 0; ax3_inner < 64; ++ax3_inner) {
        int32_t cse_var_3 = (ax3_outer * 64);
        int32_t cse_var_2 = (cse_var_3 + ax3_inner);
        int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[ax3_inner] + ((int32_t*)fused_nn_conv2d_subtract_constant_24_let)[cse_var_2]) - ((int32_t*)fused_nn_conv2d_constant_24_let)[cse_var_2])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_72_let)[cse_var_2])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_74_let)[cse_var_2] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_74_let)[cse_var_2] + 31)))) - 128;
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        T_cast[(((ax0_ax1_fused_ax2_fused * 256) + cse_var_3) + ax3_inner)] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_23(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_106_var, uint8_t* global_workspace_107_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED v8 HW-REQUANT] 1x1 conv: 512->64 channels, 9 spatial positions
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_106_var[948800]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_106_var[949312]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_106_var[954944]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_106_var[947776]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_106_var[645120]);

  // Safe copy: TVM may alias input/output workspace buffers
  static int8_t _inp[4608];
  for (int32_t _i = 0; _i < 4608; _i++) _inp[_i] = p0[_i];

  // Set per-layer zero-point once. The helper is provided by conv_accel.h.
  accel_set_output_zp(-128);

  for (int32_t tile = 0; tile < 4; tile++) {
    int32_t oc_base = tile * 16;
    int32_t oc_count = 16;
    if (oc_base + oc_count > 64) oc_count = 64 - oc_base;

    // Pack weights for this tile (relayout from [rc][oc] to [oc][rc])
    static int8_t rw[8192];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      for (int32_t rc = 0; rc < 512; rc++)
        rw[oc * 512 + rc] = weights[rc * 64 + oc_base + oc];
    }
    accel_spad_write(0x200, rw, oc_count * 512);

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
    accel_spad_write(0x2240, (int8_t*)params, oc_count * 16);

    for (int32_t sp = 0; sp < 9; sp++) {
      accel_spad_write(0x000, &_inp[sp * 512], 512);
      hw_multi_dot_requant(0x000, 0x200, 0x2200,
                           0x2240, 512, oc_count);
      accel_unpack_i8_outputs(&T_cast[(sp * 64) + oc_base],
                              0x2200, oc_count);
    }
  }
  return 0;

#else

  void* fused_nn_conv2d_subtract_add_constant_77_let = (&(global_const_workspace_106_var[948800]));
  void* fused_nn_conv2d_subtract_add_constant_76_let = (&(global_const_workspace_106_var[949056]));
  void* fused_nn_conv2d_subtract_add_constant_75_let = (&(global_const_workspace_106_var[949312]));
  void* fused_nn_conv2d_constant_25_let = (&(global_const_workspace_106_var[954944]));
  void* fused_nn_conv2d_subtract_constant_25_let = (&(global_const_workspace_106_var[947776]));
  void* fused_constant_33_let = (&(global_const_workspace_106_var[645120]));
  void* pad_temp_let = (&(global_workspace_107_var[4608]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 3; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 3; ++i2) {
      for (int32_t i3 = 0; i3 < 512; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 1536) + (i2 * 512)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 9; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_107_var[23488]));
    for (int32_t ff = 0; ff < 64; ++ff) {
      ((int32_t*)conv2d_nhwc_let)[ff] = 0;
      for (int32_t rc = 0; rc < 512; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[ff] = (((int32_t*)conv2d_nhwc_let)[ff] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 512) + rc)]) * ((int32_t)((int8_t*)fused_constant_33_let)[((rc * 64) + ff)])));
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 64; ++ax3_inner) {
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[ax3_inner] + ((int32_t*)fused_nn_conv2d_subtract_constant_25_let)[ax3_inner]) - ((int32_t*)fused_nn_conv2d_constant_25_let)[ax3_inner])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_75_let)[ax3_inner])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_77_let)[ax3_inner] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_77_let)[ax3_inner] + 31)))) - 128;
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
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_24(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_108_var, uint8_t* global_workspace_109_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED v8 HW-REQUANT] 1x1 conv: 64->256 channels, 9 spatial positions
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_108_var[899776]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_108_var[901824]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_108_var[910016]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_108_var[893632]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_108_var[739328]);

  // Safe copy: TVM may alias input/output workspace buffers
  static int8_t _inp[576];
  for (int32_t _i = 0; _i < 576; _i++) _inp[_i] = p0[_i];

  // Set per-layer zero-point once. The helper is provided by conv_accel.h.
  accel_set_output_zp(-128);

  for (int32_t tile = 0; tile < 2; tile++) {
    int32_t oc_base = tile * 128;
    int32_t oc_count = 128;
    if (oc_base + oc_count > 256) oc_count = 256 - oc_base;

    // Pack weights for this tile (relayout from [rc][oc] to [oc][rc])
    static int8_t rw[8192];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      for (int32_t rc = 0; rc < 64; rc++)
        rw[oc * 64 + rc] = weights[rc * 256 + oc_base + oc];
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

    for (int32_t sp = 0; sp < 9; sp++) {
      accel_spad_write(0x000, &_inp[sp * 64], 64);
      hw_multi_dot_requant(0x000, 0x040, 0x2040,
                           0x2240, 64, oc_count);
      accel_unpack_i8_outputs(&T_cast[(sp * 256) + oc_base],
                              0x2040, oc_count);
    }
  }
  return 0;

#else

  void* fused_nn_conv2d_subtract_add_constant_80_let = (&(global_const_workspace_108_var[899776]));
  void* fused_nn_conv2d_subtract_add_constant_79_let = (&(global_const_workspace_108_var[900800]));
  void* fused_nn_conv2d_subtract_add_constant_78_let = (&(global_const_workspace_108_var[901824]));
  void* fused_nn_conv2d_constant_26_let = (&(global_const_workspace_108_var[910016]));
  void* fused_nn_conv2d_subtract_constant_26_let = (&(global_const_workspace_108_var[893632]));
  void* fused_constant_34_let = (&(global_const_workspace_108_var[739328]));
  void* pad_temp_let = (&(global_workspace_109_var[23488]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 3; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 3; ++i2) {
      for (int32_t i3 = 0; i3 < 64; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 192) + (i2 * 64)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 9; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_109_var[24064]));
    for (int32_t ax3_outer = 0; ax3_outer < 4; ++ax3_outer) {
      for (int32_t ff = 0; ff < 64; ++ff) {
        ((int32_t*)conv2d_nhwc_let)[ff] = 0;
        for (int32_t rc = 0; rc < 64; ++rc) {
          ((int32_t*)conv2d_nhwc_let)[ff] = (((int32_t*)conv2d_nhwc_let)[ff] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 64) + rc)]) * ((int32_t)((int8_t*)fused_constant_34_let)[(((rc * 256) + (ax3_outer * 64)) + ff)])));
        }
      }
      for (int32_t ax3_inner = 0; ax3_inner < 64; ++ax3_inner) {
        int32_t cse_var_3 = (ax3_outer * 64);
        int32_t cse_var_2 = (cse_var_3 + ax3_inner);
        int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[ax3_inner] + ((int32_t*)fused_nn_conv2d_subtract_constant_26_let)[cse_var_2]) - ((int32_t*)fused_nn_conv2d_constant_26_let)[cse_var_2])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_78_let)[cse_var_2])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_80_let)[cse_var_2] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_80_let)[cse_var_2] + 31)))) - 128;
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
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_25(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_110_var, uint8_t* global_workspace_111_var) {
  void* fused_nn_conv2d_subtract_add_constant_83_let = (&(global_const_workspace_110_var[896704]));
  void* fused_nn_conv2d_subtract_add_constant_82_let = (&(global_const_workspace_110_var[897728]));
  void* fused_nn_conv2d_subtract_add_constant_81_let = (&(global_const_workspace_110_var[898752]));
  void* fused_nn_conv2d_constant_27_let = (&(global_const_workspace_110_var[908992]));
  void* fused_nn_conv2d_subtract_constant_27_let = (&(global_const_workspace_110_var[892608]));
  void* fused_constant_35_let = (&(global_const_workspace_110_var[0]));
  void* pad_temp_let = (&(global_workspace_111_var[19712]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 5; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 5; ++i2) {
      for (int32_t i3 = 0; i3 < 64; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 320) + (i2 * 64)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 9; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_111_var[21312]));
    for (int32_t ax3_outer = 0; ax3_outer < 4; ++ax3_outer) {
      for (int32_t ff = 0; ff < 64; ++ff) {
        ((int32_t*)conv2d_nhwc_let)[ff] = 0;
        for (int32_t ry = 0; ry < 3; ++ry) {
          for (int32_t rx = 0; rx < 3; ++rx) {
            for (int32_t rc = 0; rc < 64; ++rc) {
              ((int32_t*)conv2d_nhwc_let)[ff] = (((int32_t*)conv2d_nhwc_let)[ff] + (((int32_t)((int8_t*)pad_temp_let)[((((((ax0_ax1_fused_ax2_fused / 3) * 320) + (ry * 320)) + (rx * 64)) + ((ax0_ax1_fused_ax2_fused % 3) * 64)) + rc)]) * ((int32_t)((int8_t*)fused_constant_35_let)[(((((ry * 49152) + (rx * 16384)) + (rc * 256)) + (ax3_outer * 64)) + ff)])));
            }
          }
        }
      }
      for (int32_t ax3_inner = 0; ax3_inner < 64; ++ax3_inner) {
        int32_t cse_var_3 = (ax3_outer * 64);
        int32_t cse_var_2 = (cse_var_3 + ax3_inner);
        int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[ax3_inner] + ((int32_t*)fused_nn_conv2d_subtract_constant_27_let)[cse_var_2]) - ((int32_t*)fused_nn_conv2d_constant_27_let)[cse_var_2])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_81_let)[cse_var_2])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_83_let)[cse_var_2] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_83_let)[cse_var_2] + 31)))) - 128;
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        T_cast[(((ax0_ax1_fused_ax2_fused * 256) + cse_var_3) + ax3_inner)] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_26(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_122_var, uint8_t* global_workspace_123_var) {
  void* fused_nn_conv2d_subtract_add_constant_86_let = (&(global_const_workspace_122_var[959808]));
  void* fused_nn_conv2d_subtract_add_constant_85_let = (&(global_const_workspace_122_var[959936]));
  void* fused_nn_conv2d_subtract_add_constant_84_let = (&(global_const_workspace_122_var[960064]));
  void* fused_nn_conv2d_constant_28_let = (&(global_const_workspace_122_var[961856]));
  void* fused_nn_conv2d_subtract_constant_28_let = (&(global_const_workspace_122_var[959296]));
  void* fused_constant_38_let = (&(global_const_workspace_122_var[460800]));
  void* pad_temp_let = (&(global_workspace_123_var[0]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 5; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 5; ++i2) {
      for (int32_t i3 = 0; i3 < 256; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 1280) + (i2 * 256)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 9; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_123_var[6688]));
    for (int32_t ax3 = 0; ax3 < 32; ++ax3) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t ry = 0; ry < 3; ++ry) {
        for (int32_t rx = 0; rx < 3; ++rx) {
          for (int32_t rc = 0; rc < 256; ++rc) {
            ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((((((ax0_ax1_fused_ax2_fused / 3) * 1280) + (ry * 1280)) + (rx * 256)) + ((ax0_ax1_fused_ax2_fused % 3) * 256)) + rc)]) * ((int32_t)((int8_t*)fused_constant_38_let)[((((ry * 24576) + (rx * 8192)) + (rc * 32)) + ax3)])));
          }
        }
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_28_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_28_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_84_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_86_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_86_let)[ax3] + 31)))) - 128;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_cast[((ax0_ax1_fused_ax2_fused * 32) + ax3)] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_3(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_30_var, uint8_t* global_workspace_31_var) {
  void* fused_nn_conv2d_subtract_add_constant_14_let = (&(global_const_workspace_30_var[952128]));
  void* fused_nn_conv2d_subtract_add_constant_13_let = (&(global_const_workspace_30_var[952384]));
  void* fused_nn_conv2d_subtract_add_constant_12_let = (&(global_const_workspace_30_var[952640]));
  void* fused_nn_conv2d_constant_4_let = (&(global_const_workspace_30_var[954432]));
  void* fused_nn_conv2d_subtract_constant_4_let = (&(global_const_workspace_30_var[947264]));
  void* fused_constant_8_let = (&(global_const_workspace_30_var[784384]));
  void* pad_temp_let = (&(global_workspace_31_var[57600]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 17; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 17; ++i2) {
      for (int32_t i3 = 0; i3 < 16; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 272) + (i2 * 16)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 225; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_31_var[62224]));
    for (int32_t ff = 0; ff < 64; ++ff) {
      ((int32_t*)conv2d_nhwc_let)[ff] = 0;
      for (int32_t ry = 0; ry < 3; ++ry) {
        for (int32_t rx = 0; rx < 3; ++rx) {
          for (int32_t rc = 0; rc < 16; ++rc) {
            ((int32_t*)conv2d_nhwc_let)[ff] = (((int32_t*)conv2d_nhwc_let)[ff] + (((int32_t)((int8_t*)pad_temp_let)[((((((ax0_ax1_fused_ax2_fused / 15) * 272) + (ry * 272)) + (rx * 16)) + ((ax0_ax1_fused_ax2_fused % 15) * 16)) + rc)]) * ((int32_t)((int8_t*)fused_constant_8_let)[((((ry * 3072) + (rx * 1024)) + (rc * 64)) + ff)])));
          }
        }
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 64; ++ax3_inner) {
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[ax3_inner] + ((int32_t*)fused_nn_conv2d_subtract_constant_4_let)[ax3_inner]) - ((int32_t*)fused_nn_conv2d_constant_4_let)[ax3_inner])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_12_let)[ax3_inner])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_14_let)[ax3_inner] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_14_let)[ax3_inner] + 31)))) - 128;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_cast[((ax0_ax1_fused_ax2_fused * 64) + ax3_inner)] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_4(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_34_var, uint8_t* global_workspace_35_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED v8 HW-REQUANT] 1x1 conv: 128->16 channels, 225 spatial positions
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_34_var[963200]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_34_var[963328]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_34_var[963456]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_34_var[962432]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_34_var[884736]);

  // Safe copy: TVM may alias input/output workspace buffers
  static int8_t _inp[28800];
  for (int32_t _i = 0; _i < 28800; _i++) _inp[_i] = p0[_i];

  // Set per-layer zero-point once. The helper is provided by conv_accel.h.
  accel_set_output_zp(-128);

  for (int32_t tile = 0; tile < 1; tile++) {
    int32_t oc_base = tile * 16;
    int32_t oc_count = 16;
    if (oc_base + oc_count > 16) oc_count = 16 - oc_base;

    // Pack weights for this tile (relayout from [rc][oc] to [oc][rc])
    static int8_t rw[2048];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      for (int32_t rc = 0; rc < 128; rc++)
        rw[oc * 128 + rc] = weights[rc * 16 + oc_base + oc];
    }
    accel_spad_write(0x080, rw, oc_count * 128);

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
    accel_spad_write(0x8C0, (int8_t*)params, oc_count * 16);

    for (int32_t sp = 0; sp < 225; sp++) {
      accel_spad_write(0x000, &_inp[sp * 128], 128);
      hw_multi_dot_requant(0x000, 0x080, 0x880,
                           0x8C0, 128, oc_count);
      accel_unpack_i8_outputs(&T_cast[(sp * 16) + oc_base],
                              0x880, oc_count);
    }
  }
  return 0;

#else

  void* fused_nn_conv2d_subtract_add_constant_17_let = (&(global_const_workspace_34_var[963200]));
  void* fused_nn_conv2d_subtract_add_constant_16_let = (&(global_const_workspace_34_var[963264]));
  void* fused_nn_conv2d_subtract_add_constant_15_let = (&(global_const_workspace_34_var[963328]));
  void* fused_nn_conv2d_constant_5_let = (&(global_const_workspace_34_var[963456]));
  void* fused_nn_conv2d_subtract_constant_5_let = (&(global_const_workspace_34_var[962432]));
  void* fused_constant_9_let = (&(global_const_workspace_34_var[884736]));
  void* pad_temp_let = (&(global_workspace_35_var[28800]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 15; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 15; ++i2) {
      for (int32_t i3 = 0; i3 < 128; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 1920) + (i2 * 128)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 225; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_35_var[70448]));
    for (int32_t ax3 = 0; ax3 < 16; ++ax3) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 128; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 128) + rc)]) * ((int32_t)((int8_t*)fused_constant_9_let)[((rc * 16) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_5_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_5_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_15_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_17_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_17_let)[ax3] + 31)))) - 128;
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
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_5(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_36_var, uint8_t* global_workspace_37_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED v8 HW-REQUANT] 1x1 conv: 16->64 channels, 225 spatial positions
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_36_var[951104]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_36_var[951872]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_36_var[954176]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_36_var[947008]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_36_var[915136]);

  // Safe copy: TVM may alias input/output workspace buffers
  static int8_t _inp[3600];
  for (int32_t _i = 0; _i < 3600; _i++) _inp[_i] = p0[_i];

  // Set per-layer zero-point once. The helper is provided by conv_accel.h.
  accel_set_output_zp(-128);

  for (int32_t tile = 0; tile < 1; tile++) {
    int32_t oc_base = tile * 64;
    int32_t oc_count = 64;
    if (oc_base + oc_count > 64) oc_count = 64 - oc_base;

    // Pack weights for this tile (relayout from [rc][oc] to [oc][rc])
    static int8_t rw[1024];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      for (int32_t rc = 0; rc < 16; rc++)
        rw[oc * 16 + rc] = weights[rc * 64 + oc_base + oc];
    }
    accel_spad_write(0x010, rw, oc_count * 16);

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
    accel_spad_write(0x510, (int8_t*)params, oc_count * 16);

    for (int32_t sp = 0; sp < 225; sp++) {
      accel_spad_write(0x000, &_inp[sp * 16], 16);
      hw_multi_dot_requant(0x000, 0x010, 0x410,
                           0x510, 16, oc_count);
      accel_unpack_i8_outputs(&T_cast[(sp * 64) + oc_base],
                              0x410, oc_count);
    }
  }
  return 0;

#else

  void* fused_nn_conv2d_subtract_add_constant_20_let = (&(global_const_workspace_36_var[951104]));
  void* fused_nn_conv2d_subtract_add_constant_19_let = (&(global_const_workspace_36_var[951616]));
  void* fused_nn_conv2d_subtract_add_constant_18_let = (&(global_const_workspace_36_var[951872]));
  void* fused_nn_conv2d_constant_6_let = (&(global_const_workspace_36_var[954176]));
  void* fused_nn_conv2d_subtract_constant_6_let = (&(global_const_workspace_36_var[947008]));
  void* fused_constant_10_let = (&(global_const_workspace_36_var[915136]));
  void* pad_temp_let = (&(global_workspace_37_var[70448]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 15; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 15; ++i2) {
      for (int32_t i3 = 0; i3 < 16; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 240) + (i2 * 16)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 225; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_37_var[74048]));
    for (int32_t ff = 0; ff < 64; ++ff) {
      ((int32_t*)conv2d_nhwc_let)[ff] = 0;
      for (int32_t rc = 0; rc < 16; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[ff] = (((int32_t*)conv2d_nhwc_let)[ff] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 16) + rc)]) * ((int32_t)((int8_t*)fused_constant_10_let)[((rc * 64) + ff)])));
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 64; ++ax3_inner) {
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[ax3_inner] + ((int32_t*)fused_nn_conv2d_subtract_constant_6_let)[ax3_inner]) - ((int32_t*)fused_nn_conv2d_constant_6_let)[ax3_inner])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_18_let)[ax3_inner])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_20_let)[ax3_inner] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_20_let)[ax3_inner] + 31)))) - 128;
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
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_6(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_38_var, uint8_t* global_workspace_39_var) {
  void* fused_nn_conv2d_subtract_add_constant_23_let = (&(global_const_workspace_38_var[950336]));
  void* fused_nn_conv2d_subtract_add_constant_22_let = (&(global_const_workspace_38_var[950592]));
  void* fused_nn_conv2d_subtract_add_constant_21_let = (&(global_const_workspace_38_var[950848]));
  void* fused_nn_conv2d_constant_7_let = (&(global_const_workspace_38_var[953920]));
  void* fused_nn_conv2d_subtract_constant_7_let = (&(global_const_workspace_38_var[946752]));
  void* fused_constant_11_let = (&(global_const_workspace_38_var[812032]));
  void* pad_temp_let = (&(global_workspace_39_var[57600]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 17; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 17; ++i2) {
      for (int32_t i3 = 0; i3 < 16; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 272) + (i2 * 16)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 225; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_39_var[62224]));
    for (int32_t ff = 0; ff < 64; ++ff) {
      ((int32_t*)conv2d_nhwc_let)[ff] = 0;
      for (int32_t ry = 0; ry < 3; ++ry) {
        for (int32_t rx = 0; rx < 3; ++rx) {
          for (int32_t rc = 0; rc < 16; ++rc) {
            ((int32_t*)conv2d_nhwc_let)[ff] = (((int32_t*)conv2d_nhwc_let)[ff] + (((int32_t)((int8_t*)pad_temp_let)[((((((ax0_ax1_fused_ax2_fused / 15) * 272) + (ry * 272)) + (rx * 16)) + ((ax0_ax1_fused_ax2_fused % 15) * 16)) + rc)]) * ((int32_t)((int8_t*)fused_constant_11_let)[((((ry * 3072) + (rx * 1024)) + (rc * 64)) + ff)])));
          }
        }
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 64; ++ax3_inner) {
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[ax3_inner] + ((int32_t*)fused_nn_conv2d_subtract_constant_7_let)[ax3_inner]) - ((int32_t*)fused_nn_conv2d_constant_7_let)[ax3_inner])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_21_let)[ax3_inner])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_23_let)[ax3_inner] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_23_let)[ax3_inner] + 31)))) - 128;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_cast[((ax0_ax1_fused_ax2_fused * 64) + ax3_inner)] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_7(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_44_var, uint8_t* global_workspace_45_var) {
  void* fused_nn_conv2d_subtract_add_constant_26_let = (&(global_const_workspace_44_var[961344]));
  void* fused_nn_conv2d_subtract_add_constant_25_let = (&(global_const_workspace_44_var[961472]));
  void* fused_nn_conv2d_subtract_add_constant_24_let = (&(global_const_workspace_44_var[961600]));
  void* fused_nn_conv2d_constant_8_let = (&(global_const_workspace_44_var[961728]));
  void* fused_nn_conv2d_subtract_constant_8_let = (&(global_const_workspace_44_var[959168]));
  void* fused_constant_12_let = (&(global_const_workspace_44_var[608256]));
  void* pad_temp_let = (&(global_workspace_45_var[0]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 9; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 9; ++i2) {
      for (int32_t i3 = 0; i3 < 128; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 1152) + (i2 * 128)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 49; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_45_var[44960]));
    for (int32_t ax3 = 0; ax3 < 32; ++ax3) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t ry = 0; ry < 3; ++ry) {
        for (int32_t rx = 0; rx < 3; ++rx) {
          for (int32_t rc = 0; rc < 128; ++rc) {
            ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((((((ax0_ax1_fused_ax2_fused / 7) * 1152) + (ry * 1152)) + (rx * 128)) + ((ax0_ax1_fused_ax2_fused % 7) * 128)) + rc)]) * ((int32_t)((int8_t*)fused_constant_12_let)[((((ry * 12288) + (rx * 4096)) + (rc * 32)) + ax3)])));
          }
        }
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_8_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_8_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_24_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_26_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_26_let)[ax3] + 31)))) - 128;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_cast[((ax0_ax1_fused_ax2_fused * 32) + ax3)] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_8(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_62_var, uint8_t* global_workspace_63_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED v8 HW-REQUANT] 1x1 conv: 128->32 channels, 49 spatial positions
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_62_var[960832]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_62_var[961088]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_62_var[962112]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_62_var[959552]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_62_var[880640]);

  // Safe copy: TVM may alias input/output workspace buffers
  static int8_t _inp[6272];
  for (int32_t _i = 0; _i < 6272; _i++) _inp[_i] = p0[_i];

  // Set per-layer zero-point once. The helper is provided by conv_accel.h.
  accel_set_output_zp(-128);

  for (int32_t tile = 0; tile < 1; tile++) {
    int32_t oc_base = tile * 32;
    int32_t oc_count = 32;
    if (oc_base + oc_count > 32) oc_count = 32 - oc_base;

    // Pack weights for this tile (relayout from [rc][oc] to [oc][rc])
    static int8_t rw[4096];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      for (int32_t rc = 0; rc < 128; rc++)
        rw[oc * 128 + rc] = weights[rc * 32 + oc_base + oc];
    }
    accel_spad_write(0x080, rw, oc_count * 128);

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
    accel_spad_write(0x1100, (int8_t*)params, oc_count * 16);

    for (int32_t sp = 0; sp < 49; sp++) {
      accel_spad_write(0x000, &_inp[sp * 128], 128);
      hw_multi_dot_requant(0x000, 0x080, 0x1080,
                           0x1100, 128, oc_count);
      accel_unpack_i8_outputs(&T_cast[(sp * 32) + oc_base],
                              0x1080, oc_count);
    }
  }
  return 0;

#else

  void* fused_nn_conv2d_subtract_add_constant_32_let = (&(global_const_workspace_62_var[960832]));
  void* fused_nn_conv2d_subtract_add_constant_31_let = (&(global_const_workspace_62_var[960960]));
  void* fused_nn_conv2d_subtract_add_constant_30_let = (&(global_const_workspace_62_var[961088]));
  void* fused_nn_conv2d_constant_10_let = (&(global_const_workspace_62_var[962112]));
  void* fused_nn_conv2d_subtract_constant_10_let = (&(global_const_workspace_62_var[959552]));
  void* fused_constant_18_let = (&(global_const_workspace_62_var[880640]));
  void* pad_temp_let = (&(global_workspace_63_var[35072]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 7; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 7; ++i2) {
      for (int32_t i3 = 0; i3 < 128; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 896) + (i2 * 128)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 49; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_63_var[42912]));
    for (int32_t ax3 = 0; ax3 < 32; ++ax3) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 128; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 128) + rc)]) * ((int32_t)((int8_t*)fused_constant_18_let)[((rc * 32) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_10_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_10_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_30_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_32_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_32_let)[ax3] + 31)))) - 128;
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
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_9(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_64_var, uint8_t* global_workspace_65_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED v8 HW-REQUANT] 1x1 conv: 32->128 channels, 49 spatial positions
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_64_var[940096]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_64_var[941120]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_64_var[943168]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_64_var[934976]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_64_var[876544]);

  // Safe copy: TVM may alias input/output workspace buffers
  static int8_t _inp[1568];
  for (int32_t _i = 0; _i < 1568; _i++) _inp[_i] = p0[_i];

  // Set per-layer zero-point once. The helper is provided by conv_accel.h.
  accel_set_output_zp(-128);

  for (int32_t tile = 0; tile < 1; tile++) {
    int32_t oc_base = tile * 128;
    int32_t oc_count = 128;
    if (oc_base + oc_count > 128) oc_count = 128 - oc_base;

    // Pack weights for this tile (relayout from [rc][oc] to [oc][rc])
    static int8_t rw[4096];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      for (int32_t rc = 0; rc < 32; rc++)
        rw[oc * 32 + rc] = weights[rc * 128 + oc_base + oc];
    }
    accel_spad_write(0x020, rw, oc_count * 32);

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
    accel_spad_write(0x1220, (int8_t*)params, oc_count * 16);

    for (int32_t sp = 0; sp < 49; sp++) {
      accel_spad_write(0x000, &_inp[sp * 32], 32);
      hw_multi_dot_requant(0x000, 0x020, 0x1020,
                           0x1220, 32, oc_count);
      accel_unpack_i8_outputs(&T_cast[(sp * 128) + oc_base],
                              0x1020, oc_count);
    }
  }
  return 0;

#else

  void* fused_nn_conv2d_subtract_add_constant_35_let = (&(global_const_workspace_64_var[940096]));
  void* fused_nn_conv2d_subtract_add_constant_34_let = (&(global_const_workspace_64_var[940608]));
  void* fused_nn_conv2d_subtract_add_constant_33_let = (&(global_const_workspace_64_var[941120]));
  void* fused_nn_conv2d_constant_11_let = (&(global_const_workspace_64_var[943168]));
  void* fused_nn_conv2d_subtract_constant_11_let = (&(global_const_workspace_64_var[934976]));
  void* fused_constant_19_let = (&(global_const_workspace_64_var[876544]));
  void* pad_temp_let = (&(global_workspace_65_var[42912]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 7; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 7; ++i2) {
      for (int32_t i3 = 0; i3 < 32; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 224) + (i2 * 32)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 49; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_65_var[44480]));
    for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
      for (int32_t ff = 0; ff < 64; ++ff) {
        ((int32_t*)conv2d_nhwc_let)[ff] = 0;
        for (int32_t rc = 0; rc < 32; ++rc) {
          ((int32_t*)conv2d_nhwc_let)[ff] = (((int32_t*)conv2d_nhwc_let)[ff] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 32) + rc)]) * ((int32_t)((int8_t*)fused_constant_19_let)[(((rc * 128) + (ax3_outer * 64)) + ff)])));
        }
      }
      for (int32_t ax3_inner = 0; ax3_inner < 64; ++ax3_inner) {
        int32_t cse_var_3 = (ax3_outer * 64);
        int32_t cse_var_2 = (cse_var_3 + ax3_inner);
        int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[ax3_inner] + ((int32_t*)fused_nn_conv2d_subtract_constant_11_let)[cse_var_2]) - ((int32_t*)fused_nn_conv2d_constant_11_let)[cse_var_2])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_33_let)[cse_var_2])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_35_let)[cse_var_2] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_35_let)[cse_var_2] + 31)))) - 128;
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
TVM_DLL int32_t tvmgen_default_fused_nn_max_pool2d(int8_t* p0, int8_t* pool_max, uint8_t* global_const_workspace_6_var, uint8_t* global_workspace_7_var) {
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 15; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 15; ++ax2) {
      for (int32_t ax3_init = 0; ax3_init < 64; ++ax3_init) {
        pool_max[(((ax0_ax1_fused * 960) + (ax2 * 64)) + ax3_init)] = (int8_t)-128;
      }
      for (int32_t rv0_rv1_fused = 0; rv0_rv1_fused < 9; ++rv0_rv1_fused) {
        for (int32_t ax3 = 0; ax3 < 64; ++ax3) {
          int32_t cse_var_1 = (((ax0_ax1_fused * 960) + (ax2 * 64)) + ax3);
          int8_t v_ = pool_max[cse_var_1];
          int8_t v__1 = p0[(((((ax0_ax1_fused * 3968) + ((rv0_rv1_fused / 3) * 1984)) + (ax2 * 128)) + ((rv0_rv1_fused % 3) * 64)) + ax3)];
          pool_max[cse_var_1] = ((v_) > (v__1) ? (v_) : (v__1));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_max_pool2d_1(int8_t* p0, int8_t* pool_max, uint8_t* global_const_workspace_40_var, uint8_t* global_workspace_41_var) {
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 7; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 7; ++ax2) {
      for (int32_t ax3_outer_init = 0; ax3_outer_init < 2; ++ax3_outer_init) {
        for (int32_t ax3_inner_init = 0; ax3_inner_init < 64; ++ax3_inner_init) {
          pool_max[((((ax0_ax1_fused * 896) + (ax2 * 128)) + (ax3_outer_init * 64)) + ax3_inner_init)] = (int8_t)-128;
        }
      }
      for (int32_t rv0_rv1_fused = 0; rv0_rv1_fused < 9; ++rv0_rv1_fused) {
        for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
          for (int32_t ax3_inner = 0; ax3_inner < 64; ++ax3_inner) {
            int32_t cse_var_2 = (ax3_outer * 64);
            int32_t cse_var_1 = ((((ax0_ax1_fused * 896) + (ax2 * 128)) + cse_var_2) + ax3_inner);
            int8_t v_ = pool_max[cse_var_1];
            int8_t v__1 = p0[((((((ax0_ax1_fused * 3840) + ((rv0_rv1_fused / 3) * 1920)) + (ax2 * 256)) + ((rv0_rv1_fused % 3) * 128)) + cse_var_2) + ax3_inner)];
            pool_max[cse_var_1] = ((v_) > (v__1) ? (v_) : (v__1));
          }
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_max_pool2d_2(int8_t* p0, int8_t* pool_max, uint8_t* global_const_workspace_78_var, uint8_t* global_workspace_79_var) {
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 3; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 3; ++ax2) {
      for (int32_t ax3_outer_init = 0; ax3_outer_init < 4; ++ax3_outer_init) {
        for (int32_t ax3_inner_init = 0; ax3_inner_init < 64; ++ax3_inner_init) {
          pool_max[((((ax0_ax1_fused * 768) + (ax2 * 256)) + (ax3_outer_init * 64)) + ax3_inner_init)] = (int8_t)-128;
        }
      }
      for (int32_t rv0_rv1_fused = 0; rv0_rv1_fused < 9; ++rv0_rv1_fused) {
        for (int32_t ax3_outer = 0; ax3_outer < 4; ++ax3_outer) {
          for (int32_t ax3_inner = 0; ax3_inner < 64; ++ax3_inner) {
            int32_t cse_var_2 = (ax3_outer * 64);
            int32_t cse_var_1 = ((((ax0_ax1_fused * 768) + (ax2 * 256)) + cse_var_2) + ax3_inner);
            int8_t v_ = pool_max[cse_var_1];
            int8_t v__1 = p0[((((((ax0_ax1_fused * 3584) + ((rv0_rv1_fused / 3) * 1792)) + (ax2 * 512)) + ((rv0_rv1_fused % 3) * 256)) + cse_var_2) + ax3_inner)];
            pool_max[cse_var_1] = ((v_) > (v__1) ? (v_) : (v__1));
          }
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_8_var, uint8_t* global_workspace_9_var) {
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 17; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 17; ++ax2) {
      for (int32_t ax3_outer = 0; ax3_outer < 4; ++ax3_outer) {
        for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
          int32_t cse_var_2 = (ax2 * 64);
          int32_t cse_var_1 = (ax3_outer * 16);
          T_pad[((((ax0_ax1_fused * 1088) + cse_var_2) + cse_var_1) + ax3_inner)] = (((((1 <= ax0_ax1_fused) && (ax0_ax1_fused < 16)) && (1 <= ax2)) && (ax2 < 16)) ? p0[(((((ax0_ax1_fused * 960) + cse_var_2) + cse_var_1) + ax3_inner) - 1024)] : (int8_t)-128);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_1(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_28_var, uint8_t* global_workspace_29_var) {
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 17; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 17; ++ax2) {
      for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
        int32_t cse_var_1 = (ax2 * 16);
        T_pad[(((ax0_ax1_fused * 272) + cse_var_1) + ax3_inner)] = (((((1 <= ax0_ax1_fused) && (ax0_ax1_fused < 16)) && (1 <= ax2)) && (ax2 < 16)) ? p0[((((ax0_ax1_fused * 240) + cse_var_1) + ax3_inner) - 256)] : (int8_t)-128);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_2(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_42_var, uint8_t* global_workspace_43_var) {
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 9; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 9; ++ax2) {
      for (int32_t ax3_outer = 0; ax3_outer < 8; ++ax3_outer) {
        for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
          int32_t cse_var_2 = (ax2 * 128);
          int32_t cse_var_1 = (ax3_outer * 16);
          T_pad[((((ax0_ax1_fused * 1152) + cse_var_2) + cse_var_1) + ax3_inner)] = (((((1 <= ax0_ax1_fused) && (ax0_ax1_fused < 8)) && (1 <= ax2)) && (ax2 < 8)) ? p0[(((((ax0_ax1_fused * 896) + cse_var_2) + cse_var_1) + ax3_inner) - 1024)] : (int8_t)-128);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_3(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_46_var, uint8_t* global_workspace_47_var) {
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 9; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 9; ++ax2) {
      for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
        for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
          int32_t cse_var_2 = (ax2 * 32);
          int32_t cse_var_1 = (ax3_outer * 16);
          T_pad[((((ax0_ax1_fused * 288) + cse_var_2) + cse_var_1) + ax3_inner)] = (((((1 <= ax0_ax1_fused) && (ax0_ax1_fused < 8)) && (1 <= ax2)) && (ax2 < 8)) ? p0[(((((ax0_ax1_fused * 224) + cse_var_2) + cse_var_1) + ax3_inner) - 256)] : (int8_t)-128);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_4(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_66_var, uint8_t* global_workspace_67_var) {
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 9; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 9; ++ax2) {
      for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
        for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
          int32_t cse_var_2 = (ax2 * 32);
          int32_t cse_var_1 = (ax3_outer * 16);
          T_pad[((((ax0_ax1_fused * 288) + cse_var_2) + cse_var_1) + ax3_inner)] = (((((1 <= ax0_ax1_fused) && (ax0_ax1_fused < 8)) && (1 <= ax2)) && (ax2 < 8)) ? p0[(((((ax0_ax1_fused * 224) + cse_var_2) + cse_var_1) + ax3_inner) - 256)] : (int8_t)-128);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_5(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_84_var, uint8_t* global_workspace_85_var) {
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 5; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 5; ++ax2) {
      for (int32_t ax3_outer = 0; ax3_outer < 3; ++ax3_outer) {
        for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
          int32_t cse_var_2 = (ax2 * 48);
          int32_t cse_var_1 = (ax3_outer * 16);
          T_pad[((((ax0_ax1_fused * 240) + cse_var_2) + cse_var_1) + ax3_inner)] = (((((1 <= ax0_ax1_fused) && (ax0_ax1_fused < 4)) && (1 <= ax2)) && (ax2 < 4)) ? p0[(((((ax0_ax1_fused * 144) + cse_var_2) + cse_var_1) + ax3_inner) - 192)] : (int8_t)-128);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_6(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_100_var, uint8_t* global_workspace_101_var) {
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 5; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 5; ++ax2) {
      for (int32_t ax3_outer = 0; ax3_outer < 4; ++ax3_outer) {
        for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
          int32_t cse_var_2 = (ax2 * 64);
          int32_t cse_var_1 = (ax3_outer * 16);
          T_pad[((((ax0_ax1_fused * 320) + cse_var_2) + cse_var_1) + ax3_inner)] = (((((1 <= ax0_ax1_fused) && (ax0_ax1_fused < 4)) && (1 <= ax2)) && (ax2 < 4)) ? p0[(((((ax0_ax1_fused * 192) + cse_var_2) + cse_var_1) + ax3_inner) - 256)] : (int8_t)-128);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_7(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_120_var, uint8_t* global_workspace_121_var) {
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 5; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 5; ++ax2) {
      for (int32_t ax3_outer = 0; ax3_outer < 16; ++ax3_outer) {
        for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
          int32_t cse_var_2 = (ax2 * 256);
          int32_t cse_var_1 = (ax3_outer * 16);
          T_pad[((((ax0_ax1_fused * 1280) + cse_var_2) + cse_var_1) + ax3_inner)] = (((((1 <= ax0_ax1_fused) && (ax0_ax1_fused < 4)) && (1 <= ax2)) && (ax2 < 4)) ? p0[(((((ax0_ax1_fused * 768) + cse_var_2) + cse_var_1) + ax3_inner) - 1024)] : (int8_t)-128);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_8(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_124_var, uint8_t* global_workspace_125_var) {
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 5; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 5; ++ax2) {
      for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
        for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
          int32_t cse_var_2 = (ax2 * 32);
          int32_t cse_var_1 = (ax3_outer * 16);
          T_pad[((((ax0_ax1_fused * 160) + cse_var_2) + cse_var_1) + ax3_inner)] = (((((1 <= ax0_ax1_fused) && (ax0_ax1_fused < 4)) && (1 <= ax2)) && (ax2 < 4)) ? p0[(((((ax0_ax1_fused * 96) + cse_var_2) + cse_var_1) + ax3_inner) - 128)] : (int8_t)-128);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_softmax_divide_round_add_clip_cast_subtract_cast_multiply(float* p0, float* T_multiply, uint8_t* global_const_workspace_22_var, uint8_t* global_workspace_23_var) {
  void* T_softmax_maxelem_let = (&(global_workspace_23_var[80464]));
  void* T_softmax_exp_let = (&(global_workspace_23_var[80424]));
  void* T_softmax_expsum_let = (&(global_workspace_23_var[80464]));
  ((float*)T_softmax_maxelem_let)[0] = -3.402823e+38f;
  for (int32_t k = 0; k < 10; ++k) {
    float v_ = ((float*)T_softmax_maxelem_let)[0];
    float v__1 = p0[k];
    ((float*)T_softmax_maxelem_let)[0] = ((v_) > (v__1) ? (v_) : (v__1));
  }
  for (int32_t i1 = 0; i1 < 10; ++i1) {
    ((float*)T_softmax_exp_let)[i1] = expf((p0[i1] - ((float*)T_softmax_maxelem_let)[0]));
  }
  ((float*)T_softmax_expsum_let)[0] = 0.000000e+00f;
  for (int32_t k_1 = 0; k_1 < 10; ++k_1) {
    ((float*)T_softmax_expsum_let)[0] = (((float*)T_softmax_expsum_let)[0] + ((float*)T_softmax_exp_let)[k_1]);
  }
  for (int32_t i1_1 = 0; i1_1 < 10; ++i1_1) {
    ((float*)T_softmax_exp_let)[i1_1] = (((float*)T_softmax_exp_let)[i1_1] / ((float*)T_softmax_expsum_let)[0]);
  }
  for (int32_t ax1 = 0; ax1 < 10; ++ax1) {
    float v__2 = roundf((((float*)T_softmax_exp_let)[ax1] * 2.560000e+02f)) + -1.280000e+02f;
    float v__3 = (v__2) < (1.270000e+02f) ? (v__2) : (1.270000e+02f);
    T_multiply[ax1] = (((float)(((int32_t)((v__3) > (-1.280000e+02f) ? (v__3) : (-1.280000e+02f))) + 128)) * 3.906250e-03f);
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_softmax_divide_round_add_clip_cast_subtract_cast_multiply_1(float* p0, float* T_multiply, uint8_t* global_const_workspace_60_var, uint8_t* global_workspace_61_var) {
  void* T_softmax_maxelem_let = (&(global_workspace_61_var[35344]));
  void* T_softmax_exp_let = (&(global_workspace_61_var[35304]));
  void* T_softmax_expsum_let = (&(global_workspace_61_var[35344]));
  ((float*)T_softmax_maxelem_let)[0] = -3.402823e+38f;
  for (int32_t k = 0; k < 10; ++k) {
    float v_ = ((float*)T_softmax_maxelem_let)[0];
    float v__1 = p0[k];
    ((float*)T_softmax_maxelem_let)[0] = ((v_) > (v__1) ? (v_) : (v__1));
  }
  for (int32_t i1 = 0; i1 < 10; ++i1) {
    ((float*)T_softmax_exp_let)[i1] = expf((p0[i1] - ((float*)T_softmax_maxelem_let)[0]));
  }
  ((float*)T_softmax_expsum_let)[0] = 0.000000e+00f;
  for (int32_t k_1 = 0; k_1 < 10; ++k_1) {
    ((float*)T_softmax_expsum_let)[0] = (((float*)T_softmax_expsum_let)[0] + ((float*)T_softmax_exp_let)[k_1]);
  }
  for (int32_t i1_1 = 0; i1_1 < 10; ++i1_1) {
    ((float*)T_softmax_exp_let)[i1_1] = (((float*)T_softmax_exp_let)[i1_1] / ((float*)T_softmax_expsum_let)[0]);
  }
  for (int32_t ax1 = 0; ax1 < 10; ++ax1) {
    float v__2 = roundf((((float*)T_softmax_exp_let)[ax1] * 2.560000e+02f)) + -1.280000e+02f;
    float v__3 = (v__2) < (1.270000e+02f) ? (v__2) : (1.270000e+02f);
    T_multiply[ax1] = (((float)(((int32_t)((v__3) > (-1.280000e+02f) ? (v__3) : (-1.280000e+02f))) + 128)) * 3.906250e-03f);
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_softmax_divide_round_add_clip_cast_subtract_cast_multiply_2(float* p0, float* T_multiply, uint8_t* global_const_workspace_118_var, uint8_t* global_workspace_119_var) {
  void* T_softmax_maxelem_let = (&(global_workspace_119_var[17744]));
  void* T_softmax_exp_let = (&(global_workspace_119_var[17704]));
  void* T_softmax_expsum_let = (&(global_workspace_119_var[17744]));
  ((float*)T_softmax_maxelem_let)[0] = -3.402823e+38f;
  for (int32_t k = 0; k < 10; ++k) {
    float v_ = ((float*)T_softmax_maxelem_let)[0];
    float v__1 = p0[k];
    ((float*)T_softmax_maxelem_let)[0] = ((v_) > (v__1) ? (v_) : (v__1));
  }
  for (int32_t i1 = 0; i1 < 10; ++i1) {
    ((float*)T_softmax_exp_let)[i1] = expf((p0[i1] - ((float*)T_softmax_maxelem_let)[0]));
  }
  ((float*)T_softmax_expsum_let)[0] = 0.000000e+00f;
  for (int32_t k_1 = 0; k_1 < 10; ++k_1) {
    ((float*)T_softmax_expsum_let)[0] = (((float*)T_softmax_expsum_let)[0] + ((float*)T_softmax_exp_let)[k_1]);
  }
  for (int32_t i1_1 = 0; i1_1 < 10; ++i1_1) {
    ((float*)T_softmax_exp_let)[i1_1] = (((float*)T_softmax_exp_let)[i1_1] / ((float*)T_softmax_expsum_let)[0]);
  }
  for (int32_t ax1 = 0; ax1 < 10; ++ax1) {
    float v__2 = roundf((((float*)T_softmax_exp_let)[ax1] * 2.560000e+02f)) + -1.280000e+02f;
    float v__3 = (v__2) < (1.270000e+02f) ? (v__2) : (1.270000e+02f);
    T_multiply[ax1] = (((float)(((int32_t)((v__3) > (-1.280000e+02f) ? (v__3) : (-1.280000e+02f))) + 128)) * 3.906250e-03f);
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_softmax_divide_round_add_clip_cast_subtract_cast_multiply_3(float* p0, float* T_multiply, uint8_t* global_const_workspace_138_var, uint8_t* global_workspace_139_var) {
  void* T_softmax_maxelem_let = (&(global_workspace_139_var[272]));
  void* T_softmax_exp_let = (&(global_workspace_139_var[232]));
  void* T_softmax_expsum_let = (&(global_workspace_139_var[272]));
  ((float*)T_softmax_maxelem_let)[0] = -3.402823e+38f;
  for (int32_t k = 0; k < 10; ++k) {
    float v_ = ((float*)T_softmax_maxelem_let)[0];
    float v__1 = p0[k];
    ((float*)T_softmax_maxelem_let)[0] = ((v_) > (v__1) ? (v_) : (v__1));
  }
  for (int32_t i1 = 0; i1 < 10; ++i1) {
    ((float*)T_softmax_exp_let)[i1] = expf((p0[i1] - ((float*)T_softmax_maxelem_let)[0]));
  }
  ((float*)T_softmax_expsum_let)[0] = 0.000000e+00f;
  for (int32_t k_1 = 0; k_1 < 10; ++k_1) {
    ((float*)T_softmax_expsum_let)[0] = (((float*)T_softmax_expsum_let)[0] + ((float*)T_softmax_exp_let)[k_1]);
  }
  for (int32_t i1_1 = 0; i1_1 < 10; ++i1_1) {
    ((float*)T_softmax_exp_let)[i1_1] = (((float*)T_softmax_exp_let)[i1_1] / ((float*)T_softmax_expsum_let)[0]);
  }
  for (int32_t ax1 = 0; ax1 < 10; ++ax1) {
    float v__2 = roundf((((float*)T_softmax_exp_let)[ax1] * 2.560000e+02f)) + -1.280000e+02f;
    float v__3 = (v__2) < (1.270000e+02f) ? (v__2) : (1.270000e+02f);
    T_multiply[ax1] = (((float)(((int32_t)((v__3) > (-1.280000e+02f) ? (v__3) : (-1.280000e+02f))) + 128)) * 3.906250e-03f);
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_fixed_point_multiply_add_clip_cast_reshape(int32_t* p0, int8_t* T_reshape, uint8_t* global_const_workspace_14_var, uint8_t* global_workspace_15_var) {
  void* fused_constant_2_let = (&(global_const_workspace_14_var[964064]));
  for (int32_t ax1_outer = 0; ax1_outer < 2; ++ax1_outer) {
    for (int32_t ax1_inner = 0; ax1_inner < 16; ++ax1_inner) {
      int32_t cse_var_1 = ((ax1_outer * 16) + ax1_inner);
      int32_t v_ = ((int32_t)(((((2 != 0) ? (((int64_t)(p0[cse_var_1] - ((int32_t*)fused_constant_2_let)[0])) << ((int64_t)2)) : ((int64_t)(p0[cse_var_1] - ((int32_t*)fused_constant_2_let)[0]))) * (int64_t)1169521563) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31)))) - 128;
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
  void* fused_constant_14_let = (&(global_const_workspace_52_var[964080]));
  for (int32_t ax1_inner = 0; ax1_inner < 16; ++ax1_inner) {
    int32_t v_ = ((int32_t)(((((2 != 0) ? (((int64_t)(p0[ax1_inner] - ((int32_t*)fused_constant_14_let)[0])) << ((int64_t)2)) : ((int64_t)(p0[ax1_inner] - ((int32_t*)fused_constant_14_let)[0]))) * (int64_t)1934120518) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31)))) - 128;
    int32_t v__1 = (v_) < (127) ? (v_) : (127);
    T_reshape[ax1_inner] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_fixed_point_multiply_add_clip_cast_reshape_2(int32_t* p0, int8_t* T_reshape, uint8_t* global_const_workspace_114_var, uint8_t* global_workspace_115_var) {
  void* fused_constant_36_let = (&(global_const_workspace_114_var[964048]));
  for (int32_t ax1_outer = 0; ax1_outer < 32; ++ax1_outer) {
    for (int32_t ax1_inner = 0; ax1_inner < 16; ++ax1_inner) {
      int32_t cse_var_1 = ((ax1_outer * 16) + ax1_inner);
      int32_t v_ = ((int32_t)(((((2 != 0) ? (((int64_t)(p0[cse_var_1] - ((int32_t*)fused_constant_36_let)[0])) << ((int64_t)2)) : ((int64_t)(p0[cse_var_1] - ((int32_t*)fused_constant_36_let)[0]))) * (int64_t)2021669131) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31)))) - 128;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_reshape[cse_var_1] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_fixed_point_multiply_add_clip_cast_reshape_3(int32_t* p0, int8_t* T_reshape, uint8_t* global_const_workspace_130_var, uint8_t* global_workspace_131_var) {
  void* fused_constant_40_let = (&(global_const_workspace_130_var[964032]));
  for (int32_t ax1_inner = 0; ax1_inner < 16; ++ax1_inner) {
    int32_t v_ = ((int32_t)(((((2 != 0) ? (((int64_t)(p0[ax1_inner] - ((int32_t*)fused_constant_40_let)[0])) << ((int64_t)2)) : ((int64_t)(p0[ax1_inner] - ((int32_t*)fused_constant_40_let)[0]))) * (int64_t)1371824713) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31)))) - 128;
    int32_t v__1 = (v_) < (127) ? (v_) : (127);
    T_reshape[ax1_inner] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default___tvm_main__(float* serving_default_input_0_buffer_var, float* StatefulPartitionedCall_1_buffer_var, float* StatefulPartitionedCall_2_buffer_var, float* StatefulPartitionedCall_0_buffer_var, float* StatefulPartitionedCall_3_buffer_var, uint8_t* global_const_workspace_0_var, uint8_t* global_workspace_1_var) {
  void* sid_61_let = (&(global_workspace_1_var[21312]));
  void* sid_54_let = (&(global_workspace_1_var[22912]));
  void* sid_57_let = (&(global_workspace_1_var[17408]));
  void* sid_50_let = (&(global_workspace_1_var[15104]));
  void* sid_52_let = (&(global_workspace_1_var[16832]));
  void* sid_56_let = (&(global_workspace_1_var[21312]));
  void* sid_40_let = (&(global_workspace_1_var[27680]));
  void* sid_46_let = (&(global_workspace_1_var[19760]));
  void* sid_38_let = (&(global_workspace_1_var[30272]));
  void* sid_53_let = (&(global_workspace_1_var[0]));
  void* sid_55_let = (&(global_workspace_1_var[15104]));
  void* sid_45_let = (&(global_workspace_1_var[15104]));
  
  //void* sid_43_let = (&(global_workspace_1_var[12800]));
  void* sid_43_let = (&(((uint8_t*)(*BB_GLOBAL_WS_ADDR))[12800]));
  
  void* sid_17_let = (&(global_workspace_1_var[66848]));
  void* sid_41_let = (&(global_workspace_1_var[18816]));
  void* sid_48_let = (&(global_workspace_1_var[0]));
  void* sid_31_let = (&(global_workspace_1_var[35264]));
  void* sid_36_let = (&(global_workspace_1_var[18816]));
  void* sid_30_let = (&(global_workspace_1_var[35200]));
  void* sid_42_let = (&(global_workspace_1_var[0]));
  void* sid_49_let = (&(global_workspace_1_var[20960]));
  void* sid_21_let = (&(global_workspace_1_var[0]));
  void* sid_34_let = (&(global_workspace_1_var[12544]));
  void* sid_35_let = (&(global_workspace_1_var[27680]));
  void* sid_8_let = (&(global_workspace_1_var[80192]));
  void* sid_23_let = (&(global_workspace_1_var[10368]));
  void* sid_7_let = (&(global_workspace_1_var[80448]));
  void* sid_1_let = (&(global_workspace_1_var[0]));
  void* sid_47_let = (&(global_workspace_1_var[16832]));
  void* sid_9_let = (&(global_workspace_1_var[80320]));
  void* sid_10_let = (&(global_workspace_1_var[80384]));
  void* sid_51_let = (&(global_workspace_1_var[19760]));
  void* sid_5_let = (&(global_workspace_1_var[0]));
  void* sid_2_let = (&(global_workspace_1_var[0]));
  void* sid_60_let = (&(global_workspace_1_var[15104]));
  
  //void* sid_3_let = (&(global_workspace_1_var[65792]));
  void* sid_3_let = (&(((uint8_t*)(*BB_GLOBAL_WS_ADDR))[65792]));
  
  void* sid_4_let = (&(global_workspace_1_var[47296]));
  void* sid_58_let = (&(global_workspace_1_var[0]));
  void* sid_6_let = (&(global_workspace_1_var[80192]));
  void* sid_27_let = (&(global_workspace_1_var[35072]));
  void* sid_44_let = (&(global_workspace_1_var[20960]));
  void* sid_14_let = (&(global_workspace_1_var[62224]));
  void* sid_33_let = (&(global_workspace_1_var[41344]));
  void* sid_13_let = (&(global_workspace_1_var[28800]));
  void* sid_29_let = (&(global_workspace_1_var[35072]));
  void* sid_15_let = (&(global_workspace_1_var[43200]));
  void* sid_37_let = (&(global_workspace_1_var[0]));
  void* sid_59_let = (&(global_workspace_1_var[22912]));
  void* sid_18_let = (&(global_workspace_1_var[28800]));
  void* sid_12_let = (&(global_workspace_1_var[94592]));
  void* sid_19_let = (&(global_workspace_1_var[62224]));
  void* sid_26_let = (&(global_workspace_1_var[35072]));
  void* sid_20_let = (&(global_workspace_1_var[43200]));
  void* sid_39_let = (&(global_workspace_1_var[12544]));
  
  //void* sid_22_let = (&(global_workspace_1_var[28800]));
  void* sid_22_let = (&(((uint8_t*)(*BB_GLOBAL_WS_ADDR))[28800]));
  
  void* sid_16_let = (&(global_workspace_1_var[0]));
  void* sid_25_let = (&(global_workspace_1_var[40800]));
  void* sid_24_let = (&(global_workspace_1_var[43392]));
  void* sid_28_let = (&(global_workspace_1_var[35360]));
  void* sid_62_let = (&(global_workspace_1_var[17408]));
  void* sid_63_let = (&(global_workspace_1_var[0]));
  void* sid_64_let = (&(global_workspace_1_var[15104]));
  void* sid_65_let = (&(global_workspace_1_var[17152]));
  void* sid_66_let = (&(global_workspace_1_var[17664]));
  void* sid_68_let = (&(global_workspace_1_var[6400]));
  void* sid_69_let = (&(global_workspace_1_var[6400]));
  void* sid_70_let = (&(global_workspace_1_var[800]));
  void* sid_71_let = (&(global_workspace_1_var[800]));
  void* sid_72_let = (&(global_workspace_1_var[0]));
  void* sid_73_let = (&(global_workspace_1_var[288]));
  void* sid_74_let = (&(global_workspace_1_var[0]));
  void* sid_75_let = (&(global_workspace_1_var[128]));
  void* sid_76_let = (&(global_workspace_1_var[192]));
  // if (tvmgen_default_fused_divide_round_add_clip_cast(serving_default_input_0_buffer_var, sid_1_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast(sid_1_let, sid_2_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_max_pool2d(sid_2_let, sid_3_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  
  if (tvmgen_default_fused_nn_pad(sid_3_let, sid_4_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  *HANDSHAKE = 0xCF;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip(sid_4_let, sid_5_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_mean(sid_5_let, sid_6_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_subtract_fixed_point_multiply_add_clip_cast_reshape(sid_6_let, sid_7_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast(sid_7_let, sid_8_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast_1(sid_8_let, sid_9_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_subtract__fa059688879ad8de_(sid_9_let, sid_10_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_softmax_divide_round_add_clip_cast_subtract_cast_multiply(sid_10_let, StatefulPartitionedCall_1_buffer_var, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  
  eval(StatefulPartitionedCall_1_buffer_var);
  *HANDSHAKE= 0xC0;
  clock_gate_signal();
    
  // if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_1(sid_3_let, sid_12_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_2(sid_12_let, sid_13_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_pad_1(sid_12_let, sid_14_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_3(sid_14_let, sid_15_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_concatenate(sid_13_let, sid_15_let, sid_16_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_4(sid_16_let, sid_17_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_5(sid_17_let, sid_18_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_pad_1(sid_17_let, sid_19_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_6(sid_19_let, sid_20_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_concatenate(sid_18_let, sid_20_let, sid_21_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_max_pool2d_1(sid_21_let, sid_22_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  
  if (tvmgen_default_fused_nn_pad_2(sid_22_let, sid_23_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  *HANDSHAKE = 0xCF;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_7(sid_23_let, sid_24_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_pad_3(sid_24_let, sid_25_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_1(sid_25_let, sid_26_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_mean_1(sid_26_let, sid_27_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_subtract_fixed_point_multiply_add_clip_cast_reshape_1(sid_27_let, sid_28_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast_2(sid_28_let, sid_29_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast_3(sid_29_let, sid_30_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_subtract__fa059688879ad8de__1(sid_30_let, sid_31_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_softmax_divide_round_add_clip_cast_subtract_cast_multiply_1(sid_31_let, StatefulPartitionedCall_2_buffer_var, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  
  eval(StatefulPartitionedCall_2_buffer_var);
  *HANDSHAKE= 0xC0;
  clock_gate_signal();
  
  // if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_8(sid_22_let, sid_33_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_9(sid_33_let, sid_34_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_pad_4(sid_33_let, sid_35_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_10(sid_35_let, sid_36_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_concatenate_1(sid_34_let, sid_36_let, sid_37_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_11(sid_37_let, sid_38_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_12(sid_38_let, sid_39_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_pad_4(sid_38_let, sid_40_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_13(sid_40_let, sid_41_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_concatenate_1(sid_39_let, sid_41_let, sid_42_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_max_pool2d_2(sid_42_let, sid_43_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  
  if (tvmgen_default_fused_nn_pad_7(sid_43_let, sid_68_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  *HANDSHAKE = 0xCF;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_26(sid_68_let, sid_69_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_pad_8(sid_69_let, sid_70_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_2(sid_70_let, sid_71_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_mean_2(sid_71_let, sid_72_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_subtract_fixed_point_multiply_add_clip_cast_reshape_3(sid_72_let, sid_73_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast_4(sid_73_let, sid_74_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast_5(sid_74_let, sid_75_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_subtract__fa059688879ad8de__3(sid_75_let, sid_76_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_softmax_divide_round_add_clip_cast_subtract_cast_multiply_3(sid_76_let, StatefulPartitionedCall_3_buffer_var, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;

  eval(StatefulPartitionedCall_3_buffer_var);
  *HANDSHAKE= 0xC0;
  clock_gate_signal();
    
  // if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_14(sid_43_let, sid_44_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_15(sid_44_let, sid_45_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_pad_5(sid_44_let, sid_46_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_16(sid_46_let, sid_47_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_concatenate_2(sid_45_let, sid_47_let, sid_48_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_17(sid_48_let, sid_49_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_18(sid_49_let, sid_50_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_pad_5(sid_49_let, sid_51_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_19(sid_51_let, sid_52_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_concatenate_2(sid_50_let, sid_52_let, sid_53_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_20(sid_53_let, sid_54_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_21(sid_54_let, sid_55_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_pad_6(sid_54_let, sid_56_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_22(sid_56_let, sid_57_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_concatenate_3(sid_55_let, sid_57_let, sid_58_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_23(sid_58_let, sid_59_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_24(sid_59_let, sid_60_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_pad_6(sid_59_let, sid_61_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_25(sid_61_let, sid_62_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_concatenate_3(sid_60_let, sid_62_let, sid_63_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_cast_mean(sid_63_let, sid_64_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_subtract_fixed_point_multiply_add_clip_cast_reshape_2(sid_64_let, sid_65_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_subtract__fa059688879ad8de__2(sid_65_let, sid_66_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_softmax_divide_round_add_clip_cast_subtract_cast_multiply_2(sid_66_let, StatefulPartitionedCall_0_buffer_var, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  return 0;
}

