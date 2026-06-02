//#define DUMP_OUTPUTS
#define INCLUDE_ACCEL
#include "config.h"
#include "clock_ctrl.h"
#ifdef INCLUDE_ACCEL
#include "conv_accel_v8.h"
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
TVM_DLL int32_t tvmgen_default_fused_cast_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply__ad3cbdcd07b87e28_(int8_t* p0, int8_t* p1, int8_t* T_cast, uint8_t* global_const_workspace_132_var, uint8_t* global_workspace_133_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_cast_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply__ad3cbdcd07b87e28__1(int8_t* p0, int8_t* p1, int8_t* T_cast, uint8_t* global_const_workspace_156_var, uint8_t* global_workspace_157_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_cast_subtract_fixed_point_multiply_add_cast_subtract_fixed_point_multiply__ed64f25d07613c12_(int8_t* p0, int8_t* p1, int8_t* T_cast, uint8_t* global_const_workspace_88_var, uint8_t* global_workspace_89_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point__7462b0c1d1f4a4f5_(int8_t* p0, int8_t* p1, int8_t* T_cast, uint8_t* global_const_workspace_44_var, uint8_t* global_workspace_45_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point__7462b0c1d1f4a4f5__1(int8_t* p0, int8_t* p1, int8_t* T_cast, uint8_t* global_const_workspace_60_var, uint8_t* global_workspace_61_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point__7462b0c1d1f4a4f5__2(int8_t* p0, int8_t* p1, int8_t* T_cast, uint8_t* global_const_workspace_104_var, uint8_t* global_workspace_105_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point__7462b0c1d1f4a4f5__3(int8_t* p0, int8_t* p1, int8_t* T_cast, uint8_t* global_const_workspace_110_var, uint8_t* global_workspace_111_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point__7462b0c1d1f4a4f5__4(int8_t* p0, int8_t* p1, int8_t* T_cast, uint8_t* global_const_workspace_116_var, uint8_t* global_workspace_117_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point__7462b0c1d1f4a4f5__5(int8_t* p0, int8_t* p1, int8_t* T_cast, uint8_t* global_const_workspace_140_var, uint8_t* global_workspace_141_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point__7462b0c1d1f4a4f5__6(int8_t* p0, int8_t* p1, int8_t* T_cast, uint8_t* global_const_workspace_162_var, uint8_t* global_workspace_163_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_cast_subtract_multiply_fixed_point_multiply_add_clip_subtract_fixed_point__36a61d5bdc05d04a_(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_136_var, uint8_t* global_workspace_137_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_cast_subtract_multiply_fixed_point_multiply_add_clip_subtract_fixed_point__feae580412b1470c_(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_36_var, uint8_t* global_workspace_37_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_divide_round_add_clip_cast_nn_pad(float* p0, int8_t* T_pad, uint8_t* global_const_workspace_2_var, uint8_t* global_workspace_3_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_mean(int32_t* p0, int32_t* T_divide, uint8_t* global_const_workspace_24_var, uint8_t* global_workspace_25_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_mean_1(int32_t* p0, int32_t* T_divide, uint8_t* global_const_workspace_76_var, uint8_t* global_workspace_77_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_mean_2(int32_t* p0, int32_t* T_divide, uint8_t* global_const_workspace_174_var, uint8_t* global_workspace_175_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_mean_3(int32_t* p0, int32_t* T_divide, uint8_t* global_const_workspace_190_var, uint8_t* global_workspace_191_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_28_var, uint8_t* global_workspace_29_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast_1(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_30_var, uint8_t* global_workspace_31_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast_2(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_80_var, uint8_t* global_workspace_81_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast_3(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_82_var, uint8_t* global_workspace_83_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast_4(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_194_var, uint8_t* global_workspace_195_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast_5(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_196_var, uint8_t* global_workspace_197_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_subtract__fa059688879ad8de_(int8_t* p0, float* T_multiply, uint8_t* global_const_workspace_32_var, uint8_t* global_workspace_33_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_subtract__fa059688879ad8de__1(int8_t* p0, float* T_multiply, uint8_t* global_const_workspace_84_var, uint8_t* global_workspace_85_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_subtract__fa059688879ad8de__2(int8_t* p0, float* T_multiply, uint8_t* global_const_workspace_178_var, uint8_t* global_workspace_179_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_subtract__fa059688879ad8de__3(int8_t* p0, float* T_multiply, uint8_t* global_const_workspace_198_var, uint8_t* global_workspace_199_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_126_var, uint8_t* global_workspace_127_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_1(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_150_var, uint8_t* global_workspace_151_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip(int8_t* p0, int32_t* compute, uint8_t* global_const_workspace_22_var, uint8_t* global_workspace_23_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_1(int8_t* p0, int32_t* compute, uint8_t* global_const_workspace_74_var, uint8_t* global_workspace_75_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_2(int8_t* p0, int32_t* compute, uint8_t* global_const_workspace_172_var, uint8_t* global_workspace_173_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_3(int8_t* p0, int32_t* compute, uint8_t* global_const_workspace_188_var, uint8_t* global_workspace_189_var);
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
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_10(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_52_var, uint8_t* global_workspace_53_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_11(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_54_var, uint8_t* global_workspace_55_var);
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
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_16(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_70_var, uint8_t* global_workspace_71_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_17(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_90_var, uint8_t* global_workspace_91_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_18(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_94_var, uint8_t* global_workspace_95_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_19(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_96_var, uint8_t* global_workspace_97_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_2(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_10_var, uint8_t* global_workspace_11_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_20(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_98_var, uint8_t* global_workspace_99_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_21(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_102_var, uint8_t* global_workspace_103_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_22(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_106_var, uint8_t* global_workspace_107_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_23(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_108_var, uint8_t* global_workspace_109_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_24(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_112_var, uint8_t* global_workspace_113_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_25(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_114_var, uint8_t* global_workspace_115_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_26(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_118_var, uint8_t* global_workspace_119_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_27(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_122_var, uint8_t* global_workspace_123_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_28(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_130_var, uint8_t* global_workspace_131_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_29(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_134_var, uint8_t* global_workspace_135_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_3(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_12_var, uint8_t* global_workspace_13_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_30(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_138_var, uint8_t* global_workspace_139_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_31(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_142_var, uint8_t* global_workspace_143_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_32(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_146_var, uint8_t* global_workspace_147_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_33(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_154_var, uint8_t* global_workspace_155_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_34(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_158_var, uint8_t* global_workspace_159_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_35(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_160_var, uint8_t* global_workspace_161_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_36(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_164_var, uint8_t* global_workspace_165_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_37(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_168_var, uint8_t* global_workspace_169_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_38(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_170_var, uint8_t* global_workspace_171_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_39(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_184_var, uint8_t* global_workspace_185_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_4(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_16_var, uint8_t* global_workspace_17_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_5(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_18_var, uint8_t* global_workspace_19_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_6(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_38_var, uint8_t* global_workspace_39_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_7(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_42_var, uint8_t* global_workspace_43_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_8(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_46_var, uint8_t* global_workspace_47_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_9(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_50_var, uint8_t* global_workspace_51_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_clip_cast(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_124_var, uint8_t* global_workspace_125_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_clip_cast_1(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_148_var, uint8_t* global_workspace_149_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_6_var, uint8_t* global_workspace_7_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_1(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_14_var, uint8_t* global_workspace_15_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_10(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_120_var, uint8_t* global_workspace_121_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_11(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_128_var, uint8_t* global_workspace_129_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_12(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_144_var, uint8_t* global_workspace_145_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_13(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_152_var, uint8_t* global_workspace_153_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_14(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_166_var, uint8_t* global_workspace_167_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_15(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_182_var, uint8_t* global_workspace_183_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_16(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_186_var, uint8_t* global_workspace_187_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_2(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_20_var, uint8_t* global_workspace_21_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_3(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_40_var, uint8_t* global_workspace_41_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_4(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_48_var, uint8_t* global_workspace_49_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_5(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_56_var, uint8_t* global_workspace_57_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_6(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_68_var, uint8_t* global_workspace_69_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_7(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_72_var, uint8_t* global_workspace_73_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_8(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_92_var, uint8_t* global_workspace_93_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_9(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_100_var, uint8_t* global_workspace_101_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_softmax_divide_round_add_clip_cast_subtract_cast_multiply(float* p0, float* T_multiply, uint8_t* global_const_workspace_34_var, uint8_t* global_workspace_35_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_softmax_divide_round_add_clip_cast_subtract_cast_multiply_1(float* p0, float* T_multiply, uint8_t* global_const_workspace_86_var, uint8_t* global_workspace_87_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_softmax_divide_round_add_clip_cast_subtract_cast_multiply_2(float* p0, float* T_multiply, uint8_t* global_const_workspace_180_var, uint8_t* global_workspace_181_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_softmax_divide_round_add_clip_cast_subtract_cast_multiply_3(float* p0, float* T_multiply, uint8_t* global_const_workspace_200_var, uint8_t* global_workspace_201_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_add_clip_cast_reshape(int32_t* p0, int8_t* T_reshape, uint8_t* global_const_workspace_176_var, uint8_t* global_workspace_177_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_fixed_point_multiply_add_clip_cast_reshape(int32_t* p0, int8_t* T_reshape, uint8_t* global_const_workspace_26_var, uint8_t* global_workspace_27_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_fixed_point_multiply_add_clip_cast_reshape_1(int32_t* p0, int8_t* T_reshape, uint8_t* global_const_workspace_78_var, uint8_t* global_workspace_79_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_fixed_point_multiply_add_clip_cast_reshape_2(int32_t* p0, int8_t* T_reshape, uint8_t* global_const_workspace_192_var, uint8_t* global_workspace_193_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default___tvm_main__(float* serving_default_input_86_0_buffer_var, float* StatefulPartitionedCall_1_buffer_var, float* StatefulPartitionedCall_2_buffer_var, float* StatefulPartitionedCall_0_buffer_var, float* StatefulPartitionedCall_3_buffer_var, uint8_t* global_const_workspace_0_var, uint8_t* global_workspace_1_var);
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
TVM_DLL int32_t tvmgen_default_fused_cast_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply__ad3cbdcd07b87e28_(int8_t* p0, int8_t* p1, int8_t* T_cast, uint8_t* global_const_workspace_132_var, uint8_t* global_workspace_133_var) {
  void* fused_cast_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_let = (&(global_const_workspace_132_var[649040]));
  void* fused_cast_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_2_let = (&(global_const_workspace_132_var[643200]));
  void* fused_cast_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_1_let = (&(global_const_workspace_132_var[643328]));
  void* fused_cast_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_let = (&(global_const_workspace_132_var[643456]));
  void* fused_cast_fixed_point_multiply_add_nn_conv2d_constant_let = (&(global_const_workspace_132_var[643584]));
  void* fused_cast_fixed_point_multiply_add_nn_conv2d_subtract_constant_let = (&(global_const_workspace_132_var[643072]));
  void* fused_cast_fixed_point_multiply_add_constant_let = (&(global_const_workspace_132_var[403072]));
  void* pad_temp_let = (&(global_workspace_133_var[0]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 4; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 4; ++i2) {
      for (int32_t i3 = 0; i3 < 192; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 768) + (i2 * 192)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p1[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 16; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_133_var[36352]));
    for (int32_t ax3 = 0; ax3 < 32; ++ax3) {
      int32_t cse_var_2 = ((ax0_ax1_fused_ax2_fused * 32) + ax3);
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 192; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 192) + rc)]) * ((int32_t)((int8_t*)fused_cast_fixed_point_multiply_add_constant_let)[((rc * 32) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_cast_fixed_point_multiply_add_nn_conv2d_subtract_constant_let)[ax3]) - ((int32_t*)fused_cast_fixed_point_multiply_add_nn_conv2d_constant_let)[ax3])) * ((int64_t)((int32_t*)fused_cast_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_cast_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_2_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_cast_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_2_let)[ax3] + 31)))) - 6;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      int32_t v__2 = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_cast_fixed_point_multiply_add_nn_conv2d_subtract_constant_let)[ax3]) - ((int32_t*)fused_cast_fixed_point_multiply_add_nn_conv2d_constant_let)[ax3])) * ((int64_t)((int32_t*)fused_cast_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_cast_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_2_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_cast_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_2_let)[ax3] + 31)))) - 6;
      int32_t v__3 = (v__2) < (127) ? (v__2) : (127);
      int32_t v__4 = (((int32_t)(((((0 != 0) ? (((int64_t)((int32_t)p0[cse_var_2])) << ((int64_t)0)) : ((int64_t)((int32_t)p0[cse_var_2]))) * (int64_t)1946967807) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31)))) + ((int32_t)(((((0 != 0) ? (((int64_t)(((v__1) > (-128) ? (v__1) : (-128)) - ((int32_t*)fused_cast_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_let)[0])) << ((int64_t)0)) : ((int64_t)(((v__3) > (-128) ? (v__3) : (-128)) - ((int32_t*)fused_cast_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_let)[0]))) * (int64_t)1463629863) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31))))) - 1;
      int32_t v__5 = (v__4) < (127) ? (v__4) : (127);
      T_cast[cse_var_2] = ((int8_t)((v__5) > (-128) ? (v__5) : (-128)));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_cast_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply__ad3cbdcd07b87e28__1(int8_t* p0, int8_t* p1, int8_t* T_cast, uint8_t* global_const_workspace_156_var, uint8_t* global_workspace_157_var) {
  void* fused_cast_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_1_let = (&(global_const_workspace_156_var[649024]));
  void* fused_cast_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_5_let = (&(global_const_workspace_156_var[632944]));
  void* fused_cast_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_4_let = (&(global_const_workspace_156_var[633168]));
  void* fused_cast_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_3_let = (&(global_const_workspace_156_var[633392]));
  void* fused_cast_fixed_point_multiply_add_nn_conv2d_constant_1_let = (&(global_const_workspace_156_var[633616]));
  void* fused_cast_fixed_point_multiply_add_nn_conv2d_subtract_constant_1_let = (&(global_const_workspace_156_var[632720]));
  void* fused_cast_fixed_point_multiply_add_constant_1_let = (&(global_const_workspace_156_var[311552]));
  void* pad_temp_let = (&(global_workspace_157_var[29184]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 2; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 2; ++i2) {
      for (int32_t i3 = 0; i3 < 336; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 672) + (i2 * 336)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p1[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 4; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_157_var[32320]));
    for (int32_t ax3 = 0; ax3 < 56; ++ax3) {
      int32_t cse_var_2 = ((ax0_ax1_fused_ax2_fused * 56) + ax3);
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 336; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 336) + rc)]) * ((int32_t)((int8_t*)fused_cast_fixed_point_multiply_add_constant_1_let)[((rc * 56) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_cast_fixed_point_multiply_add_nn_conv2d_subtract_constant_1_let)[ax3]) - ((int32_t*)fused_cast_fixed_point_multiply_add_nn_conv2d_constant_1_let)[ax3])) * ((int64_t)((int32_t*)fused_cast_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_3_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_cast_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_5_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_cast_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_5_let)[ax3] + 31)))) + 1;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      int32_t v__2 = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_cast_fixed_point_multiply_add_nn_conv2d_subtract_constant_1_let)[ax3]) - ((int32_t*)fused_cast_fixed_point_multiply_add_nn_conv2d_constant_1_let)[ax3])) * ((int64_t)((int32_t*)fused_cast_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_3_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_cast_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_5_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_cast_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_5_let)[ax3] + 31)))) + 1;
      int32_t v__3 = (v__2) < (127) ? (v__2) : (127);
      int32_t v__4 = (((int32_t)(((((0 != 0) ? (((int64_t)((int32_t)p0[cse_var_2])) << ((int64_t)0)) : ((int64_t)((int32_t)p0[cse_var_2]))) * (int64_t)1825012960) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31)))) + ((int32_t)(((((0 != 0) ? (((int64_t)(((v__1) > (-128) ? (v__1) : (-128)) - ((int32_t*)fused_cast_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_1_let)[0])) << ((int64_t)0)) : ((int64_t)(((v__3) > (-128) ? (v__3) : (-128)) - ((int32_t*)fused_cast_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_1_let)[0]))) * (int64_t)1762732018) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31))))) - 3;
      int32_t v__5 = (v__4) < (127) ? (v__4) : (127);
      T_cast[cse_var_2] = ((int8_t)((v__5) > (-128) ? (v__5) : (-128)));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_cast_subtract_fixed_point_multiply_add_cast_subtract_fixed_point_multiply__ed64f25d07613c12_(int8_t* p0, int8_t* p1, int8_t* T_cast, uint8_t* global_const_workspace_88_var, uint8_t* global_workspace_89_var) {
  void* fused_cast_subtract_fixed_point_multiply_add_cast_constant_let = (&(global_const_workspace_88_var[649008]));
  void* fused_cast_constant_2_let = (&(global_const_workspace_88_var[649136]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 8; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 8; ++ax2) {
      for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
        int32_t cse_var_1 = (((ax0_ax1_fused * 128) + (ax2 * 16)) + ax3_inner);
        int32_t v_ = (((int32_t)(((((0 != 0) ? (((int64_t)(((int32_t)p0[cse_var_1]) - ((int32_t*)fused_cast_constant_2_let)[0])) << ((int64_t)0)) : ((int64_t)(((int32_t)p0[cse_var_1]) - ((int32_t*)fused_cast_constant_2_let)[0]))) * (int64_t)1926558265) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31)))) + ((int32_t)(((((0 != 0) ? (((int64_t)(((int32_t)p1[cse_var_1]) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_cast_constant_let)[0])) << ((int64_t)0)) : ((int64_t)(((int32_t)p1[cse_var_1]) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_cast_constant_let)[0]))) * (int64_t)1573993989) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31))))) - 8;
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        T_cast[cse_var_1] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point__7462b0c1d1f4a4f5_(int8_t* p0, int8_t* p1, int8_t* T_cast, uint8_t* global_const_workspace_44_var, uint8_t* global_workspace_45_var) {
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_let = (&(global_const_workspace_44_var[648992]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_2_let = (&(global_const_workspace_44_var[648640]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_1_let = (&(global_const_workspace_44_var[648672]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_let = (&(global_const_workspace_44_var[648704]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_constant_let = (&(global_const_workspace_44_var[648736]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_constant_let = (&(global_const_workspace_44_var[648608]));
  void* fused_cast_constant_let = (&(global_const_workspace_44_var[649168]));
  void* fused_cast_subtract_fixed_point_multiply_add_constant_let = (&(global_const_workspace_44_var[628560]));
  void* pad_temp_let = (&(global_workspace_45_var[0]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 16; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 16; ++i2) {
      for (int32_t i3 = 0; i3 < 48; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 768) + (i2 * 48)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p1[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 256; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_45_var[68800]));
    for (int32_t ax3 = 0; ax3 < 8; ++ax3) {
      int32_t cse_var_2 = ((ax0_ax1_fused_ax2_fused * 8) + ax3);
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 48; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 48) + rc)]) * ((int32_t)((int8_t*)fused_cast_subtract_fixed_point_multiply_add_constant_let)[((rc * 8) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_constant_let)[ax3]) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_constant_let)[ax3])) * ((int64_t)((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_2_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_2_let)[ax3] + 31)))) - 4;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      int32_t v__2 = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_constant_let)[ax3]) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_constant_let)[ax3])) * ((int64_t)((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_2_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_2_let)[ax3] + 31)))) - 4;
      int32_t v__3 = (v__2) < (127) ? (v__2) : (127);
      int32_t v__4 = (((int32_t)(((((0 != 0) ? (((int64_t)(((int32_t)p0[cse_var_2]) - ((int32_t*)fused_cast_constant_let)[0])) << ((int64_t)0)) : ((int64_t)(((int32_t)p0[cse_var_2]) - ((int32_t*)fused_cast_constant_let)[0]))) * (int64_t)1511662091) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31)))) + ((int32_t)(((((0 != 0) ? (((int64_t)(((v__1) > (-128) ? (v__1) : (-128)) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_let)[0])) << ((int64_t)0)) : ((int64_t)(((v__3) > (-128) ? (v__3) : (-128)) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_let)[0]))) * (int64_t)1880779500) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31))))) - 9;
      int32_t v__5 = (v__4) < (127) ? (v__4) : (127);
      T_cast[cse_var_2] = ((int8_t)((v__5) > (-128) ? (v__5) : (-128)));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point__7462b0c1d1f4a4f5__1(int8_t* p0, int8_t* p1, int8_t* T_cast, uint8_t* global_const_workspace_60_var, uint8_t* global_workspace_61_var) {
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_1_let = (&(global_const_workspace_60_var[648976]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_5_let = (&(global_const_workspace_60_var[647616]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_4_let = (&(global_const_workspace_60_var[647680]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_3_let = (&(global_const_workspace_60_var[647744]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_constant_1_let = (&(global_const_workspace_60_var[647808]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_constant_1_let = (&(global_const_workspace_60_var[647552]));
  void* fused_cast_constant_1_let = (&(global_const_workspace_60_var[649152]));
  void* fused_cast_subtract_fixed_point_multiply_add_constant_1_let = (&(global_const_workspace_60_var[510640]));
  void* pad_temp_let = (&(global_workspace_61_var[0]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 8; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 8; ++i2) {
      for (int32_t i3 = 0; i3 < 96; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 768) + (i2 * 96)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p1[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 64; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_61_var[36224]));
    for (int32_t ax3 = 0; ax3 < 16; ++ax3) {
      int32_t cse_var_2 = ((ax0_ax1_fused_ax2_fused * 16) + ax3);
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 96; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 96) + rc)]) * ((int32_t)((int8_t*)fused_cast_subtract_fixed_point_multiply_add_constant_1_let)[((rc * 16) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_constant_1_let)[ax3]) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_constant_1_let)[ax3])) * ((int64_t)((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_3_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_5_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_5_let)[ax3] + 31)))) + 6;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      int32_t v__2 = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_constant_1_let)[ax3]) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_constant_1_let)[ax3])) * ((int64_t)((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_3_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_5_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_5_let)[ax3] + 31)))) + 6;
      int32_t v__3 = (v__2) < (127) ? (v__2) : (127);
      int32_t v__4 = (((int32_t)(((((0 != 0) ? (((int64_t)(((int32_t)p0[cse_var_2]) - ((int32_t*)fused_cast_constant_1_let)[0])) << ((int64_t)0)) : ((int64_t)(((int32_t)p0[cse_var_2]) - ((int32_t*)fused_cast_constant_1_let)[0]))) * (int64_t)1492918528) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31)))) + ((int32_t)(((((0 != 0) ? (((int64_t)(((v__1) > (-128) ? (v__1) : (-128)) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_1_let)[0])) << ((int64_t)0)) : ((int64_t)(((v__3) > (-128) ? (v__3) : (-128)) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_1_let)[0]))) * (int64_t)1763861809) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31))))) + 9;
      int32_t v__5 = (v__4) < (127) ? (v__4) : (127);
      T_cast[cse_var_2] = ((int8_t)((v__5) > (-128) ? (v__5) : (-128)));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point__7462b0c1d1f4a4f5__2(int8_t* p0, int8_t* p1, int8_t* T_cast, uint8_t* global_const_workspace_104_var, uint8_t* global_workspace_105_var) {
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_2_let = (&(global_const_workspace_104_var[648960]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_8_let = (&(global_const_workspace_104_var[644576]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_7_let = (&(global_const_workspace_104_var[644672]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_6_let = (&(global_const_workspace_104_var[644768]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_constant_2_let = (&(global_const_workspace_104_var[645536]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_constant_2_let = (&(global_const_workspace_104_var[644384]));
  void* fused_cast_constant_3_let = (&(global_const_workspace_104_var[649120]));
  void* fused_cast_subtract_fixed_point_multiply_add_constant_2_let = (&(global_const_workspace_104_var[478080]));
  void* pad_temp_let = (&(global_workspace_105_var[0]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 4; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 4; ++i2) {
      for (int32_t i3 = 0; i3 < 144; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 576) + (i2 * 144)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p1[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 16; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_105_var[15552]));
    for (int32_t ax3 = 0; ax3 < 24; ++ax3) {
      int32_t cse_var_2 = ((ax0_ax1_fused_ax2_fused * 24) + ax3);
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 144; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 144) + rc)]) * ((int32_t)((int8_t*)fused_cast_subtract_fixed_point_multiply_add_constant_2_let)[((rc * 24) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_constant_2_let)[ax3]) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_constant_2_let)[ax3])) * ((int64_t)((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_6_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_8_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_8_let)[ax3] + 31)))) + 6;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      int32_t v__2 = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_constant_2_let)[ax3]) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_constant_2_let)[ax3])) * ((int64_t)((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_6_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_8_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_8_let)[ax3] + 31)))) + 6;
      int32_t v__3 = (v__2) < (127) ? (v__2) : (127);
      int32_t v__4 = (((int32_t)(((((0 != 0) ? (((int64_t)(((int32_t)p0[cse_var_2]) - ((int32_t*)fused_cast_constant_3_let)[0])) << ((int64_t)0)) : ((int64_t)(((int32_t)p0[cse_var_2]) - ((int32_t*)fused_cast_constant_3_let)[0]))) * (int64_t)2088858529) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31)))) + ((int32_t)(((((0 != 0) ? (((int64_t)(((v__1) > (-128) ? (v__1) : (-128)) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_2_let)[0])) << ((int64_t)0)) : ((int64_t)(((v__3) > (-128) ? (v__3) : (-128)) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_2_let)[0]))) * (int64_t)1999302979) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31))))) + 12;
      int32_t v__5 = (v__4) < (127) ? (v__4) : (127);
      T_cast[cse_var_2] = ((int8_t)((v__5) > (-128) ? (v__5) : (-128)));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point__7462b0c1d1f4a4f5__3(int8_t* p0, int8_t* p1, int8_t* T_cast, uint8_t* global_const_workspace_110_var, uint8_t* global_workspace_111_var) {
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_3_let = (&(global_const_workspace_110_var[648944]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_11_let = (&(global_const_workspace_110_var[645152]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_10_let = (&(global_const_workspace_110_var[645248]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_9_let = (&(global_const_workspace_110_var[644480]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_constant_3_let = (&(global_const_workspace_110_var[645440]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_constant_3_let = (&(global_const_workspace_110_var[644288]));
  void* fused_cast_constant_4_let = (&(global_const_workspace_110_var[649104]));
  void* fused_cast_subtract_fixed_point_multiply_add_constant_3_let = (&(global_const_workspace_110_var[474624]));
  void* pad_temp_let = (&(global_workspace_111_var[0]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 4; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 4; ++i2) {
      for (int32_t i3 = 0; i3 < 144; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 576) + (i2 * 144)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p1[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 16; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_111_var[15168]));
    for (int32_t ax3 = 0; ax3 < 24; ++ax3) {
      int32_t cse_var_2 = ((ax0_ax1_fused_ax2_fused * 24) + ax3);
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 144; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 144) + rc)]) * ((int32_t)((int8_t*)fused_cast_subtract_fixed_point_multiply_add_constant_3_let)[((rc * 24) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_constant_3_let)[ax3]) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_constant_3_let)[ax3])) * ((int64_t)((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_9_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_11_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_11_let)[ax3] + 31)))) - 2;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      int32_t v__2 = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_constant_3_let)[ax3]) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_constant_3_let)[ax3])) * ((int64_t)((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_9_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_11_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_11_let)[ax3] + 31)))) - 2;
      int32_t v__3 = (v__2) < (127) ? (v__2) : (127);
      int32_t v__4 = (((int32_t)(((((0 != 0) ? (((int64_t)(((int32_t)p0[cse_var_2]) - ((int32_t*)fused_cast_constant_4_let)[0])) << ((int64_t)0)) : ((int64_t)(((int32_t)p0[cse_var_2]) - ((int32_t*)fused_cast_constant_4_let)[0]))) * (int64_t)1783875561) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31)))) + ((int32_t)(((((0 != 0) ? (((int64_t)(((v__1) > (-128) ? (v__1) : (-128)) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_3_let)[0])) << ((int64_t)0)) : ((int64_t)(((v__3) > (-128) ? (v__3) : (-128)) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_3_let)[0]))) * (int64_t)1369115677) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31))))) + 12;
      int32_t v__5 = (v__4) < (127) ? (v__4) : (127);
      T_cast[cse_var_2] = ((int8_t)((v__5) > (-128) ? (v__5) : (-128)));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point__7462b0c1d1f4a4f5__4(int8_t* p0, int8_t* p1, int8_t* T_cast, uint8_t* global_const_workspace_116_var, uint8_t* global_workspace_117_var) {
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_4_let = (&(global_const_workspace_116_var[648928]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_14_let = (&(global_const_workspace_116_var[644864]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_13_let = (&(global_const_workspace_116_var[644960]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_12_let = (&(global_const_workspace_116_var[645056]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_constant_4_let = (&(global_const_workspace_116_var[645344]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_constant_4_let = (&(global_const_workspace_116_var[644192]));
  void* fused_cast_constant_5_let = (&(global_const_workspace_116_var[649088]));
  void* fused_cast_subtract_fixed_point_multiply_add_constant_4_let = (&(global_const_workspace_116_var[471168]));
  void* pad_temp_let = (&(global_workspace_117_var[0]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 4; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 4; ++i2) {
      for (int32_t i3 = 0; i3 < 144; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 576) + (i2 * 144)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p1[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 16; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_117_var[15168]));
    for (int32_t ax3 = 0; ax3 < 24; ++ax3) {
      int32_t cse_var_2 = ((ax0_ax1_fused_ax2_fused * 24) + ax3);
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 144; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 144) + rc)]) * ((int32_t)((int8_t*)fused_cast_subtract_fixed_point_multiply_add_constant_4_let)[((rc * 24) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_constant_4_let)[ax3]) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_constant_4_let)[ax3])) * ((int64_t)((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_12_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_14_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_14_let)[ax3] + 31)))) - 27;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      int32_t v__2 = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_constant_4_let)[ax3]) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_constant_4_let)[ax3])) * ((int64_t)((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_12_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_14_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_14_let)[ax3] + 31)))) - 27;
      int32_t v__3 = (v__2) < (127) ? (v__2) : (127);
      int32_t v__4 = (((int32_t)(((((0 != 0) ? (((int64_t)(((int32_t)p0[cse_var_2]) - ((int32_t*)fused_cast_constant_5_let)[0])) << ((int64_t)0)) : ((int64_t)(((int32_t)p0[cse_var_2]) - ((int32_t*)fused_cast_constant_5_let)[0]))) * (int64_t)1878100324) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31)))) + ((int32_t)(((((0 != 0) ? (((int64_t)(((v__1) > (-128) ? (v__1) : (-128)) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_4_let)[0])) << ((int64_t)0)) : ((int64_t)(((v__3) > (-128) ? (v__3) : (-128)) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_4_let)[0]))) * (int64_t)1143662219) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31))))) - 8;
      int32_t v__5 = (v__4) < (127) ? (v__4) : (127);
      T_cast[cse_var_2] = ((int8_t)((v__5) > (-128) ? (v__5) : (-128)));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point__7462b0c1d1f4a4f5__5(int8_t* p0, int8_t* p1, int8_t* T_cast, uint8_t* global_const_workspace_140_var, uint8_t* global_workspace_141_var) {
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_5_let = (&(global_const_workspace_140_var[648912]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_17_let = (&(global_const_workspace_140_var[642560]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_16_let = (&(global_const_workspace_140_var[642688]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_15_let = (&(global_const_workspace_140_var[642816]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_constant_5_let = (&(global_const_workspace_140_var[642944]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_constant_5_let = (&(global_const_workspace_140_var[642432]));
  void* fused_cast_constant_6_let = (&(global_const_workspace_140_var[649072]));
  void* fused_cast_subtract_fixed_point_multiply_add_constant_5_let = (&(global_const_workspace_140_var[396928]));
  void* pad_temp_let = (&(global_workspace_141_var[29184]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 4; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 4; ++i2) {
      for (int32_t i3 = 0; i3 < 192; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 768) + (i2 * 192)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p1[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 16; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_141_var[36352]));
    for (int32_t ax3 = 0; ax3 < 32; ++ax3) {
      int32_t cse_var_2 = ((ax0_ax1_fused_ax2_fused * 32) + ax3);
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 192; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 192) + rc)]) * ((int32_t)((int8_t*)fused_cast_subtract_fixed_point_multiply_add_constant_5_let)[((rc * 32) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_constant_5_let)[ax3]) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_constant_5_let)[ax3])) * ((int64_t)((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_15_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_17_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_17_let)[ax3] + 31)))) + 16;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      int32_t v__2 = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_constant_5_let)[ax3]) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_constant_5_let)[ax3])) * ((int64_t)((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_15_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_17_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_17_let)[ax3] + 31)))) + 16;
      int32_t v__3 = (v__2) < (127) ? (v__2) : (127);
      int32_t v__4 = (((int32_t)(((((0 != 0) ? (((int64_t)(((int32_t)p0[cse_var_2]) - ((int32_t*)fused_cast_constant_6_let)[0])) << ((int64_t)0)) : ((int64_t)(((int32_t)p0[cse_var_2]) - ((int32_t*)fused_cast_constant_6_let)[0]))) * (int64_t)1445484210) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31)))) + ((int32_t)(((((0 != 0) ? (((int64_t)(((v__1) > (-128) ? (v__1) : (-128)) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_5_let)[0])) << ((int64_t)0)) : ((int64_t)(((v__3) > (-128) ? (v__3) : (-128)) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_5_let)[0]))) * (int64_t)1730971945) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31))))) + 18;
      int32_t v__5 = (v__4) < (127) ? (v__4) : (127);
      T_cast[cse_var_2] = ((int8_t)((v__5) > (-128) ? (v__5) : (-128)));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point__7462b0c1d1f4a4f5__6(int8_t* p0, int8_t* p1, int8_t* T_cast, uint8_t* global_const_workspace_162_var, uint8_t* global_workspace_163_var) {
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_6_let = (&(global_const_workspace_162_var[648896]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_20_let = (&(global_const_workspace_162_var[631824]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_19_let = (&(global_const_workspace_162_var[632048]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_18_let = (&(global_const_workspace_162_var[632272]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_constant_6_let = (&(global_const_workspace_162_var[632496]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_constant_6_let = (&(global_const_workspace_162_var[631600]));
  void* fused_cast_constant_7_let = (&(global_const_workspace_162_var[649056]));
  void* fused_cast_subtract_fixed_point_multiply_add_constant_6_let = (&(global_const_workspace_162_var[292736]));
  void* pad_temp_let = (&(global_workspace_163_var[29184]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 2; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 2; ++i2) {
      for (int32_t i3 = 0; i3 < 336; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 672) + (i2 * 336)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p1[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 4; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_163_var[32320]));
    for (int32_t ax3 = 0; ax3 < 56; ++ax3) {
      int32_t cse_var_2 = ((ax0_ax1_fused_ax2_fused * 56) + ax3);
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 336; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 336) + rc)]) * ((int32_t)((int8_t*)fused_cast_subtract_fixed_point_multiply_add_constant_6_let)[((rc * 56) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_constant_6_let)[ax3]) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_constant_6_let)[ax3])) * ((int64_t)((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_18_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_20_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_20_let)[ax3] + 31)))) + 9;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      int32_t v__2 = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_constant_6_let)[ax3]) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_constant_6_let)[ax3])) * ((int64_t)((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_18_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_20_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_20_let)[ax3] + 31)))) + 9;
      int32_t v__3 = (v__2) < (127) ? (v__2) : (127);
      int32_t v__4 = (((int32_t)(((((0 != 0) ? (((int64_t)(((int32_t)p0[cse_var_2]) - ((int32_t*)fused_cast_constant_7_let)[0])) << ((int64_t)0)) : ((int64_t)(((int32_t)p0[cse_var_2]) - ((int32_t*)fused_cast_constant_7_let)[0]))) * (int64_t)1815119664) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31)))) + ((int32_t)(((((0 != 0) ? (((int64_t)(((v__1) > (-128) ? (v__1) : (-128)) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_6_let)[0])) << ((int64_t)0)) : ((int64_t)(((v__3) > (-128) ? (v__3) : (-128)) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_6_let)[0]))) * (int64_t)1808148955) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31))))) + 2;
      int32_t v__5 = (v__4) < (127) ? (v__4) : (127);
      T_cast[cse_var_2] = ((int8_t)((v__5) > (-128) ? (v__5) : (-128)));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_cast_subtract_multiply_fixed_point_multiply_add_clip_subtract_fixed_point__36a61d5bdc05d04a_(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_136_var, uint8_t* global_workspace_137_var) {
  void* fused_cast_subtract_multiply_fixed_point_multiply_add_clip_subtract_fixed_point_multiply_constant_1_let = (&(global_const_workspace_136_var[581968]));
  void* fused_cast_subtract_multiply_fixed_point_multiply_add_clip_constant_1_let = (&(global_const_workspace_136_var[648864]));
  void* fused_cast_subtract_constant_1_let = (&(global_const_workspace_136_var[582736]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 6; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 6; ++ax2) {
      for (int32_t ax3_outer = 0; ax3_outer < 12; ++ax3_outer) {
        for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
          int32_t cse_var_3 = (ax2 * 192);
          int32_t cse_var_2 = (ax3_outer * 16);
          int32_t cse_var_1 = (cse_var_2 + ax3_inner);
          int32_t v_ = ((int32_t)(((((0 != 0) ? (((int64_t)((((int32_t)p0[(((((ax0_ax1_fused * 768) + cse_var_3) + cse_var_2) + ax3_inner) - 960)]) - 3) * ((int32_t*)fused_cast_subtract_constant_1_let)[cse_var_1])) << ((int64_t)0)) : ((int64_t)((((int32_t)p0[(((((ax0_ax1_fused * 768) + cse_var_3) + cse_var_2) + ax3_inner) - 960)]) - 3) * ((int32_t*)fused_cast_subtract_constant_1_let)[cse_var_1]))) * (int64_t)1460364599) + ((int64_t)1 << ((int64_t)((7 + 31) - 1)))) >> ((int64_t)(7 + 31)))) - 25;
          int32_t v__1 = (v_) < (127) ? (v_) : (127);
          int32_t v__2 = (((int32_t)(((((3 != 0) ? (((int64_t)(((v__1) > (-128) ? (v__1) : (-128)) - ((int32_t*)fused_cast_subtract_multiply_fixed_point_multiply_add_clip_constant_1_let)[0])) << ((int64_t)3)) : ((int64_t)(((v__1) > (-128) ? (v__1) : (-128)) - ((int32_t*)fused_cast_subtract_multiply_fixed_point_multiply_add_clip_constant_1_let)[0]))) * (int64_t)1392635638) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31)))) + ((int32_t*)fused_cast_subtract_multiply_fixed_point_multiply_add_clip_subtract_fixed_point_multiply_constant_1_let)[cse_var_1]) + 128;
          int32_t v__3 = (v__2) < (127) ? (v__2) : (127);
          T_pad[((((ax0_ax1_fused * 1152) + cse_var_3) + cse_var_2) + ax3_inner)] = (((((1 <= ax0_ax1_fused) && (ax0_ax1_fused < 5)) && (1 <= ax2)) && (ax2 < 5)) ? ((int8_t)((v__3) > (-128) ? (v__3) : (-128))) : (int8_t)-128);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_cast_subtract_multiply_fixed_point_multiply_add_clip_subtract_fixed_point__feae580412b1470c_(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_36_var, uint8_t* global_workspace_37_var) {
  void* fused_cast_subtract_multiply_fixed_point_multiply_add_clip_subtract_fixed_point_multiply_constant_let = (&(global_const_workspace_36_var[648576]));
  void* fused_cast_subtract_multiply_fixed_point_multiply_add_clip_constant_let = (&(global_const_workspace_36_var[648880]));
  void* fused_cast_subtract_constant_let = (&(global_const_workspace_36_var[648768]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 16; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 16; ++ax2) {
      for (int32_t ax3_inner = 0; ax3_inner < 8; ++ax3_inner) {
        int32_t cse_var_1 = (((ax0_ax1_fused * 128) + (ax2 * 8)) + ax3_inner);
        int32_t v_ = ((int32_t)(((((0 != 0) ? (((int64_t)((((int32_t)p0[cse_var_1]) + 39) * ((int32_t*)fused_cast_subtract_constant_let)[ax3_inner])) << ((int64_t)0)) : ((int64_t)((((int32_t)p0[cse_var_1]) + 39) * ((int32_t*)fused_cast_subtract_constant_let)[ax3_inner]))) * (int64_t)1159151080) + ((int64_t)1 << ((int64_t)((7 + 31) - 1)))) >> ((int64_t)(7 + 31)))) - 47;
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        int32_t v__2 = (((int32_t)(((((1 != 0) ? (((int64_t)(((v__1) > (-128) ? (v__1) : (-128)) - ((int32_t*)fused_cast_subtract_multiply_fixed_point_multiply_add_clip_constant_let)[0])) << ((int64_t)1)) : ((int64_t)(((v__1) > (-128) ? (v__1) : (-128)) - ((int32_t*)fused_cast_subtract_multiply_fixed_point_multiply_add_clip_constant_let)[0]))) * (int64_t)1368466941) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31)))) + ((int32_t*)fused_cast_subtract_multiply_fixed_point_multiply_add_clip_subtract_fixed_point_multiply_constant_let)[ax3_inner]) + 22;
        int32_t v__3 = (v__2) < (127) ? (v__2) : (127);
        T_cast[cse_var_1] = ((int8_t)((v__3) > (-128) ? (v__3) : (-128)));
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
TVM_DLL int32_t tvmgen_default_fused_mean(int32_t* p0, int32_t* T_divide, uint8_t* global_const_workspace_24_var, uint8_t* global_workspace_25_var) {
  void* p0_red_let = (&(global_workspace_25_var[40128]));
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
TVM_DLL int32_t tvmgen_default_fused_mean_1(int32_t* p0, int32_t* T_divide, uint8_t* global_const_workspace_76_var, uint8_t* global_workspace_77_var) {
  void* p0_red_let = (&(global_workspace_77_var[36288]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 16; ++ax0_ax1_fused) {
    ((int32_t*)p0_red_let)[ax0_ax1_fused] = 0;
    for (int32_t k1 = 0; k1 < 8; ++k1) {
      for (int32_t k2 = 0; k2 < 8; ++k2) {
        ((int32_t*)p0_red_let)[ax0_ax1_fused] = (((int32_t*)p0_red_let)[ax0_ax1_fused] + p0[(((k1 * 128) + (k2 * 16)) + ax0_ax1_fused)]);
      }
    }
  }
  for (int32_t ax1_inner = 0; ax1_inner < 16; ++ax1_inner) {
    T_divide[ax1_inner] = (((int32_t*)p0_red_let)[ax1_inner] / 64);
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_mean_2(int32_t* p0, int32_t* T_divide, uint8_t* global_const_workspace_174_var, uint8_t* global_workspace_175_var) {
  void* p0_red_let = (&(global_workspace_175_var[20480]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 1280; ++ax0_ax1_fused) {
    ((int32_t*)p0_red_let)[ax0_ax1_fused] = 0;
    for (int32_t k1 = 0; k1 < 2; ++k1) {
      for (int32_t k2 = 0; k2 < 2; ++k2) {
        ((int32_t*)p0_red_let)[ax0_ax1_fused] = (((int32_t*)p0_red_let)[ax0_ax1_fused] + p0[(((k1 * 2560) + (k2 * 1280)) + ax0_ax1_fused)]);
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 80; ++ax1_outer) {
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
TVM_DLL int32_t tvmgen_default_fused_mean_3(int32_t* p0, int32_t* T_divide, uint8_t* global_const_workspace_190_var, uint8_t* global_workspace_191_var) {
  void* p0_red_let = (&(global_workspace_191_var[2176]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 16; ++ax0_ax1_fused) {
    ((int32_t*)p0_red_let)[ax0_ax1_fused] = 0;
    for (int32_t k1 = 0; k1 < 4; ++k1) {
      for (int32_t k2 = 0; k2 < 4; ++k2) {
        ((int32_t*)p0_red_let)[ax0_ax1_fused] = (((int32_t*)p0_red_let)[ax0_ax1_fused] + p0[(((k1 * 64) + (k2 * 16)) + ax0_ax1_fused)]);
      }
    }
  }
  for (int32_t ax1_inner = 0; ax1_inner < 16; ++ax1_inner) {
    T_divide[ax1_inner] = (((int32_t*)p0_red_let)[ax1_inner] / 16);
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_28_var, uint8_t* global_workspace_29_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED] dense: 32->128 (packed [4][4][32][8])
  int32_t* conv_const = (int32_t*)(&global_const_workspace_28_var[611024]);
  int32_t* conv_sub   = (int32_t*)(&global_const_workspace_28_var[609488]);
  int8_t*  weights    = (int8_t*) (&global_const_workspace_28_var[453248]);

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
        * (int64_t)1650822836) + ((int64_t)1 << ((int64_t)((6 + 31) - 1))))
        >> ((int64_t)(6 + 31)))) - 128;
      int32_t v1 = (v_) < (127) ? (v_) : (127);
      T_cast[ax3] = (int8_t)((v1) > (-128) ? (v1) : (-128));
    }
  }
  return 0;

#else

  void* fused_nn_contrib_dense_pack_constant_let = (&(global_const_workspace_28_var[611024]));
  void* fused_nn_contrib_dense_pack_subtract_constant_let = (&(global_const_workspace_28_var[609488]));
  void* fused_constant_8_let = (&(global_const_workspace_28_var[453248]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 4; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_29_var[40128]));
    void* compute_global_let = (&(global_workspace_29_var[40288]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 4; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 32; ++k_outer) {
        for (int32_t x_c = 0; x_c < 8; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[k_outer]) * ((int32_t)((int8_t*)fused_constant_8_let)[((((ax1_outer_ax0_outer_fused * 1024) + (y_inner_outer_x_inner_outer_fused * 256)) + (k_outer * 8)) + x_c)])));
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
        int32_t v_ = ((int32_t)(((((0 != 0) ? (((int64_t)((((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_let)[cse_var_1])) << ((int64_t)0)) : ((int64_t)((((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_let)[cse_var_1]))) * (int64_t)1650822836) + ((int64_t)1 << ((int64_t)((6 + 31) - 1)))) >> ((int64_t)(6 + 31)))) - 128;
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
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast_1(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_30_var, uint8_t* global_workspace_31_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED] dense: 128->64 (packed [4][2][128][8])
  int32_t* conv_const = (int32_t*)(&global_const_workspace_30_var[630224]);
  int32_t* conv_sub   = (int32_t*)(&global_const_workspace_30_var[629456]);
  int8_t*  weights    = (int8_t*) (&global_const_workspace_30_var[353920]);

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
        * (int64_t)1132024824) + ((int64_t)1 << ((int64_t)((8 + 31) - 1))))
        >> ((int64_t)(8 + 31)))) - 128;
      int32_t v1 = (v_) < (127) ? (v_) : (127);
      T_cast[ax3] = (int8_t)((v1) > (-128) ? (v1) : (-128));
    }
  }
  return 0;

#else

  void* fused_nn_contrib_dense_pack_constant_1_let = (&(global_const_workspace_30_var[630224]));
  void* fused_nn_contrib_dense_pack_subtract_constant_1_let = (&(global_const_workspace_30_var[629456]));
  void* fused_constant_9_let = (&(global_const_workspace_30_var[353920]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 4; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_31_var[40192]));
    void* compute_global_let = (&(global_workspace_31_var[40256]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 2; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 128; ++k_outer) {
        for (int32_t x_c = 0; x_c < 8; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[k_outer]) * ((int32_t)((int8_t*)fused_constant_9_let)[((((ax1_outer_ax0_outer_fused * 2048) + (y_inner_outer_x_inner_outer_fused * 1024)) + (k_outer * 8)) + x_c)])));
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
        int32_t v_ = ((int32_t)(((((0 != 0) ? (((int64_t)((((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_1_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_1_let)[cse_var_1])) << ((int64_t)0)) : ((int64_t)((((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_1_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_1_let)[cse_var_1]))) * (int64_t)1132024824) + ((int64_t)1 << ((int64_t)((8 + 31) - 1)))) >> ((int64_t)(8 + 31)))) - 128;
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
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast_2(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_80_var, uint8_t* global_workspace_81_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED] dense: 16->128 (packed [4][4][16][8])
  int32_t* conv_const = (int32_t*)(&global_const_workspace_80_var[610512]);
  int32_t* conv_sub   = (int32_t*)(&global_const_workspace_80_var[608976]);
  int8_t*  weights    = (int8_t*) (&global_const_workspace_80_var[497264]);

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
        * (int64_t)1595127124) + ((int64_t)1 << ((int64_t)((7 + 31) - 1))))
        >> ((int64_t)(7 + 31)))) - 128;
      int32_t v1 = (v_) < (127) ? (v_) : (127);
      T_cast[ax3] = (int8_t)((v1) > (-128) ? (v1) : (-128));
    }
  }
  return 0;

#else

  void* fused_nn_contrib_dense_pack_constant_3_let = (&(global_const_workspace_80_var[610512]));
  void* fused_nn_contrib_dense_pack_subtract_constant_3_let = (&(global_const_workspace_80_var[608976]));
  void* fused_constant_24_let = (&(global_const_workspace_80_var[497264]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 4; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_81_var[36352]));
    void* compute_global_let = (&(global_workspace_81_var[36480]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 4; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 16; ++k_outer) {
        for (int32_t x_c = 0; x_c < 8; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[k_outer]) * ((int32_t)((int8_t*)fused_constant_24_let)[((((ax1_outer_ax0_outer_fused * 512) + (y_inner_outer_x_inner_outer_fused * 128)) + (k_outer * 8)) + x_c)])));
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
        int32_t v_ = ((int32_t)(((((0 != 0) ? (((int64_t)((((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_3_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_3_let)[cse_var_1])) << ((int64_t)0)) : ((int64_t)((((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_3_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_3_let)[cse_var_1]))) * (int64_t)1595127124) + ((int64_t)1 << ((int64_t)((7 + 31) - 1)))) >> ((int64_t)(7 + 31)))) - 128;
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
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast_3(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_82_var, uint8_t* global_workspace_83_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED] dense: 128->64 (packed [4][2][128][8])
  int32_t* conv_const = (int32_t*)(&global_const_workspace_82_var[629968]);
  int32_t* conv_sub   = (int32_t*)(&global_const_workspace_82_var[629200]);
  int8_t*  weights    = (int8_t*) (&global_const_workspace_82_var[370304]);

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
        * (int64_t)1104823050) + ((int64_t)1 << ((int64_t)((8 + 31) - 1))))
        >> ((int64_t)(8 + 31)))) - 128;
      int32_t v1 = (v_) < (127) ? (v_) : (127);
      T_cast[ax3] = (int8_t)((v1) > (-128) ? (v1) : (-128));
    }
  }
  return 0;

#else

  void* fused_nn_contrib_dense_pack_constant_4_let = (&(global_const_workspace_82_var[629968]));
  void* fused_nn_contrib_dense_pack_subtract_constant_4_let = (&(global_const_workspace_82_var[629200]));
  void* fused_constant_25_let = (&(global_const_workspace_82_var[370304]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 4; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_83_var[36416]));
    void* compute_global_let = (&(global_workspace_83_var[36480]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 2; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 128; ++k_outer) {
        for (int32_t x_c = 0; x_c < 8; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[k_outer]) * ((int32_t)((int8_t*)fused_constant_25_let)[((((ax1_outer_ax0_outer_fused * 2048) + (y_inner_outer_x_inner_outer_fused * 1024)) + (k_outer * 8)) + x_c)])));
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
        int32_t v_ = ((int32_t)(((((0 != 0) ? (((int64_t)((((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_4_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_4_let)[cse_var_1])) << ((int64_t)0)) : ((int64_t)((((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_4_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_4_let)[cse_var_1]))) * (int64_t)1104823050) + ((int64_t)1 << ((int64_t)((8 + 31) - 1)))) >> ((int64_t)(8 + 31)))) - 128;
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
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast_4(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_194_var, uint8_t* global_workspace_195_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED] dense: 16->128 (packed [4][4][16][8])
  int32_t* conv_const = (int32_t*)(&global_const_workspace_194_var[610000]);
  int32_t* conv_sub   = (int32_t*)(&global_const_workspace_194_var[608464]);
  int8_t*  weights    = (int8_t*) (&global_const_workspace_194_var[495216]);

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
        * (int64_t)1262246380) + ((int64_t)1 << ((int64_t)((6 + 31) - 1))))
        >> ((int64_t)(6 + 31)))) - 128;
      int32_t v1 = (v_) < (127) ? (v_) : (127);
      T_cast[ax3] = (int8_t)((v1) > (-128) ? (v1) : (-128));
    }
  }
  return 0;

#else

  void* fused_nn_contrib_dense_pack_constant_7_let = (&(global_const_workspace_194_var[610000]));
  void* fused_nn_contrib_dense_pack_subtract_constant_7_let = (&(global_const_workspace_194_var[608464]));
  void* fused_constant_59_let = (&(global_const_workspace_194_var[495216]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 4; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_195_var[128]));
    void* compute_global_let = (&(global_workspace_195_var[256]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 4; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 16; ++k_outer) {
        for (int32_t x_c = 0; x_c < 8; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[k_outer]) * ((int32_t)((int8_t*)fused_constant_59_let)[((((ax1_outer_ax0_outer_fused * 512) + (y_inner_outer_x_inner_outer_fused * 128)) + (k_outer * 8)) + x_c)])));
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
        int32_t v_ = ((int32_t)(((((0 != 0) ? (((int64_t)((((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_7_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_7_let)[cse_var_1])) << ((int64_t)0)) : ((int64_t)((((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_7_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_7_let)[cse_var_1]))) * (int64_t)1262246380) + ((int64_t)1 << ((int64_t)((6 + 31) - 1)))) >> ((int64_t)(6 + 31)))) - 128;
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
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast_5(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_196_var, uint8_t* global_workspace_197_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED] dense: 128->64 (packed [4][2][128][8])
  int32_t* conv_const = (int32_t*)(&global_const_workspace_196_var[629712]);
  int32_t* conv_sub   = (int32_t*)(&global_const_workspace_196_var[628944]);
  int8_t*  weights    = (int8_t*) (&global_const_workspace_196_var[362112]);

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
        * (int64_t)1821746424) + ((int64_t)1 << ((int64_t)((8 + 31) - 1))))
        >> ((int64_t)(8 + 31)))) - 128;
      int32_t v1 = (v_) < (127) ? (v_) : (127);
      T_cast[ax3] = (int8_t)((v1) > (-128) ? (v1) : (-128));
    }
  }
  return 0;

#else

  void* fused_nn_contrib_dense_pack_constant_8_let = (&(global_const_workspace_196_var[629712]));
  void* fused_nn_contrib_dense_pack_subtract_constant_8_let = (&(global_const_workspace_196_var[628944]));
  void* fused_constant_60_let = (&(global_const_workspace_196_var[362112]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 4; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_197_var[192]));
    void* compute_global_let = (&(global_workspace_197_var[256]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 2; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 128; ++k_outer) {
        for (int32_t x_c = 0; x_c < 8; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[k_outer]) * ((int32_t)((int8_t*)fused_constant_60_let)[((((ax1_outer_ax0_outer_fused * 2048) + (y_inner_outer_x_inner_outer_fused * 1024)) + (k_outer * 8)) + x_c)])));
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
        int32_t v_ = ((int32_t)(((((0 != 0) ? (((int64_t)((((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_8_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_8_let)[cse_var_1])) << ((int64_t)0)) : ((int64_t)((((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_8_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_8_let)[cse_var_1]))) * (int64_t)1821746424) + ((int64_t)1 << ((int64_t)((8 + 31) - 1)))) >> ((int64_t)(8 + 31)))) - 128;
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
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_subtract__fa059688879ad8de_(int8_t* p0, float* T_multiply, uint8_t* global_const_workspace_32_var, uint8_t* global_workspace_33_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED] dense: 64->10 (packed [2][1][64][5])
  int32_t* conv_const = (int32_t*)(&global_const_workspace_32_var[648208]);
  int32_t* conv_sub   = (int32_t*)(&global_const_workspace_32_var[648016]);
  int8_t*  weights    = (int8_t*) (&global_const_workspace_32_var[584784]);

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
        * (int64_t)1141703451) + ((int64_t)1 << ((int64_t)((8 + 31) - 1))))
        >> ((int64_t)(8 + 31)))) + 17;
      int32_t v1 = (v_) < (127) ? (v_) : (127);
      T_multiply[ax3] = (((float)(((v1) > (-128) ? (v1) : (-128)) - 17)) * 7.067435e-02f);
    }
  }
  return 0;

#else

  void* fused_nn_contrib_dense_pack_constant_2_let = (&(global_const_workspace_32_var[648208]));
  void* fused_nn_contrib_dense_pack_subtract_constant_2_let = (&(global_const_workspace_32_var[648016]));
  void* fused_constant_10_let = (&(global_const_workspace_32_var[584784]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 2; ++ax1_outer_ax0_outer_fused) {
    void* compute_global_let = (&(global_workspace_33_var[40232]));
    for (int32_t x_c_init = 0; x_c_init < 5; ++x_c_init) {
      ((int32_t*)compute_global_let)[x_c_init] = 0;
    }
    for (int32_t k_outer = 0; k_outer < 64; ++k_outer) {
      for (int32_t x_c = 0; x_c < 5; ++x_c) {
        ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[k_outer]) * ((int32_t)((int8_t*)fused_constant_10_let)[(((ax1_outer_ax0_outer_fused * 320) + (k_outer * 5)) + x_c)])));
      }
    }
    for (int32_t ax1_inner_inner = 0; ax1_inner_inner < 5; ++ax1_inner_inner) {
      int32_t cse_var_1 = ((ax1_outer_ax0_outer_fused * 5) + ax1_inner_inner);
      int32_t v_ = ((int32_t)(((((0 != 0) ? (((int64_t)((((int32_t*)compute_global_let)[ax1_inner_inner] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_2_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_2_let)[cse_var_1])) << ((int64_t)0)) : ((int64_t)((((int32_t*)compute_global_let)[ax1_inner_inner] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_2_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_2_let)[cse_var_1]))) * (int64_t)1141703451) + ((int64_t)1 << ((int64_t)((8 + 31) - 1)))) >> ((int64_t)(8 + 31)))) + 17;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_multiply[cse_var_1] = (((float)(((v__1) > (-128) ? (v__1) : (-128)) - 17)) * 7.067435e-02f);
    }
  }
  return 0;

#endif
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_subtract__fa059688879ad8de__1(int8_t* p0, float* T_multiply, uint8_t* global_const_workspace_84_var, uint8_t* global_workspace_85_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED] dense: 64->10 (packed [2][1][64][5])
  int32_t* conv_const = (int32_t*)(&global_const_workspace_84_var[648160]);
  int32_t* conv_sub   = (int32_t*)(&global_const_workspace_84_var[647968]);
  int8_t*  weights    = (int8_t*) (&global_const_workspace_84_var[584144]);

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
        * (int64_t)1362341012) + ((int64_t)1 << ((int64_t)((9 + 31) - 1))))
        >> ((int64_t)(9 + 31)))) - 17;
      int32_t v1 = (v_) < (127) ? (v_) : (127);
      T_multiply[ax3] = (((float)(((v1) > (-128) ? (v1) : (-128)) + 17)) * 7.520612e-02f);
    }
  }
  return 0;

#else

  void* fused_nn_contrib_dense_pack_constant_5_let = (&(global_const_workspace_84_var[648160]));
  void* fused_nn_contrib_dense_pack_subtract_constant_5_let = (&(global_const_workspace_84_var[647968]));
  void* fused_constant_26_let = (&(global_const_workspace_84_var[584144]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 2; ++ax1_outer_ax0_outer_fused) {
    void* compute_global_let = (&(global_workspace_85_var[36456]));
    for (int32_t x_c_init = 0; x_c_init < 5; ++x_c_init) {
      ((int32_t*)compute_global_let)[x_c_init] = 0;
    }
    for (int32_t k_outer = 0; k_outer < 64; ++k_outer) {
      for (int32_t x_c = 0; x_c < 5; ++x_c) {
        ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[k_outer]) * ((int32_t)((int8_t*)fused_constant_26_let)[(((ax1_outer_ax0_outer_fused * 320) + (k_outer * 5)) + x_c)])));
      }
    }
    for (int32_t ax1_inner_inner = 0; ax1_inner_inner < 5; ++ax1_inner_inner) {
      int32_t cse_var_1 = ((ax1_outer_ax0_outer_fused * 5) + ax1_inner_inner);
      int32_t v_ = ((int32_t)(((((0 != 0) ? (((int64_t)((((int32_t*)compute_global_let)[ax1_inner_inner] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_5_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_5_let)[cse_var_1])) << ((int64_t)0)) : ((int64_t)((((int32_t*)compute_global_let)[ax1_inner_inner] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_5_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_5_let)[cse_var_1]))) * (int64_t)1362341012) + ((int64_t)1 << ((int64_t)((9 + 31) - 1)))) >> ((int64_t)(9 + 31)))) - 17;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_multiply[cse_var_1] = (((float)(((v__1) > (-128) ? (v__1) : (-128)) + 17)) * 7.520612e-02f);
    }
  }
  return 0;

#endif
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_subtract__fa059688879ad8de__2(int8_t* p0, float* T_multiply, uint8_t* global_const_workspace_178_var, uint8_t* global_workspace_179_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED] dense: 1280->10 with reduction tiling (chunk=512)
  int32_t* conv_const = (int32_t*)(&global_const_workspace_178_var[648112]);
  int32_t* conv_sub   = (int32_t*)(&global_const_workspace_178_var[647920]);
  int8_t*  weights    = (int8_t*) (&global_const_workspace_178_var[330368]);
  int32_t partial[10];
  for (int32_t oc = 0; oc < 10; oc++) partial[oc] = 0;
  for (int32_t chunk = 0; chunk < 3; chunk++) {
    int32_t k_start = chunk * 512;
    int32_t k_len = 512;
    if (k_start + k_len > 1280) k_len = 1280 - k_start;
    int32_t k_aligned = (k_len + 7) & ~7;
    static int8_t rw[5120];
    for (int32_t oc = 0; oc < 10; oc++) {
      int32_t ax1 = oc / 5;
      int32_t yi  = (oc % 5) / 5;
      int32_t xc  = oc % 5;
      for (int32_t k = 0; k < k_len; k++)
        rw[oc * k_aligned + k] = weights[ax1 * 6400 + yi * 6400 + (k_start + k) * 5 + xc];
      for (int32_t k = k_len; k < k_aligned; k++)
        rw[oc * k_aligned + k] = 0;
    }
    static int8_t inp[512];
    for (int32_t k = 0; k < k_len; k++) inp[k] = p0[k_start + k];
    for (int32_t k = k_len; k < k_aligned; k++) inp[k] = 0;
    accel_spad_write(0x000, inp, k_aligned);
    uint32_t wt_off = (uint32_t)((k_aligned + 7) & ~7);
    accel_spad_write(wt_off, rw, 10 * k_aligned);
    uint32_t out_off = wt_off + 10 * k_aligned;
    hw_multi_dot(0x000, wt_off, out_off, k_aligned, 10);
    for (int32_t oc = 0; oc < 10; oc++)
      partial[oc] += (int32_t)accel_spad_read32(out_off + oc * 4);
  }
  for (int32_t ax3 = 0; ax3 < 10; ax3++) {
    int32_t v_ = ((int32_t)(((((int64_t)((partial[ax3] + conv_sub[ax3]) - conv_const[ax3]))
      * (int64_t)2068783777) + ((int64_t)1 << ((int64_t)((11 + 31) - 1))))
      >> ((int64_t)(11 + 31)))) + 40;
    int32_t v1 = (v_) < (127) ? (v_) : (127);
    T_multiply[ax3] = (((float)(((v1) > (-128) ? (v1) : (-128)) - 40)) * 3.254865e-01f);
  }
  return 0;

#else

  void* fused_nn_contrib_dense_pack_constant_6_let = (&(global_const_workspace_178_var[648112]));
  void* fused_nn_contrib_dense_pack_subtract_constant_6_let = (&(global_const_workspace_178_var[647920]));
  void* fused_constant_55_let = (&(global_const_workspace_178_var[330368]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 2; ++ax1_outer_ax0_outer_fused) {
    void* compute_global_let = (&(global_workspace_179_var[30504]));
    for (int32_t x_c_init = 0; x_c_init < 5; ++x_c_init) {
      ((int32_t*)compute_global_let)[x_c_init] = 0;
    }
    for (int32_t k_outer = 0; k_outer < 1280; ++k_outer) {
      for (int32_t x_c = 0; x_c < 5; ++x_c) {
        ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[k_outer]) * ((int32_t)((int8_t*)fused_constant_55_let)[(((ax1_outer_ax0_outer_fused * 6400) + (k_outer * 5)) + x_c)])));
      }
    }
    for (int32_t ax1_inner_inner = 0; ax1_inner_inner < 5; ++ax1_inner_inner) {
      int32_t cse_var_1 = ((ax1_outer_ax0_outer_fused * 5) + ax1_inner_inner);
      int32_t v_ = ((int32_t)(((((0 != 0) ? (((int64_t)((((int32_t*)compute_global_let)[ax1_inner_inner] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_6_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_6_let)[cse_var_1])) << ((int64_t)0)) : ((int64_t)((((int32_t*)compute_global_let)[ax1_inner_inner] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_6_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_6_let)[cse_var_1]))) * (int64_t)2068783777) + ((int64_t)1 << ((int64_t)((11 + 31) - 1)))) >> ((int64_t)(11 + 31)))) + 40;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_multiply[cse_var_1] = (((float)(((v__1) > (-128) ? (v__1) : (-128)) - 40)) * 3.254865e-01f);
    }
  }
  return 0;

#endif
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_subtract__fa059688879ad8de__3(int8_t* p0, float* T_multiply, uint8_t* global_const_workspace_198_var, uint8_t* global_workspace_199_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED] dense: 64->10 (packed [2][1][64][5])
  int32_t* conv_const = (int32_t*)(&global_const_workspace_198_var[648064]);
  int32_t* conv_sub   = (int32_t*)(&global_const_workspace_198_var[647872]);
  int8_t*  weights    = (int8_t*) (&global_const_workspace_198_var[583504]);

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
        * (int64_t)1571310226) + ((int64_t)1 << ((int64_t)((8 + 31) - 1))))
        >> ((int64_t)(8 + 31)))) - 1;
      int32_t v1 = (v_) < (127) ? (v_) : (127);
      T_multiply[ax3] = (((float)(((v1) > (-128) ? (v1) : (-128)) + 1)) * 1.826002e-01f);
    }
  }
  return 0;

#else

  void* fused_nn_contrib_dense_pack_constant_9_let = (&(global_const_workspace_198_var[648064]));
  void* fused_nn_contrib_dense_pack_subtract_constant_9_let = (&(global_const_workspace_198_var[647872]));
  void* fused_constant_61_let = (&(global_const_workspace_198_var[583504]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 2; ++ax1_outer_ax0_outer_fused) {
    void* compute_global_let = (&(global_workspace_199_var[232]));
    for (int32_t x_c_init = 0; x_c_init < 5; ++x_c_init) {
      ((int32_t*)compute_global_let)[x_c_init] = 0;
    }
    for (int32_t k_outer = 0; k_outer < 64; ++k_outer) {
      for (int32_t x_c = 0; x_c < 5; ++x_c) {
        ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[k_outer]) * ((int32_t)((int8_t*)fused_constant_61_let)[(((ax1_outer_ax0_outer_fused * 320) + (k_outer * 5)) + x_c)])));
      }
    }
    for (int32_t ax1_inner_inner = 0; ax1_inner_inner < 5; ++ax1_inner_inner) {
      int32_t cse_var_1 = ((ax1_outer_ax0_outer_fused * 5) + ax1_inner_inner);
      int32_t v_ = ((int32_t)(((((0 != 0) ? (((int64_t)((((int32_t*)compute_global_let)[ax1_inner_inner] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_9_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_9_let)[cse_var_1])) << ((int64_t)0)) : ((int64_t)((((int32_t*)compute_global_let)[ax1_inner_inner] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_9_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_9_let)[cse_var_1]))) * (int64_t)1571310226) + ((int64_t)1 << ((int64_t)((8 + 31) - 1)))) >> ((int64_t)(8 + 31)))) - 1;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_multiply[cse_var_1] = (((float)(((v__1) > (-128) ? (v__1) : (-128)) + 1)) * 1.826002e-01f);
    }
  }
  return 0;

#endif
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_126_var, uint8_t* global_workspace_127_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED v8 HW-REQUANT] 1x1 conv: 32->192 channels, 16 spatial positions
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_126_var[578896]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_126_var[580432]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_126_var[578128]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_126_var[390784]);

  // Safe copy: TVM may alias input/output workspace buffers
  static int8_t _inp[512];
  for (int32_t _i = 0; _i < 512; _i++) _inp[_i] = p0[_i];

  // Set per-layer zero-point once. The helper is provided by conv_accel.h.
  accel_set_output_zp(-128);

  for (int32_t tile = 0; tile < 1; tile++) {
    int32_t oc_base = tile * 192;
    int32_t oc_count = 192;
    if (oc_base + oc_count > 192) oc_count = 192 - oc_base;

    // Pack weights for this tile (relayout from [rc][oc] to [oc][rc])
    static int8_t rw[6144];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      for (int32_t rc = 0; rc < 32; rc++)
        rw[oc * 32 + rc] = weights[rc * 192 + oc_base + oc];
    }
    accel_spad_write(0x020, rw, oc_count * 32);

    // Pack params for this tile: 16 bytes per OC.
    //   word 0: scale (high 32) and bias (low 32)
    //   word 1: zero  (high 32) and shift (low 32)
    static int32_t params[192 * 4];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      int32_t ax3 = oc_base + oc;
      params[oc*4 + 0] = (conv_const[ax3]);         // bias
      params[oc*4 + 1] = quant_scale[ax3];      // scale
      params[oc*4 + 2] = quant_shift[ax3] + 31; // shift
      params[oc*4 + 3] = 0;                     // reserved
    }
    accel_spad_write(0x1B20, (int8_t*)params, oc_count * 16);

    for (int32_t sp = 0; sp < 16; sp++) {
      accel_spad_write(0x000, &_inp[sp * 32], 32);
      hw_multi_dot_requant(0x000, 0x020, 0x1820,
                           0x1B20, 32, oc_count);
      accel_unpack_i8_outputs(&T_cast[(sp * 192) + oc_base],
                              0x1820, oc_count);
    }
  }
  return 0;

#else

  void* fused_nn_conv2d_add_constant_2_let = (&(global_const_workspace_126_var[578896]));
  void* fused_nn_conv2d_add_constant_1_let = (&(global_const_workspace_126_var[579664]));
  void* fused_nn_conv2d_add_constant_let = (&(global_const_workspace_126_var[580432]));
  void* fused_nn_conv2d_constant_31_let = (&(global_const_workspace_126_var[578128]));
  void* fused_constant_39_let = (&(global_const_workspace_126_var[390784]));
  void* pad_temp_let = (&(global_workspace_127_var[36352]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 4; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 4; ++i2) {
      for (int32_t i3 = 0; i3 < 32; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 128) + (i2 * 32)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 16; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_127_var[36864]));
    for (int32_t ax3_outer = 0; ax3_outer < 3; ++ax3_outer) {
      for (int32_t ff = 0; ff < 64; ++ff) {
        ((int32_t*)conv2d_nhwc_let)[ff] = 0;
        for (int32_t rc = 0; rc < 32; ++rc) {
          ((int32_t*)conv2d_nhwc_let)[ff] = (((int32_t*)conv2d_nhwc_let)[ff] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 32) + rc)]) * ((int32_t)((int8_t*)fused_constant_39_let)[(((rc * 192) + (ax3_outer * 64)) + ff)])));
        }
      }
      for (int32_t ax3_inner = 0; ax3_inner < 64; ++ax3_inner) {
        int32_t cse_var_3 = (ax3_outer * 64);
        int32_t cse_var_2 = (cse_var_3 + ax3_inner);
        int32_t v_ = ((int32_t)(((((int64_t)(((int32_t*)conv2d_nhwc_let)[ax3_inner] + ((int32_t*)fused_nn_conv2d_constant_31_let)[cse_var_2])) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_let)[cse_var_2])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_2_let)[cse_var_2] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_2_let)[cse_var_2] + 31)))) - 128;
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
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_1(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_150_var, uint8_t* global_workspace_151_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED v8 HW-REQUANT] 1x1 conv: 56->336 channels, 4 spatial positions
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_150_var[547120]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_150_var[549808]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_150_var[545776]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_150_var[273920]);

  // Safe copy: TVM may alias input/output workspace buffers
  static int8_t _inp[224];
  for (int32_t _i = 0; _i < 224; _i++) _inp[_i] = p0[_i];

  // Set per-layer zero-point once. The helper is provided by conv_accel.h.
  accel_set_output_zp(-128);

  for (int32_t tile = 0; tile < 3; tile++) {
    int32_t oc_base = tile * 128;
    int32_t oc_count = 128;
    if (oc_base + oc_count > 336) oc_count = 336 - oc_base;

    // Pack weights for this tile (relayout from [rc][oc] to [oc][rc])
    static int8_t rw[7168];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      for (int32_t rc = 0; rc < 56; rc++)
        rw[oc * 56 + rc] = weights[rc * 336 + oc_base + oc];
    }
    accel_spad_write(0x038, rw, oc_count * 56);

    // Pack params for this tile: 16 bytes per OC.
    //   word 0: scale (high 32) and bias (low 32)
    //   word 1: zero  (high 32) and shift (low 32)
    static int32_t params[128 * 4];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      int32_t ax3 = oc_base + oc;
      params[oc*4 + 0] = (conv_const[ax3]);         // bias
      params[oc*4 + 1] = quant_scale[ax3];      // scale
      params[oc*4 + 2] = quant_shift[ax3] + 31; // shift
      params[oc*4 + 3] = 0;                     // reserved
    }
    accel_spad_write(0x1E38, (int8_t*)params, oc_count * 16);

    for (int32_t sp = 0; sp < 4; sp++) {
      accel_spad_write(0x000, &_inp[sp * 56], 56);
      hw_multi_dot_requant(0x000, 0x038, 0x1C38,
                           0x1E38, 56, oc_count);
      accel_unpack_i8_outputs(&T_cast[(sp * 336) + oc_base],
                              0x1C38, oc_count);
    }
  }
  return 0;

#else

  void* fused_nn_conv2d_add_constant_5_let = (&(global_const_workspace_150_var[547120]));
  void* fused_nn_conv2d_add_constant_4_let = (&(global_const_workspace_150_var[548464]));
  void* fused_nn_conv2d_add_constant_3_let = (&(global_const_workspace_150_var[549808]));
  void* fused_nn_conv2d_constant_38_let = (&(global_const_workspace_150_var[545776]));
  void* fused_constant_46_let = (&(global_const_workspace_150_var[273920]));
  void* pad_temp_let = (&(global_workspace_151_var[32320]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 2; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 2; ++i2) {
      for (int32_t i3 = 0; i3 < 56; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 112) + (i2 * 56)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 4; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_151_var[32544]));
    for (int32_t ax3 = 0; ax3 < 336; ++ax3) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 56; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 56) + rc)]) * ((int32_t)((int8_t*)fused_constant_46_let)[((rc * 336) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)(((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_constant_38_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_3_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_5_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_5_let)[ax3] + 31)))) - 128;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_cast[((ax0_ax1_fused_ax2_fused * 336) + ax3)] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
    }
  }
  return 0;

#endif
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip(int8_t* p0, int32_t* compute, uint8_t* global_const_workspace_22_var, uint8_t* global_workspace_23_var) {
  void* fused_nn_conv2d_subtract_add_constant_20_let = (&(global_const_workspace_22_var[641024]));
  void* fused_nn_conv2d_subtract_add_constant_19_let = (&(global_const_workspace_22_var[641152]));
  void* fused_nn_conv2d_subtract_add_constant_18_let = (&(global_const_workspace_22_var[641280]));
  void* fused_nn_conv2d_constant_6_let = (&(global_const_workspace_22_var[641792]));
  void* fused_nn_conv2d_subtract_constant_6_let = (&(global_const_workspace_22_var[639744]));
  void* fused_constant_6_let = (&(global_const_workspace_22_var[490608]));
  void* pad_temp_let = (&(global_workspace_23_var[32768]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 18; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 18; ++i2) {
      for (int32_t i3 = 0; i3 < 8; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 144) + (i2 * 8)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 256; ++i0_i1_fused_i2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_23_var[40000]));
    for (int32_t i3_1 = 0; i3_1 < 32; ++i3_1) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t ry = 0; ry < 3; ++ry) {
        for (int32_t rx = 0; rx < 3; ++rx) {
          for (int32_t rc = 0; rc < 8; ++rc) {
            ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((((((i0_i1_fused_i2_fused >> 4) * 144) + (ry * 144)) + (rx * 8)) + ((i0_i1_fused_i2_fused & 15) * 8)) + rc)]) * ((int32_t)((int8_t*)fused_constant_6_let)[((((ry * 768) + (rx * 256)) + (rc * 32)) + i3_1)])));
          }
        }
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_6_let)[i3_1]) - ((int32_t*)fused_nn_conv2d_constant_6_let)[i3_1])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_18_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_20_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_20_let)[i3_1] + 31)))) - 128;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      compute[((i0_i1_fused_i2_fused * 32) + i3_1)] = ((v__1) > (-128) ? (v__1) : (-128));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_1(int8_t* p0, int32_t* compute, uint8_t* global_const_workspace_74_var, uint8_t* global_workspace_75_var) {
  void* fused_nn_conv2d_subtract_add_constant_56_let = (&(global_const_workspace_74_var[646016]));
  void* fused_nn_conv2d_subtract_add_constant_55_let = (&(global_const_workspace_74_var[646080]));
  void* fused_nn_conv2d_subtract_add_constant_54_let = (&(global_const_workspace_74_var[646144]));
  void* fused_nn_conv2d_constant_18_let = (&(global_const_workspace_74_var[647232]));
  void* fused_nn_conv2d_subtract_constant_18_let = (&(global_const_workspace_74_var[645696]));
  void* fused_constant_22_let = (&(global_const_workspace_74_var[444032]));
  void* pad_temp_let = (&(global_workspace_75_var[4096]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 10; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 10; ++i2) {
      for (int32_t i3 = 0; i3 < 32; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 320) + (i2 * 32)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 64; ++i0_i1_fused_i2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_75_var[36224]));
    for (int32_t i3_1 = 0; i3_1 < 16; ++i3_1) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t ry = 0; ry < 3; ++ry) {
        for (int32_t rx = 0; rx < 3; ++rx) {
          for (int32_t rc = 0; rc < 32; ++rc) {
            ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((((((i0_i1_fused_i2_fused >> 3) * 320) + (ry * 320)) + (rx * 32)) + ((i0_i1_fused_i2_fused & 7) * 32)) + rc)]) * ((int32_t)((int8_t*)fused_constant_22_let)[((((ry * 1536) + (rx * 512)) + (rc * 16)) + i3_1)])));
          }
        }
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_18_let)[i3_1]) - ((int32_t*)fused_nn_conv2d_constant_18_let)[i3_1])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_54_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_56_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_56_let)[i3_1] + 31)))) - 128;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      compute[((i0_i1_fused_i2_fused * 16) + i3_1)] = ((v__1) > (-128) ? (v__1) : (-128));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_2(int8_t* p0, int32_t* compute, uint8_t* global_const_workspace_172_var, uint8_t* global_workspace_173_var) {
  void* fused_nn_conv2d_subtract_add_constant_131_let = (&(global_const_workspace_172_var[414336]));
  void* fused_nn_conv2d_subtract_add_constant_130_let = (&(global_const_workspace_172_var[419456]));
  void* fused_nn_conv2d_subtract_add_constant_129_let = (&(global_const_workspace_172_var[424576]));
  void* fused_nn_conv2d_constant_45_let = (&(global_const_workspace_172_var[429696]));
  void* fused_nn_conv2d_subtract_constant_43_let = (&(global_const_workspace_172_var[409216]));
  void* fused_constant_53_let = (&(global_const_workspace_172_var[0]));
  void* pad_temp_let = (&(global_workspace_173_var[30976]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 2; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 2; ++i2) {
      for (int32_t i3 = 0; i3 < 112; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 224) + (i2 * 112)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 4; ++i0_i1_fused_i2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_173_var[31424]));
    for (int32_t i3_outer = 0; i3_outer < 20; ++i3_outer) {
      for (int32_t ff = 0; ff < 64; ++ff) {
        ((int32_t*)conv2d_nhwc_let)[ff] = 0;
        for (int32_t rc = 0; rc < 112; ++rc) {
          ((int32_t*)conv2d_nhwc_let)[ff] = (((int32_t*)conv2d_nhwc_let)[ff] + (((int32_t)((int8_t*)pad_temp_let)[((i0_i1_fused_i2_fused * 112) + rc)]) * ((int32_t)((int8_t*)fused_constant_53_let)[(((rc * 1280) + (i3_outer * 64)) + ff)])));
        }
      }
      for (int32_t i3_inner = 0; i3_inner < 64; ++i3_inner) {
        int32_t cse_var_3 = (i3_outer * 64);
        int32_t cse_var_2 = (cse_var_3 + i3_inner);
        int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[i3_inner] + ((int32_t*)fused_nn_conv2d_subtract_constant_43_let)[cse_var_2]) - ((int32_t*)fused_nn_conv2d_constant_45_let)[cse_var_2])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_129_let)[cse_var_2])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_131_let)[cse_var_2] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_131_let)[cse_var_2] + 31)))) - 128;
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        compute[(((i0_i1_fused_i2_fused * 1280) + cse_var_3) + i3_inner)] = ((v__1) > (-128) ? (v__1) : (-128));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_3(int8_t* p0, int32_t* compute, uint8_t* global_const_workspace_188_var, uint8_t* global_workspace_189_var) {
  void* fused_nn_conv2d_subtract_add_constant_137_let = (&(global_const_workspace_188_var[646848]));
  void* fused_nn_conv2d_subtract_add_constant_136_let = (&(global_const_workspace_188_var[646912]));
  void* fused_nn_conv2d_subtract_add_constant_135_let = (&(global_const_workspace_188_var[646976]));
  void* fused_nn_conv2d_constant_47_let = (&(global_const_workspace_188_var[647168]));
  void* fused_nn_conv2d_subtract_constant_45_let = (&(global_const_workspace_188_var[645632]));
  void* fused_constant_57_let = (&(global_const_workspace_188_var[434816]));
  void* pad_temp_let = (&(global_workspace_189_var[0]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 6; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 6; ++i2) {
      for (int32_t i3 = 0; i3 < 32; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 192) + (i2 * 32)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 16; ++i0_i1_fused_i2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_189_var[2176]));
    for (int32_t i3_1 = 0; i3_1 < 16; ++i3_1) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t ry = 0; ry < 3; ++ry) {
        for (int32_t rx = 0; rx < 3; ++rx) {
          for (int32_t rc = 0; rc < 32; ++rc) {
            ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((((((i0_i1_fused_i2_fused >> 2) * 192) + (ry * 192)) + (rx * 32)) + ((i0_i1_fused_i2_fused & 3) * 32)) + rc)]) * ((int32_t)((int8_t*)fused_constant_57_let)[((((ry * 1536) + (rx * 512)) + (rc * 16)) + i3_1)])));
          }
        }
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_45_let)[i3_1]) - ((int32_t*)fused_nn_conv2d_constant_47_let)[i3_1])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_135_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_137_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_137_let)[i3_1] + 31)))) - 128;
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
  void* fused_nn_conv2d_subtract_add_constant_2_let = (&(global_const_workspace_4_var[646784]));
  void* fused_nn_conv2d_subtract_add_constant_1_let = (&(global_const_workspace_4_var[647040]));
  void* fused_nn_conv2d_subtract_add_constant_let = (&(global_const_workspace_4_var[647104]));
  void* fused_nn_conv2d_constant_let = (&(global_const_workspace_4_var[647488]));
  void* fused_nn_conv2d_subtract_constant_let = (&(global_const_workspace_4_var[645952]));
  void* fused_constant_let = (&(global_const_workspace_4_var[615072]));
  void* pad_temp_let = (&(global_workspace_5_var[34880]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 65; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 65; ++i2) {
      for (int32_t i3 = 0; i3 < 3; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 195) + (i2 * 3)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 1024; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_5_var[47560]));
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
  void* fused_nn_conv2d_subtract_add_constant_5_let = (&(global_const_workspace_8_var[646272]));
  void* fused_nn_conv2d_subtract_add_constant_4_let = (&(global_const_workspace_8_var[646464]));
  void* fused_nn_conv2d_subtract_add_constant_3_let = (&(global_const_workspace_8_var[646720]));
  void* fused_nn_conv2d_subtract_constant_1_let = (&(global_const_workspace_8_var[645888]));
  void* fused_nn_conv2d_constant_1_let = (&(global_const_workspace_8_var[647424]));
  void* fused_constant_1_let = (&(global_const_workspace_8_var[639600]));
  void* PaddedInput_let = (&(global_workspace_9_var[65536]));
  void* DepthwiseConv2d_let = (&(global_workspace_9_var[0]));
  for (int32_t i1 = 0; i1 < 34; ++i1) {
    for (int32_t i2 = 0; i2 < 34; ++i2) {
      for (int32_t i3 = 0; i3 < 16; ++i3) {
        int32_t cse_var_1 = (((i1 * 544) + (i2 * 16)) + i3);
        ((int8_t*)PaddedInput_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t i = 0; i < 32; ++i) {
    for (int32_t j = 0; j < 32; ++j) {
      for (int32_t c = 0; c < 16; ++c) {
        ((int32_t*)DepthwiseConv2d_let)[(((i * 512) + (j * 16)) + c)] = 0;
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            int32_t cse_var_4 = (j * 16);
            int32_t cse_var_3 = (dj * 16);
            int32_t cse_var_2 = (((i * 512) + cse_var_4) + c);
            ((int32_t*)DepthwiseConv2d_let)[cse_var_2] = (((int32_t*)DepthwiseConv2d_let)[cse_var_2] + (((int32_t)((int8_t*)PaddedInput_let)[(((((i * 544) + (di * 544)) + cse_var_4) + cse_var_3) + c)]) * ((int32_t)((int8_t*)fused_constant_1_let)[(((di * 48) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 32; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 32; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 16; ++ax3) {
        int32_t cse_var_5 = (((ax1 * 512) + (ax2 * 16)) + ax3);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_5] = (((int32_t*)DepthwiseConv2d_let)[cse_var_5] - ((int32_t*)fused_nn_conv2d_constant_1_let)[ax3]);
      }
    }
  }
  for (int32_t ax1_1 = 0; ax1_1 < 32; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 32; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 16; ++ax3_1) {
        int32_t cse_var_6 = (((ax1_1 * 512) + (ax2_1 * 16)) + ax3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_6] = (((int32_t*)DepthwiseConv2d_let)[cse_var_6] + ((int32_t*)fused_nn_conv2d_subtract_constant_1_let)[ax3_1]);
      }
    }
  }
  for (int32_t i1_1 = 0; i1_1 < 32; ++i1_1) {
    for (int32_t i2_1 = 0; i2_1 < 32; ++i2_1) {
      for (int32_t i3_1 = 0; i3_1 < 16; ++i3_1) {
        int32_t cse_var_7 = (((i1_1 * 512) + (i2_1 * 16)) + i3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_7] = ((int32_t)(((((int64_t)((int32_t*)DepthwiseConv2d_let)[cse_var_7]) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_3_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_5_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_5_let)[i3_1] + 31))));
      }
    }
  }
  for (int32_t ax1_2 = 0; ax1_2 < 32; ++ax1_2) {
    for (int32_t ax2_2 = 0; ax2_2 < 32; ++ax2_2) {
      for (int32_t ax3_2 = 0; ax3_2 < 16; ++ax3_2) {
        int32_t cse_var_8 = (((ax1_2 * 512) + (ax2_2 * 16)) + ax3_2);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_8] = (((int32_t*)DepthwiseConv2d_let)[cse_var_8] - 128);
      }
    }
  }
  for (int32_t i1_2 = 0; i1_2 < 32; ++i1_2) {
    for (int32_t i2_2 = 0; i2_2 < 32; ++i2_2) {
      for (int32_t i3_2 = 0; i3_2 < 16; ++i3_2) {
        int32_t cse_var_9 = (((i1_2 * 512) + (i2_2 * 16)) + i3_2);
        int32_t v_ = ((int32_t*)DepthwiseConv2d_let)[cse_var_9];
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_9] = ((v__1) > (-128) ? (v__1) : (-128));
      }
    }
  }
  for (int32_t ax1_3 = 0; ax1_3 < 32; ++ax1_3) {
    for (int32_t ax2_3 = 0; ax2_3 < 32; ++ax2_3) {
      for (int32_t ax3_3 = 0; ax3_3 < 16; ++ax3_3) {
        int32_t cse_var_10 = (((ax1_3 * 512) + (ax2_3 * 16)) + ax3_3);
        T_cast[cse_var_10] = ((int8_t)((int32_t*)DepthwiseConv2d_let)[cse_var_10]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_10(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_52_var, uint8_t* global_workspace_53_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED v8 HW-REQUANT] 1x1 conv: 48->16 channels, 64 spatial positions
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_52_var[646528]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_52_var[646656]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_52_var[647360]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_52_var[645824]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_52_var[581200]);

  // Safe copy: TVM may alias input/output workspace buffers
  static int8_t _inp[3072];
  for (int32_t _i = 0; _i < 3072; _i++) _inp[_i] = p0[_i];

  // Set per-layer zero-point once. The helper is provided by conv_accel.h.
  accel_set_output_zp(-16);

  for (int32_t tile = 0; tile < 1; tile++) {
    int32_t oc_base = tile * 16;
    int32_t oc_count = 16;
    if (oc_base + oc_count > 16) oc_count = 16 - oc_base;

    // Pack weights for this tile (relayout from [rc][oc] to [oc][rc])
    static int8_t rw[768];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      for (int32_t rc = 0; rc < 48; rc++)
        rw[oc * 48 + rc] = weights[rc * 16 + oc_base + oc];
    }
    accel_spad_write(0x030, rw, oc_count * 48);

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
    accel_spad_write(0x370, (int8_t*)params, oc_count * 16);

    for (int32_t sp = 0; sp < 64; sp++) {
      accel_spad_write(0x000, &_inp[sp * 48], 48);
      hw_multi_dot_requant(0x000, 0x030, 0x330,
                           0x370, 48, oc_count);
      accel_unpack_i8_outputs(&T_cast[(sp * 16) + oc_base],
                              0x330, oc_count);
    }
  }
  return 0;

#else

  void* fused_nn_conv2d_subtract_add_constant_35_let = (&(global_const_workspace_52_var[646528]));
  void* fused_nn_conv2d_subtract_add_constant_34_let = (&(global_const_workspace_52_var[646592]));
  void* fused_nn_conv2d_subtract_add_constant_33_let = (&(global_const_workspace_52_var[646656]));
  void* fused_nn_conv2d_constant_11_let = (&(global_const_workspace_52_var[647360]));
  void* fused_nn_conv2d_subtract_constant_11_let = (&(global_const_workspace_52_var[645824]));
  void* fused_constant_15_let = (&(global_const_workspace_52_var[581200]));
  void* pad_temp_let = (&(global_workspace_53_var[0]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 8; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 8; ++i2) {
      for (int32_t i3 = 0; i3 < 48; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 384) + (i2 * 48)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 64; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_53_var[36224]));
    for (int32_t ax3 = 0; ax3 < 16; ++ax3) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 48; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 48) + rc)]) * ((int32_t)((int8_t*)fused_constant_15_let)[((rc * 16) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_11_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_11_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_33_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_35_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_35_let)[ax3] + 31)))) - 16;
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
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_11(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_54_var, uint8_t* global_workspace_55_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED v8 HW-REQUANT] 1x1 conv: 16->96 channels, 64 spatial positions
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_54_var[623568]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_54_var[624336]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_54_var[626640]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_54_var[617424]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_54_var[509104]);

  // Safe copy: TVM may alias input/output workspace buffers
  static int8_t _inp[1024];
  for (int32_t _i = 0; _i < 1024; _i++) _inp[_i] = p0[_i];

  // Set per-layer zero-point once. The helper is provided by conv_accel.h.
  accel_set_output_zp(-128);

  for (int32_t tile = 0; tile < 1; tile++) {
    int32_t oc_base = tile * 96;
    int32_t oc_count = 96;
    if (oc_base + oc_count > 96) oc_count = 96 - oc_base;

    // Pack weights for this tile (relayout from [rc][oc] to [oc][rc])
    static int8_t rw[1536];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      for (int32_t rc = 0; rc < 16; rc++)
        rw[oc * 16 + rc] = weights[rc * 96 + oc_base + oc];
    }
    accel_spad_write(0x010, rw, oc_count * 16);

    // Pack params for this tile: 16 bytes per OC.
    //   word 0: scale (high 32) and bias (low 32)
    //   word 1: zero  (high 32) and shift (low 32)
    static int32_t params[96 * 4];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      int32_t ax3 = oc_base + oc;
      params[oc*4 + 0] = (conv_sub[ax3] - conv_const[ax3]);         // bias
      params[oc*4 + 1] = quant_scale[ax3];      // scale
      params[oc*4 + 2] = quant_shift[ax3] + 31; // shift
      params[oc*4 + 3] = 0;                     // reserved
    }
    accel_spad_write(0x790, (int8_t*)params, oc_count * 16);

    for (int32_t sp = 0; sp < 64; sp++) {
      accel_spad_write(0x000, &_inp[sp * 16], 16);
      hw_multi_dot_requant(0x000, 0x010, 0x610,
                           0x790, 16, oc_count);
      accel_unpack_i8_outputs(&T_cast[(sp * 96) + oc_base],
                              0x610, oc_count);
    }
  }
  return 0;

#else

  void* fused_nn_conv2d_subtract_add_constant_38_let = (&(global_const_workspace_54_var[623568]));
  void* fused_nn_conv2d_subtract_add_constant_37_let = (&(global_const_workspace_54_var[623952]));
  void* fused_nn_conv2d_subtract_add_constant_36_let = (&(global_const_workspace_54_var[624336]));
  void* fused_nn_conv2d_constant_12_let = (&(global_const_workspace_54_var[626640]));
  void* fused_nn_conv2d_subtract_constant_12_let = (&(global_const_workspace_54_var[617424]));
  void* fused_constant_16_let = (&(global_const_workspace_54_var[509104]));
  void* pad_temp_let = (&(global_workspace_55_var[36224]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 8; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 8; ++i2) {
      for (int32_t i3 = 0; i3 < 16; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 128) + (i2 * 16)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 64; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_55_var[37248]));
    for (int32_t ax3 = 0; ax3 < 96; ++ax3) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 16; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 16) + rc)]) * ((int32_t)((int8_t*)fused_constant_16_let)[((rc * 96) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_12_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_12_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_36_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_38_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_38_let)[ax3] + 31)))) - 128;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_cast[((ax0_ax1_fused_ax2_fused * 96) + ax3)] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
    }
  }
  return 0;

#endif
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_12(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_58_var, uint8_t* global_workspace_59_var) {
  void* fused_nn_conv2d_subtract_add_constant_41_let = (&(global_const_workspace_58_var[622416]));
  void* fused_nn_conv2d_subtract_add_constant_40_let = (&(global_const_workspace_58_var[622800]));
  void* fused_nn_conv2d_subtract_add_constant_39_let = (&(global_const_workspace_58_var[623184]));
  void* fused_nn_conv2d_subtract_constant_13_let = (&(global_const_workspace_58_var[617040]));
  void* fused_nn_conv2d_constant_13_let = (&(global_const_workspace_58_var[626256]));
  void* fused_constant_17_let = (&(global_const_workspace_58_var[558064]));
  void* PaddedInput_let = (&(global_workspace_59_var[24576]));
  void* DepthwiseConv2d_let = (&(global_workspace_59_var[0]));
  for (int32_t i1 = 0; i1 < 10; ++i1) {
    for (int32_t i2 = 0; i2 < 10; ++i2) {
      for (int32_t i3 = 0; i3 < 96; ++i3) {
        int32_t cse_var_1 = (((i1 * 960) + (i2 * 96)) + i3);
        ((int8_t*)PaddedInput_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t i = 0; i < 8; ++i) {
    for (int32_t j = 0; j < 8; ++j) {
      for (int32_t c = 0; c < 96; ++c) {
        ((int32_t*)DepthwiseConv2d_let)[(((i * 768) + (j * 96)) + c)] = 0;
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            int32_t cse_var_4 = (j * 96);
            int32_t cse_var_3 = (dj * 96);
            int32_t cse_var_2 = (((i * 768) + cse_var_4) + c);
            ((int32_t*)DepthwiseConv2d_let)[cse_var_2] = (((int32_t*)DepthwiseConv2d_let)[cse_var_2] + (((int32_t)((int8_t*)PaddedInput_let)[(((((i * 960) + (di * 960)) + cse_var_4) + cse_var_3) + c)]) * ((int32_t)((int8_t*)fused_constant_17_let)[(((di * 288) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 8; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 8; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 96; ++ax3) {
        int32_t cse_var_5 = (((ax1 * 768) + (ax2 * 96)) + ax3);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_5] = (((int32_t*)DepthwiseConv2d_let)[cse_var_5] - ((int32_t*)fused_nn_conv2d_constant_13_let)[ax3]);
      }
    }
  }
  for (int32_t ax1_1 = 0; ax1_1 < 8; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 8; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 96; ++ax3_1) {
        int32_t cse_var_6 = (((ax1_1 * 768) + (ax2_1 * 96)) + ax3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_6] = (((int32_t*)DepthwiseConv2d_let)[cse_var_6] + ((int32_t*)fused_nn_conv2d_subtract_constant_13_let)[ax3_1]);
      }
    }
  }
  for (int32_t i1_1 = 0; i1_1 < 8; ++i1_1) {
    for (int32_t i2_1 = 0; i2_1 < 8; ++i2_1) {
      for (int32_t i3_1 = 0; i3_1 < 96; ++i3_1) {
        int32_t cse_var_7 = (((i1_1 * 768) + (i2_1 * 96)) + i3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_7] = ((int32_t)(((((int64_t)((int32_t*)DepthwiseConv2d_let)[cse_var_7]) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_39_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_41_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_41_let)[i3_1] + 31))));
      }
    }
  }
  for (int32_t ax1_2 = 0; ax1_2 < 8; ++ax1_2) {
    for (int32_t ax2_2 = 0; ax2_2 < 8; ++ax2_2) {
      for (int32_t ax3_2 = 0; ax3_2 < 96; ++ax3_2) {
        int32_t cse_var_8 = (((ax1_2 * 768) + (ax2_2 * 96)) + ax3_2);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_8] = (((int32_t*)DepthwiseConv2d_let)[cse_var_8] - 128);
      }
    }
  }
  for (int32_t i1_2 = 0; i1_2 < 8; ++i1_2) {
    for (int32_t i2_2 = 0; i2_2 < 8; ++i2_2) {
      for (int32_t i3_2 = 0; i3_2 < 96; ++i3_2) {
        int32_t cse_var_9 = (((i1_2 * 768) + (i2_2 * 96)) + i3_2);
        int32_t v_ = ((int32_t*)DepthwiseConv2d_let)[cse_var_9];
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_9] = ((v__1) > (-128) ? (v__1) : (-128));
      }
    }
  }
  for (int32_t ax1_3 = 0; ax1_3 < 8; ++ax1_3) {
    for (int32_t ax2_3 = 0; ax2_3 < 8; ++ax2_3) {
      for (int32_t ax3_3 = 0; ax3_3 < 96; ++ax3_3) {
        int32_t cse_var_10 = (((ax1_3 * 768) + (ax2_3 * 96)) + ax3_3);
        T_cast[cse_var_10] = ((int8_t)((int32_t*)DepthwiseConv2d_let)[cse_var_10]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_13(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_62_var, uint8_t* global_workspace_63_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED v8 HW-REQUANT] 1x1 conv: 16->96 channels, 64 spatial positions
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_62_var[621264]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_62_var[622032]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_62_var[625872]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_62_var[616656]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_62_var[507568]);

  // Safe copy: TVM may alias input/output workspace buffers
  static int8_t _inp[1024];
  for (int32_t _i = 0; _i < 1024; _i++) _inp[_i] = p0[_i];

  // Set per-layer zero-point once. The helper is provided by conv_accel.h.
  accel_set_output_zp(-128);

  for (int32_t tile = 0; tile < 1; tile++) {
    int32_t oc_base = tile * 96;
    int32_t oc_count = 96;
    if (oc_base + oc_count > 96) oc_count = 96 - oc_base;

    // Pack weights for this tile (relayout from [rc][oc] to [oc][rc])
    static int8_t rw[1536];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      for (int32_t rc = 0; rc < 16; rc++)
        rw[oc * 16 + rc] = weights[rc * 96 + oc_base + oc];
    }
    accel_spad_write(0x010, rw, oc_count * 16);

    // Pack params for this tile: 16 bytes per OC.
    //   word 0: scale (high 32) and bias (low 32)
    //   word 1: zero  (high 32) and shift (low 32)
    static int32_t params[96 * 4];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      int32_t ax3 = oc_base + oc;
      params[oc*4 + 0] = (conv_sub[ax3] - conv_const[ax3]);         // bias
      params[oc*4 + 1] = quant_scale[ax3];      // scale
      params[oc*4 + 2] = quant_shift[ax3] + 31; // shift
      params[oc*4 + 3] = 0;                     // reserved
    }
    accel_spad_write(0x790, (int8_t*)params, oc_count * 16);

    for (int32_t sp = 0; sp < 64; sp++) {
      accel_spad_write(0x000, &_inp[sp * 16], 16);
      hw_multi_dot_requant(0x000, 0x010, 0x610,
                           0x790, 16, oc_count);
      accel_unpack_i8_outputs(&T_cast[(sp * 96) + oc_base],
                              0x610, oc_count);
    }
  }
  return 0;

#else

  void* fused_nn_conv2d_subtract_add_constant_44_let = (&(global_const_workspace_62_var[621264]));
  void* fused_nn_conv2d_subtract_add_constant_43_let = (&(global_const_workspace_62_var[621648]));
  void* fused_nn_conv2d_subtract_add_constant_42_let = (&(global_const_workspace_62_var[622032]));
  void* fused_nn_conv2d_constant_14_let = (&(global_const_workspace_62_var[625872]));
  void* fused_nn_conv2d_subtract_constant_14_let = (&(global_const_workspace_62_var[616656]));
  void* fused_constant_18_let = (&(global_const_workspace_62_var[507568]));
  void* pad_temp_let = (&(global_workspace_63_var[35200]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 8; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 8; ++i2) {
      for (int32_t i3 = 0; i3 < 16; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 128) + (i2 * 16)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 64; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_63_var[36224]));
    for (int32_t ax3 = 0; ax3 < 96; ++ax3) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 16; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 16) + rc)]) * ((int32_t)((int8_t*)fused_constant_18_let)[((rc * 96) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_14_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_14_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_42_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_44_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_44_let)[ax3] + 31)))) - 128;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_cast[((ax0_ax1_fused_ax2_fused * 96) + ax3)] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
    }
  }
  return 0;

#endif
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_14(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_64_var, uint8_t* global_workspace_65_var) {
  void* fused_nn_conv2d_subtract_add_constant_47_let = (&(global_const_workspace_64_var[620112]));
  void* fused_nn_conv2d_subtract_add_constant_46_let = (&(global_const_workspace_64_var[620496]));
  void* fused_nn_conv2d_subtract_add_constant_45_let = (&(global_const_workspace_64_var[620880]));
  void* fused_nn_conv2d_subtract_constant_15_let = (&(global_const_workspace_64_var[616272]));
  void* fused_nn_conv2d_constant_15_let = (&(global_const_workspace_64_var[625488]));
  void* fused_constant_19_let = (&(global_const_workspace_64_var[557200]));
  void* PaddedInput_let = (&(global_workspace_65_var[24576]));
  void* DepthwiseConv2d_let = (&(global_workspace_65_var[0]));
  for (int32_t i1 = 0; i1 < 10; ++i1) {
    for (int32_t i2 = 0; i2 < 10; ++i2) {
      for (int32_t i3 = 0; i3 < 96; ++i3) {
        int32_t cse_var_1 = (((i1 * 960) + (i2 * 96)) + i3);
        ((int8_t*)PaddedInput_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t i = 0; i < 8; ++i) {
    for (int32_t j = 0; j < 8; ++j) {
      for (int32_t c = 0; c < 96; ++c) {
        ((int32_t*)DepthwiseConv2d_let)[(((i * 768) + (j * 96)) + c)] = 0;
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            int32_t cse_var_4 = (j * 96);
            int32_t cse_var_3 = (dj * 96);
            int32_t cse_var_2 = (((i * 768) + cse_var_4) + c);
            ((int32_t*)DepthwiseConv2d_let)[cse_var_2] = (((int32_t*)DepthwiseConv2d_let)[cse_var_2] + (((int32_t)((int8_t*)PaddedInput_let)[(((((i * 960) + (di * 960)) + cse_var_4) + cse_var_3) + c)]) * ((int32_t)((int8_t*)fused_constant_19_let)[(((di * 288) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 8; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 8; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 96; ++ax3) {
        int32_t cse_var_5 = (((ax1 * 768) + (ax2 * 96)) + ax3);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_5] = (((int32_t*)DepthwiseConv2d_let)[cse_var_5] - ((int32_t*)fused_nn_conv2d_constant_15_let)[ax3]);
      }
    }
  }
  for (int32_t ax1_1 = 0; ax1_1 < 8; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 8; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 96; ++ax3_1) {
        int32_t cse_var_6 = (((ax1_1 * 768) + (ax2_1 * 96)) + ax3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_6] = (((int32_t*)DepthwiseConv2d_let)[cse_var_6] + ((int32_t*)fused_nn_conv2d_subtract_constant_15_let)[ax3_1]);
      }
    }
  }
  for (int32_t i1_1 = 0; i1_1 < 8; ++i1_1) {
    for (int32_t i2_1 = 0; i2_1 < 8; ++i2_1) {
      for (int32_t i3_1 = 0; i3_1 < 96; ++i3_1) {
        int32_t cse_var_7 = (((i1_1 * 768) + (i2_1 * 96)) + i3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_7] = ((int32_t)(((((int64_t)((int32_t*)DepthwiseConv2d_let)[cse_var_7]) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_45_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_47_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_47_let)[i3_1] + 31))));
      }
    }
  }
  for (int32_t ax1_2 = 0; ax1_2 < 8; ++ax1_2) {
    for (int32_t ax2_2 = 0; ax2_2 < 8; ++ax2_2) {
      for (int32_t ax3_2 = 0; ax3_2 < 96; ++ax3_2) {
        int32_t cse_var_8 = (((ax1_2 * 768) + (ax2_2 * 96)) + ax3_2);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_8] = (((int32_t*)DepthwiseConv2d_let)[cse_var_8] - 128);
      }
    }
  }
  for (int32_t i1_2 = 0; i1_2 < 8; ++i1_2) {
    for (int32_t i2_2 = 0; i2_2 < 8; ++i2_2) {
      for (int32_t i3_2 = 0; i3_2 < 96; ++i3_2) {
        int32_t cse_var_9 = (((i1_2 * 768) + (i2_2 * 96)) + i3_2);
        int32_t v_ = ((int32_t*)DepthwiseConv2d_let)[cse_var_9];
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_9] = ((v__1) > (-128) ? (v__1) : (-128));
      }
    }
  }
  for (int32_t ax1_3 = 0; ax1_3 < 8; ++ax1_3) {
    for (int32_t ax2_3 = 0; ax2_3 < 8; ++ax2_3) {
      for (int32_t ax3_3 = 0; ax3_3 < 96; ++ax3_3) {
        int32_t cse_var_10 = (((ax1_3 * 768) + (ax2_3 * 96)) + ax3_3);
        T_cast[cse_var_10] = ((int8_t)((int32_t*)DepthwiseConv2d_let)[cse_var_10]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_15(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_66_var, uint8_t* global_workspace_67_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED v8 HW-REQUANT] 1x1 conv: 96->16 channels, 64 spatial positions
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_66_var[646208]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_66_var[646400]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_66_var[647296]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_66_var[645760]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_66_var[506032]);

  // Safe copy: TVM may alias input/output workspace buffers
  static int8_t _inp[6144];
  for (int32_t _i = 0; _i < 6144; _i++) _inp[_i] = p0[_i];

  // Set per-layer zero-point once. The helper is provided by conv_accel.h.
  accel_set_output_zp(-5);

  for (int32_t tile = 0; tile < 1; tile++) {
    int32_t oc_base = tile * 16;
    int32_t oc_count = 16;
    if (oc_base + oc_count > 16) oc_count = 16 - oc_base;

    // Pack weights for this tile (relayout from [rc][oc] to [oc][rc])
    static int8_t rw[1536];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      for (int32_t rc = 0; rc < 96; rc++)
        rw[oc * 96 + rc] = weights[rc * 16 + oc_base + oc];
    }
    accel_spad_write(0x060, rw, oc_count * 96);

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
    accel_spad_write(0x6A0, (int8_t*)params, oc_count * 16);

    for (int32_t sp = 0; sp < 64; sp++) {
      accel_spad_write(0x000, &_inp[sp * 96], 96);
      hw_multi_dot_requant(0x000, 0x060, 0x660,
                           0x6A0, 96, oc_count);
      accel_unpack_i8_outputs(&T_cast[(sp * 16) + oc_base],
                              0x660, oc_count);
    }
  }
  return 0;

#else

  void* fused_nn_conv2d_subtract_add_constant_50_let = (&(global_const_workspace_66_var[646208]));
  void* fused_nn_conv2d_subtract_add_constant_49_let = (&(global_const_workspace_66_var[646336]));
  void* fused_nn_conv2d_subtract_add_constant_48_let = (&(global_const_workspace_66_var[646400]));
  void* fused_nn_conv2d_constant_16_let = (&(global_const_workspace_66_var[647296]));
  void* fused_nn_conv2d_subtract_constant_16_let = (&(global_const_workspace_66_var[645760]));
  void* fused_constant_20_let = (&(global_const_workspace_66_var[506032]));
  void* pad_temp_let = (&(global_workspace_67_var[0]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 8; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 8; ++i2) {
      for (int32_t i3 = 0; i3 < 96; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 768) + (i2 * 96)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 64; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_67_var[36224]));
    for (int32_t ax3 = 0; ax3 < 16; ++ax3) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 96; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 96) + rc)]) * ((int32_t)((int8_t*)fused_constant_20_let)[((rc * 16) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_16_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_16_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_48_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_50_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_50_let)[ax3] + 31)))) - 5;
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
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_16(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_70_var, uint8_t* global_workspace_71_var) {
  void* fused_nn_conv2d_subtract_add_constant_53_let = (&(global_const_workspace_70_var[640640]));
  void* fused_nn_conv2d_subtract_add_constant_52_let = (&(global_const_workspace_70_var[640768]));
  void* fused_nn_conv2d_subtract_add_constant_51_let = (&(global_const_workspace_70_var[640896]));
  void* fused_nn_conv2d_constant_17_let = (&(global_const_workspace_70_var[642176]));
  void* fused_nn_conv2d_subtract_constant_17_let = (&(global_const_workspace_70_var[640128]));
  void* fused_constant_21_let = (&(global_const_workspace_70_var[448640]));
  void* pad_temp_let = (&(global_workspace_71_var[12544]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 10; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 10; ++i2) {
      for (int32_t i3 = 0; i3 < 16; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 160) + (i2 * 16)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 64; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_71_var[36224]));
    for (int32_t ax3 = 0; ax3 < 32; ++ax3) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t ry = 0; ry < 3; ++ry) {
        for (int32_t rx = 0; rx < 3; ++rx) {
          for (int32_t rc = 0; rc < 16; ++rc) {
            ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((((((ax0_ax1_fused_ax2_fused >> 3) * 160) + (ry * 160)) + (rx * 16)) + ((ax0_ax1_fused_ax2_fused & 7) * 16)) + rc)]) * ((int32_t)((int8_t*)fused_constant_21_let)[((((ry * 1536) + (rx * 512)) + (rc * 32)) + ax3)])));
          }
        }
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_17_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_17_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_51_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_53_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_53_let)[ax3] + 31)))) - 128;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_cast[((ax0_ax1_fused_ax2_fused * 32) + ax3)] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_17(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_90_var, uint8_t* global_workspace_91_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED v8 HW-REQUANT] 1x1 conv: 16->96 channels, 64 spatial positions
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_90_var[618960]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_90_var[619728]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_90_var[625104]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_90_var[615888]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_90_var[504496]);

  // Safe copy: TVM may alias input/output workspace buffers
  static int8_t _inp[1024];
  for (int32_t _i = 0; _i < 1024; _i++) _inp[_i] = p0[_i];

  // Set per-layer zero-point once. The helper is provided by conv_accel.h.
  accel_set_output_zp(-128);

  for (int32_t tile = 0; tile < 1; tile++) {
    int32_t oc_base = tile * 96;
    int32_t oc_count = 96;
    if (oc_base + oc_count > 96) oc_count = 96 - oc_base;

    // Pack weights for this tile (relayout from [rc][oc] to [oc][rc])
    static int8_t rw[1536];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      for (int32_t rc = 0; rc < 16; rc++)
        rw[oc * 16 + rc] = weights[rc * 96 + oc_base + oc];
    }
    accel_spad_write(0x010, rw, oc_count * 16);

    // Pack params for this tile: 16 bytes per OC.
    //   word 0: scale (high 32) and bias (low 32)
    //   word 1: zero  (high 32) and shift (low 32)
    static int32_t params[96 * 4];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      int32_t ax3 = oc_base + oc;
      params[oc*4 + 0] = (conv_sub[ax3] - conv_const[ax3]);         // bias
      params[oc*4 + 1] = quant_scale[ax3];      // scale
      params[oc*4 + 2] = quant_shift[ax3] + 31; // shift
      params[oc*4 + 3] = 0;                     // reserved
    }
    accel_spad_write(0x790, (int8_t*)params, oc_count * 16);

    for (int32_t sp = 0; sp < 64; sp++) {
      accel_spad_write(0x000, &_inp[sp * 16], 16);
      hw_multi_dot_requant(0x000, 0x010, 0x610,
                           0x790, 16, oc_count);
      accel_unpack_i8_outputs(&T_cast[(sp * 96) + oc_base],
                              0x610, oc_count);
    }
  }
  return 0;

#else

  void* fused_nn_conv2d_subtract_add_constant_59_let = (&(global_const_workspace_90_var[618960]));
  void* fused_nn_conv2d_subtract_add_constant_58_let = (&(global_const_workspace_90_var[619344]));
  void* fused_nn_conv2d_subtract_add_constant_57_let = (&(global_const_workspace_90_var[619728]));
  void* fused_nn_conv2d_constant_19_let = (&(global_const_workspace_90_var[625104]));
  void* fused_nn_conv2d_subtract_constant_19_let = (&(global_const_workspace_90_var[615888]));
  void* fused_constant_27_let = (&(global_const_workspace_90_var[504496]));
  void* pad_temp_let = (&(global_workspace_91_var[37248]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 8; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 8; ++i2) {
      for (int32_t i3 = 0; i3 < 16; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 128) + (i2 * 16)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 64; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_91_var[38272]));
    for (int32_t ax3 = 0; ax3 < 96; ++ax3) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 16; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 16) + rc)]) * ((int32_t)((int8_t*)fused_constant_27_let)[((rc * 96) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_19_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_19_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_57_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_59_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_59_let)[ax3] + 31)))) - 128;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_cast[((ax0_ax1_fused_ax2_fused * 96) + ax3)] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
    }
  }
  return 0;

#endif
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_18(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_94_var, uint8_t* global_workspace_95_var) {
  void* fused_nn_conv2d_subtract_add_constant_62_let = (&(global_const_workspace_94_var[617808]));
  void* fused_nn_conv2d_subtract_add_constant_61_let = (&(global_const_workspace_94_var[618192]));
  void* fused_nn_conv2d_subtract_add_constant_60_let = (&(global_const_workspace_94_var[618576]));
  void* fused_nn_conv2d_subtract_constant_20_let = (&(global_const_workspace_94_var[615504]));
  void* fused_nn_conv2d_constant_20_let = (&(global_const_workspace_94_var[624720]));
  void* fused_constant_28_let = (&(global_const_workspace_94_var[556336]));
  void* PaddedInput_let = (&(global_workspace_95_var[7776]));
  void* DepthwiseConv2d_let = (&(global_workspace_95_var[15552]));
  for (int32_t i1 = 0; i1 < 9; ++i1) {
    for (int32_t i2 = 0; i2 < 9; ++i2) {
      for (int32_t i3 = 0; i3 < 96; ++i3) {
        int32_t cse_var_1 = (((i1 * 864) + (i2 * 96)) + i3);
        ((int8_t*)PaddedInput_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t i = 0; i < 4; ++i) {
    for (int32_t j = 0; j < 4; ++j) {
      for (int32_t c = 0; c < 96; ++c) {
        ((int32_t*)DepthwiseConv2d_let)[(((i * 384) + (j * 96)) + c)] = 0;
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            int32_t cse_var_3 = (dj * 96);
            int32_t cse_var_2 = (((i * 384) + (j * 96)) + c);
            ((int32_t*)DepthwiseConv2d_let)[cse_var_2] = (((int32_t*)DepthwiseConv2d_let)[cse_var_2] + (((int32_t)((int8_t*)PaddedInput_let)[(((((i * 1728) + (di * 864)) + (j * 192)) + cse_var_3) + c)]) * ((int32_t)((int8_t*)fused_constant_28_let)[(((di * 288) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 4; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 4; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 96; ++ax3) {
        int32_t cse_var_4 = (((ax1 * 384) + (ax2 * 96)) + ax3);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_4] = (((int32_t*)DepthwiseConv2d_let)[cse_var_4] - ((int32_t*)fused_nn_conv2d_constant_20_let)[ax3]);
      }
    }
  }
  for (int32_t ax1_1 = 0; ax1_1 < 4; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 4; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 96; ++ax3_1) {
        int32_t cse_var_5 = (((ax1_1 * 384) + (ax2_1 * 96)) + ax3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_5] = (((int32_t*)DepthwiseConv2d_let)[cse_var_5] + ((int32_t*)fused_nn_conv2d_subtract_constant_20_let)[ax3_1]);
      }
    }
  }
  for (int32_t i1_1 = 0; i1_1 < 4; ++i1_1) {
    for (int32_t i2_1 = 0; i2_1 < 4; ++i2_1) {
      for (int32_t i3_1 = 0; i3_1 < 96; ++i3_1) {
        int32_t cse_var_6 = (((i1_1 * 384) + (i2_1 * 96)) + i3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_6] = ((int32_t)(((((int64_t)((int32_t*)DepthwiseConv2d_let)[cse_var_6]) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_60_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_62_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_62_let)[i3_1] + 31))));
      }
    }
  }
  for (int32_t ax1_2 = 0; ax1_2 < 4; ++ax1_2) {
    for (int32_t ax2_2 = 0; ax2_2 < 4; ++ax2_2) {
      for (int32_t ax3_2 = 0; ax3_2 < 96; ++ax3_2) {
        int32_t cse_var_7 = (((ax1_2 * 384) + (ax2_2 * 96)) + ax3_2);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_7] = (((int32_t*)DepthwiseConv2d_let)[cse_var_7] - 128);
      }
    }
  }
  for (int32_t i1_2 = 0; i1_2 < 4; ++i1_2) {
    for (int32_t i2_2 = 0; i2_2 < 4; ++i2_2) {
      for (int32_t i3_2 = 0; i3_2 < 96; ++i3_2) {
        int32_t cse_var_8 = (((i1_2 * 384) + (i2_2 * 96)) + i3_2);
        int32_t v_ = ((int32_t*)DepthwiseConv2d_let)[cse_var_8];
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_8] = ((v__1) > (-128) ? (v__1) : (-128));
      }
    }
  }
  for (int32_t ax1_3 = 0; ax1_3 < 4; ++ax1_3) {
    for (int32_t ax2_3 = 0; ax2_3 < 4; ++ax2_3) {
      for (int32_t ax3_3 = 0; ax3_3 < 96; ++ax3_3) {
        int32_t cse_var_9 = (((ax1_3 * 384) + (ax2_3 * 96)) + ax3_3);
        T_cast[cse_var_9] = ((int8_t)((int32_t*)DepthwiseConv2d_let)[cse_var_9]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_19(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_96_var, uint8_t* global_workspace_97_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED v8 HW-REQUANT] 1x1 conv: 96->24 channels, 16 spatial positions
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_96_var[643808]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_96_var[644000]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_96_var[644096]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_96_var[643712]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_96_var[492912]);

  // Safe copy: TVM may alias input/output workspace buffers
  static int8_t _inp[1536];
  for (int32_t _i = 0; _i < 1536; _i++) _inp[_i] = p0[_i];

  // Set per-layer zero-point once. The helper is provided by conv_accel.h.
  accel_set_output_zp(10);

  for (int32_t tile = 0; tile < 1; tile++) {
    int32_t oc_base = tile * 24;
    int32_t oc_count = 24;
    if (oc_base + oc_count > 24) oc_count = 24 - oc_base;

    // Pack weights for this tile (relayout from [rc][oc] to [oc][rc])
    static int8_t rw[2304];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      for (int32_t rc = 0; rc < 96; rc++)
        rw[oc * 96 + rc] = weights[rc * 24 + oc_base + oc];
    }
    accel_spad_write(0x060, rw, oc_count * 96);

    // Pack params for this tile: 16 bytes per OC.
    //   word 0: scale (high 32) and bias (low 32)
    //   word 1: zero  (high 32) and shift (low 32)
    static int32_t params[24 * 4];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      int32_t ax3 = oc_base + oc;
      params[oc*4 + 0] = (conv_sub[ax3] - conv_const[ax3]);         // bias
      params[oc*4 + 1] = quant_scale[ax3];      // scale
      params[oc*4 + 2] = quant_shift[ax3] + 31; // shift
      params[oc*4 + 3] = 0;                     // reserved
    }
    accel_spad_write(0x9C0, (int8_t*)params, oc_count * 16);

    for (int32_t sp = 0; sp < 16; sp++) {
      accel_spad_write(0x000, &_inp[sp * 96], 96);
      hw_multi_dot_requant(0x000, 0x060, 0x960,
                           0x9C0, 96, oc_count);
      accel_unpack_i8_outputs(&T_cast[(sp * 24) + oc_base],
                              0x960, oc_count);
    }
  }
  return 0;

#else

  void* fused_nn_conv2d_subtract_add_constant_65_let = (&(global_const_workspace_96_var[643808]));
  void* fused_nn_conv2d_subtract_add_constant_64_let = (&(global_const_workspace_96_var[643904]));
  void* fused_nn_conv2d_subtract_add_constant_63_let = (&(global_const_workspace_96_var[644000]));
  void* fused_nn_conv2d_constant_21_let = (&(global_const_workspace_96_var[644096]));
  void* fused_nn_conv2d_subtract_constant_21_let = (&(global_const_workspace_96_var[643712]));
  void* fused_constant_29_let = (&(global_const_workspace_96_var[492912]));
  void* pad_temp_let = (&(global_workspace_97_var[0]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 4; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 4; ++i2) {
      for (int32_t i3 = 0; i3 < 96; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 384) + (i2 * 96)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 16; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_97_var[15552]));
    for (int32_t ax3 = 0; ax3 < 24; ++ax3) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 96; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 96) + rc)]) * ((int32_t)((int8_t*)fused_constant_29_let)[((rc * 24) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_21_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_21_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_63_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_65_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_65_let)[ax3] + 31)))) + 10;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_cast[((ax0_ax1_fused_ax2_fused * 24) + ax3)] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
    }
  }
  return 0;

#endif
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_2(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_10_var, uint8_t* global_workspace_11_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED v8 HW-REQUANT] 1x1 conv: 16->8 channels, 1024 spatial positions
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_10_var[648320]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_10_var[648384]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_10_var[648544]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_10_var[648288]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_10_var[642304]);

  // Safe copy: TVM may alias input/output workspace buffers
  static int8_t _inp[16384];
  for (int32_t _i = 0; _i < 16384; _i++) _inp[_i] = p0[_i];

  // Set per-layer zero-point once. The helper is provided by conv_accel.h.
  accel_set_output_zp(-42);

  for (int32_t tile = 0; tile < 1; tile++) {
    int32_t oc_base = tile * 8;
    int32_t oc_count = 8;
    if (oc_base + oc_count > 8) oc_count = 8 - oc_base;

    // Pack weights for this tile (relayout from [rc][oc] to [oc][rc])
    static int8_t rw[128];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      for (int32_t rc = 0; rc < 16; rc++)
        rw[oc * 16 + rc] = weights[rc * 8 + oc_base + oc];
    }
    accel_spad_write(0x010, rw, oc_count * 16);

    // Pack params for this tile: 16 bytes per OC.
    //   word 0: scale (high 32) and bias (low 32)
    //   word 1: zero  (high 32) and shift (low 32)
    static int32_t params[8 * 4];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      int32_t ax3 = oc_base + oc;
      params[oc*4 + 0] = (conv_sub[ax3] - conv_const[ax3]);         // bias
      params[oc*4 + 1] = quant_scale[ax3];      // scale
      params[oc*4 + 2] = quant_shift[ax3] + 31; // shift
      params[oc*4 + 3] = 0;                     // reserved
    }
    accel_spad_write(0x0B0, (int8_t*)params, oc_count * 16);

    for (int32_t sp = 0; sp < 1024; sp++) {
      accel_spad_write(0x000, &_inp[sp * 16], 16);
      hw_multi_dot_requant(0x000, 0x010, 0x090,
                           0x0B0, 16, oc_count);
      accel_unpack_i8_outputs(&T_cast[(sp * 8) + oc_base],
                              0x090, oc_count);
    }
  }
  return 0;

#else

  void* fused_nn_conv2d_subtract_add_constant_8_let = (&(global_const_workspace_10_var[648320]));
  void* fused_nn_conv2d_subtract_add_constant_7_let = (&(global_const_workspace_10_var[648352]));
  void* fused_nn_conv2d_subtract_add_constant_6_let = (&(global_const_workspace_10_var[648384]));
  void* fused_nn_conv2d_constant_2_let = (&(global_const_workspace_10_var[648544]));
  void* fused_nn_conv2d_subtract_constant_2_let = (&(global_const_workspace_10_var[648288]));
  void* fused_constant_2_let = (&(global_const_workspace_10_var[642304]));
  void* pad_temp_let = (&(global_workspace_11_var[0]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 32; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 32; ++i2) {
      for (int32_t i3 = 0; i3 < 16; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 512) + (i2 * 16)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 1024; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_11_var[24576]));
    for (int32_t ax3 = 0; ax3 < 8; ++ax3) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 16; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 16) + rc)]) * ((int32_t)((int8_t*)fused_constant_2_let)[((rc * 8) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_2_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_2_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_6_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_8_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_8_let)[ax3] + 31)))) - 42;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_cast[((ax0_ax1_fused_ax2_fused * 8) + ax3)] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
    }
  }
  return 0;

#endif
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_20(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_98_var, uint8_t* global_workspace_99_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED v8 HW-REQUANT] 1x1 conv: 24->144 channels, 16 spatial positions
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_98_var[602128]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_98_var[603280]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_98_var[607888]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_98_var[589456]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_98_var[467712]);

  // Safe copy: TVM may alias input/output workspace buffers
  static int8_t _inp[384];
  for (int32_t _i = 0; _i < 384; _i++) _inp[_i] = p0[_i];

  // Set per-layer zero-point once. The helper is provided by conv_accel.h.
  accel_set_output_zp(-128);

  for (int32_t tile = 0; tile < 1; tile++) {
    int32_t oc_base = tile * 144;
    int32_t oc_count = 144;
    if (oc_base + oc_count > 144) oc_count = 144 - oc_base;

    // Pack weights for this tile (relayout from [rc][oc] to [oc][rc])
    static int8_t rw[3456];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      for (int32_t rc = 0; rc < 24; rc++)
        rw[oc * 24 + rc] = weights[rc * 144 + oc_base + oc];
    }
    accel_spad_write(0x018, rw, oc_count * 24);

    // Pack params for this tile: 16 bytes per OC.
    //   word 0: scale (high 32) and bias (low 32)
    //   word 1: zero  (high 32) and shift (low 32)
    static int32_t params[144 * 4];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      int32_t ax3 = oc_base + oc;
      params[oc*4 + 0] = (conv_sub[ax3] - conv_const[ax3]);         // bias
      params[oc*4 + 1] = quant_scale[ax3];      // scale
      params[oc*4 + 2] = quant_shift[ax3] + 31; // shift
      params[oc*4 + 3] = 0;                     // reserved
    }
    accel_spad_write(0xFD8, (int8_t*)params, oc_count * 16);

    for (int32_t sp = 0; sp < 16; sp++) {
      accel_spad_write(0x000, &_inp[sp * 24], 24);
      hw_multi_dot_requant(0x000, 0x018, 0xD98,
                           0xFD8, 24, oc_count);
      accel_unpack_i8_outputs(&T_cast[(sp * 144) + oc_base],
                              0xD98, oc_count);
    }
  }
  return 0;

#else

  void* fused_nn_conv2d_subtract_add_constant_68_let = (&(global_const_workspace_98_var[602128]));
  void* fused_nn_conv2d_subtract_add_constant_67_let = (&(global_const_workspace_98_var[602704]));
  void* fused_nn_conv2d_subtract_add_constant_66_let = (&(global_const_workspace_98_var[603280]));
  void* fused_nn_conv2d_constant_22_let = (&(global_const_workspace_98_var[607888]));
  void* fused_nn_conv2d_subtract_constant_22_let = (&(global_const_workspace_98_var[589456]));
  void* fused_constant_30_let = (&(global_const_workspace_98_var[467712]));
  void* pad_temp_let = (&(global_workspace_99_var[15552]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 4; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 4; ++i2) {
      for (int32_t i3 = 0; i3 < 24; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 96) + (i2 * 24)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 16; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_99_var[15936]));
    for (int32_t ax3 = 0; ax3 < 144; ++ax3) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 24; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 24) + rc)]) * ((int32_t)((int8_t*)fused_constant_30_let)[((rc * 144) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_22_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_22_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_66_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_68_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_68_let)[ax3] + 31)))) - 128;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_cast[((ax0_ax1_fused_ax2_fused * 144) + ax3)] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
    }
  }
  return 0;

#endif
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_21(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_102_var, uint8_t* global_workspace_103_var) {
  void* fused_nn_conv2d_subtract_add_constant_71_let = (&(global_const_workspace_102_var[600400]));
  void* fused_nn_conv2d_subtract_add_constant_70_let = (&(global_const_workspace_102_var[600976]));
  void* fused_nn_conv2d_subtract_add_constant_69_let = (&(global_const_workspace_102_var[601552]));
  void* fused_nn_conv2d_subtract_constant_23_let = (&(global_const_workspace_102_var[588880]));
  void* fused_nn_conv2d_constant_23_let = (&(global_const_workspace_102_var[607312]));
  void* fused_constant_31_let = (&(global_const_workspace_102_var[555040]));
  void* PaddedInput_let = (&(global_workspace_103_var[9216]));
  void* DepthwiseConv2d_let = (&(global_workspace_103_var[0]));
  for (int32_t i1 = 0; i1 < 6; ++i1) {
    for (int32_t i2 = 0; i2 < 6; ++i2) {
      for (int32_t i3 = 0; i3 < 144; ++i3) {
        int32_t cse_var_1 = (((i1 * 864) + (i2 * 144)) + i3);
        ((int8_t*)PaddedInput_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t i = 0; i < 4; ++i) {
    for (int32_t j = 0; j < 4; ++j) {
      for (int32_t c = 0; c < 144; ++c) {
        ((int32_t*)DepthwiseConv2d_let)[(((i * 576) + (j * 144)) + c)] = 0;
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            int32_t cse_var_4 = (j * 144);
            int32_t cse_var_3 = (dj * 144);
            int32_t cse_var_2 = (((i * 576) + cse_var_4) + c);
            ((int32_t*)DepthwiseConv2d_let)[cse_var_2] = (((int32_t*)DepthwiseConv2d_let)[cse_var_2] + (((int32_t)((int8_t*)PaddedInput_let)[(((((i * 864) + (di * 864)) + cse_var_4) + cse_var_3) + c)]) * ((int32_t)((int8_t*)fused_constant_31_let)[(((di * 432) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 4; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 4; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 144; ++ax3) {
        int32_t cse_var_5 = (((ax1 * 576) + (ax2 * 144)) + ax3);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_5] = (((int32_t*)DepthwiseConv2d_let)[cse_var_5] - ((int32_t*)fused_nn_conv2d_constant_23_let)[ax3]);
      }
    }
  }
  for (int32_t ax1_1 = 0; ax1_1 < 4; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 4; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 144; ++ax3_1) {
        int32_t cse_var_6 = (((ax1_1 * 576) + (ax2_1 * 144)) + ax3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_6] = (((int32_t*)DepthwiseConv2d_let)[cse_var_6] + ((int32_t*)fused_nn_conv2d_subtract_constant_23_let)[ax3_1]);
      }
    }
  }
  for (int32_t i1_1 = 0; i1_1 < 4; ++i1_1) {
    for (int32_t i2_1 = 0; i2_1 < 4; ++i2_1) {
      for (int32_t i3_1 = 0; i3_1 < 144; ++i3_1) {
        int32_t cse_var_7 = (((i1_1 * 576) + (i2_1 * 144)) + i3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_7] = ((int32_t)(((((int64_t)((int32_t*)DepthwiseConv2d_let)[cse_var_7]) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_69_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_71_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_71_let)[i3_1] + 31))));
      }
    }
  }
  for (int32_t ax1_2 = 0; ax1_2 < 4; ++ax1_2) {
    for (int32_t ax2_2 = 0; ax2_2 < 4; ++ax2_2) {
      for (int32_t ax3_2 = 0; ax3_2 < 144; ++ax3_2) {
        int32_t cse_var_8 = (((ax1_2 * 576) + (ax2_2 * 144)) + ax3_2);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_8] = (((int32_t*)DepthwiseConv2d_let)[cse_var_8] - 128);
      }
    }
  }
  for (int32_t i1_2 = 0; i1_2 < 4; ++i1_2) {
    for (int32_t i2_2 = 0; i2_2 < 4; ++i2_2) {
      for (int32_t i3_2 = 0; i3_2 < 144; ++i3_2) {
        int32_t cse_var_9 = (((i1_2 * 576) + (i2_2 * 144)) + i3_2);
        int32_t v_ = ((int32_t*)DepthwiseConv2d_let)[cse_var_9];
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_9] = ((v__1) > (-128) ? (v__1) : (-128));
      }
    }
  }
  for (int32_t ax1_3 = 0; ax1_3 < 4; ++ax1_3) {
    for (int32_t ax2_3 = 0; ax2_3 < 4; ++ax2_3) {
      for (int32_t ax3_3 = 0; ax3_3 < 144; ++ax3_3) {
        int32_t cse_var_10 = (((ax1_3 * 576) + (ax2_3 * 144)) + ax3_3);
        T_cast[cse_var_10] = ((int8_t)((int32_t*)DepthwiseConv2d_let)[cse_var_10]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_22(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_106_var, uint8_t* global_workspace_107_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED v8 HW-REQUANT] 1x1 conv: 24->144 channels, 16 spatial positions
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_106_var[598672]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_106_var[599824]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_106_var[606736]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_106_var[588304]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_106_var[464256]);

  // Safe copy: TVM may alias input/output workspace buffers
  static int8_t _inp[384];
  for (int32_t _i = 0; _i < 384; _i++) _inp[_i] = p0[_i];

  // Set per-layer zero-point once. The helper is provided by conv_accel.h.
  accel_set_output_zp(-128);

  for (int32_t tile = 0; tile < 1; tile++) {
    int32_t oc_base = tile * 144;
    int32_t oc_count = 144;
    if (oc_base + oc_count > 144) oc_count = 144 - oc_base;

    // Pack weights for this tile (relayout from [rc][oc] to [oc][rc])
    static int8_t rw[3456];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      for (int32_t rc = 0; rc < 24; rc++)
        rw[oc * 24 + rc] = weights[rc * 144 + oc_base + oc];
    }
    accel_spad_write(0x018, rw, oc_count * 24);

    // Pack params for this tile: 16 bytes per OC.
    //   word 0: scale (high 32) and bias (low 32)
    //   word 1: zero  (high 32) and shift (low 32)
    static int32_t params[144 * 4];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      int32_t ax3 = oc_base + oc;
      params[oc*4 + 0] = (conv_sub[ax3] - conv_const[ax3]);         // bias
      params[oc*4 + 1] = quant_scale[ax3];      // scale
      params[oc*4 + 2] = quant_shift[ax3] + 31; // shift
      params[oc*4 + 3] = 0;                     // reserved
    }
    accel_spad_write(0xFD8, (int8_t*)params, oc_count * 16);

    for (int32_t sp = 0; sp < 16; sp++) {
      accel_spad_write(0x000, &_inp[sp * 24], 24);
      hw_multi_dot_requant(0x000, 0x018, 0xD98,
                           0xFD8, 24, oc_count);
      accel_unpack_i8_outputs(&T_cast[(sp * 144) + oc_base],
                              0xD98, oc_count);
    }
  }
  return 0;

#else

  void* fused_nn_conv2d_subtract_add_constant_74_let = (&(global_const_workspace_106_var[598672]));
  void* fused_nn_conv2d_subtract_add_constant_73_let = (&(global_const_workspace_106_var[599248]));
  void* fused_nn_conv2d_subtract_add_constant_72_let = (&(global_const_workspace_106_var[599824]));
  void* fused_nn_conv2d_constant_24_let = (&(global_const_workspace_106_var[606736]));
  void* fused_nn_conv2d_subtract_constant_24_let = (&(global_const_workspace_106_var[588304]));
  void* fused_constant_32_let = (&(global_const_workspace_106_var[464256]));
  void* pad_temp_let = (&(global_workspace_107_var[15168]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 4; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 4; ++i2) {
      for (int32_t i3 = 0; i3 < 24; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 96) + (i2 * 24)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 16; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_107_var[15552]));
    for (int32_t ax3 = 0; ax3 < 144; ++ax3) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 24; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 24) + rc)]) * ((int32_t)((int8_t*)fused_constant_32_let)[((rc * 144) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_24_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_24_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_72_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_74_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_74_let)[ax3] + 31)))) - 128;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_cast[((ax0_ax1_fused_ax2_fused * 144) + ax3)] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
    }
  }
  return 0;

#endif
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_23(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_108_var, uint8_t* global_workspace_109_var) {
  void* fused_nn_conv2d_subtract_add_constant_77_let = (&(global_const_workspace_108_var[596944]));
  void* fused_nn_conv2d_subtract_add_constant_76_let = (&(global_const_workspace_108_var[597520]));
  void* fused_nn_conv2d_subtract_add_constant_75_let = (&(global_const_workspace_108_var[598096]));
  void* fused_nn_conv2d_subtract_constant_25_let = (&(global_const_workspace_108_var[587728]));
  void* fused_nn_conv2d_constant_25_let = (&(global_const_workspace_108_var[606160]));
  void* fused_constant_33_let = (&(global_const_workspace_108_var[553744]));
  void* PaddedInput_let = (&(global_workspace_109_var[9216]));
  void* DepthwiseConv2d_let = (&(global_workspace_109_var[0]));
  for (int32_t i1 = 0; i1 < 6; ++i1) {
    for (int32_t i2 = 0; i2 < 6; ++i2) {
      for (int32_t i3 = 0; i3 < 144; ++i3) {
        int32_t cse_var_1 = (((i1 * 864) + (i2 * 144)) + i3);
        ((int8_t*)PaddedInput_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t i = 0; i < 4; ++i) {
    for (int32_t j = 0; j < 4; ++j) {
      for (int32_t c = 0; c < 144; ++c) {
        ((int32_t*)DepthwiseConv2d_let)[(((i * 576) + (j * 144)) + c)] = 0;
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            int32_t cse_var_4 = (j * 144);
            int32_t cse_var_3 = (dj * 144);
            int32_t cse_var_2 = (((i * 576) + cse_var_4) + c);
            ((int32_t*)DepthwiseConv2d_let)[cse_var_2] = (((int32_t*)DepthwiseConv2d_let)[cse_var_2] + (((int32_t)((int8_t*)PaddedInput_let)[(((((i * 864) + (di * 864)) + cse_var_4) + cse_var_3) + c)]) * ((int32_t)((int8_t*)fused_constant_33_let)[(((di * 432) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 4; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 4; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 144; ++ax3) {
        int32_t cse_var_5 = (((ax1 * 576) + (ax2 * 144)) + ax3);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_5] = (((int32_t*)DepthwiseConv2d_let)[cse_var_5] - ((int32_t*)fused_nn_conv2d_constant_25_let)[ax3]);
      }
    }
  }
  for (int32_t ax1_1 = 0; ax1_1 < 4; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 4; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 144; ++ax3_1) {
        int32_t cse_var_6 = (((ax1_1 * 576) + (ax2_1 * 144)) + ax3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_6] = (((int32_t*)DepthwiseConv2d_let)[cse_var_6] + ((int32_t*)fused_nn_conv2d_subtract_constant_25_let)[ax3_1]);
      }
    }
  }
  for (int32_t i1_1 = 0; i1_1 < 4; ++i1_1) {
    for (int32_t i2_1 = 0; i2_1 < 4; ++i2_1) {
      for (int32_t i3_1 = 0; i3_1 < 144; ++i3_1) {
        int32_t cse_var_7 = (((i1_1 * 576) + (i2_1 * 144)) + i3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_7] = ((int32_t)(((((int64_t)((int32_t*)DepthwiseConv2d_let)[cse_var_7]) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_75_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_77_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_77_let)[i3_1] + 31))));
      }
    }
  }
  for (int32_t ax1_2 = 0; ax1_2 < 4; ++ax1_2) {
    for (int32_t ax2_2 = 0; ax2_2 < 4; ++ax2_2) {
      for (int32_t ax3_2 = 0; ax3_2 < 144; ++ax3_2) {
        int32_t cse_var_8 = (((ax1_2 * 576) + (ax2_2 * 144)) + ax3_2);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_8] = (((int32_t*)DepthwiseConv2d_let)[cse_var_8] - 128);
      }
    }
  }
  for (int32_t i1_2 = 0; i1_2 < 4; ++i1_2) {
    for (int32_t i2_2 = 0; i2_2 < 4; ++i2_2) {
      for (int32_t i3_2 = 0; i3_2 < 144; ++i3_2) {
        int32_t cse_var_9 = (((i1_2 * 576) + (i2_2 * 144)) + i3_2);
        int32_t v_ = ((int32_t*)DepthwiseConv2d_let)[cse_var_9];
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_9] = ((v__1) > (-128) ? (v__1) : (-128));
      }
    }
  }
  for (int32_t ax1_3 = 0; ax1_3 < 4; ++ax1_3) {
    for (int32_t ax2_3 = 0; ax2_3 < 4; ++ax2_3) {
      for (int32_t ax3_3 = 0; ax3_3 < 144; ++ax3_3) {
        int32_t cse_var_10 = (((ax1_3 * 576) + (ax2_3 * 144)) + ax3_3);
        T_cast[cse_var_10] = ((int8_t)((int32_t*)DepthwiseConv2d_let)[cse_var_10]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_24(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_112_var, uint8_t* global_workspace_113_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED v8 HW-REQUANT] 1x1 conv: 24->144 channels, 16 spatial positions
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_112_var[595216]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_112_var[596368]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_112_var[605584]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_112_var[587152]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_112_var[460800]);

  // Safe copy: TVM may alias input/output workspace buffers
  static int8_t _inp[384];
  for (int32_t _i = 0; _i < 384; _i++) _inp[_i] = p0[_i];

  // Set per-layer zero-point once. The helper is provided by conv_accel.h.
  accel_set_output_zp(-128);

  for (int32_t tile = 0; tile < 1; tile++) {
    int32_t oc_base = tile * 144;
    int32_t oc_count = 144;
    if (oc_base + oc_count > 144) oc_count = 144 - oc_base;

    // Pack weights for this tile (relayout from [rc][oc] to [oc][rc])
    static int8_t rw[3456];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      for (int32_t rc = 0; rc < 24; rc++)
        rw[oc * 24 + rc] = weights[rc * 144 + oc_base + oc];
    }
    accel_spad_write(0x018, rw, oc_count * 24);

    // Pack params for this tile: 16 bytes per OC.
    //   word 0: scale (high 32) and bias (low 32)
    //   word 1: zero  (high 32) and shift (low 32)
    static int32_t params[144 * 4];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      int32_t ax3 = oc_base + oc;
      params[oc*4 + 0] = (conv_sub[ax3] - conv_const[ax3]);         // bias
      params[oc*4 + 1] = quant_scale[ax3];      // scale
      params[oc*4 + 2] = quant_shift[ax3] + 31; // shift
      params[oc*4 + 3] = 0;                     // reserved
    }
    accel_spad_write(0xFD8, (int8_t*)params, oc_count * 16);

    for (int32_t sp = 0; sp < 16; sp++) {
      accel_spad_write(0x000, &_inp[sp * 24], 24);
      hw_multi_dot_requant(0x000, 0x018, 0xD98,
                           0xFD8, 24, oc_count);
      accel_unpack_i8_outputs(&T_cast[(sp * 144) + oc_base],
                              0xD98, oc_count);
    }
  }
  return 0;

#else

  void* fused_nn_conv2d_subtract_add_constant_80_let = (&(global_const_workspace_112_var[595216]));
  void* fused_nn_conv2d_subtract_add_constant_79_let = (&(global_const_workspace_112_var[595792]));
  void* fused_nn_conv2d_subtract_add_constant_78_let = (&(global_const_workspace_112_var[596368]));
  void* fused_nn_conv2d_constant_26_let = (&(global_const_workspace_112_var[605584]));
  void* fused_nn_conv2d_subtract_constant_26_let = (&(global_const_workspace_112_var[587152]));
  void* fused_constant_34_let = (&(global_const_workspace_112_var[460800]));
  void* pad_temp_let = (&(global_workspace_113_var[14784]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 4; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 4; ++i2) {
      for (int32_t i3 = 0; i3 < 24; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 96) + (i2 * 24)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 16; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_113_var[15168]));
    for (int32_t ax3 = 0; ax3 < 144; ++ax3) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 24; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 24) + rc)]) * ((int32_t)((int8_t*)fused_constant_34_let)[((rc * 144) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_26_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_26_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_78_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_80_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_80_let)[ax3] + 31)))) - 128;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_cast[((ax0_ax1_fused_ax2_fused * 144) + ax3)] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
    }
  }
  return 0;

#endif
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_25(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_114_var, uint8_t* global_workspace_115_var) {
  void* fused_nn_conv2d_subtract_add_constant_83_let = (&(global_const_workspace_114_var[593488]));
  void* fused_nn_conv2d_subtract_add_constant_82_let = (&(global_const_workspace_114_var[594064]));
  void* fused_nn_conv2d_subtract_add_constant_81_let = (&(global_const_workspace_114_var[594640]));
  void* fused_nn_conv2d_subtract_constant_27_let = (&(global_const_workspace_114_var[586576]));
  void* fused_nn_conv2d_constant_27_let = (&(global_const_workspace_114_var[605008]));
  void* fused_constant_35_let = (&(global_const_workspace_114_var[552448]));
  void* PaddedInput_let = (&(global_workspace_115_var[9216]));
  void* DepthwiseConv2d_let = (&(global_workspace_115_var[0]));
  for (int32_t i1 = 0; i1 < 6; ++i1) {
    for (int32_t i2 = 0; i2 < 6; ++i2) {
      for (int32_t i3 = 0; i3 < 144; ++i3) {
        int32_t cse_var_1 = (((i1 * 864) + (i2 * 144)) + i3);
        ((int8_t*)PaddedInput_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t i = 0; i < 4; ++i) {
    for (int32_t j = 0; j < 4; ++j) {
      for (int32_t c = 0; c < 144; ++c) {
        ((int32_t*)DepthwiseConv2d_let)[(((i * 576) + (j * 144)) + c)] = 0;
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            int32_t cse_var_4 = (j * 144);
            int32_t cse_var_3 = (dj * 144);
            int32_t cse_var_2 = (((i * 576) + cse_var_4) + c);
            ((int32_t*)DepthwiseConv2d_let)[cse_var_2] = (((int32_t*)DepthwiseConv2d_let)[cse_var_2] + (((int32_t)((int8_t*)PaddedInput_let)[(((((i * 864) + (di * 864)) + cse_var_4) + cse_var_3) + c)]) * ((int32_t)((int8_t*)fused_constant_35_let)[(((di * 432) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 4; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 4; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 144; ++ax3) {
        int32_t cse_var_5 = (((ax1 * 576) + (ax2 * 144)) + ax3);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_5] = (((int32_t*)DepthwiseConv2d_let)[cse_var_5] - ((int32_t*)fused_nn_conv2d_constant_27_let)[ax3]);
      }
    }
  }
  for (int32_t ax1_1 = 0; ax1_1 < 4; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 4; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 144; ++ax3_1) {
        int32_t cse_var_6 = (((ax1_1 * 576) + (ax2_1 * 144)) + ax3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_6] = (((int32_t*)DepthwiseConv2d_let)[cse_var_6] + ((int32_t*)fused_nn_conv2d_subtract_constant_27_let)[ax3_1]);
      }
    }
  }
  for (int32_t i1_1 = 0; i1_1 < 4; ++i1_1) {
    for (int32_t i2_1 = 0; i2_1 < 4; ++i2_1) {
      for (int32_t i3_1 = 0; i3_1 < 144; ++i3_1) {
        int32_t cse_var_7 = (((i1_1 * 576) + (i2_1 * 144)) + i3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_7] = ((int32_t)(((((int64_t)((int32_t*)DepthwiseConv2d_let)[cse_var_7]) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_81_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_83_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_83_let)[i3_1] + 31))));
      }
    }
  }
  for (int32_t ax1_2 = 0; ax1_2 < 4; ++ax1_2) {
    for (int32_t ax2_2 = 0; ax2_2 < 4; ++ax2_2) {
      for (int32_t ax3_2 = 0; ax3_2 < 144; ++ax3_2) {
        int32_t cse_var_8 = (((ax1_2 * 576) + (ax2_2 * 144)) + ax3_2);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_8] = (((int32_t*)DepthwiseConv2d_let)[cse_var_8] - 128);
      }
    }
  }
  for (int32_t i1_2 = 0; i1_2 < 4; ++i1_2) {
    for (int32_t i2_2 = 0; i2_2 < 4; ++i2_2) {
      for (int32_t i3_2 = 0; i3_2 < 144; ++i3_2) {
        int32_t cse_var_9 = (((i1_2 * 576) + (i2_2 * 144)) + i3_2);
        int32_t v_ = ((int32_t*)DepthwiseConv2d_let)[cse_var_9];
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_9] = ((v__1) > (-128) ? (v__1) : (-128));
      }
    }
  }
  for (int32_t ax1_3 = 0; ax1_3 < 4; ++ax1_3) {
    for (int32_t ax2_3 = 0; ax2_3 < 4; ++ax2_3) {
      for (int32_t ax3_3 = 0; ax3_3 < 144; ++ax3_3) {
        int32_t cse_var_10 = (((ax1_3 * 576) + (ax2_3 * 144)) + ax3_3);
        T_cast[cse_var_10] = ((int8_t)((int32_t*)DepthwiseConv2d_let)[cse_var_10]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_26(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_118_var, uint8_t* global_workspace_119_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED v8 HW-REQUANT] 1x1 conv: 24->144 channels, 16 spatial positions
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_118_var[591760]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_118_var[592912]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_118_var[604432]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_118_var[586000]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_118_var[457344]);

  // Safe copy: TVM may alias input/output workspace buffers
  static int8_t _inp[384];
  for (int32_t _i = 0; _i < 384; _i++) _inp[_i] = p0[_i];

  // Set per-layer zero-point once. The helper is provided by conv_accel.h.
  accel_set_output_zp(-128);

  for (int32_t tile = 0; tile < 1; tile++) {
    int32_t oc_base = tile * 144;
    int32_t oc_count = 144;
    if (oc_base + oc_count > 144) oc_count = 144 - oc_base;

    // Pack weights for this tile (relayout from [rc][oc] to [oc][rc])
    static int8_t rw[3456];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      for (int32_t rc = 0; rc < 24; rc++)
        rw[oc * 24 + rc] = weights[rc * 144 + oc_base + oc];
    }
    accel_spad_write(0x018, rw, oc_count * 24);

    // Pack params for this tile: 16 bytes per OC.
    //   word 0: scale (high 32) and bias (low 32)
    //   word 1: zero  (high 32) and shift (low 32)
    static int32_t params[144 * 4];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      int32_t ax3 = oc_base + oc;
      params[oc*4 + 0] = (conv_sub[ax3] - conv_const[ax3]);         // bias
      params[oc*4 + 1] = quant_scale[ax3];      // scale
      params[oc*4 + 2] = quant_shift[ax3] + 31; // shift
      params[oc*4 + 3] = 0;                     // reserved
    }
    accel_spad_write(0xFD8, (int8_t*)params, oc_count * 16);

    for (int32_t sp = 0; sp < 16; sp++) {
      accel_spad_write(0x000, &_inp[sp * 24], 24);
      hw_multi_dot_requant(0x000, 0x018, 0xD98,
                           0xFD8, 24, oc_count);
      accel_unpack_i8_outputs(&T_cast[(sp * 144) + oc_base],
                              0xD98, oc_count);
    }
  }
  return 0;

#else

  void* fused_nn_conv2d_subtract_add_constant_86_let = (&(global_const_workspace_118_var[591760]));
  void* fused_nn_conv2d_subtract_add_constant_85_let = (&(global_const_workspace_118_var[592336]));
  void* fused_nn_conv2d_subtract_add_constant_84_let = (&(global_const_workspace_118_var[592912]));
  void* fused_nn_conv2d_constant_28_let = (&(global_const_workspace_118_var[604432]));
  void* fused_nn_conv2d_subtract_constant_28_let = (&(global_const_workspace_118_var[586000]));
  void* fused_constant_36_let = (&(global_const_workspace_118_var[457344]));
  void* pad_temp_let = (&(global_workspace_119_var[15168]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 4; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 4; ++i2) {
      for (int32_t i3 = 0; i3 < 24; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 96) + (i2 * 24)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 16; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_119_var[15552]));
    for (int32_t ax3 = 0; ax3 < 144; ++ax3) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 24; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 24) + rc)]) * ((int32_t)((int8_t*)fused_constant_36_let)[((rc * 144) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_28_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_28_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_84_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_86_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_86_let)[ax3] + 31)))) - 128;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_cast[((ax0_ax1_fused_ax2_fused * 144) + ax3)] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
    }
  }
  return 0;

#endif
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_27(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_122_var, uint8_t* global_workspace_123_var) {
  void* fused_nn_conv2d_subtract_add_constant_89_let = (&(global_const_workspace_122_var[590032]));
  void* fused_nn_conv2d_subtract_add_constant_88_let = (&(global_const_workspace_122_var[590608]));
  void* fused_nn_conv2d_subtract_add_constant_87_let = (&(global_const_workspace_122_var[591184]));
  void* fused_nn_conv2d_subtract_constant_29_let = (&(global_const_workspace_122_var[585424]));
  void* fused_nn_conv2d_constant_29_let = (&(global_const_workspace_122_var[603856]));
  void* fused_constant_37_let = (&(global_const_workspace_122_var[551152]));
  void* PaddedInput_let = (&(global_workspace_123_var[9216]));
  void* DepthwiseConv2d_let = (&(global_workspace_123_var[0]));
  for (int32_t i1 = 0; i1 < 6; ++i1) {
    for (int32_t i2 = 0; i2 < 6; ++i2) {
      for (int32_t i3 = 0; i3 < 144; ++i3) {
        int32_t cse_var_1 = (((i1 * 864) + (i2 * 144)) + i3);
        ((int8_t*)PaddedInput_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t i = 0; i < 4; ++i) {
    for (int32_t j = 0; j < 4; ++j) {
      for (int32_t c = 0; c < 144; ++c) {
        ((int32_t*)DepthwiseConv2d_let)[(((i * 576) + (j * 144)) + c)] = 0;
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            int32_t cse_var_4 = (j * 144);
            int32_t cse_var_3 = (dj * 144);
            int32_t cse_var_2 = (((i * 576) + cse_var_4) + c);
            ((int32_t*)DepthwiseConv2d_let)[cse_var_2] = (((int32_t*)DepthwiseConv2d_let)[cse_var_2] + (((int32_t)((int8_t*)PaddedInput_let)[(((((i * 864) + (di * 864)) + cse_var_4) + cse_var_3) + c)]) * ((int32_t)((int8_t*)fused_constant_37_let)[(((di * 432) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 4; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 4; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 144; ++ax3) {
        int32_t cse_var_5 = (((ax1 * 576) + (ax2 * 144)) + ax3);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_5] = (((int32_t*)DepthwiseConv2d_let)[cse_var_5] - ((int32_t*)fused_nn_conv2d_constant_29_let)[ax3]);
      }
    }
  }
  for (int32_t ax1_1 = 0; ax1_1 < 4; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 4; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 144; ++ax3_1) {
        int32_t cse_var_6 = (((ax1_1 * 576) + (ax2_1 * 144)) + ax3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_6] = (((int32_t*)DepthwiseConv2d_let)[cse_var_6] + ((int32_t*)fused_nn_conv2d_subtract_constant_29_let)[ax3_1]);
      }
    }
  }
  for (int32_t i1_1 = 0; i1_1 < 4; ++i1_1) {
    for (int32_t i2_1 = 0; i2_1 < 4; ++i2_1) {
      for (int32_t i3_1 = 0; i3_1 < 144; ++i3_1) {
        int32_t cse_var_7 = (((i1_1 * 576) + (i2_1 * 144)) + i3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_7] = ((int32_t)(((((int64_t)((int32_t*)DepthwiseConv2d_let)[cse_var_7]) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_87_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_89_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_89_let)[i3_1] + 31))));
      }
    }
  }
  for (int32_t ax1_2 = 0; ax1_2 < 4; ++ax1_2) {
    for (int32_t ax2_2 = 0; ax2_2 < 4; ++ax2_2) {
      for (int32_t ax3_2 = 0; ax3_2 < 144; ++ax3_2) {
        int32_t cse_var_8 = (((ax1_2 * 576) + (ax2_2 * 144)) + ax3_2);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_8] = (((int32_t*)DepthwiseConv2d_let)[cse_var_8] - 128);
      }
    }
  }
  for (int32_t i1_2 = 0; i1_2 < 4; ++i1_2) {
    for (int32_t i2_2 = 0; i2_2 < 4; ++i2_2) {
      for (int32_t i3_2 = 0; i3_2 < 144; ++i3_2) {
        int32_t cse_var_9 = (((i1_2 * 576) + (i2_2 * 144)) + i3_2);
        int32_t v_ = ((int32_t*)DepthwiseConv2d_let)[cse_var_9];
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_9] = ((v__1) > (-128) ? (v__1) : (-128));
      }
    }
  }
  for (int32_t ax1_3 = 0; ax1_3 < 4; ++ax1_3) {
    for (int32_t ax2_3 = 0; ax2_3 < 4; ++ax2_3) {
      for (int32_t ax3_3 = 0; ax3_3 < 144; ++ax3_3) {
        int32_t cse_var_10 = (((ax1_3 * 576) + (ax2_3 * 144)) + ax3_3);
        T_cast[cse_var_10] = ((int8_t)((int32_t*)DepthwiseConv2d_let)[cse_var_10]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_28(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_130_var, uint8_t* global_workspace_131_var) {
  void* fused_nn_conv2d_subtract_add_constant_95_let = (&(global_const_workspace_130_var[565840]));
  void* fused_nn_conv2d_subtract_add_constant_94_let = (&(global_const_workspace_130_var[566608]));
  void* fused_nn_conv2d_subtract_add_constant_93_let = (&(global_const_workspace_130_var[567376]));
  void* fused_nn_conv2d_subtract_constant_31_let = (&(global_const_workspace_130_var[562000]));
  void* fused_nn_conv2d_constant_32_let = (&(global_const_workspace_130_var[577360]));
  void* fused_constant_40_let = (&(global_const_workspace_130_var[502768]));
  void* PaddedInput_let = (&(global_workspace_131_var[12288]));
  void* DepthwiseConv2d_let = (&(global_workspace_131_var[0]));
  for (int32_t i1 = 0; i1 < 6; ++i1) {
    for (int32_t i2 = 0; i2 < 6; ++i2) {
      for (int32_t i3 = 0; i3 < 192; ++i3) {
        int32_t cse_var_1 = (((i1 * 1152) + (i2 * 192)) + i3);
        ((int8_t*)PaddedInput_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t i = 0; i < 4; ++i) {
    for (int32_t j = 0; j < 4; ++j) {
      for (int32_t c = 0; c < 192; ++c) {
        ((int32_t*)DepthwiseConv2d_let)[(((i * 768) + (j * 192)) + c)] = 0;
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            int32_t cse_var_4 = (j * 192);
            int32_t cse_var_3 = (dj * 192);
            int32_t cse_var_2 = (((i * 768) + cse_var_4) + c);
            ((int32_t*)DepthwiseConv2d_let)[cse_var_2] = (((int32_t*)DepthwiseConv2d_let)[cse_var_2] + (((int32_t)((int8_t*)PaddedInput_let)[(((((i * 1152) + (di * 1152)) + cse_var_4) + cse_var_3) + c)]) * ((int32_t)((int8_t*)fused_constant_40_let)[(((di * 576) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 4; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 4; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 192; ++ax3) {
        int32_t cse_var_5 = (((ax1 * 768) + (ax2 * 192)) + ax3);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_5] = (((int32_t*)DepthwiseConv2d_let)[cse_var_5] - ((int32_t*)fused_nn_conv2d_constant_32_let)[ax3]);
      }
    }
  }
  for (int32_t ax1_1 = 0; ax1_1 < 4; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 4; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 192; ++ax3_1) {
        int32_t cse_var_6 = (((ax1_1 * 768) + (ax2_1 * 192)) + ax3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_6] = (((int32_t*)DepthwiseConv2d_let)[cse_var_6] + ((int32_t*)fused_nn_conv2d_subtract_constant_31_let)[ax3_1]);
      }
    }
  }
  for (int32_t i1_1 = 0; i1_1 < 4; ++i1_1) {
    for (int32_t i2_1 = 0; i2_1 < 4; ++i2_1) {
      for (int32_t i3_1 = 0; i3_1 < 192; ++i3_1) {
        int32_t cse_var_7 = (((i1_1 * 768) + (i2_1 * 192)) + i3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_7] = ((int32_t)(((((int64_t)((int32_t*)DepthwiseConv2d_let)[cse_var_7]) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_93_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_95_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_95_let)[i3_1] + 31))));
      }
    }
  }
  for (int32_t ax1_2 = 0; ax1_2 < 4; ++ax1_2) {
    for (int32_t ax2_2 = 0; ax2_2 < 4; ++ax2_2) {
      for (int32_t ax3_2 = 0; ax3_2 < 192; ++ax3_2) {
        int32_t cse_var_8 = (((ax1_2 * 768) + (ax2_2 * 192)) + ax3_2);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_8] = (((int32_t*)DepthwiseConv2d_let)[cse_var_8] - 128);
      }
    }
  }
  for (int32_t i1_2 = 0; i1_2 < 4; ++i1_2) {
    for (int32_t i2_2 = 0; i2_2 < 4; ++i2_2) {
      for (int32_t i3_2 = 0; i3_2 < 192; ++i3_2) {
        int32_t cse_var_9 = (((i1_2 * 768) + (i2_2 * 192)) + i3_2);
        int32_t v_ = ((int32_t*)DepthwiseConv2d_let)[cse_var_9];
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_9] = ((v__1) > (-128) ? (v__1) : (-128));
      }
    }
  }
  for (int32_t ax1_3 = 0; ax1_3 < 4; ++ax1_3) {
    for (int32_t ax2_3 = 0; ax2_3 < 4; ++ax2_3) {
      for (int32_t ax3_3 = 0; ax3_3 < 192; ++ax3_3) {
        int32_t cse_var_10 = (((ax1_3 * 768) + (ax2_3 * 192)) + ax3_3);
        T_cast[cse_var_10] = ((int8_t)((int32_t*)DepthwiseConv2d_let)[cse_var_10]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_29(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_134_var, uint8_t* global_workspace_135_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED v8 HW-REQUANT] 1x1 conv: 32->192 channels, 16 spatial positions
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_134_var[563536]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_134_var[565072]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_134_var[576592]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_134_var[561232]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_134_var[384640]);

  // Safe copy: TVM may alias input/output workspace buffers
  static int8_t _inp[512];
  for (int32_t _i = 0; _i < 512; _i++) _inp[_i] = p0[_i];

  // Set per-layer zero-point once. The helper is provided by conv_accel.h.
  accel_set_output_zp(3);

  for (int32_t tile = 0; tile < 1; tile++) {
    int32_t oc_base = tile * 192;
    int32_t oc_count = 192;
    if (oc_base + oc_count > 192) oc_count = 192 - oc_base;

    // Pack weights for this tile (relayout from [rc][oc] to [oc][rc])
    static int8_t rw[6144];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      for (int32_t rc = 0; rc < 32; rc++)
        rw[oc * 32 + rc] = weights[rc * 192 + oc_base + oc];
    }
    accel_spad_write(0x020, rw, oc_count * 32);

    // Pack params for this tile: 16 bytes per OC.
    //   word 0: scale (high 32) and bias (low 32)
    //   word 1: zero  (high 32) and shift (low 32)
    static int32_t params[192 * 4];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      int32_t ax3 = oc_base + oc;
      params[oc*4 + 0] = (conv_sub[ax3] - conv_const[ax3]);         // bias
      params[oc*4 + 1] = quant_scale[ax3];      // scale
      params[oc*4 + 2] = quant_shift[ax3] + 31; // shift
      params[oc*4 + 3] = 0;                     // reserved
    }
    accel_spad_write(0x1B20, (int8_t*)params, oc_count * 16);

    for (int32_t sp = 0; sp < 16; sp++) {
      accel_spad_write(0x000, &_inp[sp * 32], 32);
      hw_multi_dot_requant(0x000, 0x020, 0x1820,
                           0x1B20, 32, oc_count);
      accel_unpack_i8_outputs(&T_cast[(sp * 192) + oc_base],
                              0x1820, oc_count);
    }
  }
  return 0;

#else

  void* fused_nn_conv2d_subtract_add_constant_98_let = (&(global_const_workspace_134_var[563536]));
  void* fused_nn_conv2d_subtract_add_constant_97_let = (&(global_const_workspace_134_var[564304]));
  void* fused_nn_conv2d_subtract_add_constant_96_let = (&(global_const_workspace_134_var[565072]));
  void* fused_nn_conv2d_constant_33_let = (&(global_const_workspace_134_var[576592]));
  void* fused_nn_conv2d_subtract_constant_32_let = (&(global_const_workspace_134_var[561232]));
  void* fused_constant_41_let = (&(global_const_workspace_134_var[384640]));
  void* pad_temp_let = (&(global_workspace_135_var[35840]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 4; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 4; ++i2) {
      for (int32_t i3 = 0; i3 < 32; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 128) + (i2 * 32)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 16; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_135_var[36352]));
    for (int32_t ax3_outer = 0; ax3_outer < 3; ++ax3_outer) {
      for (int32_t ff = 0; ff < 64; ++ff) {
        ((int32_t*)conv2d_nhwc_let)[ff] = 0;
        for (int32_t rc = 0; rc < 32; ++rc) {
          ((int32_t*)conv2d_nhwc_let)[ff] = (((int32_t*)conv2d_nhwc_let)[ff] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 32) + rc)]) * ((int32_t)((int8_t*)fused_constant_41_let)[(((rc * 192) + (ax3_outer * 64)) + ff)])));
        }
      }
      for (int32_t ax3_inner = 0; ax3_inner < 64; ++ax3_inner) {
        int32_t cse_var_3 = (ax3_outer * 64);
        int32_t cse_var_2 = (cse_var_3 + ax3_inner);
        int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[ax3_inner] + ((int32_t*)fused_nn_conv2d_subtract_constant_32_let)[cse_var_2]) - ((int32_t*)fused_nn_conv2d_constant_33_let)[cse_var_2])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_96_let)[cse_var_2])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_98_let)[cse_var_2] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_98_let)[cse_var_2] + 31)))) + 3;
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
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_3(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_12_var, uint8_t* global_workspace_13_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED v8 HW-REQUANT] 1x1 conv: 8->48 channels, 1024 spatial positions
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_12_var[638064]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_12_var[634992]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_12_var[639216]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_12_var[634608]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_12_var[627408]);

  // Safe copy: TVM may alias input/output workspace buffers
  static int8_t _inp[8192];
  for (int32_t _i = 0; _i < 8192; _i++) _inp[_i] = p0[_i];

  // Set per-layer zero-point once. The helper is provided by conv_accel.h.
  accel_set_output_zp(-128);

  for (int32_t tile = 0; tile < 1; tile++) {
    int32_t oc_base = tile * 48;
    int32_t oc_count = 48;
    if (oc_base + oc_count > 48) oc_count = 48 - oc_base;

    // Pack weights for this tile (relayout from [rc][oc] to [oc][rc])
    static int8_t rw[384];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      for (int32_t rc = 0; rc < 8; rc++)
        rw[oc * 8 + rc] = weights[rc * 48 + oc_base + oc];
    }
    accel_spad_write(0x008, rw, oc_count * 8);

    // Pack params for this tile: 16 bytes per OC.
    //   word 0: scale (high 32) and bias (low 32)
    //   word 1: zero  (high 32) and shift (low 32)
    static int32_t params[48 * 4];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      int32_t ax3 = oc_base + oc;
      params[oc*4 + 0] = (conv_sub[ax3] - conv_const[ax3]);         // bias
      params[oc*4 + 1] = quant_scale[ax3];      // scale
      params[oc*4 + 2] = quant_shift[ax3] + 31; // shift
      params[oc*4 + 3] = 0;                     // reserved
    }
    accel_spad_write(0x248, (int8_t*)params, oc_count * 16);

    for (int32_t sp = 0; sp < 1024; sp++) {
      accel_spad_write(0x000, &_inp[sp * 8], 8);
      hw_multi_dot_requant(0x000, 0x008, 0x188,
                           0x248, 8, oc_count);
      accel_unpack_i8_outputs(&T_cast[(sp * 48) + oc_base],
                              0x188, oc_count);
    }
  }
  return 0;

#else

  void* fused_nn_conv2d_subtract_add_constant_11_let = (&(global_const_workspace_12_var[638064]));
  void* fused_nn_conv2d_subtract_add_constant_10_let = (&(global_const_workspace_12_var[638256]));
  void* fused_nn_conv2d_subtract_add_constant_9_let = (&(global_const_workspace_12_var[634992]));
  void* fused_nn_conv2d_constant_3_let = (&(global_const_workspace_12_var[639216]));
  void* fused_nn_conv2d_subtract_constant_3_let = (&(global_const_workspace_12_var[634608]));
  void* fused_constant_3_let = (&(global_const_workspace_12_var[627408]));
  void* pad_temp_let = (&(global_workspace_13_var[101424]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 32; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 32; ++i2) {
      for (int32_t i3 = 0; i3 < 8; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 256) + (i2 * 8)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 1024; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_13_var[109616]));
    for (int32_t ax3 = 0; ax3 < 48; ++ax3) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 8; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 8) + rc)]) * ((int32_t)((int8_t*)fused_constant_3_let)[((rc * 48) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_3_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_3_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_9_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_11_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_11_let)[ax3] + 31)))) - 128;
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
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_30(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_138_var, uint8_t* global_workspace_139_var) {
  void* fused_nn_conv2d_subtract_add_constant_101_let = (&(global_const_workspace_138_var[572752]));
  void* fused_nn_conv2d_subtract_add_constant_100_let = (&(global_const_workspace_138_var[573520]));
  void* fused_nn_conv2d_subtract_add_constant_99_let = (&(global_const_workspace_138_var[562768]));
  void* fused_nn_conv2d_subtract_constant_33_let = (&(global_const_workspace_138_var[560464]));
  void* fused_nn_conv2d_constant_34_let = (&(global_const_workspace_138_var[575824]));
  void* fused_constant_42_let = (&(global_const_workspace_138_var[501040]));
  void* PaddedInput_let = (&(global_workspace_139_var[12288]));
  void* DepthwiseConv2d_let = (&(global_workspace_139_var[0]));
  for (int32_t i1 = 0; i1 < 6; ++i1) {
    for (int32_t i2 = 0; i2 < 6; ++i2) {
      for (int32_t i3 = 0; i3 < 192; ++i3) {
        int32_t cse_var_1 = (((i1 * 1152) + (i2 * 192)) + i3);
        ((int8_t*)PaddedInput_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t i = 0; i < 4; ++i) {
    for (int32_t j = 0; j < 4; ++j) {
      for (int32_t c = 0; c < 192; ++c) {
        ((int32_t*)DepthwiseConv2d_let)[(((i * 768) + (j * 192)) + c)] = 0;
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            int32_t cse_var_4 = (j * 192);
            int32_t cse_var_3 = (dj * 192);
            int32_t cse_var_2 = (((i * 768) + cse_var_4) + c);
            ((int32_t*)DepthwiseConv2d_let)[cse_var_2] = (((int32_t*)DepthwiseConv2d_let)[cse_var_2] + (((int32_t)((int8_t*)PaddedInput_let)[(((((i * 1152) + (di * 1152)) + cse_var_4) + cse_var_3) + c)]) * ((int32_t)((int8_t*)fused_constant_42_let)[(((di * 576) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 4; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 4; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 192; ++ax3) {
        int32_t cse_var_5 = (((ax1 * 768) + (ax2 * 192)) + ax3);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_5] = (((int32_t*)DepthwiseConv2d_let)[cse_var_5] - ((int32_t*)fused_nn_conv2d_constant_34_let)[ax3]);
      }
    }
  }
  for (int32_t ax1_1 = 0; ax1_1 < 4; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 4; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 192; ++ax3_1) {
        int32_t cse_var_6 = (((ax1_1 * 768) + (ax2_1 * 192)) + ax3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_6] = (((int32_t*)DepthwiseConv2d_let)[cse_var_6] + ((int32_t*)fused_nn_conv2d_subtract_constant_33_let)[ax3_1]);
      }
    }
  }
  for (int32_t i1_1 = 0; i1_1 < 4; ++i1_1) {
    for (int32_t i2_1 = 0; i2_1 < 4; ++i2_1) {
      for (int32_t i3_1 = 0; i3_1 < 192; ++i3_1) {
        int32_t cse_var_7 = (((i1_1 * 768) + (i2_1 * 192)) + i3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_7] = ((int32_t)(((((int64_t)((int32_t*)DepthwiseConv2d_let)[cse_var_7]) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_99_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_101_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_101_let)[i3_1] + 31))));
      }
    }
  }
  for (int32_t ax1_2 = 0; ax1_2 < 4; ++ax1_2) {
    for (int32_t ax2_2 = 0; ax2_2 < 4; ++ax2_2) {
      for (int32_t ax3_2 = 0; ax3_2 < 192; ++ax3_2) {
        int32_t cse_var_8 = (((ax1_2 * 768) + (ax2_2 * 192)) + ax3_2);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_8] = (((int32_t*)DepthwiseConv2d_let)[cse_var_8] - 128);
      }
    }
  }
  for (int32_t i1_2 = 0; i1_2 < 4; ++i1_2) {
    for (int32_t i2_2 = 0; i2_2 < 4; ++i2_2) {
      for (int32_t i3_2 = 0; i3_2 < 192; ++i3_2) {
        int32_t cse_var_9 = (((i1_2 * 768) + (i2_2 * 192)) + i3_2);
        int32_t v_ = ((int32_t*)DepthwiseConv2d_let)[cse_var_9];
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_9] = ((v__1) > (-128) ? (v__1) : (-128));
      }
    }
  }
  for (int32_t ax1_3 = 0; ax1_3 < 4; ++ax1_3) {
    for (int32_t ax2_3 = 0; ax2_3 < 4; ++ax2_3) {
      for (int32_t ax3_3 = 0; ax3_3 < 192; ++ax3_3) {
        int32_t cse_var_10 = (((ax1_3 * 768) + (ax2_3 * 192)) + ax3_3);
        T_cast[cse_var_10] = ((int8_t)((int32_t*)DepthwiseConv2d_let)[cse_var_10]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_31(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_142_var, uint8_t* global_workspace_143_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED v8 HW-REQUANT] 1x1 conv: 32->192 channels, 16 spatial positions
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_142_var[570448]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_142_var[571984]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_142_var[575056]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_142_var[559696]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_142_var[378496]);

  // Safe copy: TVM may alias input/output workspace buffers
  static int8_t _inp[512];
  for (int32_t _i = 0; _i < 512; _i++) _inp[_i] = p0[_i];

  // Set per-layer zero-point once. The helper is provided by conv_accel.h.
  accel_set_output_zp(-128);

  for (int32_t tile = 0; tile < 1; tile++) {
    int32_t oc_base = tile * 192;
    int32_t oc_count = 192;
    if (oc_base + oc_count > 192) oc_count = 192 - oc_base;

    // Pack weights for this tile (relayout from [rc][oc] to [oc][rc])
    static int8_t rw[6144];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      for (int32_t rc = 0; rc < 32; rc++)
        rw[oc * 32 + rc] = weights[rc * 192 + oc_base + oc];
    }
    accel_spad_write(0x020, rw, oc_count * 32);

    // Pack params for this tile: 16 bytes per OC.
    //   word 0: scale (high 32) and bias (low 32)
    //   word 1: zero  (high 32) and shift (low 32)
    static int32_t params[192 * 4];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      int32_t ax3 = oc_base + oc;
      params[oc*4 + 0] = (conv_sub[ax3] - conv_const[ax3]);         // bias
      params[oc*4 + 1] = quant_scale[ax3];      // scale
      params[oc*4 + 2] = quant_shift[ax3] + 31; // shift
      params[oc*4 + 3] = 0;                     // reserved
    }
    accel_spad_write(0x1B20, (int8_t*)params, oc_count * 16);

    for (int32_t sp = 0; sp < 16; sp++) {
      accel_spad_write(0x000, &_inp[sp * 32], 32);
      hw_multi_dot_requant(0x000, 0x020, 0x1820,
                           0x1B20, 32, oc_count);
      accel_unpack_i8_outputs(&T_cast[(sp * 192) + oc_base],
                              0x1820, oc_count);
    }
  }
  return 0;

#else

  void* fused_nn_conv2d_subtract_add_constant_104_let = (&(global_const_workspace_142_var[570448]));
  void* fused_nn_conv2d_subtract_add_constant_103_let = (&(global_const_workspace_142_var[571216]));
  void* fused_nn_conv2d_subtract_add_constant_102_let = (&(global_const_workspace_142_var[571984]));
  void* fused_nn_conv2d_constant_35_let = (&(global_const_workspace_142_var[575056]));
  void* fused_nn_conv2d_subtract_constant_34_let = (&(global_const_workspace_142_var[559696]));
  void* fused_constant_43_let = (&(global_const_workspace_142_var[378496]));
  void* pad_temp_let = (&(global_workspace_143_var[36352]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 4; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 4; ++i2) {
      for (int32_t i3 = 0; i3 < 32; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 128) + (i2 * 32)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 16; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_143_var[36864]));
    for (int32_t ax3_outer = 0; ax3_outer < 3; ++ax3_outer) {
      for (int32_t ff = 0; ff < 64; ++ff) {
        ((int32_t*)conv2d_nhwc_let)[ff] = 0;
        for (int32_t rc = 0; rc < 32; ++rc) {
          ((int32_t*)conv2d_nhwc_let)[ff] = (((int32_t*)conv2d_nhwc_let)[ff] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 32) + rc)]) * ((int32_t)((int8_t*)fused_constant_43_let)[(((rc * 192) + (ax3_outer * 64)) + ff)])));
        }
      }
      for (int32_t ax3_inner = 0; ax3_inner < 64; ++ax3_inner) {
        int32_t cse_var_3 = (ax3_outer * 64);
        int32_t cse_var_2 = (cse_var_3 + ax3_inner);
        int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[ax3_inner] + ((int32_t*)fused_nn_conv2d_subtract_constant_34_let)[cse_var_2]) - ((int32_t*)fused_nn_conv2d_constant_35_let)[cse_var_2])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_102_let)[cse_var_2])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_104_let)[cse_var_2] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_104_let)[cse_var_2] + 31)))) - 128;
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
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_32(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_146_var, uint8_t* global_workspace_147_var) {
  void* fused_nn_conv2d_subtract_add_constant_107_let = (&(global_const_workspace_146_var[568144]));
  void* fused_nn_conv2d_subtract_add_constant_106_let = (&(global_const_workspace_146_var[568912]));
  void* fused_nn_conv2d_subtract_add_constant_105_let = (&(global_const_workspace_146_var[569680]));
  void* fused_nn_conv2d_subtract_constant_35_let = (&(global_const_workspace_146_var[558928]));
  void* fused_nn_conv2d_constant_36_let = (&(global_const_workspace_146_var[574288]));
  void* fused_constant_44_let = (&(global_const_workspace_146_var[499312]));
  void* PaddedInput_let = (&(global_workspace_147_var[4800]));
  void* DepthwiseConv2d_let = (&(global_workspace_147_var[29184]));
  for (int32_t i1 = 0; i1 < 5; ++i1) {
    for (int32_t i2 = 0; i2 < 5; ++i2) {
      for (int32_t i3 = 0; i3 < 192; ++i3) {
        int32_t cse_var_1 = (((i1 * 960) + (i2 * 192)) + i3);
        ((int8_t*)PaddedInput_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t i = 0; i < 2; ++i) {
    for (int32_t j = 0; j < 2; ++j) {
      for (int32_t c = 0; c < 192; ++c) {
        ((int32_t*)DepthwiseConv2d_let)[(((i * 384) + (j * 192)) + c)] = 0;
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            int32_t cse_var_3 = (dj * 192);
            int32_t cse_var_2 = (((i * 384) + (j * 192)) + c);
            ((int32_t*)DepthwiseConv2d_let)[cse_var_2] = (((int32_t*)DepthwiseConv2d_let)[cse_var_2] + (((int32_t)((int8_t*)PaddedInput_let)[(((((i * 1920) + (di * 960)) + (j * 384)) + cse_var_3) + c)]) * ((int32_t)((int8_t*)fused_constant_44_let)[(((di * 576) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 2; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 2; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 192; ++ax3) {
        int32_t cse_var_4 = (((ax1 * 384) + (ax2 * 192)) + ax3);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_4] = (((int32_t*)DepthwiseConv2d_let)[cse_var_4] - ((int32_t*)fused_nn_conv2d_constant_36_let)[ax3]);
      }
    }
  }
  for (int32_t ax1_1 = 0; ax1_1 < 2; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 2; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 192; ++ax3_1) {
        int32_t cse_var_5 = (((ax1_1 * 384) + (ax2_1 * 192)) + ax3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_5] = (((int32_t*)DepthwiseConv2d_let)[cse_var_5] + ((int32_t*)fused_nn_conv2d_subtract_constant_35_let)[ax3_1]);
      }
    }
  }
  for (int32_t i1_1 = 0; i1_1 < 2; ++i1_1) {
    for (int32_t i2_1 = 0; i2_1 < 2; ++i2_1) {
      for (int32_t i3_1 = 0; i3_1 < 192; ++i3_1) {
        int32_t cse_var_6 = (((i1_1 * 384) + (i2_1 * 192)) + i3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_6] = ((int32_t)(((((int64_t)((int32_t*)DepthwiseConv2d_let)[cse_var_6]) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_105_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_107_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_107_let)[i3_1] + 31))));
      }
    }
  }
  for (int32_t ax1_2 = 0; ax1_2 < 2; ++ax1_2) {
    for (int32_t ax2_2 = 0; ax2_2 < 2; ++ax2_2) {
      for (int32_t ax3_2 = 0; ax3_2 < 192; ++ax3_2) {
        int32_t cse_var_7 = (((ax1_2 * 384) + (ax2_2 * 192)) + ax3_2);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_7] = (((int32_t*)DepthwiseConv2d_let)[cse_var_7] - 128);
      }
    }
  }
  for (int32_t i1_2 = 0; i1_2 < 2; ++i1_2) {
    for (int32_t i2_2 = 0; i2_2 < 2; ++i2_2) {
      for (int32_t i3_2 = 0; i3_2 < 192; ++i3_2) {
        int32_t cse_var_8 = (((i1_2 * 384) + (i2_2 * 192)) + i3_2);
        int32_t v_ = ((int32_t*)DepthwiseConv2d_let)[cse_var_8];
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_8] = ((v__1) > (-128) ? (v__1) : (-128));
      }
    }
  }
  for (int32_t ax1_3 = 0; ax1_3 < 2; ++ax1_3) {
    for (int32_t ax2_3 = 0; ax2_3 < 2; ++ax2_3) {
      for (int32_t ax3_3 = 0; ax3_3 < 192; ++ax3_3) {
        int32_t cse_var_9 = (((ax1_3 * 384) + (ax2_3 * 192)) + ax3_3);
        T_cast[cse_var_9] = ((int8_t)((int32_t*)DepthwiseConv2d_let)[cse_var_9]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_33(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_154_var, uint8_t* global_workspace_155_var) {
  void* fused_nn_conv2d_subtract_add_constant_113_let = (&(global_const_workspace_154_var[535024]));
  void* fused_nn_conv2d_subtract_add_constant_112_let = (&(global_const_workspace_154_var[536368]));
  void* fused_nn_conv2d_subtract_add_constant_111_let = (&(global_const_workspace_154_var[537712]));
  void* fused_nn_conv2d_subtract_constant_37_let = (&(global_const_workspace_154_var[517552]));
  void* fused_nn_conv2d_constant_39_let = (&(global_const_workspace_154_var[544432]));
  void* fused_constant_47_let = (&(global_const_workspace_154_var[487584]));
  void* PaddedInput_let = (&(global_workspace_155_var[5376]));
  void* DepthwiseConv2d_let = (&(global_workspace_155_var[10752]));
  for (int32_t i1 = 0; i1 < 4; ++i1) {
    for (int32_t i2 = 0; i2 < 4; ++i2) {
      for (int32_t i3 = 0; i3 < 336; ++i3) {
        int32_t cse_var_1 = (((i1 * 1344) + (i2 * 336)) + i3);
        ((int8_t*)PaddedInput_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t i = 0; i < 2; ++i) {
    for (int32_t j = 0; j < 2; ++j) {
      for (int32_t c = 0; c < 336; ++c) {
        ((int32_t*)DepthwiseConv2d_let)[(((i * 672) + (j * 336)) + c)] = 0;
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            int32_t cse_var_4 = (j * 336);
            int32_t cse_var_3 = (dj * 336);
            int32_t cse_var_2 = (((i * 672) + cse_var_4) + c);
            ((int32_t*)DepthwiseConv2d_let)[cse_var_2] = (((int32_t*)DepthwiseConv2d_let)[cse_var_2] + (((int32_t)((int8_t*)PaddedInput_let)[(((((i * 1344) + (di * 1344)) + cse_var_4) + cse_var_3) + c)]) * ((int32_t)((int8_t*)fused_constant_47_let)[(((di * 1008) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 2; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 2; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 336; ++ax3) {
        int32_t cse_var_5 = (((ax1 * 672) + (ax2 * 336)) + ax3);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_5] = (((int32_t*)DepthwiseConv2d_let)[cse_var_5] - ((int32_t*)fused_nn_conv2d_constant_39_let)[ax3]);
      }
    }
  }
  for (int32_t ax1_1 = 0; ax1_1 < 2; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 2; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 336; ++ax3_1) {
        int32_t cse_var_6 = (((ax1_1 * 672) + (ax2_1 * 336)) + ax3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_6] = (((int32_t*)DepthwiseConv2d_let)[cse_var_6] + ((int32_t*)fused_nn_conv2d_subtract_constant_37_let)[ax3_1]);
      }
    }
  }
  for (int32_t i1_1 = 0; i1_1 < 2; ++i1_1) {
    for (int32_t i2_1 = 0; i2_1 < 2; ++i2_1) {
      for (int32_t i3_1 = 0; i3_1 < 336; ++i3_1) {
        int32_t cse_var_7 = (((i1_1 * 672) + (i2_1 * 336)) + i3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_7] = ((int32_t)(((((int64_t)((int32_t*)DepthwiseConv2d_let)[cse_var_7]) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_111_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_113_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_113_let)[i3_1] + 31))));
      }
    }
  }
  for (int32_t ax1_2 = 0; ax1_2 < 2; ++ax1_2) {
    for (int32_t ax2_2 = 0; ax2_2 < 2; ++ax2_2) {
      for (int32_t ax3_2 = 0; ax3_2 < 336; ++ax3_2) {
        int32_t cse_var_8 = (((ax1_2 * 672) + (ax2_2 * 336)) + ax3_2);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_8] = (((int32_t*)DepthwiseConv2d_let)[cse_var_8] - 128);
      }
    }
  }
  for (int32_t i1_2 = 0; i1_2 < 2; ++i1_2) {
    for (int32_t i2_2 = 0; i2_2 < 2; ++i2_2) {
      for (int32_t i3_2 = 0; i3_2 < 336; ++i3_2) {
        int32_t cse_var_9 = (((i1_2 * 672) + (i2_2 * 336)) + i3_2);
        int32_t v_ = ((int32_t*)DepthwiseConv2d_let)[cse_var_9];
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_9] = ((v__1) > (-128) ? (v__1) : (-128));
      }
    }
  }
  for (int32_t ax1_3 = 0; ax1_3 < 2; ++ax1_3) {
    for (int32_t ax2_3 = 0; ax2_3 < 2; ++ax2_3) {
      for (int32_t ax3_3 = 0; ax3_3 < 336; ++ax3_3) {
        int32_t cse_var_10 = (((ax1_3 * 672) + (ax2_3 * 336)) + ax3_3);
        T_cast[cse_var_10] = ((int8_t)((int32_t*)DepthwiseConv2d_let)[cse_var_10]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_34(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_158_var, uint8_t* global_workspace_159_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED v8 HW-REQUANT] 1x1 conv: 56->336 channels, 4 spatial positions
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_158_var[530992]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_158_var[533680]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_158_var[543088]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_158_var[516208]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_158_var[255104]);

  // Safe copy: TVM may alias input/output workspace buffers
  static int8_t _inp[224];
  for (int32_t _i = 0; _i < 224; _i++) _inp[_i] = p0[_i];

  // Set per-layer zero-point once. The helper is provided by conv_accel.h.
  accel_set_output_zp(-128);

  for (int32_t tile = 0; tile < 3; tile++) {
    int32_t oc_base = tile * 128;
    int32_t oc_count = 128;
    if (oc_base + oc_count > 336) oc_count = 336 - oc_base;

    // Pack weights for this tile (relayout from [rc][oc] to [oc][rc])
    static int8_t rw[7168];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      for (int32_t rc = 0; rc < 56; rc++)
        rw[oc * 56 + rc] = weights[rc * 336 + oc_base + oc];
    }
    accel_spad_write(0x038, rw, oc_count * 56);

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
    accel_spad_write(0x1E38, (int8_t*)params, oc_count * 16);

    for (int32_t sp = 0; sp < 4; sp++) {
      accel_spad_write(0x000, &_inp[sp * 56], 56);
      hw_multi_dot_requant(0x000, 0x038, 0x1C38,
                           0x1E38, 56, oc_count);
      accel_unpack_i8_outputs(&T_cast[(sp * 336) + oc_base],
                              0x1C38, oc_count);
    }
  }
  return 0;

#else

  void* fused_nn_conv2d_subtract_add_constant_116_let = (&(global_const_workspace_158_var[530992]));
  void* fused_nn_conv2d_subtract_add_constant_115_let = (&(global_const_workspace_158_var[532336]));
  void* fused_nn_conv2d_subtract_add_constant_114_let = (&(global_const_workspace_158_var[533680]));
  void* fused_nn_conv2d_constant_40_let = (&(global_const_workspace_158_var[543088]));
  void* fused_nn_conv2d_subtract_constant_38_let = (&(global_const_workspace_158_var[516208]));
  void* fused_constant_48_let = (&(global_const_workspace_158_var[255104]));
  void* pad_temp_let = (&(global_workspace_159_var[32096]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 2; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 2; ++i2) {
      for (int32_t i3 = 0; i3 < 56; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 112) + (i2 * 56)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 4; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_159_var[32320]));
    for (int32_t ax3 = 0; ax3 < 336; ++ax3) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 56; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 56) + rc)]) * ((int32_t)((int8_t*)fused_constant_48_let)[((rc * 336) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_38_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_40_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_114_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_116_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_116_let)[ax3] + 31)))) - 128;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_cast[((ax0_ax1_fused_ax2_fused * 336) + ax3)] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
    }
  }
  return 0;

#endif
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_35(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_160_var, uint8_t* global_workspace_161_var) {
  void* fused_nn_conv2d_subtract_add_constant_119_let = (&(global_const_workspace_160_var[526960]));
  void* fused_nn_conv2d_subtract_add_constant_118_let = (&(global_const_workspace_160_var[528304]));
  void* fused_nn_conv2d_subtract_add_constant_117_let = (&(global_const_workspace_160_var[529648]));
  void* fused_nn_conv2d_subtract_constant_39_let = (&(global_const_workspace_160_var[514864]));
  void* fused_nn_conv2d_constant_41_let = (&(global_const_workspace_160_var[541744]));
  void* fused_constant_49_let = (&(global_const_workspace_160_var[484560]));
  void* PaddedInput_let = (&(global_workspace_161_var[5376]));
  void* DepthwiseConv2d_let = (&(global_workspace_161_var[10752]));
  for (int32_t i1 = 0; i1 < 4; ++i1) {
    for (int32_t i2 = 0; i2 < 4; ++i2) {
      for (int32_t i3 = 0; i3 < 336; ++i3) {
        int32_t cse_var_1 = (((i1 * 1344) + (i2 * 336)) + i3);
        ((int8_t*)PaddedInput_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t i = 0; i < 2; ++i) {
    for (int32_t j = 0; j < 2; ++j) {
      for (int32_t c = 0; c < 336; ++c) {
        ((int32_t*)DepthwiseConv2d_let)[(((i * 672) + (j * 336)) + c)] = 0;
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            int32_t cse_var_4 = (j * 336);
            int32_t cse_var_3 = (dj * 336);
            int32_t cse_var_2 = (((i * 672) + cse_var_4) + c);
            ((int32_t*)DepthwiseConv2d_let)[cse_var_2] = (((int32_t*)DepthwiseConv2d_let)[cse_var_2] + (((int32_t)((int8_t*)PaddedInput_let)[(((((i * 1344) + (di * 1344)) + cse_var_4) + cse_var_3) + c)]) * ((int32_t)((int8_t*)fused_constant_49_let)[(((di * 1008) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 2; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 2; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 336; ++ax3) {
        int32_t cse_var_5 = (((ax1 * 672) + (ax2 * 336)) + ax3);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_5] = (((int32_t*)DepthwiseConv2d_let)[cse_var_5] - ((int32_t*)fused_nn_conv2d_constant_41_let)[ax3]);
      }
    }
  }
  for (int32_t ax1_1 = 0; ax1_1 < 2; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 2; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 336; ++ax3_1) {
        int32_t cse_var_6 = (((ax1_1 * 672) + (ax2_1 * 336)) + ax3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_6] = (((int32_t*)DepthwiseConv2d_let)[cse_var_6] + ((int32_t*)fused_nn_conv2d_subtract_constant_39_let)[ax3_1]);
      }
    }
  }
  for (int32_t i1_1 = 0; i1_1 < 2; ++i1_1) {
    for (int32_t i2_1 = 0; i2_1 < 2; ++i2_1) {
      for (int32_t i3_1 = 0; i3_1 < 336; ++i3_1) {
        int32_t cse_var_7 = (((i1_1 * 672) + (i2_1 * 336)) + i3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_7] = ((int32_t)(((((int64_t)((int32_t*)DepthwiseConv2d_let)[cse_var_7]) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_117_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_119_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_119_let)[i3_1] + 31))));
      }
    }
  }
  for (int32_t ax1_2 = 0; ax1_2 < 2; ++ax1_2) {
    for (int32_t ax2_2 = 0; ax2_2 < 2; ++ax2_2) {
      for (int32_t ax3_2 = 0; ax3_2 < 336; ++ax3_2) {
        int32_t cse_var_8 = (((ax1_2 * 672) + (ax2_2 * 336)) + ax3_2);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_8] = (((int32_t*)DepthwiseConv2d_let)[cse_var_8] - 128);
      }
    }
  }
  for (int32_t i1_2 = 0; i1_2 < 2; ++i1_2) {
    for (int32_t i2_2 = 0; i2_2 < 2; ++i2_2) {
      for (int32_t i3_2 = 0; i3_2 < 336; ++i3_2) {
        int32_t cse_var_9 = (((i1_2 * 672) + (i2_2 * 336)) + i3_2);
        int32_t v_ = ((int32_t*)DepthwiseConv2d_let)[cse_var_9];
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_9] = ((v__1) > (-128) ? (v__1) : (-128));
      }
    }
  }
  for (int32_t ax1_3 = 0; ax1_3 < 2; ++ax1_3) {
    for (int32_t ax2_3 = 0; ax2_3 < 2; ++ax2_3) {
      for (int32_t ax3_3 = 0; ax3_3 < 336; ++ax3_3) {
        int32_t cse_var_10 = (((ax1_3 * 672) + (ax2_3 * 336)) + ax3_3);
        T_cast[cse_var_10] = ((int8_t)((int32_t*)DepthwiseConv2d_let)[cse_var_10]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_36(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_164_var, uint8_t* global_workspace_165_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED v8 HW-REQUANT] 1x1 conv: 56->336 channels, 4 spatial positions
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_164_var[522928]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_164_var[525616]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_164_var[540400]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_164_var[513520]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_164_var[236288]);

  // Safe copy: TVM may alias input/output workspace buffers
  static int8_t _inp[224];
  for (int32_t _i = 0; _i < 224; _i++) _inp[_i] = p0[_i];

  // Set per-layer zero-point once. The helper is provided by conv_accel.h.
  accel_set_output_zp(-128);

  for (int32_t tile = 0; tile < 3; tile++) {
    int32_t oc_base = tile * 128;
    int32_t oc_count = 128;
    if (oc_base + oc_count > 336) oc_count = 336 - oc_base;

    // Pack weights for this tile (relayout from [rc][oc] to [oc][rc])
    static int8_t rw[7168];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      for (int32_t rc = 0; rc < 56; rc++)
        rw[oc * 56 + rc] = weights[rc * 336 + oc_base + oc];
    }
    accel_spad_write(0x038, rw, oc_count * 56);

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
    accel_spad_write(0x1E38, (int8_t*)params, oc_count * 16);

    for (int32_t sp = 0; sp < 4; sp++) {
      accel_spad_write(0x000, &_inp[sp * 56], 56);
      hw_multi_dot_requant(0x000, 0x038, 0x1C38,
                           0x1E38, 56, oc_count);
      accel_unpack_i8_outputs(&T_cast[(sp * 336) + oc_base],
                              0x1C38, oc_count);
    }
  }
  return 0;

#else

  void* fused_nn_conv2d_subtract_add_constant_122_let = (&(global_const_workspace_164_var[522928]));
  void* fused_nn_conv2d_subtract_add_constant_121_let = (&(global_const_workspace_164_var[524272]));
  void* fused_nn_conv2d_subtract_add_constant_120_let = (&(global_const_workspace_164_var[525616]));
  void* fused_nn_conv2d_constant_42_let = (&(global_const_workspace_164_var[540400]));
  void* fused_nn_conv2d_subtract_constant_40_let = (&(global_const_workspace_164_var[513520]));
  void* fused_constant_50_let = (&(global_const_workspace_164_var[236288]));
  void* pad_temp_let = (&(global_workspace_165_var[32320]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 2; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 2; ++i2) {
      for (int32_t i3 = 0; i3 < 56; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 112) + (i2 * 56)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 4; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_165_var[32544]));
    for (int32_t ax3 = 0; ax3 < 336; ++ax3) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 56; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 56) + rc)]) * ((int32_t)((int8_t*)fused_constant_50_let)[((rc * 336) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_40_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_42_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_120_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_122_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_122_let)[ax3] + 31)))) - 128;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_cast[((ax0_ax1_fused_ax2_fused * 336) + ax3)] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
    }
  }
  return 0;

#endif
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_37(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_168_var, uint8_t* global_workspace_169_var) {
  void* fused_nn_conv2d_subtract_add_constant_125_let = (&(global_const_workspace_168_var[518896]));
  void* fused_nn_conv2d_subtract_add_constant_124_let = (&(global_const_workspace_168_var[520240]));
  void* fused_nn_conv2d_subtract_add_constant_123_let = (&(global_const_workspace_168_var[521584]));
  void* fused_nn_conv2d_subtract_constant_41_let = (&(global_const_workspace_168_var[512176]));
  void* fused_nn_conv2d_constant_43_let = (&(global_const_workspace_168_var[539056]));
  void* fused_constant_51_let = (&(global_const_workspace_168_var[481536]));
  void* PaddedInput_let = (&(global_workspace_169_var[5376]));
  void* DepthwiseConv2d_let = (&(global_workspace_169_var[10752]));
  for (int32_t i1 = 0; i1 < 4; ++i1) {
    for (int32_t i2 = 0; i2 < 4; ++i2) {
      for (int32_t i3 = 0; i3 < 336; ++i3) {
        int32_t cse_var_1 = (((i1 * 1344) + (i2 * 336)) + i3);
        ((int8_t*)PaddedInput_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t i = 0; i < 2; ++i) {
    for (int32_t j = 0; j < 2; ++j) {
      for (int32_t c = 0; c < 336; ++c) {
        ((int32_t*)DepthwiseConv2d_let)[(((i * 672) + (j * 336)) + c)] = 0;
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            int32_t cse_var_4 = (j * 336);
            int32_t cse_var_3 = (dj * 336);
            int32_t cse_var_2 = (((i * 672) + cse_var_4) + c);
            ((int32_t*)DepthwiseConv2d_let)[cse_var_2] = (((int32_t*)DepthwiseConv2d_let)[cse_var_2] + (((int32_t)((int8_t*)PaddedInput_let)[(((((i * 1344) + (di * 1344)) + cse_var_4) + cse_var_3) + c)]) * ((int32_t)((int8_t*)fused_constant_51_let)[(((di * 1008) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 2; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 2; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 336; ++ax3) {
        int32_t cse_var_5 = (((ax1 * 672) + (ax2 * 336)) + ax3);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_5] = (((int32_t*)DepthwiseConv2d_let)[cse_var_5] - ((int32_t*)fused_nn_conv2d_constant_43_let)[ax3]);
      }
    }
  }
  for (int32_t ax1_1 = 0; ax1_1 < 2; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 2; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 336; ++ax3_1) {
        int32_t cse_var_6 = (((ax1_1 * 672) + (ax2_1 * 336)) + ax3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_6] = (((int32_t*)DepthwiseConv2d_let)[cse_var_6] + ((int32_t*)fused_nn_conv2d_subtract_constant_41_let)[ax3_1]);
      }
    }
  }
  for (int32_t i1_1 = 0; i1_1 < 2; ++i1_1) {
    for (int32_t i2_1 = 0; i2_1 < 2; ++i2_1) {
      for (int32_t i3_1 = 0; i3_1 < 336; ++i3_1) {
        int32_t cse_var_7 = (((i1_1 * 672) + (i2_1 * 336)) + i3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_7] = ((int32_t)(((((int64_t)((int32_t*)DepthwiseConv2d_let)[cse_var_7]) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_123_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_125_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_125_let)[i3_1] + 31))));
      }
    }
  }
  for (int32_t ax1_2 = 0; ax1_2 < 2; ++ax1_2) {
    for (int32_t ax2_2 = 0; ax2_2 < 2; ++ax2_2) {
      for (int32_t ax3_2 = 0; ax3_2 < 336; ++ax3_2) {
        int32_t cse_var_8 = (((ax1_2 * 672) + (ax2_2 * 336)) + ax3_2);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_8] = (((int32_t*)DepthwiseConv2d_let)[cse_var_8] - 128);
      }
    }
  }
  for (int32_t i1_2 = 0; i1_2 < 2; ++i1_2) {
    for (int32_t i2_2 = 0; i2_2 < 2; ++i2_2) {
      for (int32_t i3_2 = 0; i3_2 < 336; ++i3_2) {
        int32_t cse_var_9 = (((i1_2 * 672) + (i2_2 * 336)) + i3_2);
        int32_t v_ = ((int32_t*)DepthwiseConv2d_let)[cse_var_9];
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_9] = ((v__1) > (-128) ? (v__1) : (-128));
      }
    }
  }
  for (int32_t ax1_3 = 0; ax1_3 < 2; ++ax1_3) {
    for (int32_t ax2_3 = 0; ax2_3 < 2; ++ax2_3) {
      for (int32_t ax3_3 = 0; ax3_3 < 336; ++ax3_3) {
        int32_t cse_var_10 = (((ax1_3 * 672) + (ax2_3 * 336)) + ax3_3);
        T_cast[cse_var_10] = ((int8_t)((int32_t*)DepthwiseConv2d_let)[cse_var_10]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_38(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_170_var, uint8_t* global_workspace_171_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED v8 HW-REQUANT] 1x1 conv: 336->112 channels, 4 spatial positions
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_170_var[611984]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_170_var[612880]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_170_var[613328]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_170_var[611536]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_170_var[198656]);

  // Safe copy: TVM may alias input/output workspace buffers
  static int8_t _inp[1344];
  for (int32_t _i = 0; _i < 1344; _i++) _inp[_i] = p0[_i];

  // Set per-layer zero-point once. The helper is provided by conv_accel.h.
  accel_set_output_zp(-3);

  for (int32_t tile = 0; tile < 4; tile++) {
    int32_t oc_base = tile * 32;
    int32_t oc_count = 32;
    if (oc_base + oc_count > 112) oc_count = 112 - oc_base;

    // Pack weights for this tile (relayout from [rc][oc] to [oc][rc])
    static int8_t rw[10752];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      for (int32_t rc = 0; rc < 336; rc++)
        rw[oc * 336 + rc] = weights[rc * 112 + oc_base + oc];
    }
    accel_spad_write(0x150, rw, oc_count * 336);

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
    accel_spad_write(0x2BD0, (int8_t*)params, oc_count * 16);

    for (int32_t sp = 0; sp < 4; sp++) {
      accel_spad_write(0x000, &_inp[sp * 336], 336);
      hw_multi_dot_requant(0x000, 0x150, 0x2B50,
                           0x2BD0, 336, oc_count);
      accel_unpack_i8_outputs(&T_cast[(sp * 112) + oc_base],
                              0x2B50, oc_count);
    }
  }
  return 0;

#else

  void* fused_nn_conv2d_subtract_add_constant_128_let = (&(global_const_workspace_170_var[611984]));
  void* fused_nn_conv2d_subtract_add_constant_127_let = (&(global_const_workspace_170_var[612432]));
  void* fused_nn_conv2d_subtract_add_constant_126_let = (&(global_const_workspace_170_var[612880]));
  void* fused_nn_conv2d_constant_44_let = (&(global_const_workspace_170_var[613328]));
  void* fused_nn_conv2d_subtract_constant_42_let = (&(global_const_workspace_170_var[611536]));
  void* fused_constant_52_let = (&(global_const_workspace_170_var[198656]));
  void* pad_temp_let = (&(global_workspace_171_var[29184]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 2; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 2; ++i2) {
      for (int32_t i3 = 0; i3 < 336; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 672) + (i2 * 336)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 4; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_171_var[30976]));
    for (int32_t ax3 = 0; ax3 < 112; ++ax3) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 336; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 336) + rc)]) * ((int32_t)((int8_t*)fused_constant_52_let)[((rc * 112) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_42_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_44_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_126_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_128_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_128_let)[ax3] + 31)))) - 3;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_cast[((ax0_ax1_fused_ax2_fused * 112) + ax3)] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
    }
  }
  return 0;

#endif
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_39(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_184_var, uint8_t* global_workspace_185_var) {
  void* fused_nn_conv2d_subtract_add_constant_134_let = (&(global_const_workspace_184_var[641408]));
  void* fused_nn_conv2d_subtract_add_constant_133_let = (&(global_const_workspace_184_var[641536]));
  void* fused_nn_conv2d_subtract_add_constant_132_let = (&(global_const_workspace_184_var[641664]));
  void* fused_nn_conv2d_constant_46_let = (&(global_const_workspace_184_var[641920]));
  void* fused_nn_conv2d_subtract_constant_44_let = (&(global_const_workspace_184_var[639872]));
  void* fused_constant_56_let = (&(global_const_workspace_184_var[143360]));
  void* pad_temp_let = (&(global_workspace_185_var[0]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 6; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 6; ++i2) {
      for (int32_t i3 = 0; i3 < 192; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 1152) + (i2 * 192)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 16; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_185_var[7424]));
    for (int32_t ax3 = 0; ax3 < 32; ++ax3) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t ry = 0; ry < 3; ++ry) {
        for (int32_t rx = 0; rx < 3; ++rx) {
          for (int32_t rc = 0; rc < 192; ++rc) {
            ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((((((ax0_ax1_fused_ax2_fused >> 2) * 1152) + (ry * 1152)) + (rx * 192)) + ((ax0_ax1_fused_ax2_fused & 3) * 192)) + rc)]) * ((int32_t)((int8_t*)fused_constant_56_let)[((((ry * 18432) + (rx * 6144)) + (rc * 32)) + ax3)])));
          }
        }
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_44_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_46_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_132_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_134_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_134_let)[ax3] + 31)))) - 128;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_cast[((ax0_ax1_fused_ax2_fused * 32) + ax3)] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_4(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_16_var, uint8_t* global_workspace_17_var) {
  void* fused_nn_conv2d_subtract_add_constant_14_let = (&(global_const_workspace_16_var[637488]));
  void* fused_nn_conv2d_subtract_add_constant_13_let = (&(global_const_workspace_16_var[637680]));
  void* fused_nn_conv2d_subtract_add_constant_12_let = (&(global_const_workspace_16_var[637872]));
  void* fused_nn_conv2d_subtract_constant_4_let = (&(global_const_workspace_16_var[634416]));
  void* fused_nn_conv2d_constant_4_let = (&(global_const_workspace_16_var[639024]));
  void* fused_constant_4_let = (&(global_const_workspace_16_var[613776]));
  void* PaddedInput_let = (&(global_workspace_17_var[52272]));
  void* DepthwiseConv2d_let = (&(global_workspace_17_var[104544]));
  for (int32_t i1 = 0; i1 < 33; ++i1) {
    for (int32_t i2 = 0; i2 < 33; ++i2) {
      for (int32_t i3 = 0; i3 < 48; ++i3) {
        int32_t cse_var_1 = (((i1 * 1584) + (i2 * 48)) + i3);
        ((int8_t*)PaddedInput_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t i = 0; i < 16; ++i) {
    for (int32_t j = 0; j < 16; ++j) {
      for (int32_t c = 0; c < 48; ++c) {
        ((int32_t*)DepthwiseConv2d_let)[(((i * 768) + (j * 48)) + c)] = 0;
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            int32_t cse_var_3 = (dj * 48);
            int32_t cse_var_2 = (((i * 768) + (j * 48)) + c);
            ((int32_t*)DepthwiseConv2d_let)[cse_var_2] = (((int32_t*)DepthwiseConv2d_let)[cse_var_2] + (((int32_t)((int8_t*)PaddedInput_let)[(((((i * 3168) + (di * 1584)) + (j * 96)) + cse_var_3) + c)]) * ((int32_t)((int8_t*)fused_constant_4_let)[(((di * 144) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 16; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 16; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 48; ++ax3) {
        int32_t cse_var_4 = (((ax1 * 768) + (ax2 * 48)) + ax3);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_4] = (((int32_t*)DepthwiseConv2d_let)[cse_var_4] - ((int32_t*)fused_nn_conv2d_constant_4_let)[ax3]);
      }
    }
  }
  for (int32_t ax1_1 = 0; ax1_1 < 16; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 16; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 48; ++ax3_1) {
        int32_t cse_var_5 = (((ax1_1 * 768) + (ax2_1 * 48)) + ax3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_5] = (((int32_t*)DepthwiseConv2d_let)[cse_var_5] + ((int32_t*)fused_nn_conv2d_subtract_constant_4_let)[ax3_1]);
      }
    }
  }
  for (int32_t i1_1 = 0; i1_1 < 16; ++i1_1) {
    for (int32_t i2_1 = 0; i2_1 < 16; ++i2_1) {
      for (int32_t i3_1 = 0; i3_1 < 48; ++i3_1) {
        int32_t cse_var_6 = (((i1_1 * 768) + (i2_1 * 48)) + i3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_6] = ((int32_t)(((((int64_t)((int32_t*)DepthwiseConv2d_let)[cse_var_6]) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_12_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_14_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_14_let)[i3_1] + 31))));
      }
    }
  }
  for (int32_t ax1_2 = 0; ax1_2 < 16; ++ax1_2) {
    for (int32_t ax2_2 = 0; ax2_2 < 16; ++ax2_2) {
      for (int32_t ax3_2 = 0; ax3_2 < 48; ++ax3_2) {
        int32_t cse_var_7 = (((ax1_2 * 768) + (ax2_2 * 48)) + ax3_2);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_7] = (((int32_t*)DepthwiseConv2d_let)[cse_var_7] - 128);
      }
    }
  }
  for (int32_t i1_2 = 0; i1_2 < 16; ++i1_2) {
    for (int32_t i2_2 = 0; i2_2 < 16; ++i2_2) {
      for (int32_t i3_2 = 0; i3_2 < 48; ++i3_2) {
        int32_t cse_var_8 = (((i1_2 * 768) + (i2_2 * 48)) + i3_2);
        int32_t v_ = ((int32_t*)DepthwiseConv2d_let)[cse_var_8];
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_8] = ((v__1) > (-128) ? (v__1) : (-128));
      }
    }
  }
  for (int32_t ax1_3 = 0; ax1_3 < 16; ++ax1_3) {
    for (int32_t ax2_3 = 0; ax2_3 < 16; ++ax2_3) {
      for (int32_t ax3_3 = 0; ax3_3 < 48; ++ax3_3) {
        int32_t cse_var_9 = (((ax1_3 * 768) + (ax2_3 * 48)) + ax3_3);
        T_cast[cse_var_9] = ((int8_t)((int32_t*)DepthwiseConv2d_let)[cse_var_9]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_5(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_18_var, uint8_t* global_workspace_19_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED v8 HW-REQUANT] 1x1 conv: 48->8 channels, 256 spatial positions
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_18_var[648416]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_18_var[648480]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_18_var[648512]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_18_var[648256]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_18_var[627024]);

  // Safe copy: TVM may alias input/output workspace buffers
  static int8_t _inp[12288];
  for (int32_t _i = 0; _i < 12288; _i++) _inp[_i] = p0[_i];

  // Set per-layer zero-point once. The helper is provided by conv_accel.h.
  accel_set_output_zp(-39);

  for (int32_t tile = 0; tile < 1; tile++) {
    int32_t oc_base = tile * 8;
    int32_t oc_count = 8;
    if (oc_base + oc_count > 8) oc_count = 8 - oc_base;

    // Pack weights for this tile (relayout from [rc][oc] to [oc][rc])
    static int8_t rw[384];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      for (int32_t rc = 0; rc < 48; rc++)
        rw[oc * 48 + rc] = weights[rc * 8 + oc_base + oc];
    }
    accel_spad_write(0x030, rw, oc_count * 48);

    // Pack params for this tile: 16 bytes per OC.
    //   word 0: scale (high 32) and bias (low 32)
    //   word 1: zero  (high 32) and shift (low 32)
    static int32_t params[8 * 4];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      int32_t ax3 = oc_base + oc;
      params[oc*4 + 0] = (conv_sub[ax3] - conv_const[ax3]);         // bias
      params[oc*4 + 1] = quant_scale[ax3];      // scale
      params[oc*4 + 2] = quant_shift[ax3] + 31; // shift
      params[oc*4 + 3] = 0;                     // reserved
    }
    accel_spad_write(0x1D0, (int8_t*)params, oc_count * 16);

    for (int32_t sp = 0; sp < 256; sp++) {
      accel_spad_write(0x000, &_inp[sp * 48], 48);
      hw_multi_dot_requant(0x000, 0x030, 0x1B0,
                           0x1D0, 48, oc_count);
      accel_unpack_i8_outputs(&T_cast[(sp * 8) + oc_base],
                              0x1B0, oc_count);
    }
  }
  return 0;

#else

  void* fused_nn_conv2d_subtract_add_constant_17_let = (&(global_const_workspace_18_var[648416]));
  void* fused_nn_conv2d_subtract_add_constant_16_let = (&(global_const_workspace_18_var[648448]));
  void* fused_nn_conv2d_subtract_add_constant_15_let = (&(global_const_workspace_18_var[648480]));
  void* fused_nn_conv2d_constant_5_let = (&(global_const_workspace_18_var[648512]));
  void* fused_nn_conv2d_subtract_constant_5_let = (&(global_const_workspace_18_var[648256]));
  void* fused_constant_5_let = (&(global_const_workspace_18_var[627024]));
  void* pad_temp_let = (&(global_workspace_19_var[0]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 16; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 16; ++i2) {
      for (int32_t i3 = 0; i3 < 48; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 768) + (i2 * 48)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 256; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_19_var[40000]));
    for (int32_t ax3 = 0; ax3 < 8; ++ax3) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 48; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 48) + rc)]) * ((int32_t)((int8_t*)fused_constant_5_let)[((rc * 8) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_5_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_5_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_15_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_17_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_17_let)[ax3] + 31)))) - 39;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_cast[((ax0_ax1_fused_ax2_fused * 8) + ax3)] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
    }
  }
  return 0;

#endif
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_6(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_38_var, uint8_t* global_workspace_39_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED v8 HW-REQUANT] 1x1 conv: 8->48 channels, 256 spatial positions
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_38_var[636912]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_38_var[637296]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_38_var[638832]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_38_var[634224]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_38_var[628176]);

  // Safe copy: TVM may alias input/output workspace buffers
  static int8_t _inp[2048];
  for (int32_t _i = 0; _i < 2048; _i++) _inp[_i] = p0[_i];

  // Set per-layer zero-point once. The helper is provided by conv_accel.h.
  accel_set_output_zp(-128);

  for (int32_t tile = 0; tile < 1; tile++) {
    int32_t oc_base = tile * 48;
    int32_t oc_count = 48;
    if (oc_base + oc_count > 48) oc_count = 48 - oc_base;

    // Pack weights for this tile (relayout from [rc][oc] to [oc][rc])
    static int8_t rw[384];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      for (int32_t rc = 0; rc < 8; rc++)
        rw[oc * 8 + rc] = weights[rc * 48 + oc_base + oc];
    }
    accel_spad_write(0x008, rw, oc_count * 8);

    // Pack params for this tile: 16 bytes per OC.
    //   word 0: scale (high 32) and bias (low 32)
    //   word 1: zero  (high 32) and shift (low 32)
    static int32_t params[48 * 4];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      int32_t ax3 = oc_base + oc;
      params[oc*4 + 0] = (conv_sub[ax3] - conv_const[ax3]);         // bias
      params[oc*4 + 1] = quant_scale[ax3];      // scale
      params[oc*4 + 2] = quant_shift[ax3] + 31; // shift
      params[oc*4 + 3] = 0;                     // reserved
    }
    accel_spad_write(0x248, (int8_t*)params, oc_count * 16);

    for (int32_t sp = 0; sp < 256; sp++) {
      accel_spad_write(0x000, &_inp[sp * 8], 8);
      hw_multi_dot_requant(0x000, 0x008, 0x188,
                           0x248, 8, oc_count);
      accel_unpack_i8_outputs(&T_cast[(sp * 48) + oc_base],
                              0x188, oc_count);
    }
  }
  return 0;

#else

  void* fused_nn_conv2d_subtract_add_constant_23_let = (&(global_const_workspace_38_var[636912]));
  void* fused_nn_conv2d_subtract_add_constant_22_let = (&(global_const_workspace_38_var[637104]));
  void* fused_nn_conv2d_subtract_add_constant_21_let = (&(global_const_workspace_38_var[637296]));
  void* fused_nn_conv2d_constant_7_let = (&(global_const_workspace_38_var[638832]));
  void* fused_nn_conv2d_subtract_constant_7_let = (&(global_const_workspace_38_var[634224]));
  void* fused_constant_11_let = (&(global_const_workspace_38_var[628176]));
  void* pad_temp_let = (&(global_workspace_39_var[66752]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 16; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 16; ++i2) {
      for (int32_t i3 = 0; i3 < 8; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 128) + (i2 * 8)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 256; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_39_var[68800]));
    for (int32_t ax3 = 0; ax3 < 48; ++ax3) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 8; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 8) + rc)]) * ((int32_t)((int8_t*)fused_constant_11_let)[((rc * 48) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_7_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_7_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_21_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_23_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_23_let)[ax3] + 31)))) - 128;
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
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_7(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_42_var, uint8_t* global_workspace_43_var) {
  void* fused_nn_conv2d_subtract_add_constant_26_let = (&(global_const_workspace_42_var[636336]));
  void* fused_nn_conv2d_subtract_add_constant_25_let = (&(global_const_workspace_42_var[636528]));
  void* fused_nn_conv2d_subtract_add_constant_24_let = (&(global_const_workspace_42_var[636720]));
  void* fused_nn_conv2d_subtract_constant_8_let = (&(global_const_workspace_42_var[634032]));
  void* fused_nn_conv2d_constant_8_let = (&(global_const_workspace_42_var[638640]));
  void* fused_constant_12_let = (&(global_const_workspace_42_var[614640]));
  void* PaddedInput_let = (&(global_workspace_43_var[49152]));
  void* DepthwiseConv2d_let = (&(global_workspace_43_var[0]));
  for (int32_t i1 = 0; i1 < 18; ++i1) {
    for (int32_t i2 = 0; i2 < 18; ++i2) {
      for (int32_t i3 = 0; i3 < 48; ++i3) {
        int32_t cse_var_1 = (((i1 * 864) + (i2 * 48)) + i3);
        ((int8_t*)PaddedInput_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t i = 0; i < 16; ++i) {
    for (int32_t j = 0; j < 16; ++j) {
      for (int32_t c = 0; c < 48; ++c) {
        ((int32_t*)DepthwiseConv2d_let)[(((i * 768) + (j * 48)) + c)] = 0;
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            int32_t cse_var_4 = (j * 48);
            int32_t cse_var_3 = (dj * 48);
            int32_t cse_var_2 = (((i * 768) + cse_var_4) + c);
            ((int32_t*)DepthwiseConv2d_let)[cse_var_2] = (((int32_t*)DepthwiseConv2d_let)[cse_var_2] + (((int32_t)((int8_t*)PaddedInput_let)[(((((i * 864) + (di * 864)) + cse_var_4) + cse_var_3) + c)]) * ((int32_t)((int8_t*)fused_constant_12_let)[(((di * 144) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 16; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 16; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 48; ++ax3) {
        int32_t cse_var_5 = (((ax1 * 768) + (ax2 * 48)) + ax3);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_5] = (((int32_t*)DepthwiseConv2d_let)[cse_var_5] - ((int32_t*)fused_nn_conv2d_constant_8_let)[ax3]);
      }
    }
  }
  for (int32_t ax1_1 = 0; ax1_1 < 16; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 16; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 48; ++ax3_1) {
        int32_t cse_var_6 = (((ax1_1 * 768) + (ax2_1 * 48)) + ax3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_6] = (((int32_t*)DepthwiseConv2d_let)[cse_var_6] + ((int32_t*)fused_nn_conv2d_subtract_constant_8_let)[ax3_1]);
      }
    }
  }
  for (int32_t i1_1 = 0; i1_1 < 16; ++i1_1) {
    for (int32_t i2_1 = 0; i2_1 < 16; ++i2_1) {
      for (int32_t i3_1 = 0; i3_1 < 48; ++i3_1) {
        int32_t cse_var_7 = (((i1_1 * 768) + (i2_1 * 48)) + i3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_7] = ((int32_t)(((((int64_t)((int32_t*)DepthwiseConv2d_let)[cse_var_7]) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_24_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_26_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_26_let)[i3_1] + 31))));
      }
    }
  }
  for (int32_t ax1_2 = 0; ax1_2 < 16; ++ax1_2) {
    for (int32_t ax2_2 = 0; ax2_2 < 16; ++ax2_2) {
      for (int32_t ax3_2 = 0; ax3_2 < 48; ++ax3_2) {
        int32_t cse_var_8 = (((ax1_2 * 768) + (ax2_2 * 48)) + ax3_2);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_8] = (((int32_t*)DepthwiseConv2d_let)[cse_var_8] - 128);
      }
    }
  }
  for (int32_t i1_2 = 0; i1_2 < 16; ++i1_2) {
    for (int32_t i2_2 = 0; i2_2 < 16; ++i2_2) {
      for (int32_t i3_2 = 0; i3_2 < 48; ++i3_2) {
        int32_t cse_var_9 = (((i1_2 * 768) + (i2_2 * 48)) + i3_2);
        int32_t v_ = ((int32_t*)DepthwiseConv2d_let)[cse_var_9];
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_9] = ((v__1) > (-128) ? (v__1) : (-128));
      }
    }
  }
  for (int32_t ax1_3 = 0; ax1_3 < 16; ++ax1_3) {
    for (int32_t ax2_3 = 0; ax2_3 < 16; ++ax2_3) {
      for (int32_t ax3_3 = 0; ax3_3 < 48; ++ax3_3) {
        int32_t cse_var_10 = (((ax1_3 * 768) + (ax2_3 * 48)) + ax3_3);
        T_cast[cse_var_10] = ((int8_t)((int32_t*)DepthwiseConv2d_let)[cse_var_10]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_8(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_46_var, uint8_t* global_workspace_47_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED v8 HW-REQUANT] 1x1 conv: 8->48 channels, 256 spatial positions
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_46_var[635760]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_46_var[636144]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_46_var[638448]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_46_var[633840]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_46_var[627792]);

  // Safe copy: TVM may alias input/output workspace buffers
  static int8_t _inp[2048];
  for (int32_t _i = 0; _i < 2048; _i++) _inp[_i] = p0[_i];

  // Set per-layer zero-point once. The helper is provided by conv_accel.h.
  accel_set_output_zp(-128);

  for (int32_t tile = 0; tile < 1; tile++) {
    int32_t oc_base = tile * 48;
    int32_t oc_count = 48;
    if (oc_base + oc_count > 48) oc_count = 48 - oc_base;

    // Pack weights for this tile (relayout from [rc][oc] to [oc][rc])
    static int8_t rw[384];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      for (int32_t rc = 0; rc < 8; rc++)
        rw[oc * 8 + rc] = weights[rc * 48 + oc_base + oc];
    }
    accel_spad_write(0x008, rw, oc_count * 8);

    // Pack params for this tile: 16 bytes per OC.
    //   word 0: scale (high 32) and bias (low 32)
    //   word 1: zero  (high 32) and shift (low 32)
    static int32_t params[48 * 4];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      int32_t ax3 = oc_base + oc;
      params[oc*4 + 0] = (conv_sub[ax3] - conv_const[ax3]);         // bias
      params[oc*4 + 1] = quant_scale[ax3];      // scale
      params[oc*4 + 2] = quant_shift[ax3] + 31; // shift
      params[oc*4 + 3] = 0;                     // reserved
    }
    accel_spad_write(0x248, (int8_t*)params, oc_count * 16);

    for (int32_t sp = 0; sp < 256; sp++) {
      accel_spad_write(0x000, &_inp[sp * 8], 8);
      hw_multi_dot_requant(0x000, 0x008, 0x188,
                           0x248, 8, oc_count);
      accel_unpack_i8_outputs(&T_cast[(sp * 48) + oc_base],
                              0x188, oc_count);
    }
  }
  return 0;

#else

  void* fused_nn_conv2d_subtract_add_constant_29_let = (&(global_const_workspace_46_var[635760]));
  void* fused_nn_conv2d_subtract_add_constant_28_let = (&(global_const_workspace_46_var[635952]));
  void* fused_nn_conv2d_subtract_add_constant_27_let = (&(global_const_workspace_46_var[636144]));
  void* fused_nn_conv2d_constant_9_let = (&(global_const_workspace_46_var[638448]));
  void* fused_nn_conv2d_subtract_constant_9_let = (&(global_const_workspace_46_var[633840]));
  void* fused_constant_13_let = (&(global_const_workspace_46_var[627792]));
  void* pad_temp_let = (&(global_workspace_47_var[68800]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 16; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 16; ++i2) {
      for (int32_t i3 = 0; i3 < 8; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 128) + (i2 * 8)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 256; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_47_var[70848]));
    for (int32_t ax3 = 0; ax3 < 48; ++ax3) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 8; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 8) + rc)]) * ((int32_t)((int8_t*)fused_constant_13_let)[((rc * 48) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_9_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_9_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_27_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_29_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_29_let)[ax3] + 31)))) - 128;
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
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_9(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_50_var, uint8_t* global_workspace_51_var) {
  void* fused_nn_conv2d_subtract_add_constant_32_let = (&(global_const_workspace_50_var[635184]));
  void* fused_nn_conv2d_subtract_add_constant_31_let = (&(global_const_workspace_50_var[635376]));
  void* fused_nn_conv2d_subtract_add_constant_30_let = (&(global_const_workspace_50_var[635568]));
  void* fused_nn_conv2d_subtract_constant_10_let = (&(global_const_workspace_50_var[634800]));
  void* fused_nn_conv2d_constant_10_let = (&(global_const_workspace_50_var[639408]));
  void* fused_constant_14_let = (&(global_const_workspace_50_var[614208]));
  void* PaddedInput_let = (&(global_workspace_51_var[13872]));
  void* DepthwiseConv2d_let = (&(global_workspace_51_var[27744]));
  for (int32_t i1 = 0; i1 < 17; ++i1) {
    for (int32_t i2 = 0; i2 < 17; ++i2) {
      for (int32_t i3 = 0; i3 < 48; ++i3) {
        int32_t cse_var_1 = (((i1 * 816) + (i2 * 48)) + i3);
        ((int8_t*)PaddedInput_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t i = 0; i < 8; ++i) {
    for (int32_t j = 0; j < 8; ++j) {
      for (int32_t c = 0; c < 48; ++c) {
        ((int32_t*)DepthwiseConv2d_let)[(((i * 384) + (j * 48)) + c)] = 0;
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            int32_t cse_var_3 = (dj * 48);
            int32_t cse_var_2 = (((i * 384) + (j * 48)) + c);
            ((int32_t*)DepthwiseConv2d_let)[cse_var_2] = (((int32_t*)DepthwiseConv2d_let)[cse_var_2] + (((int32_t)((int8_t*)PaddedInput_let)[(((((i * 1632) + (di * 816)) + (j * 96)) + cse_var_3) + c)]) * ((int32_t)((int8_t*)fused_constant_14_let)[(((di * 144) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 8; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 8; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 48; ++ax3) {
        int32_t cse_var_4 = (((ax1 * 384) + (ax2 * 48)) + ax3);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_4] = (((int32_t*)DepthwiseConv2d_let)[cse_var_4] - ((int32_t*)fused_nn_conv2d_constant_10_let)[ax3]);
      }
    }
  }
  for (int32_t ax1_1 = 0; ax1_1 < 8; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 8; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 48; ++ax3_1) {
        int32_t cse_var_5 = (((ax1_1 * 384) + (ax2_1 * 48)) + ax3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_5] = (((int32_t*)DepthwiseConv2d_let)[cse_var_5] + ((int32_t*)fused_nn_conv2d_subtract_constant_10_let)[ax3_1]);
      }
    }
  }
  for (int32_t i1_1 = 0; i1_1 < 8; ++i1_1) {
    for (int32_t i2_1 = 0; i2_1 < 8; ++i2_1) {
      for (int32_t i3_1 = 0; i3_1 < 48; ++i3_1) {
        int32_t cse_var_6 = (((i1_1 * 384) + (i2_1 * 48)) + i3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_6] = ((int32_t)(((((int64_t)((int32_t*)DepthwiseConv2d_let)[cse_var_6]) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_30_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_32_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_32_let)[i3_1] + 31))));
      }
    }
  }
  for (int32_t ax1_2 = 0; ax1_2 < 8; ++ax1_2) {
    for (int32_t ax2_2 = 0; ax2_2 < 8; ++ax2_2) {
      for (int32_t ax3_2 = 0; ax3_2 < 48; ++ax3_2) {
        int32_t cse_var_7 = (((ax1_2 * 384) + (ax2_2 * 48)) + ax3_2);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_7] = (((int32_t*)DepthwiseConv2d_let)[cse_var_7] - 128);
      }
    }
  }
  for (int32_t i1_2 = 0; i1_2 < 8; ++i1_2) {
    for (int32_t i2_2 = 0; i2_2 < 8; ++i2_2) {
      for (int32_t i3_2 = 0; i3_2 < 48; ++i3_2) {
        int32_t cse_var_8 = (((i1_2 * 384) + (i2_2 * 48)) + i3_2);
        int32_t v_ = ((int32_t*)DepthwiseConv2d_let)[cse_var_8];
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_8] = ((v__1) > (-128) ? (v__1) : (-128));
      }
    }
  }
  for (int32_t ax1_3 = 0; ax1_3 < 8; ++ax1_3) {
    for (int32_t ax2_3 = 0; ax2_3 < 8; ++ax2_3) {
      for (int32_t ax3_3 = 0; ax3_3 < 48; ++ax3_3) {
        int32_t cse_var_9 = (((ax1_3 * 384) + (ax2_3 * 48)) + ax3_3);
        T_cast[cse_var_9] = ((int8_t)((int32_t*)DepthwiseConv2d_let)[cse_var_9]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_clip_cast(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_124_var, uint8_t* global_workspace_125_var) {
  void* fused_nn_conv2d_subtract_add_constant_92_let = (&(global_const_workspace_124_var[640256]));
  void* fused_nn_conv2d_subtract_add_constant_91_let = (&(global_const_workspace_124_var[640384]));
  void* fused_nn_conv2d_subtract_add_constant_90_let = (&(global_const_workspace_124_var[640512]));
  void* fused_nn_conv2d_constant_30_let = (&(global_const_workspace_124_var[642048]));
  void* fused_nn_conv2d_subtract_constant_30_let = (&(global_const_workspace_124_var[640000]));
  void* fused_constant_38_let = (&(global_const_workspace_124_var[439424]));
  void* pad_temp_let = (&(global_workspace_125_var[0]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 4; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 4; ++i2) {
      for (int32_t i3 = 0; i3 < 144; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 576) + (i2 * 144)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 16; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_125_var[36352]));
    for (int32_t ax3 = 0; ax3 < 32; ++ax3) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 144; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 144) + rc)]) * ((int32_t)((int8_t*)fused_constant_38_let)[((rc * 32) + ax3)])));
      }
      int32_t v_ = (int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_30_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_30_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_90_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_92_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_92_let)[ax3] + 31)));
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_cast[((ax0_ax1_fused_ax2_fused * 32) + ax3)] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_clip_cast_1(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_148_var, uint8_t* global_workspace_149_var) {
  void* fused_nn_conv2d_subtract_add_constant_110_let = (&(global_const_workspace_148_var[630704]));
  void* fused_nn_conv2d_subtract_add_constant_109_let = (&(global_const_workspace_148_var[630928]));
  void* fused_nn_conv2d_subtract_add_constant_108_let = (&(global_const_workspace_148_var[631152]));
  void* fused_nn_conv2d_constant_37_let = (&(global_const_workspace_148_var[631376]));
  void* fused_nn_conv2d_subtract_constant_36_let = (&(global_const_workspace_148_var[630480]));
  void* fused_constant_45_let = (&(global_const_workspace_148_var[343168]));
  void* pad_temp_let = (&(global_workspace_149_var[29184]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 2; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 2; ++i2) {
      for (int32_t i3 = 0; i3 < 192; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 384) + (i2 * 192)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 4; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_149_var[32320]));
    for (int32_t ax3 = 0; ax3 < 56; ++ax3) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 192; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 192) + rc)]) * ((int32_t)((int8_t*)fused_constant_45_let)[((rc * 56) + ax3)])));
      }
      int32_t v_ = (int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_36_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_37_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_108_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_110_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_110_let)[ax3] + 31)));
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_cast[((ax0_ax1_fused_ax2_fused * 56) + ax3)] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
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
TVM_DLL int32_t tvmgen_default_fused_nn_pad_1(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_14_var, uint8_t* global_workspace_15_var) {
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 33; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 33; ++ax2) {
      for (int32_t ax3_outer = 0; ax3_outer < 3; ++ax3_outer) {
        for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
          int32_t cse_var_2 = (ax2 * 48);
          int32_t cse_var_1 = (ax3_outer * 16);
          T_pad[((((ax0_ax1_fused * 1584) + cse_var_2) + cse_var_1) + ax3_inner)] = (((ax0_ax1_fused < 32) && (ax2 < 32)) ? p0[((((ax0_ax1_fused * 1536) + cse_var_2) + cse_var_1) + ax3_inner)] : (int8_t)-128);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_10(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_120_var, uint8_t* global_workspace_121_var) {
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 6; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 6; ++ax2) {
      for (int32_t ax3_outer = 0; ax3_outer < 9; ++ax3_outer) {
        for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
          int32_t cse_var_2 = (ax2 * 144);
          int32_t cse_var_1 = (ax3_outer * 16);
          T_pad[((((ax0_ax1_fused * 864) + cse_var_2) + cse_var_1) + ax3_inner)] = (((((1 <= ax0_ax1_fused) && (ax0_ax1_fused < 5)) && (1 <= ax2)) && (ax2 < 5)) ? p0[(((((ax0_ax1_fused * 576) + cse_var_2) + cse_var_1) + ax3_inner) - 720)] : (int8_t)-128);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_11(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_128_var, uint8_t* global_workspace_129_var) {
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 6; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 6; ++ax2) {
      for (int32_t ax3_outer = 0; ax3_outer < 12; ++ax3_outer) {
        for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
          int32_t cse_var_2 = (ax2 * 192);
          int32_t cse_var_1 = (ax3_outer * 16);
          T_pad[((((ax0_ax1_fused * 1152) + cse_var_2) + cse_var_1) + ax3_inner)] = (((((1 <= ax0_ax1_fused) && (ax0_ax1_fused < 5)) && (1 <= ax2)) && (ax2 < 5)) ? p0[(((((ax0_ax1_fused * 768) + cse_var_2) + cse_var_1) + ax3_inner) - 960)] : (int8_t)-128);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_12(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_144_var, uint8_t* global_workspace_145_var) {
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 5; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 5; ++ax2) {
      for (int32_t ax3_outer = 0; ax3_outer < 12; ++ax3_outer) {
        for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
          int32_t cse_var_2 = (ax2 * 192);
          int32_t cse_var_1 = (ax3_outer * 16);
          T_pad[((((ax0_ax1_fused * 960) + cse_var_2) + cse_var_1) + ax3_inner)] = (((ax0_ax1_fused < 4) && (ax2 < 4)) ? p0[((((ax0_ax1_fused * 768) + cse_var_2) + cse_var_1) + ax3_inner)] : (int8_t)-128);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_13(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_152_var, uint8_t* global_workspace_153_var) {
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 4; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 4; ++ax2) {
      for (int32_t ax3_outer = 0; ax3_outer < 21; ++ax3_outer) {
        for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
          int32_t cse_var_2 = (ax2 * 336);
          int32_t cse_var_1 = (ax3_outer * 16);
          T_pad[((((ax0_ax1_fused * 1344) + cse_var_2) + cse_var_1) + ax3_inner)] = (((((1 <= ax0_ax1_fused) && (ax0_ax1_fused < 3)) && (1 <= ax2)) && (ax2 < 3)) ? p0[(((((ax0_ax1_fused * 672) + cse_var_2) + cse_var_1) + ax3_inner) - 1008)] : (int8_t)-128);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_14(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_166_var, uint8_t* global_workspace_167_var) {
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 4; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 4; ++ax2) {
      for (int32_t ax3_outer = 0; ax3_outer < 21; ++ax3_outer) {
        for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
          int32_t cse_var_2 = (ax2 * 336);
          int32_t cse_var_1 = (ax3_outer * 16);
          T_pad[((((ax0_ax1_fused * 1344) + cse_var_2) + cse_var_1) + ax3_inner)] = (((((1 <= ax0_ax1_fused) && (ax0_ax1_fused < 3)) && (1 <= ax2)) && (ax2 < 3)) ? p0[(((((ax0_ax1_fused * 672) + cse_var_2) + cse_var_1) + ax3_inner) - 1008)] : (int8_t)-128);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_15(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_182_var, uint8_t* global_workspace_183_var) {
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 6; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 6; ++ax2) {
      for (int32_t ax3_outer = 0; ax3_outer < 12; ++ax3_outer) {
        for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
          int32_t cse_var_2 = (ax2 * 192);
          int32_t cse_var_1 = (ax3_outer * 16);
          T_pad[((((ax0_ax1_fused * 1152) + cse_var_2) + cse_var_1) + ax3_inner)] = (((((1 <= ax0_ax1_fused) && (ax0_ax1_fused < 5)) && (1 <= ax2)) && (ax2 < 5)) ? p0[(((((ax0_ax1_fused * 768) + cse_var_2) + cse_var_1) + ax3_inner) - 960)] : (int8_t)3);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_16(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_186_var, uint8_t* global_workspace_187_var) {
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 6; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 6; ++ax2) {
      for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
        for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
          int32_t cse_var_2 = (ax2 * 32);
          int32_t cse_var_1 = (ax3_outer * 16);
          T_pad[((((ax0_ax1_fused * 192) + cse_var_2) + cse_var_1) + ax3_inner)] = (((((1 <= ax0_ax1_fused) && (ax0_ax1_fused < 5)) && (1 <= ax2)) && (ax2 < 5)) ? p0[(((((ax0_ax1_fused * 128) + cse_var_2) + cse_var_1) + ax3_inner) - 160)] : (int8_t)-128);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_2(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_20_var, uint8_t* global_workspace_21_var) {
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 18; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 18; ++ax2) {
      for (int32_t ax3_inner = 0; ax3_inner < 8; ++ax3_inner) {
        int32_t cse_var_1 = (ax2 * 8);
        T_pad[(((ax0_ax1_fused * 144) + cse_var_1) + ax3_inner)] = (((((1 <= ax0_ax1_fused) && (ax0_ax1_fused < 17)) && (1 <= ax2)) && (ax2 < 17)) ? p0[((((ax0_ax1_fused * 128) + cse_var_1) + ax3_inner) - 136)] : (int8_t)-39);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_3(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_40_var, uint8_t* global_workspace_41_var) {
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 18; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 18; ++ax2) {
      for (int32_t ax3_outer = 0; ax3_outer < 3; ++ax3_outer) {
        for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
          int32_t cse_var_2 = (ax2 * 48);
          int32_t cse_var_1 = (ax3_outer * 16);
          T_pad[((((ax0_ax1_fused * 864) + cse_var_2) + cse_var_1) + ax3_inner)] = (((((1 <= ax0_ax1_fused) && (ax0_ax1_fused < 17)) && (1 <= ax2)) && (ax2 < 17)) ? p0[(((((ax0_ax1_fused * 768) + cse_var_2) + cse_var_1) + ax3_inner) - 816)] : (int8_t)-128);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_4(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_48_var, uint8_t* global_workspace_49_var) {
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 17; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 17; ++ax2) {
      for (int32_t ax3_outer = 0; ax3_outer < 3; ++ax3_outer) {
        for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
          int32_t cse_var_2 = (ax2 * 48);
          int32_t cse_var_1 = (ax3_outer * 16);
          T_pad[((((ax0_ax1_fused * 816) + cse_var_2) + cse_var_1) + ax3_inner)] = (((ax0_ax1_fused < 16) && (ax2 < 16)) ? p0[((((ax0_ax1_fused * 768) + cse_var_2) + cse_var_1) + ax3_inner)] : (int8_t)-128);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_5(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_56_var, uint8_t* global_workspace_57_var) {
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 10; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 10; ++ax2) {
      for (int32_t ax3_outer = 0; ax3_outer < 6; ++ax3_outer) {
        for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
          int32_t cse_var_2 = (ax2 * 96);
          int32_t cse_var_1 = (ax3_outer * 16);
          T_pad[((((ax0_ax1_fused * 960) + cse_var_2) + cse_var_1) + ax3_inner)] = (((((1 <= ax0_ax1_fused) && (ax0_ax1_fused < 9)) && (1 <= ax2)) && (ax2 < 9)) ? p0[(((((ax0_ax1_fused * 768) + cse_var_2) + cse_var_1) + ax3_inner) - 864)] : (int8_t)-128);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_6(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_68_var, uint8_t* global_workspace_69_var) {
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 10; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 10; ++ax2) {
      for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
        int32_t cse_var_1 = (ax2 * 16);
        T_pad[(((ax0_ax1_fused * 160) + cse_var_1) + ax3_inner)] = (((((1 <= ax0_ax1_fused) && (ax0_ax1_fused < 9)) && (1 <= ax2)) && (ax2 < 9)) ? p0[((((ax0_ax1_fused * 128) + cse_var_1) + ax3_inner) - 144)] : (int8_t)-5);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_7(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_72_var, uint8_t* global_workspace_73_var) {
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 10; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 10; ++ax2) {
      for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
        for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
          int32_t cse_var_2 = (ax2 * 32);
          int32_t cse_var_1 = (ax3_outer * 16);
          T_pad[((((ax0_ax1_fused * 320) + cse_var_2) + cse_var_1) + ax3_inner)] = (((((1 <= ax0_ax1_fused) && (ax0_ax1_fused < 9)) && (1 <= ax2)) && (ax2 < 9)) ? p0[(((((ax0_ax1_fused * 256) + cse_var_2) + cse_var_1) + ax3_inner) - 288)] : (int8_t)-128);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_8(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_92_var, uint8_t* global_workspace_93_var) {
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 9; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 9; ++ax2) {
      for (int32_t ax3_outer = 0; ax3_outer < 6; ++ax3_outer) {
        for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
          int32_t cse_var_2 = (ax2 * 96);
          int32_t cse_var_1 = (ax3_outer * 16);
          T_pad[((((ax0_ax1_fused * 864) + cse_var_2) + cse_var_1) + ax3_inner)] = (((ax0_ax1_fused < 8) && (ax2 < 8)) ? p0[((((ax0_ax1_fused * 768) + cse_var_2) + cse_var_1) + ax3_inner)] : (int8_t)-128);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_9(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_100_var, uint8_t* global_workspace_101_var) {
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 6; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 6; ++ax2) {
      for (int32_t ax3_outer = 0; ax3_outer < 9; ++ax3_outer) {
        for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
          int32_t cse_var_2 = (ax2 * 144);
          int32_t cse_var_1 = (ax3_outer * 16);
          T_pad[((((ax0_ax1_fused * 864) + cse_var_2) + cse_var_1) + ax3_inner)] = (((((1 <= ax0_ax1_fused) && (ax0_ax1_fused < 5)) && (1 <= ax2)) && (ax2 < 5)) ? p0[(((((ax0_ax1_fused * 576) + cse_var_2) + cse_var_1) + ax3_inner) - 720)] : (int8_t)-128);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_softmax_divide_round_add_clip_cast_subtract_cast_multiply(float* p0, float* T_multiply, uint8_t* global_const_workspace_34_var, uint8_t* global_workspace_35_var) {
  void* T_softmax_maxelem_let = (&(global_workspace_35_var[40272]));
  void* T_softmax_exp_let = (&(global_workspace_35_var[40232]));
  void* T_softmax_expsum_let = (&(global_workspace_35_var[40272]));
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
TVM_DLL int32_t tvmgen_default_fused_nn_softmax_divide_round_add_clip_cast_subtract_cast_multiply_1(float* p0, float* T_multiply, uint8_t* global_const_workspace_86_var, uint8_t* global_workspace_87_var) {
  void* T_softmax_maxelem_let = (&(global_workspace_87_var[36496]));
  void* T_softmax_exp_let = (&(global_workspace_87_var[36456]));
  void* T_softmax_expsum_let = (&(global_workspace_87_var[36496]));
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
TVM_DLL int32_t tvmgen_default_fused_nn_softmax_divide_round_add_clip_cast_subtract_cast_multiply_2(float* p0, float* T_multiply, uint8_t* global_const_workspace_180_var, uint8_t* global_workspace_181_var) {
  void* T_softmax_maxelem_let = (&(global_workspace_181_var[30544]));
  void* T_softmax_exp_let = (&(global_workspace_181_var[30504]));
  void* T_softmax_expsum_let = (&(global_workspace_181_var[30544]));
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
TVM_DLL int32_t tvmgen_default_fused_nn_softmax_divide_round_add_clip_cast_subtract_cast_multiply_3(float* p0, float* T_multiply, uint8_t* global_const_workspace_200_var, uint8_t* global_workspace_201_var) {
  void* T_softmax_maxelem_let = (&(global_workspace_201_var[272]));
  void* T_softmax_exp_let = (&(global_workspace_201_var[232]));
  void* T_softmax_expsum_let = (&(global_workspace_201_var[272]));
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
TVM_DLL int32_t tvmgen_default_fused_subtract_add_clip_cast_reshape(int32_t* p0, int8_t* T_reshape, uint8_t* global_const_workspace_176_var, uint8_t* global_workspace_177_var) {
  void* fused_constant_54_let = (&(global_const_workspace_176_var[648832]));
  for (int32_t ax1_outer = 0; ax1_outer < 80; ++ax1_outer) {
    for (int32_t ax1_inner = 0; ax1_inner < 16; ++ax1_inner) {
      int32_t cse_var_1 = ((ax1_outer * 16) + ax1_inner);
      int32_t v_ = (p0[cse_var_1] - ((int32_t*)fused_constant_54_let)[0]) - 128;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_reshape[cse_var_1] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_fixed_point_multiply_add_clip_cast_reshape(int32_t* p0, int8_t* T_reshape, uint8_t* global_const_workspace_26_var, uint8_t* global_workspace_27_var) {
  void* fused_constant_7_let = (&(global_const_workspace_26_var[648800]));
  for (int32_t ax1_outer = 0; ax1_outer < 2; ++ax1_outer) {
    for (int32_t ax1_inner = 0; ax1_inner < 16; ++ax1_inner) {
      int32_t cse_var_1 = ((ax1_outer * 16) + ax1_inner);
      int32_t v_ = ((int32_t)(((((2 != 0) ? (((int64_t)(p0[cse_var_1] - ((int32_t*)fused_constant_7_let)[0])) << ((int64_t)2)) : ((int64_t)(p0[cse_var_1] - ((int32_t*)fused_constant_7_let)[0]))) * (int64_t)1511133332) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31)))) - 128;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_reshape[cse_var_1] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_fixed_point_multiply_add_clip_cast_reshape_1(int32_t* p0, int8_t* T_reshape, uint8_t* global_const_workspace_78_var, uint8_t* global_workspace_79_var) {
  void* fused_constant_23_let = (&(global_const_workspace_78_var[648848]));
  for (int32_t ax1_inner = 0; ax1_inner < 16; ++ax1_inner) {
    int32_t v_ = ((int32_t)(((((3 != 0) ? (((int64_t)(p0[ax1_inner] - ((int32_t*)fused_constant_23_let)[0])) << ((int64_t)3)) : ((int64_t)(p0[ax1_inner] - ((int32_t*)fused_constant_23_let)[0]))) * (int64_t)1115923844) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31)))) - 128;
    int32_t v__1 = (v_) < (127) ? (v_) : (127);
    T_reshape[ax1_inner] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_fixed_point_multiply_add_clip_cast_reshape_2(int32_t* p0, int8_t* T_reshape, uint8_t* global_const_workspace_192_var, uint8_t* global_workspace_193_var) {
  void* fused_constant_58_let = (&(global_const_workspace_192_var[648816]));
  for (int32_t ax1_inner = 0; ax1_inner < 16; ++ax1_inner) {
    int32_t v_ = ((int32_t)(((((2 != 0) ? (((int64_t)(p0[ax1_inner] - ((int32_t*)fused_constant_58_let)[0])) << ((int64_t)2)) : ((int64_t)(p0[ax1_inner] - ((int32_t*)fused_constant_58_let)[0]))) * (int64_t)1444259378) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31)))) - 128;
    int32_t v__1 = (v_) < (127) ? (v_) : (127);
    T_reshape[ax1_inner] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default___tvm_main__(float* serving_default_input_86_0_buffer_var, float* StatefulPartitionedCall_1_buffer_var, float* StatefulPartitionedCall_2_buffer_var, float* StatefulPartitionedCall_0_buffer_var, float* StatefulPartitionedCall_3_buffer_var, uint8_t* global_const_workspace_0_var, uint8_t* global_workspace_1_var) {
  void* sid_57_let = (&(global_workspace_1_var[14400]));
  void* sid_55_let = (&(global_workspace_1_var[0]));
  void* sid_51_let = (&(global_workspace_1_var[0]));
  void* sid_49_let = (&(global_workspace_1_var[15168]));
  void* sid_41_let = (&(global_workspace_1_var[36224]));
  void* sid_40_let = (&(global_workspace_1_var[36512]));
  void* sid_60_let = (&(global_workspace_1_var[9216]));
  void* sid_38_let = (&(global_workspace_1_var[0]));
  void* sid_54_let = (&(global_workspace_1_var[5184]));
  void* sid_37_let = (&(global_workspace_1_var[7296]));
  void* sid_52_let = (&(global_workspace_1_var[9216]));
  void* sid_53_let = (&(global_workspace_1_var[14784]));
  void* sid_33_let = (&(global_workspace_1_var[24576]));
  void* sid_58_let = (&(global_workspace_1_var[5184]));
  void* sid_31_let = (&(global_workspace_1_var[9600]));
  void* sid_43_let = (&(global_workspace_1_var[36416]));
  void* sid_10_let = (&(global_workspace_1_var[35360]));
  void* sid_61_let = (&(global_workspace_1_var[14784]));
  void* sid_48_let = (&(global_workspace_1_var[21696]));
  void* sid_12_let = (&(global_workspace_1_var[40000]));
  void* sid_45_let = (&(global_workspace_1_var[36224]));
  void* sid_7_let = (&(global_workspace_1_var[0]));
  void* sid_30_let = (&(global_workspace_1_var[34176]));
  void* sid_29_let = (&(global_workspace_1_var[24576]));
  void* sid_18_let = (&(global_workspace_1_var[64704]));
  void* sid_36_let = (&(global_workspace_1_var[10496]));
  void* sid_6_let = (&(global_workspace_1_var[52272]));
  void* sid_27_let = (&(global_workspace_1_var[9600]));
  void* sid_13_let = (&(global_workspace_1_var[40256]));
  void* sid_11_let = (&(global_workspace_1_var[0]));
  void* sid_39_let = (&(global_workspace_1_var[36224]));
  void* sid_50_let = (&(global_workspace_1_var[5184]));
  void* sid_46_let = (&(global_workspace_1_var[7776]));
  void* sid_2_let = (&(global_workspace_1_var[18496]));
  void* sid_8_let = (&(global_workspace_1_var[153696]));
  void* sid_3_let = (&(global_workspace_1_var[0]));
  void* sid_59_let = (&(global_workspace_1_var[0]));
  void* sid_4_let = (&(global_workspace_1_var[65536]));
  void* sid_15_let = (&(global_workspace_1_var[40128]));
  void* sid_19_let = (&(global_workspace_1_var[15552]));
  void* sid_9_let = (&(global_workspace_1_var[37952]));
  void* sid_26_let = (&(global_workspace_1_var[35200]));
  void* sid_5_let = (&(global_workspace_1_var[16384]));
  void* sid_56_let = (&(global_workspace_1_var[9216]));
  void* sid_32_let = (&(global_workspace_1_var[0]));
  void* sid_16_let = (&(global_workspace_1_var[40192]));
  void* sid_47_let = (&(global_workspace_1_var[0]));
  void* sid_42_let = (&(global_workspace_1_var[36352]));
  void* sid_20_let = (&(global_workspace_1_var[0]));
  void* sid_82_let = (&(global_workspace_1_var[29184]));
  void* sid_25_let = (&(global_workspace_1_var[40032]));
  void* sid_79_let = (&(global_workspace_1_var[0]));
  void* sid_21_let = (&(global_workspace_1_var[49152]));
  void* sid_14_let = (&(global_workspace_1_var[40000]));
  void* sid_22_let = (&(global_workspace_1_var[66752]));
  void* sid_23_let = (&(global_workspace_1_var[13872]));
  void* sid_1_let = (&(global_workspace_1_var[47560]));
  void* sid_24_let = (&(global_workspace_1_var[0]));
  void* sid_35_let = (&(global_workspace_1_var[14144]));
  void* sid_34_let = (&(global_workspace_1_var[35200]));
  void* sid_81_let = (&(global_workspace_1_var[31872]));
  void* sid_28_let = (&(global_workspace_1_var[0]));
  void* sid_62_let = (&(global_workspace_1_var[5184]));
  void* sid_72_let = (&(global_workspace_1_var[32256]));
  void* sid_63_let = (&(global_workspace_1_var[0]));
  void* sid_64_let = (&(global_workspace_1_var[9216]));
  void* sid_67_let = (&(global_workspace_1_var[0]));
  void* sid_65_let = (&(global_workspace_1_var[35840]));
  void* sid_66_let = (&(global_workspace_1_var[6912]));
  void* sid_68_let = (&(global_workspace_1_var[12288]));
  void* sid_69_let = (&(global_workspace_1_var[35328]));
  void* sid_70_let = (&(global_workspace_1_var[26112]));
  void* sid_71_let = (&(global_workspace_1_var[19200]));
  void* sid_73_let = (&(global_workspace_1_var[35840]));
  void* sid_74_let = (&(global_workspace_1_var[29184]));
  void* sid_75_let = (&(global_workspace_1_var[0]));
  void* sid_76_let = (&(global_workspace_1_var[32256]));
  void* sid_96_let = (&(global_workspace_1_var[6912]));
  void* sid_77_let = (&(global_workspace_1_var[32096]));
  void* sid_78_let = (&(global_workspace_1_var[29184]));
  void* sid_80_let = (&(global_workspace_1_var[30528]));
  void* sid_83_let = (&(global_workspace_1_var[0]));
  void* sid_84_let = (&(global_workspace_1_var[30528]));
  void* sid_85_let = (&(global_workspace_1_var[32096]));
  void* sid_86_let = (&(global_workspace_1_var[29184]));
  void* sid_87_let = (&(global_workspace_1_var[0]));
  void* sid_88_let = (&(global_workspace_1_var[30528]));
  void* sid_103_let = (&(global_workspace_1_var[192]));
  void* sid_89_let = (&(global_workspace_1_var[30528]));
  void* sid_90_let = (&(global_workspace_1_var[0]));
  void* sid_91_let = (&(global_workspace_1_var[0]));
  void* sid_92_let = (&(global_workspace_1_var[29184]));
  void* sid_93_let = (&(global_workspace_1_var[30464]));
  void* sid_95_let = (&(global_workspace_1_var[6912]));
  void* sid_97_let = (&(global_workspace_1_var[1152]));
  void* sid_98_let = (&(global_workspace_1_var[1152]));
  void* sid_99_let = (&(global_workspace_1_var[0]));
  void* sid_100_let = (&(global_workspace_1_var[288]));
  void* sid_101_let = (&(global_workspace_1_var[0]));
  void* sid_102_let = (&(global_workspace_1_var[128]));
  if (tvmgen_default_fused_divide_round_add_clip_cast_nn_pad(serving_default_input_86_0_buffer_var, sid_1_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast(sid_1_let, sid_2_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_pad(sid_2_let, sid_3_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_1(sid_3_let, sid_4_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_2(sid_4_let, sid_5_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_3(sid_5_let, sid_6_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_pad_1(sid_6_let, sid_7_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_4(sid_7_let, sid_8_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_5(sid_8_let, sid_9_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;

  while(*HANDSHAKE != 0xC0);
  clock_ungate_signal();
  while(*HANDSHAKE != 0xCF);

  // if (tvmgen_default_fused_nn_pad_2(sid_9_let, sid_10_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip(sid_10_let, sid_11_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_mean(sid_11_let, sid_12_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_subtract_fixed_point_multiply_add_clip_cast_reshape(sid_12_let, sid_13_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast(sid_13_let, sid_14_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast_1(sid_14_let, sid_15_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_subtract__fa059688879ad8de_(sid_15_let, sid_16_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_softmax_divide_round_add_clip_cast_subtract_cast_multiply(sid_16_let, StatefulPartitionedCall_1_buffer_var, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // 
  // eval(StatefulPartitionedCall_1_buffer_var);

  if (tvmgen_default_fused_cast_subtract_multiply_fixed_point_multiply_add_clip_subtract_fixed_point__feae580412b1470c_(sid_9_let, sid_18_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_6(sid_18_let, sid_19_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_pad_3(sid_19_let, sid_20_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_7(sid_20_let, sid_21_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point__7462b0c1d1f4a4f5_(sid_18_let, sid_21_let, sid_22_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_8(sid_22_let, sid_23_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_pad_4(sid_23_let, sid_24_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_9(sid_24_let, sid_25_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_10(sid_25_let, sid_26_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_11(sid_26_let, sid_27_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_pad_5(sid_27_let, sid_28_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_12(sid_28_let, sid_29_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point__7462b0c1d1f4a4f5__1(sid_26_let, sid_29_let, sid_30_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_13(sid_30_let, sid_31_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_pad_5(sid_31_let, sid_32_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_14(sid_32_let, sid_33_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_15(sid_33_let, sid_34_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;

  while(*HANDSHAKE != 0xC0);
  clock_ungate_signal();
  while(*HANDSHAKE != 0xCF);
  
  // if (tvmgen_default_fused_nn_pad_6(sid_34_let, sid_35_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_16(sid_35_let, sid_36_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_pad_7(sid_36_let, sid_37_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_1(sid_37_let, sid_38_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_mean_1(sid_38_let, sid_39_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_subtract_fixed_point_multiply_add_clip_cast_reshape_1(sid_39_let, sid_40_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast_2(sid_40_let, sid_41_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast_3(sid_41_let, sid_42_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_subtract__fa059688879ad8de__1(sid_42_let, sid_43_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_softmax_divide_round_add_clip_cast_subtract_cast_multiply_1(sid_43_let, StatefulPartitionedCall_2_buffer_var, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // 
  // eval(StatefulPartitionedCall_2_buffer_var);

  if (tvmgen_default_fused_cast_subtract_fixed_point_multiply_add_cast_subtract_fixed_point_multiply__ed64f25d07613c12_(sid_30_let, sid_34_let, sid_45_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_17(sid_45_let, sid_46_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_pad_8(sid_46_let, sid_47_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_18(sid_47_let, sid_48_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_19(sid_48_let, sid_49_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_20(sid_49_let, sid_50_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_pad_9(sid_50_let, sid_51_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_21(sid_51_let, sid_52_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point__7462b0c1d1f4a4f5__2(sid_49_let, sid_52_let, sid_53_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_22(sid_53_let, sid_54_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_pad_9(sid_54_let, sid_55_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_23(sid_55_let, sid_56_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point__7462b0c1d1f4a4f5__3(sid_53_let, sid_56_let, sid_57_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_24(sid_57_let, sid_58_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_pad_9(sid_58_let, sid_59_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_25(sid_59_let, sid_60_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point__7462b0c1d1f4a4f5__4(sid_57_let, sid_60_let, sid_61_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_26(sid_61_let, sid_62_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_pad_10(sid_62_let, sid_63_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_27(sid_63_let, sid_64_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_clip_cast(sid_64_let, sid_65_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast(sid_65_let, sid_66_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_pad_11(sid_66_let, sid_67_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_28(sid_67_let, sid_68_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_cast_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply__ad3cbdcd07b87e28_(sid_65_let, sid_68_let, sid_69_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_29(sid_69_let, sid_70_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;

  while(*HANDSHAKE != 0xC0);
  clock_ungate_signal();
  while(*HANDSHAKE != 0xCF);

  // if (tvmgen_default_fused_nn_pad_15(sid_70_let, sid_95_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_39(sid_95_let, sid_96_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_pad_16(sid_96_let, sid_97_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_3(sid_97_let, sid_98_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_mean_3(sid_98_let, sid_99_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_subtract_fixed_point_multiply_add_clip_cast_reshape_2(sid_99_let, sid_100_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast_4(sid_100_let, sid_101_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast_5(sid_101_let, sid_102_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_subtract__fa059688879ad8de__3(sid_102_let, sid_103_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_softmax_divide_round_add_clip_cast_subtract_cast_multiply_3(sid_103_let, StatefulPartitionedCall_3_buffer_var, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // 
  // eval(StatefulPartitionedCall_3_buffer_var);

  if (tvmgen_default_fused_cast_subtract_multiply_fixed_point_multiply_add_clip_subtract_fixed_point__36a61d5bdc05d04a_(sid_70_let, sid_71_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_30(sid_71_let, sid_72_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point__7462b0c1d1f4a4f5__5(sid_69_let, sid_72_let, sid_73_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_31(sid_73_let, sid_74_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_pad_12(sid_74_let, sid_75_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_32(sid_75_let, sid_76_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_clip_cast_1(sid_76_let, sid_77_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_1(sid_77_let, sid_78_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_pad_13(sid_78_let, sid_79_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_33(sid_79_let, sid_80_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_cast_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply__ad3cbdcd07b87e28__1(sid_77_let, sid_80_let, sid_81_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_34(sid_81_let, sid_82_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_pad_13(sid_82_let, sid_83_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_35(sid_83_let, sid_84_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point__7462b0c1d1f4a4f5__6(sid_81_let, sid_84_let, sid_85_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_36(sid_85_let, sid_86_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_pad_14(sid_86_let, sid_87_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_37(sid_87_let, sid_88_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_38(sid_88_let, sid_89_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_2(sid_89_let, sid_90_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_mean_2(sid_90_let, sid_91_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_subtract_add_clip_cast_reshape(sid_91_let, sid_92_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_subtract__fa059688879ad8de__2(sid_92_let, sid_93_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_softmax_divide_round_add_clip_cast_subtract_cast_multiply_2(sid_93_let, StatefulPartitionedCall_0_buffer_var, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  return 0;
}

