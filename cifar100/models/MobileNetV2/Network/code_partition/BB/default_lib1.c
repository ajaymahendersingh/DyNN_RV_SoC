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
TVM_DLL int32_t tvmgen_default_fused_cast_subtract_fixed_point_multiply_add_cast_subtract_multiply_fixed_point__e776241b78dd908_(int8_t* p0, int8_t* p1, int8_t* T_cast, uint8_t* global_const_workspace_108_var, uint8_t* global_workspace_109_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_cast_subtract_fixed_point_multiply_add_cast_subtract_multiply_fixed_point__e776241b78dd908__1(int8_t* p0, int8_t* p1, int8_t* T_cast, uint8_t* global_const_workspace_140_var, uint8_t* global_workspace_141_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point__7462b0c1d1f4a4f5_(int8_t* p0, int8_t* p1, int8_t* T_cast, uint8_t* global_const_workspace_26_var, uint8_t* global_workspace_27_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point__7462b0c1d1f4a4f5__1(int8_t* p0, int8_t* p1, int8_t* T_cast, uint8_t* global_const_workspace_60_var, uint8_t* global_workspace_61_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point__7462b0c1d1f4a4f5__2(int8_t* p0, int8_t* p1, int8_t* T_cast, uint8_t* global_const_workspace_66_var, uint8_t* global_workspace_67_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point__7462b0c1d1f4a4f5__3(int8_t* p0, int8_t* p1, int8_t* T_cast, uint8_t* global_const_workspace_82_var, uint8_t* global_workspace_83_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point__7462b0c1d1f4a4f5__4(int8_t* p0, int8_t* p1, int8_t* T_cast, uint8_t* global_const_workspace_132_var, uint8_t* global_workspace_133_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point__7462b0c1d1f4a4f5__5(int8_t* p0, int8_t* p1, int8_t* T_cast, uint8_t* global_const_workspace_156_var, uint8_t* global_workspace_157_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point__7462b0c1d1f4a4f5__6(int8_t* p0, int8_t* p1, int8_t* T_cast, uint8_t* global_const_workspace_162_var, uint8_t* global_workspace_163_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_cast_subtract_fixed_point_multiply_nn_conv2d_subtract_add_fixed_point_mult_6a0898f32fb5072b_(int8_t* p0, int8_t* p1, int8_t* T_cast, uint8_t* global_const_workspace_116_var, uint8_t* global_workspace_117_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_cast_subtract_multiply_fixed_point_multiply_add_clip_subtract_fixed_point__feae580412b1470c_(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_52_var, uint8_t* global_workspace_53_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_divide_round_add_clip_cast_nn_pad(float* p0, int8_t* T_pad, uint8_t* global_const_workspace_2_var, uint8_t* global_workspace_3_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_mean(int32_t* p0, int32_t* T_divide, uint8_t* global_const_workspace_40_var, uint8_t* global_workspace_41_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_mean_1(int32_t* p0, int32_t* T_divide, uint8_t* global_const_workspace_96_var, uint8_t* global_workspace_97_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_mean_2(int32_t* p0, int32_t* T_divide, uint8_t* global_const_workspace_174_var, uint8_t* global_workspace_175_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_mean_3(int32_t* p0, int32_t* T_divide, uint8_t* global_const_workspace_188_var, uint8_t* global_workspace_189_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_44_var, uint8_t* global_workspace_45_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast_1(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_46_var, uint8_t* global_workspace_47_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast_2(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_100_var, uint8_t* global_workspace_101_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast_3(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_102_var, uint8_t* global_workspace_103_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast_4(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_192_var, uint8_t* global_workspace_193_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast_5(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_194_var, uint8_t* global_workspace_195_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_subtract__fa059688879ad8de_(int8_t* p0, float* T_multiply, uint8_t* global_const_workspace_48_var, uint8_t* global_workspace_49_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_subtract__fa059688879ad8de__1(int8_t* p0, float* T_multiply, uint8_t* global_const_workspace_104_var, uint8_t* global_workspace_105_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_subtract__fa059688879ad8de__2(int8_t* p0, float* T_multiply, uint8_t* global_const_workspace_178_var, uint8_t* global_workspace_179_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_subtract__fa059688879ad8de__3(int8_t* p0, float* T_multiply, uint8_t* global_const_workspace_196_var, uint8_t* global_workspace_197_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_118_var, uint8_t* global_workspace_119_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip(int8_t* p0, int32_t* compute, uint8_t* global_const_workspace_38_var, uint8_t* global_workspace_39_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_1(int8_t* p0, int32_t* compute, uint8_t* global_const_workspace_94_var, uint8_t* global_workspace_95_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_2(int8_t* p0, int32_t* compute, uint8_t* global_const_workspace_172_var, uint8_t* global_workspace_173_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_3(int8_t* p0, int32_t* compute, uint8_t* global_const_workspace_186_var, uint8_t* global_workspace_187_var);
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
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_15(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_68_var, uint8_t* global_workspace_69_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_16(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_72_var, uint8_t* global_workspace_73_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_17(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_74_var, uint8_t* global_workspace_75_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_18(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_76_var, uint8_t* global_workspace_77_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_19(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_80_var, uint8_t* global_workspace_81_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_2(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_10_var, uint8_t* global_workspace_11_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_20(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_84_var, uint8_t* global_workspace_85_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_21(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_86_var, uint8_t* global_workspace_87_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_22(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_88_var, uint8_t* global_workspace_89_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_23(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_92_var, uint8_t* global_workspace_93_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_24(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_110_var, uint8_t* global_workspace_111_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_25(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_114_var, uint8_t* global_workspace_115_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_26(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_122_var, uint8_t* global_workspace_123_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_27(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_124_var, uint8_t* global_workspace_125_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_28(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_126_var, uint8_t* global_workspace_127_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_29(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_130_var, uint8_t* global_workspace_131_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_3(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_12_var, uint8_t* global_workspace_13_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_30(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_134_var, uint8_t* global_workspace_135_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_31(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_136_var, uint8_t* global_workspace_137_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_32(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_138_var, uint8_t* global_workspace_139_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_33(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_142_var, uint8_t* global_workspace_143_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_34(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_146_var, uint8_t* global_workspace_147_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_35(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_148_var, uint8_t* global_workspace_149_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_36(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_150_var, uint8_t* global_workspace_151_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_37(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_154_var, uint8_t* global_workspace_155_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_38(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_158_var, uint8_t* global_workspace_159_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_39(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_160_var, uint8_t* global_workspace_161_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_4(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_16_var, uint8_t* global_workspace_17_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_40(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_164_var, uint8_t* global_workspace_165_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_41(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_168_var, uint8_t* global_workspace_169_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_42(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_170_var, uint8_t* global_workspace_171_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_43(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_184_var, uint8_t* global_workspace_185_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_5(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_18_var, uint8_t* global_workspace_19_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_6(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_20_var, uint8_t* global_workspace_21_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_7(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_24_var, uint8_t* global_workspace_25_var);
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
TVM_DLL int32_t tvmgen_default_fused_nn_pad_2(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_22_var, uint8_t* global_workspace_23_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_3(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_30_var, uint8_t* global_workspace_31_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_4(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_36_var, uint8_t* global_workspace_37_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_5(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_56_var, uint8_t* global_workspace_57_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_6(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_70_var, uint8_t* global_workspace_71_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_7(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_78_var, uint8_t* global_workspace_79_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_8(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_90_var, uint8_t* global_workspace_91_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_9(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_112_var, uint8_t* global_workspace_113_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_softmax_divide_round_add_clip_cast_subtract_cast_multiply(float* p0, float* T_multiply, uint8_t* global_const_workspace_50_var, uint8_t* global_workspace_51_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_softmax_divide_round_add_clip_cast_subtract_cast_multiply_1(float* p0, float* T_multiply, uint8_t* global_const_workspace_106_var, uint8_t* global_workspace_107_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_softmax_divide_round_add_clip_cast_subtract_cast_multiply_2(float* p0, float* T_multiply, uint8_t* global_const_workspace_180_var, uint8_t* global_workspace_181_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_softmax_divide_round_add_clip_cast_subtract_cast_multiply_3(float* p0, float* T_multiply, uint8_t* global_const_workspace_198_var, uint8_t* global_workspace_199_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_add_clip_cast_reshape(int32_t* p0, int8_t* T_reshape, uint8_t* global_const_workspace_176_var, uint8_t* global_workspace_177_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_fixed_point_multiply_add_clip_cast_reshape(int32_t* p0, int8_t* T_reshape, uint8_t* global_const_workspace_42_var, uint8_t* global_workspace_43_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_fixed_point_multiply_add_clip_cast_reshape_1(int32_t* p0, int8_t* T_reshape, uint8_t* global_const_workspace_98_var, uint8_t* global_workspace_99_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_fixed_point_multiply_add_clip_cast_reshape_2(int32_t* p0, int8_t* T_reshape, uint8_t* global_const_workspace_190_var, uint8_t* global_workspace_191_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default___tvm_main__(float* serving_default_input_1_0_buffer_var, float* StatefulPartitionedCall_1_buffer_var, float* StatefulPartitionedCall_2_buffer_var, float* StatefulPartitionedCall_0_buffer_var, float* StatefulPartitionedCall_3_buffer_var, uint8_t* global_const_workspace_0_var, uint8_t* global_workspace_1_var);
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
TVM_DLL int32_t tvmgen_default_fused_cast_subtract_fixed_point_multiply_add_cast_subtract_multiply_fixed_point__e776241b78dd908_(int8_t* p0, int8_t* p1, int8_t* T_cast, uint8_t* global_const_workspace_108_var, uint8_t* global_workspace_109_var) {
  void* fused_cast_subtract_fixed_point_multiply_add_cast_subtract_multiply_fixed_point_multiply_add_clip_subtract_fixed_point_multiply_add_subtract_clip_constant_let = (&(global_const_workspace_108_var[909888]));
  void* fused_cast_subtract_fixed_point_multiply_add_cast_subtract_multiply_fixed_point_multiply_add_clip_subtract_fixed_point_multiply_constant_let = (&(global_const_workspace_108_var[907264]));
  void* fused_cast_subtract_fixed_point_multiply_add_cast_subtract_multiply_fixed_point_multiply_add_clip_constant_let = (&(global_const_workspace_108_var[909920]));
  void* fused_cast_subtract_fixed_point_multiply_add_cast_subtract_constant_let = (&(global_const_workspace_108_var[907360]));
  void* fused_cast_constant_4_let = (&(global_const_workspace_108_var[910016]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 4; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 4; ++ax2) {
      for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
        for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
          if (((ax3_outer * 2) + (ax3_inner >> 3)) < 3) {
            int32_t cse_var_3 = (ax3_outer * 16);
            int32_t cse_var_2 = (cse_var_3 + ax3_inner);
            int32_t cse_var_1 = ((((ax0_ax1_fused * 96) + (ax2 * 24)) + cse_var_3) + ax3_inner);
            int32_t v_ = ((int32_t)(((((0 != 0) ? (((int64_t)((((int32_t)p1[cse_var_1]) + 15) * ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_cast_subtract_constant_let)[cse_var_2])) << ((int64_t)0)) : ((int64_t)((((int32_t)p1[cse_var_1]) + 15) * ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_cast_subtract_constant_let)[cse_var_2]))) * (int64_t)1863062316) + ((int64_t)1 << ((int64_t)((7 + 31) - 1)))) >> ((int64_t)(7 + 31)))) - 5;
            int32_t v__1 = (v_) < (127) ? (v_) : (127);
            int32_t v__2 = (((int32_t)(((((0 != 0) ? (((int64_t)(((v__1) > (-128) ? (v__1) : (-128)) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_cast_subtract_multiply_fixed_point_multiply_add_clip_constant_let)[0])) << ((int64_t)0)) : ((int64_t)(((v__1) > (-128) ? (v__1) : (-128)) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_cast_subtract_multiply_fixed_point_multiply_add_clip_constant_let)[0]))) * (int64_t)2031964798) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31)))) + ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_cast_subtract_multiply_fixed_point_multiply_add_clip_subtract_fixed_point_multiply_constant_let)[cse_var_2]) - 6;
            int32_t v__3 = (v__2) < (127) ? (v__2) : (127);
            int32_t v__4 = (((int32_t)(((((0 != 0) ? (((int64_t)(((int32_t)p0[cse_var_1]) - ((int32_t*)fused_cast_constant_4_let)[0])) << ((int64_t)0)) : ((int64_t)(((int32_t)p0[cse_var_1]) - ((int32_t*)fused_cast_constant_4_let)[0]))) * (int64_t)1962817163) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31)))) + ((int32_t)(((((0 != 0) ? (((int64_t)(((v__3) > (-128) ? (v__3) : (-128)) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_cast_subtract_multiply_fixed_point_multiply_add_clip_subtract_fixed_point_multiply_add_subtract_clip_constant_let)[0])) << ((int64_t)0)) : ((int64_t)(((v__3) > (-128) ? (v__3) : (-128)) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_cast_subtract_multiply_fixed_point_multiply_add_clip_subtract_fixed_point_multiply_add_subtract_clip_constant_let)[0]))) * (int64_t)1326542564) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31))))) + 11;
            int32_t v__5 = (v__4) < (127) ? (v__4) : (127);
            T_cast[cse_var_1] = ((int8_t)((v__5) > (-128) ? (v__5) : (-128)));
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
TVM_DLL int32_t tvmgen_default_fused_cast_subtract_fixed_point_multiply_add_cast_subtract_multiply_fixed_point__e776241b78dd908__1(int8_t* p0, int8_t* p1, int8_t* T_cast, uint8_t* global_const_workspace_140_var, uint8_t* global_workspace_141_var) {
  void* fused_cast_subtract_fixed_point_multiply_add_cast_subtract_multiply_fixed_point_multiply_add_clip_subtract_fixed_point_multiply_add_subtract_clip_constant_1_let = (&(global_const_workspace_140_var[909872]));
  void* fused_cast_subtract_fixed_point_multiply_add_cast_subtract_multiply_fixed_point_multiply_add_clip_subtract_fixed_point_multiply_constant_1_let = (&(global_const_workspace_140_var[905088]));
  void* fused_cast_subtract_fixed_point_multiply_add_cast_subtract_multiply_fixed_point_multiply_add_clip_constant_1_let = (&(global_const_workspace_140_var[909904]));
  void* fused_cast_subtract_fixed_point_multiply_add_cast_subtract_constant_1_let = (&(global_const_workspace_140_var[905216]));
  void* fused_cast_constant_7_let = (&(global_const_workspace_140_var[909968]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 4; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 4; ++ax2) {
      for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
        for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
          int32_t cse_var_3 = (ax3_outer * 16);
          int32_t cse_var_2 = (cse_var_3 + ax3_inner);
          int32_t cse_var_1 = ((((ax0_ax1_fused * 128) + (ax2 * 32)) + cse_var_3) + ax3_inner);
          int32_t v_ = ((int32_t)(((((0 != 0) ? (((int64_t)((((int32_t)p1[cse_var_1]) - 8) * ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_cast_subtract_constant_1_let)[cse_var_2])) << ((int64_t)0)) : ((int64_t)((((int32_t)p1[cse_var_1]) - 8) * ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_cast_subtract_constant_1_let)[cse_var_2]))) * (int64_t)1200799306) + ((int64_t)1 << ((int64_t)((7 + 31) - 1)))) >> ((int64_t)(7 + 31)))) - 5;
          int32_t v__1 = (v_) < (127) ? (v_) : (127);
          int32_t v__2 = (((int32_t)(((((1 != 0) ? (((int64_t)(((v__1) > (-128) ? (v__1) : (-128)) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_cast_subtract_multiply_fixed_point_multiply_add_clip_constant_1_let)[0])) << ((int64_t)1)) : ((int64_t)(((v__1) > (-128) ? (v__1) : (-128)) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_cast_subtract_multiply_fixed_point_multiply_add_clip_constant_1_let)[0]))) * (int64_t)1117069948) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31)))) + ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_cast_subtract_multiply_fixed_point_multiply_add_clip_subtract_fixed_point_multiply_constant_1_let)[cse_var_2]) - 16;
          int32_t v__3 = (v__2) < (127) ? (v__2) : (127);
          int32_t v__4 = (((int32_t)(((((0 != 0) ? (((int64_t)(((int32_t)p0[cse_var_1]) - ((int32_t*)fused_cast_constant_7_let)[0])) << ((int64_t)0)) : ((int64_t)(((int32_t)p0[cse_var_1]) - ((int32_t*)fused_cast_constant_7_let)[0]))) * (int64_t)1807685151) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31)))) + ((int32_t)(((((0 != 0) ? (((int64_t)(((v__3) > (-128) ? (v__3) : (-128)) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_cast_subtract_multiply_fixed_point_multiply_add_clip_subtract_fixed_point_multiply_add_subtract_clip_constant_1_let)[0])) << ((int64_t)0)) : ((int64_t)(((v__3) > (-128) ? (v__3) : (-128)) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_cast_subtract_multiply_fixed_point_multiply_add_clip_subtract_fixed_point_multiply_add_subtract_clip_constant_1_let)[0]))) * (int64_t)1746152000) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31))))) + 12;
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
TVM_DLL int32_t tvmgen_default_fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point__7462b0c1d1f4a4f5_(int8_t* p0, int8_t* p1, int8_t* T_cast, uint8_t* global_const_workspace_26_var, uint8_t* global_workspace_27_var) {
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_let = (&(global_const_workspace_26_var[909856]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_2_let = (&(global_const_workspace_26_var[909536]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_1_let = (&(global_const_workspace_26_var[909568]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_let = (&(global_const_workspace_26_var[909600]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_constant_let = (&(global_const_workspace_26_var[909632]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_constant_let = (&(global_const_workspace_26_var[909504]));
  void* fused_cast_constant_let = (&(global_const_workspace_26_var[910080]));
  void* fused_cast_subtract_fixed_point_multiply_add_constant_let = (&(global_const_workspace_26_var[891472]));
  void* pad_temp_let = (&(global_workspace_27_var[0]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 16; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 16; ++i2) {
      for (int32_t i3 = 0; i3 < 48; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 768) + (i2 * 48)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p1[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 256; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_27_var[68800]));
    for (int32_t ax3 = 0; ax3 < 8; ++ax3) {
      int32_t cse_var_2 = ((ax0_ax1_fused_ax2_fused * 8) + ax3);
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 48; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 48) + rc)]) * ((int32_t)((int8_t*)fused_cast_subtract_fixed_point_multiply_add_constant_let)[((rc * 8) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_constant_let)[ax3]) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_constant_let)[ax3])) * ((int64_t)((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_2_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_2_let)[ax3] + 31)))) - 15;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      int32_t v__2 = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_constant_let)[ax3]) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_constant_let)[ax3])) * ((int64_t)((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_2_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_2_let)[ax3] + 31)))) - 15;
      int32_t v__3 = (v__2) < (127) ? (v__2) : (127);
      int32_t v__4 = (((int32_t)(((((0 != 0) ? (((int64_t)(((int32_t)p0[cse_var_2]) - ((int32_t*)fused_cast_constant_let)[0])) << ((int64_t)0)) : ((int64_t)(((int32_t)p0[cse_var_2]) - ((int32_t*)fused_cast_constant_let)[0]))) * (int64_t)1519335322) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31)))) + ((int32_t)(((((0 != 0) ? (((int64_t)(((v__1) > (-128) ? (v__1) : (-128)) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_let)[0])) << ((int64_t)0)) : ((int64_t)(((v__3) > (-128) ? (v__3) : (-128)) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_let)[0]))) * (int64_t)2005957335) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31))))) - 13;
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
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_1_let = (&(global_const_workspace_60_var[909840]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_5_let = (&(global_const_workspace_60_var[908800]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_4_let = (&(global_const_workspace_60_var[908864]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_3_let = (&(global_const_workspace_60_var[908928]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_constant_1_let = (&(global_const_workspace_60_var[909056]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_constant_1_let = (&(global_const_workspace_60_var[908544]));
  void* fused_cast_constant_1_let = (&(global_const_workspace_60_var[910064]));
  void* fused_cast_subtract_fixed_point_multiply_add_constant_1_let = (&(global_const_workspace_60_var[761008]));
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
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_constant_1_let)[ax3]) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_constant_1_let)[ax3])) * ((int64_t)((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_3_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_5_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_5_let)[ax3] + 31)))) + 3;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      int32_t v__2 = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_constant_1_let)[ax3]) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_constant_1_let)[ax3])) * ((int64_t)((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_3_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_5_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_5_let)[ax3] + 31)))) + 3;
      int32_t v__3 = (v__2) < (127) ? (v__2) : (127);
      int32_t v__4 = (((int32_t)(((((0 != 0) ? (((int64_t)(((int32_t)p0[cse_var_2]) - ((int32_t*)fused_cast_constant_1_let)[0])) << ((int64_t)0)) : ((int64_t)(((int32_t)p0[cse_var_2]) - ((int32_t*)fused_cast_constant_1_let)[0]))) * (int64_t)1403827990) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31)))) + ((int32_t)(((((0 != 0) ? (((int64_t)(((v__1) > (-128) ? (v__1) : (-128)) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_1_let)[0])) << ((int64_t)0)) : ((int64_t)(((v__3) > (-128) ? (v__3) : (-128)) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_1_let)[0]))) * (int64_t)1854867896) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31))))) + 7;
      int32_t v__5 = (v__4) < (127) ? (v__4) : (127);
      T_cast[cse_var_2] = ((int8_t)((v__5) > (-128) ? (v__5) : (-128)));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point__7462b0c1d1f4a4f5__2(int8_t* p0, int8_t* p1, int8_t* T_cast, uint8_t* global_const_workspace_66_var, uint8_t* global_workspace_67_var) {
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_2_let = (&(global_const_workspace_66_var[909824]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_8_let = (&(global_const_workspace_66_var[908608]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_7_let = (&(global_const_workspace_66_var[908672]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_6_let = (&(global_const_workspace_66_var[908736]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_constant_2_let = (&(global_const_workspace_66_var[908992]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_constant_2_let = (&(global_const_workspace_66_var[908480]));
  void* fused_cast_constant_2_let = (&(global_const_workspace_66_var[910048]));
  void* fused_cast_subtract_fixed_point_multiply_add_constant_2_let = (&(global_const_workspace_66_var[759472]));
  void* pad_temp_let = (&(global_workspace_67_var[0]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 8; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 8; ++i2) {
      for (int32_t i3 = 0; i3 < 96; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 768) + (i2 * 96)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p1[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 64; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_67_var[36224]));
    for (int32_t ax3 = 0; ax3 < 16; ++ax3) {
      int32_t cse_var_2 = ((ax0_ax1_fused_ax2_fused * 16) + ax3);
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 96; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 96) + rc)]) * ((int32_t)((int8_t*)fused_cast_subtract_fixed_point_multiply_add_constant_2_let)[((rc * 16) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_constant_2_let)[ax3]) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_constant_2_let)[ax3])) * ((int64_t)((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_6_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_8_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_8_let)[ax3] + 31)))) - 13;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      int32_t v__2 = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_constant_2_let)[ax3]) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_constant_2_let)[ax3])) * ((int64_t)((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_6_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_8_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_8_let)[ax3] + 31)))) - 13;
      int32_t v__3 = (v__2) < (127) ? (v__2) : (127);
      int32_t v__4 = (((int32_t)(((((0 != 0) ? (((int64_t)(((int32_t)p0[cse_var_2]) - ((int32_t*)fused_cast_constant_2_let)[0])) << ((int64_t)0)) : ((int64_t)(((int32_t)p0[cse_var_2]) - ((int32_t*)fused_cast_constant_2_let)[0]))) * (int64_t)1810971790) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31)))) + ((int32_t)(((((0 != 0) ? (((int64_t)(((v__1) > (-128) ? (v__1) : (-128)) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_2_let)[0])) << ((int64_t)0)) : ((int64_t)(((v__3) > (-128) ? (v__3) : (-128)) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_2_let)[0]))) * (int64_t)1471243665) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31))))) - 12;
      int32_t v__5 = (v__4) < (127) ? (v__4) : (127);
      T_cast[cse_var_2] = ((int8_t)((v__5) > (-128) ? (v__5) : (-128)));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point__7462b0c1d1f4a4f5__3(int8_t* p0, int8_t* p1, int8_t* T_cast, uint8_t* global_const_workspace_82_var, uint8_t* global_workspace_83_var) {
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_3_let = (&(global_const_workspace_82_var[909808]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_11_let = (&(global_const_workspace_82_var[906976]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_10_let = (&(global_const_workspace_82_var[907072]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_9_let = (&(global_const_workspace_82_var[906880]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_constant_3_let = (&(global_const_workspace_82_var[907168]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_constant_3_let = (&(global_const_workspace_82_var[906784]));
  void* fused_cast_constant_3_let = (&(global_const_workspace_82_var[910032]));
  void* fused_cast_subtract_fixed_point_multiply_add_constant_3_let = (&(global_const_workspace_82_var[734848]));
  void* pad_temp_let = (&(global_workspace_83_var[0]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 4; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 4; ++i2) {
      for (int32_t i3 = 0; i3 < 144; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 576) + (i2 * 144)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p1[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 16; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_83_var[15168]));
    for (int32_t ax3 = 0; ax3 < 24; ++ax3) {
      int32_t cse_var_2 = ((ax0_ax1_fused_ax2_fused * 24) + ax3);
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 144; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 144) + rc)]) * ((int32_t)((int8_t*)fused_cast_subtract_fixed_point_multiply_add_constant_3_let)[((rc * 24) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_constant_3_let)[ax3]) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_constant_3_let)[ax3])) * ((int64_t)((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_9_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_11_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_11_let)[ax3] + 31)))) - 10;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      int32_t v__2 = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_constant_3_let)[ax3]) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_constant_3_let)[ax3])) * ((int64_t)((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_9_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_11_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_11_let)[ax3] + 31)))) - 10;
      int32_t v__3 = (v__2) < (127) ? (v__2) : (127);
      int32_t v__4 = (((int32_t)(((((0 != 0) ? (((int64_t)(((int32_t)p0[cse_var_2]) - ((int32_t*)fused_cast_constant_3_let)[0])) << ((int64_t)0)) : ((int64_t)(((int32_t)p0[cse_var_2]) - ((int32_t*)fused_cast_constant_3_let)[0]))) * (int64_t)1979239655) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31)))) + ((int32_t)(((((0 != 0) ? (((int64_t)(((v__1) > (-128) ? (v__1) : (-128)) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_3_let)[0])) << ((int64_t)0)) : ((int64_t)(((v__3) > (-128) ? (v__3) : (-128)) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_3_let)[0]))) * (int64_t)1786809917) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31))))) + 18;
      int32_t v__5 = (v__4) < (127) ? (v__4) : (127);
      T_cast[cse_var_2] = ((int8_t)((v__5) > (-128) ? (v__5) : (-128)));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point__7462b0c1d1f4a4f5__4(int8_t* p0, int8_t* p1, int8_t* T_cast, uint8_t* global_const_workspace_132_var, uint8_t* global_workspace_133_var) {
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_4_let = (&(global_const_workspace_132_var[909792]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_14_let = (&(global_const_workspace_132_var[904576]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_13_let = (&(global_const_workspace_132_var[904704]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_12_let = (&(global_const_workspace_132_var[904832]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_constant_4_let = (&(global_const_workspace_132_var[904960]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_constant_4_let = (&(global_const_workspace_132_var[904448]));
  void* fused_cast_constant_6_let = (&(global_const_workspace_132_var[909984]));
  void* fused_cast_subtract_fixed_point_multiply_add_constant_4_let = (&(global_const_workspace_132_var[664960]));
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
    void* conv2d_nhwc_let = (&(global_workspace_133_var[27136]));
    for (int32_t ax3 = 0; ax3 < 32; ++ax3) {
      int32_t cse_var_2 = ((ax0_ax1_fused_ax2_fused * 32) + ax3);
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 192; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 192) + rc)]) * ((int32_t)((int8_t*)fused_cast_subtract_fixed_point_multiply_add_constant_4_let)[((rc * 32) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_constant_4_let)[ax3]) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_constant_4_let)[ax3])) * ((int64_t)((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_12_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_14_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_14_let)[ax3] + 31)))) - 13;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      int32_t v__2 = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_constant_4_let)[ax3]) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_constant_4_let)[ax3])) * ((int64_t)((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_12_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_14_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_14_let)[ax3] + 31)))) - 13;
      int32_t v__3 = (v__2) < (127) ? (v__2) : (127);
      int32_t v__4 = (((int32_t)(((((0 != 0) ? (((int64_t)(((int32_t)p0[cse_var_2]) - ((int32_t*)fused_cast_constant_6_let)[0])) << ((int64_t)0)) : ((int64_t)(((int32_t)p0[cse_var_2]) - ((int32_t*)fused_cast_constant_6_let)[0]))) * (int64_t)1630043869) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31)))) + ((int32_t)(((((0 != 0) ? (((int64_t)(((v__1) > (-128) ? (v__1) : (-128)) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_4_let)[0])) << ((int64_t)0)) : ((int64_t)(((v__3) > (-128) ? (v__3) : (-128)) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_4_let)[0]))) * (int64_t)1205679740) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31))))) + 9;
      int32_t v__5 = (v__4) < (127) ? (v__4) : (127);
      T_cast[cse_var_2] = ((int8_t)((v__5) > (-128) ? (v__5) : (-128)));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point__7462b0c1d1f4a4f5__5(int8_t* p0, int8_t* p1, int8_t* T_cast, uint8_t* global_const_workspace_156_var, uint8_t* global_workspace_157_var) {
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_5_let = (&(global_const_workspace_156_var[909776]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_17_let = (&(global_const_workspace_156_var[894096]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_16_let = (&(global_const_workspace_156_var[894320]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_15_let = (&(global_const_workspace_156_var[894544]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_constant_5_let = (&(global_const_workspace_156_var[894992]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_constant_5_let = (&(global_const_workspace_156_var[893200]));
  void* fused_cast_constant_8_let = (&(global_const_workspace_156_var[909952]));
  void* fused_cast_subtract_fixed_point_multiply_add_constant_5_let = (&(global_const_workspace_156_var[548096]));
  void* pad_temp_let = (&(global_workspace_157_var[0]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 2; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 2; ++i2) {
      for (int32_t i3 = 0; i3 < 336; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 672) + (i2 * 336)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p1[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 4; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_157_var[26560]));
    for (int32_t ax3 = 0; ax3 < 56; ++ax3) {
      int32_t cse_var_2 = ((ax0_ax1_fused_ax2_fused * 56) + ax3);
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 336; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 336) + rc)]) * ((int32_t)((int8_t*)fused_cast_subtract_fixed_point_multiply_add_constant_5_let)[((rc * 56) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_constant_5_let)[ax3]) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_constant_5_let)[ax3])) * ((int64_t)((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_15_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_17_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_17_let)[ax3] + 31)))) + 7;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      int32_t v__2 = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_constant_5_let)[ax3]) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_constant_5_let)[ax3])) * ((int64_t)((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_15_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_17_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_17_let)[ax3] + 31)))) + 7;
      int32_t v__3 = (v__2) < (127) ? (v__2) : (127);
      int32_t v__4 = (((int32_t)(((((0 != 0) ? (((int64_t)(((int32_t)p0[cse_var_2]) - ((int32_t*)fused_cast_constant_8_let)[0])) << ((int64_t)0)) : ((int64_t)(((int32_t)p0[cse_var_2]) - ((int32_t*)fused_cast_constant_8_let)[0]))) * (int64_t)2107949363) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31)))) + ((int32_t)(((((0 != 0) ? (((int64_t)(((v__1) > (-128) ? (v__1) : (-128)) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_5_let)[0])) << ((int64_t)0)) : ((int64_t)(((v__3) > (-128) ? (v__3) : (-128)) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_5_let)[0]))) * (int64_t)1400078817) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31))))) + 2;
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
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_6_let = (&(global_const_workspace_162_var[909760]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_20_let = (&(global_const_workspace_162_var[893424]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_19_let = (&(global_const_workspace_162_var[893648]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_18_let = (&(global_const_workspace_162_var[893872]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_constant_6_let = (&(global_const_workspace_162_var[894768]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_constant_6_let = (&(global_const_workspace_162_var[892976]));
  void* fused_cast_constant_9_let = (&(global_const_workspace_162_var[909936]));
  void* fused_cast_subtract_fixed_point_multiply_add_constant_6_let = (&(global_const_workspace_162_var[529280]));
  void* pad_temp_let = (&(global_workspace_163_var[0]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 2; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 2; ++i2) {
      for (int32_t i3 = 0; i3 < 336; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 672) + (i2 * 336)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p1[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 4; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_163_var[26560]));
    for (int32_t ax3 = 0; ax3 < 56; ++ax3) {
      int32_t cse_var_2 = ((ax0_ax1_fused_ax2_fused * 56) + ax3);
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 336; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 336) + rc)]) * ((int32_t)((int8_t*)fused_cast_subtract_fixed_point_multiply_add_constant_6_let)[((rc * 56) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_constant_6_let)[ax3]) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_constant_6_let)[ax3])) * ((int64_t)((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_18_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_20_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_20_let)[ax3] + 31)))) - 9;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      int32_t v__2 = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_constant_6_let)[ax3]) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_constant_6_let)[ax3])) * ((int64_t)((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_18_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_20_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_20_let)[ax3] + 31)))) - 9;
      int32_t v__3 = (v__2) < (127) ? (v__2) : (127);
      int32_t v__4 = (((int32_t)(((((0 != 0) ? (((int64_t)(((int32_t)p0[cse_var_2]) - ((int32_t*)fused_cast_constant_9_let)[0])) << ((int64_t)0)) : ((int64_t)(((int32_t)p0[cse_var_2]) - ((int32_t*)fused_cast_constant_9_let)[0]))) * (int64_t)1957490964) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31)))) + ((int32_t)(((((0 != 0) ? (((int64_t)(((v__1) > (-128) ? (v__1) : (-128)) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_6_let)[0])) << ((int64_t)0)) : ((int64_t)(((v__3) > (-128) ? (v__3) : (-128)) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_6_let)[0]))) * (int64_t)1496829640) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31))))) + 4;
      int32_t v__5 = (v__4) < (127) ? (v__4) : (127);
      T_cast[cse_var_2] = ((int8_t)((v__5) > (-128) ? (v__5) : (-128)));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_cast_subtract_fixed_point_multiply_nn_conv2d_subtract_add_fixed_point_mult_6a0898f32fb5072b_(int8_t* p0, int8_t* p1, int8_t* T_cast, uint8_t* global_const_workspace_116_var, uint8_t* global_workspace_117_var) {
  void* fused_cast_subtract_fixed_point_multiply_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_let = (&(global_const_workspace_116_var[909744]));
  void* fused_cast_subtract_fixed_point_multiply_nn_conv2d_subtract_add_constant_2_let = (&(global_const_workspace_116_var[906400]));
  void* fused_cast_subtract_fixed_point_multiply_nn_conv2d_subtract_add_constant_1_let = (&(global_const_workspace_116_var[906496]));
  void* fused_cast_subtract_fixed_point_multiply_nn_conv2d_subtract_add_constant_let = (&(global_const_workspace_116_var[906592]));
  void* fused_cast_subtract_fixed_point_multiply_nn_conv2d_constant_let = (&(global_const_workspace_116_var[906688]));
  void* fused_cast_subtract_fixed_point_multiply_nn_conv2d_subtract_constant_let = (&(global_const_workspace_116_var[906304]));
  void* fused_cast_constant_5_let = (&(global_const_workspace_116_var[910000]));
  void* fused_cast_subtract_fixed_point_multiply_constant_let = (&(global_const_workspace_116_var[731392]));
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
    void* conv2d_nhwc_let = (&(global_workspace_117_var[15936]));
    for (int32_t ax3 = 0; ax3 < 24; ++ax3) {
      int32_t cse_var_2 = ((ax0_ax1_fused_ax2_fused * 24) + ax3);
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 144; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 144) + rc)]) * ((int32_t)((int8_t*)fused_cast_subtract_fixed_point_multiply_constant_let)[((rc * 24) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_cast_subtract_fixed_point_multiply_nn_conv2d_subtract_constant_let)[ax3]) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_nn_conv2d_constant_let)[ax3])) * ((int64_t)((int32_t*)fused_cast_subtract_fixed_point_multiply_nn_conv2d_subtract_add_constant_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_cast_subtract_fixed_point_multiply_nn_conv2d_subtract_add_constant_2_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_cast_subtract_fixed_point_multiply_nn_conv2d_subtract_add_constant_2_let)[ax3] + 31)))) - 25;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      int32_t v__2 = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_cast_subtract_fixed_point_multiply_nn_conv2d_subtract_constant_let)[ax3]) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_nn_conv2d_constant_let)[ax3])) * ((int64_t)((int32_t*)fused_cast_subtract_fixed_point_multiply_nn_conv2d_subtract_add_constant_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_cast_subtract_fixed_point_multiply_nn_conv2d_subtract_add_constant_2_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_cast_subtract_fixed_point_multiply_nn_conv2d_subtract_add_constant_2_let)[ax3] + 31)))) - 25;
      int32_t v__3 = (v__2) < (127) ? (v__2) : (127);
      int32_t v__4 = ((int32_t)(((((0 != 0) ? (((int64_t)(((int32_t)p0[cse_var_2]) - ((int32_t*)fused_cast_constant_5_let)[0])) << ((int64_t)0)) : ((int64_t)(((int32_t)p0[cse_var_2]) - ((int32_t*)fused_cast_constant_5_let)[0]))) * (int64_t)1816588269) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31)))) + ((int32_t)(((((0 != 0) ? (((int64_t)(((v__1) > (-128) ? (v__1) : (-128)) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_let)[0])) << ((int64_t)0)) : ((int64_t)(((v__3) > (-128) ? (v__3) : (-128)) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_let)[0]))) * (int64_t)1089963166) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31))));
      int32_t v__5 = (v__4) < (127) ? (v__4) : (127);
      T_cast[cse_var_2] = ((int8_t)((v__5) > (-128) ? (v__5) : (-128)));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_cast_subtract_multiply_fixed_point_multiply_add_clip_subtract_fixed_point__feae580412b1470c_(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_52_var, uint8_t* global_workspace_53_var) {
  void* fused_cast_subtract_multiply_fixed_point_multiply_add_clip_subtract_fixed_point_multiply_constant_let = (&(global_const_workspace_52_var[908416]));
  void* fused_cast_subtract_multiply_fixed_point_multiply_add_clip_constant_let = (&(global_const_workspace_52_var[909728]));
  void* fused_cast_subtract_constant_let = (&(global_const_workspace_52_var[909120]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 8; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 8; ++ax2) {
      for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
        int32_t cse_var_1 = (((ax0_ax1_fused * 128) + (ax2 * 16)) + ax3_inner);
        int32_t v_ = ((int32_t)(((((0 != 0) ? (((int64_t)((((int32_t)p0[cse_var_1]) - 5) * ((int32_t*)fused_cast_subtract_constant_let)[ax3_inner])) << ((int64_t)0)) : ((int64_t)((((int32_t)p0[cse_var_1]) - 5) * ((int32_t*)fused_cast_subtract_constant_let)[ax3_inner]))) * (int64_t)1412856528) + ((int64_t)1 << ((int64_t)((7 + 31) - 1)))) >> ((int64_t)(7 + 31)))) - 1;
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        int32_t v__2 = (((int32_t)(((((1 != 0) ? (((int64_t)(((v__1) > (-128) ? (v__1) : (-128)) - ((int32_t*)fused_cast_subtract_multiply_fixed_point_multiply_add_clip_constant_let)[0])) << ((int64_t)1)) : ((int64_t)(((v__1) > (-128) ? (v__1) : (-128)) - ((int32_t*)fused_cast_subtract_multiply_fixed_point_multiply_add_clip_constant_let)[0]))) * (int64_t)1585811905) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31)))) + ((int32_t*)fused_cast_subtract_multiply_fixed_point_multiply_add_clip_subtract_fixed_point_multiply_constant_let)[ax3_inner]) + 7;
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
TVM_DLL int32_t tvmgen_default_fused_mean(int32_t* p0, int32_t* T_divide, uint8_t* global_const_workspace_40_var, uint8_t* global_workspace_41_var) {
  void* p0_red_let = (&(global_workspace_41_var[12544]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 32; ++ax0_ax1_fused) {
    ((int32_t*)p0_red_let)[ax0_ax1_fused] = 0;
    for (int32_t k1 = 0; k1 < 8; ++k1) {
      for (int32_t k2 = 0; k2 < 8; ++k2) {
        ((int32_t*)p0_red_let)[ax0_ax1_fused] = (((int32_t*)p0_red_let)[ax0_ax1_fused] + p0[(((k1 * 256) + (k2 * 32)) + ax0_ax1_fused)]);
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 2; ++ax1_outer) {
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
TVM_DLL int32_t tvmgen_default_fused_mean_1(int32_t* p0, int32_t* T_divide, uint8_t* global_const_workspace_96_var, uint8_t* global_workspace_97_var) {
  void* p0_red_let = (&(global_workspace_97_var[8192]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 128; ++ax0_ax1_fused) {
    ((int32_t*)p0_red_let)[ax0_ax1_fused] = 0;
    for (int32_t k1 = 0; k1 < 4; ++k1) {
      for (int32_t k2 = 0; k2 < 4; ++k2) {
        ((int32_t*)p0_red_let)[ax0_ax1_fused] = (((int32_t*)p0_red_let)[ax0_ax1_fused] + p0[(((k1 * 512) + (k2 * 128)) + ax0_ax1_fused)]);
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 8; ++ax1_outer) {
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
TVM_DLL int32_t tvmgen_default_fused_mean_3(int32_t* p0, int32_t* T_divide, uint8_t* global_const_workspace_188_var, uint8_t* global_workspace_189_var) {
  void* p0_red_let = (&(global_workspace_189_var[8192]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 128; ++ax0_ax1_fused) {
    ((int32_t*)p0_red_let)[ax0_ax1_fused] = 0;
    for (int32_t k1 = 0; k1 < 4; ++k1) {
      for (int32_t k2 = 0; k2 < 4; ++k2) {
        ((int32_t*)p0_red_let)[ax0_ax1_fused] = (((int32_t*)p0_red_let)[ax0_ax1_fused] + p0[(((k1 * 512) + (k2 * 128)) + ax0_ax1_fused)]);
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 8; ++ax1_outer) {
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
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_44_var, uint8_t* global_workspace_45_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED] dense: 32->256 (packed [4][8][32][8])
  int32_t* conv_const = (int32_t*)(&global_const_workspace_44_var[813168]);
  int32_t* conv_sub   = (int32_t*)(&global_const_workspace_44_var[810096]);
  int8_t*  weights    = (int8_t*) (&global_const_workspace_44_var[625280]);

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
        * (int64_t)1573153062) + ((int64_t)1 << ((int64_t)((6 + 31) - 1))))
        >> ((int64_t)(6 + 31)))) - 128;
      int32_t v1 = (v_) < (127) ? (v_) : (127);
      T_cast[ax3] = (int8_t)((v1) > (-128) ? (v1) : (-128));
    }
  }
  return 0;

#else

  void* fused_nn_contrib_dense_pack_constant_let = (&(global_const_workspace_44_var[813168]));
  void* fused_nn_contrib_dense_pack_subtract_constant_let = (&(global_const_workspace_44_var[810096]));
  void* fused_constant_13_let = (&(global_const_workspace_44_var[625280]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 4; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_45_var[12672]));
    void* compute_global_let = (&(global_workspace_45_var[12960]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 8; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 32; ++k_outer) {
        for (int32_t x_c = 0; x_c < 8; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[k_outer]) * ((int32_t)((int8_t*)fused_constant_13_let)[((((ax1_outer_ax0_outer_fused * 2048) + (y_inner_outer_x_inner_outer_fused * 256)) + (k_outer * 8)) + x_c)])));
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
        int32_t v_ = ((int32_t)(((((0 != 0) ? (((int64_t)((((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_let)[cse_var_1])) << ((int64_t)0)) : ((int64_t)((((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_let)[cse_var_1]))) * (int64_t)1573153062) + ((int64_t)1 << ((int64_t)((6 + 31) - 1)))) >> ((int64_t)(6 + 31)))) - 128;
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
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast_1(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_46_var, uint8_t* global_workspace_47_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED] dense: 256->128 (packed [4][4][256][8])
  int32_t* conv_const = (int32_t*)(&global_const_workspace_46_var[870736]);
  int32_t* conv_sub   = (int32_t*)(&global_const_workspace_46_var[869200]);
  int8_t*  weights    = (int8_t*) (&global_const_workspace_46_var[440064]);

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
        * (int64_t)1219551315) + ((int64_t)1 << ((int64_t)((8 + 31) - 1))))
        >> ((int64_t)(8 + 31)))) - 128;
      int32_t v1 = (v_) < (127) ? (v_) : (127);
      T_cast[ax3] = (int8_t)((v1) > (-128) ? (v1) : (-128));
    }
  }
  return 0;

#else

  void* fused_nn_contrib_dense_pack_constant_1_let = (&(global_const_workspace_46_var[870736]));
  void* fused_nn_contrib_dense_pack_subtract_constant_1_let = (&(global_const_workspace_46_var[869200]));
  void* fused_constant_14_let = (&(global_const_workspace_46_var[440064]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 4; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_47_var[12944]));
    void* compute_global_let = (&(global_workspace_47_var[13072]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 4; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 256; ++k_outer) {
        for (int32_t x_c = 0; x_c < 8; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[k_outer]) * ((int32_t)((int8_t*)fused_constant_14_let)[((((ax1_outer_ax0_outer_fused * 8192) + (y_inner_outer_x_inner_outer_fused * 2048)) + (k_outer * 8)) + x_c)])));
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
        int32_t v_ = ((int32_t)(((((0 != 0) ? (((int64_t)((((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_1_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_1_let)[cse_var_1])) << ((int64_t)0)) : ((int64_t)((((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_1_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_1_let)[cse_var_1]))) * (int64_t)1219551315) + ((int64_t)1 << ((int64_t)((8 + 31) - 1)))) >> ((int64_t)(8 + 31)))) - 128;
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
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast_2(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_100_var, uint8_t* global_workspace_101_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED] dense: 128->256 (packed [4][8][128][8])
  int32_t* conv_const = (int32_t*)(&global_const_workspace_100_var[812144]);
  int32_t* conv_sub   = (int32_t*)(&global_const_workspace_100_var[809072]);
  int8_t*  weights    = (int8_t*) (&global_const_workspace_100_var[407296]);

  // Padded input vector (aligned to MAC_BYTES)
  static int8_t _inp_pad[128];
  for (int32_t k = 0; k < 128; k++) _inp_pad[k] = p0[k];

  for (int32_t tile = 0; tile < 4; tile++) {
    int32_t oc_base = tile * 64;
    int32_t oc_count = 64;
    if (oc_base + oc_count > 256) oc_count = 256 - oc_base;
    static int8_t rw[8192];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      int32_t goc = oc_base + oc;
      int32_t ax1 = goc / 64;
      int32_t yi  = (goc % 64) / 8;
      int32_t xc  = goc % 8;
      for (int32_t k = 0; k < 128; k++)
        rw[oc * 128 + k] = weights[ax1 * 8192 + yi * 1024 + k * 8 + xc];
    }
    accel_spad_write(0x080, rw, oc_count * 128);
    accel_spad_write(0x000, _inp_pad, 128);
    hw_multi_dot(0x000, 0x080, 0x2080, 128, oc_count);
    for (int32_t oc = 0; oc < oc_count; oc++) {
      int32_t ax3 = oc_base + oc;
      int32_t dot = (int32_t)accel_spad_read32(0x2080 + oc * 4);
      int32_t v_ = ((int32_t)(((((int64_t)((dot + conv_sub[ax3]) - conv_const[ax3]))
        * (int64_t)1815551196) + ((int64_t)1 << ((int64_t)((8 + 31) - 1))))
        >> ((int64_t)(8 + 31)))) - 128;
      int32_t v1 = (v_) < (127) ? (v_) : (127);
      T_cast[ax3] = (int8_t)((v1) > (-128) ? (v1) : (-128));
    }
  }
  return 0;

#else

  void* fused_nn_contrib_dense_pack_constant_3_let = (&(global_const_workspace_100_var[812144]));
  void* fused_nn_contrib_dense_pack_subtract_constant_3_let = (&(global_const_workspace_100_var[809072]));
  void* fused_constant_31_let = (&(global_const_workspace_100_var[407296]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 4; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_101_var[15424]));
    void* compute_global_let = (&(global_workspace_101_var[15808]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 8; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 128; ++k_outer) {
        for (int32_t x_c = 0; x_c < 8; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[k_outer]) * ((int32_t)((int8_t*)fused_constant_31_let)[((((ax1_outer_ax0_outer_fused * 8192) + (y_inner_outer_x_inner_outer_fused * 1024)) + (k_outer * 8)) + x_c)])));
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
        int32_t v_ = ((int32_t)(((((0 != 0) ? (((int64_t)((((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_3_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_3_let)[cse_var_1])) << ((int64_t)0)) : ((int64_t)((((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_3_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_3_let)[cse_var_1]))) * (int64_t)1815551196) + ((int64_t)1 << ((int64_t)((8 + 31) - 1)))) >> ((int64_t)(8 + 31)))) - 128;
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
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast_3(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_102_var, uint8_t* global_workspace_103_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED] dense: 256->128 (packed [4][4][256][8])
  int32_t* conv_const = (int32_t*)(&global_const_workspace_102_var[870224]);
  int32_t* conv_sub   = (int32_t*)(&global_const_workspace_102_var[868688]);
  int8_t*  weights    = (int8_t*) (&global_const_workspace_102_var[374528]);

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
        * (int64_t)1809999644) + ((int64_t)1 << ((int64_t)((9 + 31) - 1))))
        >> ((int64_t)(9 + 31)))) - 128;
      int32_t v1 = (v_) < (127) ? (v_) : (127);
      T_cast[ax3] = (int8_t)((v1) > (-128) ? (v1) : (-128));
    }
  }
  return 0;

#else

  void* fused_nn_contrib_dense_pack_constant_4_let = (&(global_const_workspace_102_var[870224]));
  void* fused_nn_contrib_dense_pack_subtract_constant_4_let = (&(global_const_workspace_102_var[868688]));
  void* fused_constant_32_let = (&(global_const_workspace_102_var[374528]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 4; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_103_var[15552]));
    void* compute_global_let = (&(global_workspace_103_var[15680]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 4; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 256; ++k_outer) {
        for (int32_t x_c = 0; x_c < 8; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[k_outer]) * ((int32_t)((int8_t*)fused_constant_32_let)[((((ax1_outer_ax0_outer_fused * 8192) + (y_inner_outer_x_inner_outer_fused * 2048)) + (k_outer * 8)) + x_c)])));
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
        int32_t v_ = ((int32_t)(((((0 != 0) ? (((int64_t)((((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_4_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_4_let)[cse_var_1])) << ((int64_t)0)) : ((int64_t)((((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_4_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_4_let)[cse_var_1]))) * (int64_t)1809999644) + ((int64_t)1 << ((int64_t)((9 + 31) - 1)))) >> ((int64_t)(9 + 31)))) - 128;
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
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast_4(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_192_var, uint8_t* global_workspace_193_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED] dense: 128->256 (packed [4][8][128][8])
  int32_t* conv_const = (int32_t*)(&global_const_workspace_192_var[811120]);
  int32_t* conv_sub   = (int32_t*)(&global_const_workspace_192_var[808048]);
  int8_t*  weights    = (int8_t*) (&global_const_workspace_192_var[341760]);

  // Padded input vector (aligned to MAC_BYTES)
  static int8_t _inp_pad[128];
  for (int32_t k = 0; k < 128; k++) _inp_pad[k] = p0[k];

  for (int32_t tile = 0; tile < 4; tile++) {
    int32_t oc_base = tile * 64;
    int32_t oc_count = 64;
    if (oc_base + oc_count > 256) oc_count = 256 - oc_base;
    static int8_t rw[8192];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      int32_t goc = oc_base + oc;
      int32_t ax1 = goc / 64;
      int32_t yi  = (goc % 64) / 8;
      int32_t xc  = goc % 8;
      for (int32_t k = 0; k < 128; k++)
        rw[oc * 128 + k] = weights[ax1 * 8192 + yi * 1024 + k * 8 + xc];
    }
    accel_spad_write(0x080, rw, oc_count * 128);
    accel_spad_write(0x000, _inp_pad, 128);
    hw_multi_dot(0x000, 0x080, 0x2080, 128, oc_count);
    for (int32_t oc = 0; oc < oc_count; oc++) {
      int32_t ax3 = oc_base + oc;
      int32_t dot = (int32_t)accel_spad_read32(0x2080 + oc * 4);
      int32_t v_ = ((int32_t)(((((int64_t)((dot + conv_sub[ax3]) - conv_const[ax3]))
        * (int64_t)1393978634) + ((int64_t)1 << ((int64_t)((8 + 31) - 1))))
        >> ((int64_t)(8 + 31)))) - 128;
      int32_t v1 = (v_) < (127) ? (v_) : (127);
      T_cast[ax3] = (int8_t)((v1) > (-128) ? (v1) : (-128));
    }
  }
  return 0;

#else

  void* fused_nn_contrib_dense_pack_constant_7_let = (&(global_const_workspace_192_var[811120]));
  void* fused_nn_contrib_dense_pack_subtract_constant_7_let = (&(global_const_workspace_192_var[808048]));
  void* fused_constant_60_let = (&(global_const_workspace_192_var[341760]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 4; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_193_var[256]));
    void* compute_global_let = (&(global_workspace_193_var[640]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 8; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 128; ++k_outer) {
        for (int32_t x_c = 0; x_c < 8; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[k_outer]) * ((int32_t)((int8_t*)fused_constant_60_let)[((((ax1_outer_ax0_outer_fused * 8192) + (y_inner_outer_x_inner_outer_fused * 1024)) + (k_outer * 8)) + x_c)])));
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
        int32_t v_ = ((int32_t)(((((0 != 0) ? (((int64_t)((((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_7_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_7_let)[cse_var_1])) << ((int64_t)0)) : ((int64_t)((((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_7_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_7_let)[cse_var_1]))) * (int64_t)1393978634) + ((int64_t)1 << ((int64_t)((8 + 31) - 1)))) >> ((int64_t)(8 + 31)))) - 128;
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
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast_5(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_194_var, uint8_t* global_workspace_195_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED] dense: 256->128 (packed [4][4][256][8])
  int32_t* conv_const = (int32_t*)(&global_const_workspace_194_var[869712]);
  int32_t* conv_sub   = (int32_t*)(&global_const_workspace_194_var[868176]);
  int8_t*  weights    = (int8_t*) (&global_const_workspace_194_var[308992]);

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
        * (int64_t)1944557822) + ((int64_t)1 << ((int64_t)((9 + 31) - 1))))
        >> ((int64_t)(9 + 31)))) - 128;
      int32_t v1 = (v_) < (127) ? (v_) : (127);
      T_cast[ax3] = (int8_t)((v1) > (-128) ? (v1) : (-128));
    }
  }
  return 0;

#else

  void* fused_nn_contrib_dense_pack_constant_8_let = (&(global_const_workspace_194_var[869712]));
  void* fused_nn_contrib_dense_pack_subtract_constant_8_let = (&(global_const_workspace_194_var[868176]));
  void* fused_constant_61_let = (&(global_const_workspace_194_var[308992]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 4; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_195_var[528]));
    void* compute_global_let = (&(global_workspace_195_var[656]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 4; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 256; ++k_outer) {
        for (int32_t x_c = 0; x_c < 8; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[k_outer]) * ((int32_t)((int8_t*)fused_constant_61_let)[((((ax1_outer_ax0_outer_fused * 8192) + (y_inner_outer_x_inner_outer_fused * 2048)) + (k_outer * 8)) + x_c)])));
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
        int32_t v_ = ((int32_t)(((((0 != 0) ? (((int64_t)((((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_8_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_8_let)[cse_var_1])) << ((int64_t)0)) : ((int64_t)((((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_8_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_8_let)[cse_var_1]))) * (int64_t)1944557822) + ((int64_t)1 << ((int64_t)((9 + 31) - 1)))) >> ((int64_t)(9 + 31)))) - 128;
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
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_subtract__fa059688879ad8de_(int8_t* p0, float* T_multiply, uint8_t* global_const_workspace_48_var, uint8_t* global_workspace_49_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED] dense: 128->100 (packed [5][4][128][5])
  int32_t* conv_const = (int32_t*)(&global_const_workspace_48_var[878016]);
  int32_t* conv_sub   = (int32_t*)(&global_const_workspace_48_var[876416]);
  int8_t*  weights    = (int8_t*) (&global_const_workspace_48_var[592512]);

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
        * (int64_t)1799314085) + ((int64_t)1 << ((int64_t)((7 + 31) - 1))))
        >> ((int64_t)(7 + 31)))) + 68;
      int32_t v1 = (v_) < (127) ? (v_) : (127);
      T_multiply[ax3] = (((float)(((v1) > (-128) ? (v1) : (-128)) - 68)) * 1.925185e-01f);
    }
  }
  return 0;

#else

  void* fused_nn_contrib_dense_pack_constant_2_let = (&(global_const_workspace_48_var[878016]));
  void* fused_nn_contrib_dense_pack_subtract_constant_2_let = (&(global_const_workspace_48_var[876416]));
  void* fused_constant_15_let = (&(global_const_workspace_48_var[592512]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 5; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_49_var[12944]));
    void* compute_global_let = (&(global_workspace_49_var[13024]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 4; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 5; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 128; ++k_outer) {
        for (int32_t x_c = 0; x_c < 5; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[k_outer]) * ((int32_t)((int8_t*)fused_constant_15_let)[((((ax1_outer_ax0_outer_fused * 2560) + (y_inner_outer_x_inner_outer_fused * 640)) + (k_outer * 5)) + x_c)])));
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
        int32_t v_ = ((int32_t)(((((0 != 0) ? (((int64_t)((((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_2_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_2_let)[cse_var_1])) << ((int64_t)0)) : ((int64_t)((((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_2_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_2_let)[cse_var_1]))) * (int64_t)1799314085) + ((int64_t)1 << ((int64_t)((7 + 31) - 1)))) >> ((int64_t)(7 + 31)))) + 68;
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        T_multiply[cse_var_1] = (((float)(((v__1) > (-128) ? (v__1) : (-128)) - 68)) * 1.925185e-01f);
      }
    }
  }
  return 0;

#endif
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_subtract__fa059688879ad8de__1(int8_t* p0, float* T_multiply, uint8_t* global_const_workspace_104_var, uint8_t* global_workspace_105_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED] dense: 128->100 (packed [5][4][128][5])
  int32_t* conv_const = (int32_t*)(&global_const_workspace_104_var[877616]);
  int32_t* conv_sub   = (int32_t*)(&global_const_workspace_104_var[876016]);
  int8_t*  weights    = (int8_t*) (&global_const_workspace_104_var[579712]);

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
        * (int64_t)1992150784) + ((int64_t)1 << ((int64_t)((8 + 31) - 1))))
        >> ((int64_t)(8 + 31)))) + 60;
      int32_t v1 = (v_) < (127) ? (v_) : (127);
      T_multiply[ax3] = (((float)(((v1) > (-128) ? (v1) : (-128)) - 60)) * 1.558408e-01f);
    }
  }
  return 0;

#else

  void* fused_nn_contrib_dense_pack_constant_5_let = (&(global_const_workspace_104_var[877616]));
  void* fused_nn_contrib_dense_pack_subtract_constant_5_let = (&(global_const_workspace_104_var[876016]));
  void* fused_constant_33_let = (&(global_const_workspace_104_var[579712]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 5; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_105_var[15552]));
    void* compute_global_let = (&(global_workspace_105_var[15632]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 4; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 5; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 128; ++k_outer) {
        for (int32_t x_c = 0; x_c < 5; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[k_outer]) * ((int32_t)((int8_t*)fused_constant_33_let)[((((ax1_outer_ax0_outer_fused * 2560) + (y_inner_outer_x_inner_outer_fused * 640)) + (k_outer * 5)) + x_c)])));
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
        int32_t v_ = ((int32_t)(((((0 != 0) ? (((int64_t)((((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_5_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_5_let)[cse_var_1])) << ((int64_t)0)) : ((int64_t)((((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_5_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_5_let)[cse_var_1]))) * (int64_t)1992150784) + ((int64_t)1 << ((int64_t)((8 + 31) - 1)))) >> ((int64_t)(8 + 31)))) + 60;
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        T_multiply[cse_var_1] = (((float)(((v__1) > (-128) ? (v__1) : (-128)) - 60)) * 1.558408e-01f);
      }
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
  // [ACCELERATED] dense: 1280->100 with reduction tiling (chunk=64)
  int32_t* conv_const = (int32_t*)(&global_const_workspace_178_var[877216]);
  int32_t* conv_sub   = (int32_t*)(&global_const_workspace_178_var[875616]);
  int8_t*  weights    = (int8_t*) (&global_const_workspace_178_var[143360]);
  int32_t partial[100];
  for (int32_t oc = 0; oc < 100; oc++) partial[oc] = 0;
  for (int32_t chunk = 0; chunk < 20; chunk++) {
    int32_t k_start = chunk * 64;
    int32_t k_len = 64;
    if (k_start + k_len > 1280) k_len = 1280 - k_start;
    int32_t k_aligned = (k_len + 7) & ~7;
    static int8_t rw[6400];
    for (int32_t oc = 0; oc < 100; oc++) {
      int32_t ax1 = oc / 20;
      int32_t yi  = (oc % 20) / 5;
      int32_t xc  = oc % 5;
      for (int32_t k = 0; k < k_len; k++)
        rw[oc * k_aligned + k] = weights[ax1 * 25600 + yi * 6400 + (k_start + k) * 5 + xc];
      for (int32_t k = k_len; k < k_aligned; k++)
        rw[oc * k_aligned + k] = 0;
    }
    static int8_t inp[64];
    for (int32_t k = 0; k < k_len; k++) inp[k] = p0[k_start + k];
    for (int32_t k = k_len; k < k_aligned; k++) inp[k] = 0;
    accel_spad_write(0x000, inp, k_aligned);
    uint32_t wt_off = (uint32_t)((k_aligned + 7) & ~7);
    accel_spad_write(wt_off, rw, 100 * k_aligned);
    uint32_t out_off = wt_off + 100 * k_aligned;
    hw_multi_dot(0x000, wt_off, out_off, k_aligned, 100);
    for (int32_t oc = 0; oc < 100; oc++)
      partial[oc] += (int32_t)accel_spad_read32(out_off + oc * 4);
  }
  for (int32_t ax3 = 0; ax3 < 100; ax3++) {
    int32_t v_ = ((int32_t)(((((int64_t)((partial[ax3] + conv_sub[ax3]) - conv_const[ax3]))
      * (int64_t)1588428617) + ((int64_t)1 << ((int64_t)((11 + 31) - 1))))
      >> ((int64_t)(11 + 31)))) + 112;
    int32_t v1 = (v_) < (127) ? (v_) : (127);
    T_multiply[ax3] = (((float)(((v1) > (-128) ? (v1) : (-128)) - 112)) * 5.117852e-01f);
  }
  return 0;

#else

  void* fused_nn_contrib_dense_pack_constant_6_let = (&(global_const_workspace_178_var[877216]));
  void* fused_nn_contrib_dense_pack_subtract_constant_6_let = (&(global_const_workspace_178_var[875616]));
  void* fused_constant_56_let = (&(global_const_workspace_178_var[143360]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 5; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_179_var[26512]));
    void* compute_global_let = (&(global_workspace_179_var[26592]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 4; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 5; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 1280; ++k_outer) {
        for (int32_t x_c = 0; x_c < 5; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[k_outer]) * ((int32_t)((int8_t*)fused_constant_56_let)[((((ax1_outer_ax0_outer_fused * 25600) + (y_inner_outer_x_inner_outer_fused * 6400)) + (k_outer * 5)) + x_c)])));
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
        int32_t v_ = ((int32_t)(((((0 != 0) ? (((int64_t)((((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_6_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_6_let)[cse_var_1])) << ((int64_t)0)) : ((int64_t)((((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_6_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_6_let)[cse_var_1]))) * (int64_t)1588428617) + ((int64_t)1 << ((int64_t)((11 + 31) - 1)))) >> ((int64_t)(11 + 31)))) + 112;
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        T_multiply[cse_var_1] = (((float)(((v__1) > (-128) ? (v__1) : (-128)) - 112)) * 5.117852e-01f);
      }
    }
  }
  return 0;

#endif
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_subtract__fa059688879ad8de__3(int8_t* p0, float* T_multiply, uint8_t* global_const_workspace_196_var, uint8_t* global_workspace_197_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED] dense: 128->100 (packed [5][4][128][5])
  int32_t* conv_const = (int32_t*)(&global_const_workspace_196_var[876816]);
  int32_t* conv_sub   = (int32_t*)(&global_const_workspace_196_var[875216]);
  int8_t*  weights    = (int8_t*) (&global_const_workspace_196_var[566912]);

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
        * (int64_t)1575411349) + ((int64_t)1 << ((int64_t)((9 + 31) - 1))))
        >> ((int64_t)(9 + 31)))) + 64;
      int32_t v1 = (v_) < (127) ? (v_) : (127);
      T_multiply[ax3] = (((float)(((v1) > (-128) ? (v1) : (-128)) - 64)) * 1.989290e-01f);
    }
  }
  return 0;

#else

  void* fused_nn_contrib_dense_pack_constant_9_let = (&(global_const_workspace_196_var[876816]));
  void* fused_nn_contrib_dense_pack_subtract_constant_9_let = (&(global_const_workspace_196_var[875216]));
  void* fused_constant_62_let = (&(global_const_workspace_196_var[566912]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 5; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_197_var[528]));
    void* compute_global_let = (&(global_workspace_197_var[608]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 4; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 5; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 128; ++k_outer) {
        for (int32_t x_c = 0; x_c < 5; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[k_outer]) * ((int32_t)((int8_t*)fused_constant_62_let)[((((ax1_outer_ax0_outer_fused * 2560) + (y_inner_outer_x_inner_outer_fused * 640)) + (k_outer * 5)) + x_c)])));
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
        int32_t v_ = ((int32_t)(((((0 != 0) ? (((int64_t)((((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_9_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_9_let)[cse_var_1])) << ((int64_t)0)) : ((int64_t)((((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_9_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_9_let)[cse_var_1]))) * (int64_t)1575411349) + ((int64_t)1 << ((int64_t)((9 + 31) - 1)))) >> ((int64_t)(9 + 31)))) + 64;
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        T_multiply[cse_var_1] = (((float)(((v__1) > (-128) ? (v__1) : (-128)) - 64)) * 1.989290e-01f);
      }
    }
  }
  return 0;

#endif
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_118_var, uint8_t* global_workspace_119_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED v8 HW-REQUANT] 1x1 conv: 24->144 channels, 16 spatial positions
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_118_var[861328]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_118_var[862480]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_118_var[857296]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_118_var[714112]);

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
      params[oc*4 + 0] = (conv_const[ax3]);         // bias
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

  void* fused_nn_conv2d_add_constant_2_let = (&(global_const_workspace_118_var[861328]));
  void* fused_nn_conv2d_add_constant_1_let = (&(global_const_workspace_118_var[861904]));
  void* fused_nn_conv2d_add_constant_let = (&(global_const_workspace_118_var[862480]));
  void* fused_nn_conv2d_constant_28_let = (&(global_const_workspace_118_var[857296]));
  void* fused_constant_36_let = (&(global_const_workspace_118_var[714112]));
  void* pad_temp_let = (&(global_workspace_119_var[15936]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 4; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 4; ++i2) {
      for (int32_t i3 = 0; i3 < 24; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 96) + (i2 * 24)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 16; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_119_var[16320]));
    for (int32_t ax3 = 0; ax3 < 144; ++ax3) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 24; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 24) + rc)]) * ((int32_t)((int8_t*)fused_constant_36_let)[((rc * 144) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)(((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_constant_28_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_2_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_2_let)[ax3] + 31)))) - 128;
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
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip(int8_t* p0, int32_t* compute, uint8_t* global_const_workspace_38_var, uint8_t* global_workspace_39_var) {
  void* fused_nn_conv2d_subtract_add_constant_35_let = (&(global_const_workspace_38_var[902528]));
  void* fused_nn_conv2d_subtract_add_constant_34_let = (&(global_const_workspace_38_var[902656]));
  void* fused_nn_conv2d_subtract_add_constant_33_let = (&(global_const_workspace_38_var[902784]));
  void* fused_nn_conv2d_constant_11_let = (&(global_const_workspace_38_var[904192]));
  void* fused_nn_conv2d_subtract_constant_11_let = (&(global_const_workspace_38_var[901632]));
  void* fused_constant_11_let = (&(global_const_workspace_38_var[701312]));
  void* pad_temp_let = (&(global_workspace_39_var[8192]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 10; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 10; ++i2) {
      for (int32_t i3 = 0; i3 < 16; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 160) + (i2 * 16)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 64; ++i0_i1_fused_i2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_39_var[12416]));
    for (int32_t i3_1 = 0; i3_1 < 32; ++i3_1) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t ry = 0; ry < 3; ++ry) {
        for (int32_t rx = 0; rx < 3; ++rx) {
          for (int32_t rc = 0; rc < 16; ++rc) {
            ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((((((i0_i1_fused_i2_fused >> 3) * 160) + (ry * 160)) + (rx * 16)) + ((i0_i1_fused_i2_fused & 7) * 16)) + rc)]) * ((int32_t)((int8_t*)fused_constant_11_let)[((((ry * 1536) + (rx * 512)) + (rc * 32)) + i3_1)])));
          }
        }
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_11_let)[i3_1]) - ((int32_t*)fused_nn_conv2d_constant_11_let)[i3_1])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_33_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_35_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_35_let)[i3_1] + 31)))) - 128;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      compute[((i0_i1_fused_i2_fused * 32) + i3_1)] = ((v__1) > (-128) ? (v__1) : (-128));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_1(int8_t* p0, int32_t* compute, uint8_t* global_const_workspace_94_var, uint8_t* global_workspace_95_var) {
  void* fused_nn_conv2d_subtract_add_constant_77_let = (&(global_const_workspace_94_var[864080]));
  void* fused_nn_conv2d_subtract_add_constant_76_let = (&(global_const_workspace_94_var[864592]));
  void* fused_nn_conv2d_subtract_add_constant_75_let = (&(global_const_workspace_94_var[865104]));
  void* fused_nn_conv2d_constant_25_let = (&(global_const_workspace_94_var[867664]));
  void* fused_nn_conv2d_subtract_constant_25_let = (&(global_const_workspace_94_var[863568]));
  void* fused_constant_29_let = (&(global_const_workspace_94_var[710016]));
  void* pad_temp_let = (&(global_workspace_95_var[8192]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 4; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 4; ++i2) {
      for (int32_t i3 = 0; i3 < 32; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 128) + (i2 * 32)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 16; ++i0_i1_fused_i2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_95_var[15168]));
    for (int32_t i3_outer = 0; i3_outer < 2; ++i3_outer) {
      for (int32_t ff = 0; ff < 64; ++ff) {
        ((int32_t*)conv2d_nhwc_let)[ff] = 0;
        for (int32_t rc = 0; rc < 32; ++rc) {
          ((int32_t*)conv2d_nhwc_let)[ff] = (((int32_t*)conv2d_nhwc_let)[ff] + (((int32_t)((int8_t*)pad_temp_let)[((i0_i1_fused_i2_fused * 32) + rc)]) * ((int32_t)((int8_t*)fused_constant_29_let)[(((rc * 128) + (i3_outer * 64)) + ff)])));
        }
      }
      for (int32_t i3_inner = 0; i3_inner < 64; ++i3_inner) {
        int32_t cse_var_3 = (i3_outer * 64);
        int32_t cse_var_2 = (cse_var_3 + i3_inner);
        int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[i3_inner] + ((int32_t*)fused_nn_conv2d_subtract_constant_25_let)[cse_var_2]) - ((int32_t*)fused_nn_conv2d_constant_25_let)[cse_var_2])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_75_let)[cse_var_2])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_77_let)[cse_var_2] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_77_let)[cse_var_2] + 31)))) - 128;
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        compute[(((i0_i1_fused_i2_fused * 128) + cse_var_3) + i3_inner)] = ((v__1) > (-128) ? (v__1) : (-128));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_2(int8_t* p0, int32_t* compute, uint8_t* global_const_workspace_172_var, uint8_t* global_workspace_173_var) {
  void* fused_nn_conv2d_subtract_add_constant_137_let = (&(global_const_workspace_172_var[676224]));
  void* fused_nn_conv2d_subtract_add_constant_136_let = (&(global_const_workspace_172_var[681344]));
  void* fused_nn_conv2d_subtract_add_constant_135_let = (&(global_const_workspace_172_var[686464]));
  void* fused_nn_conv2d_constant_46_let = (&(global_const_workspace_172_var[691584]));
  void* fused_nn_conv2d_subtract_constant_45_let = (&(global_const_workspace_172_var[671104]));
  void* fused_constant_54_let = (&(global_const_workspace_172_var[0]));
  void* pad_temp_let = (&(global_workspace_173_var[26560]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 2; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 2; ++i2) {
      for (int32_t i3 = 0; i3 < 112; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 224) + (i2 * 112)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 4; ++i0_i1_fused_i2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_173_var[27008]));
    for (int32_t i3_outer = 0; i3_outer < 20; ++i3_outer) {
      for (int32_t ff = 0; ff < 64; ++ff) {
        ((int32_t*)conv2d_nhwc_let)[ff] = 0;
        for (int32_t rc = 0; rc < 112; ++rc) {
          ((int32_t*)conv2d_nhwc_let)[ff] = (((int32_t*)conv2d_nhwc_let)[ff] + (((int32_t)((int8_t*)pad_temp_let)[((i0_i1_fused_i2_fused * 112) + rc)]) * ((int32_t)((int8_t*)fused_constant_54_let)[(((rc * 1280) + (i3_outer * 64)) + ff)])));
        }
      }
      for (int32_t i3_inner = 0; i3_inner < 64; ++i3_inner) {
        int32_t cse_var_3 = (i3_outer * 64);
        int32_t cse_var_2 = (cse_var_3 + i3_inner);
        int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[i3_inner] + ((int32_t*)fused_nn_conv2d_subtract_constant_45_let)[cse_var_2]) - ((int32_t*)fused_nn_conv2d_constant_46_let)[cse_var_2])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_135_let)[cse_var_2])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_137_let)[cse_var_2] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_137_let)[cse_var_2] + 31)))) - 128;
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
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_3(int8_t* p0, int32_t* compute, uint8_t* global_const_workspace_186_var, uint8_t* global_workspace_187_var) {
  void* fused_nn_conv2d_subtract_add_constant_143_let = (&(global_const_workspace_186_var[865616]));
  void* fused_nn_conv2d_subtract_add_constant_142_let = (&(global_const_workspace_186_var[866128]));
  void* fused_nn_conv2d_subtract_add_constant_141_let = (&(global_const_workspace_186_var[866640]));
  void* fused_nn_conv2d_constant_48_let = (&(global_const_workspace_186_var[867152]));
  void* fused_nn_conv2d_subtract_constant_47_let = (&(global_const_workspace_186_var[863056]));
  void* fused_constant_58_let = (&(global_const_workspace_186_var[705920]));
  void* pad_temp_let = (&(global_workspace_187_var[8192]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 4; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 4; ++i2) {
      for (int32_t i3 = 0; i3 < 32; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 128) + (i2 * 32)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 16; ++i0_i1_fused_i2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_187_var[8704]));
    for (int32_t i3_outer = 0; i3_outer < 2; ++i3_outer) {
      for (int32_t ff = 0; ff < 64; ++ff) {
        ((int32_t*)conv2d_nhwc_let)[ff] = 0;
        for (int32_t rc = 0; rc < 32; ++rc) {
          ((int32_t*)conv2d_nhwc_let)[ff] = (((int32_t*)conv2d_nhwc_let)[ff] + (((int32_t)((int8_t*)pad_temp_let)[((i0_i1_fused_i2_fused * 32) + rc)]) * ((int32_t)((int8_t*)fused_constant_58_let)[(((rc * 128) + (i3_outer * 64)) + ff)])));
        }
      }
      for (int32_t i3_inner = 0; i3_inner < 64; ++i3_inner) {
        int32_t cse_var_3 = (i3_outer * 64);
        int32_t cse_var_2 = (cse_var_3 + i3_inner);
        int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[i3_inner] + ((int32_t*)fused_nn_conv2d_subtract_constant_47_let)[cse_var_2]) - ((int32_t*)fused_nn_conv2d_constant_48_let)[cse_var_2])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_141_let)[cse_var_2])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_143_let)[cse_var_2] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_143_let)[cse_var_2] + 31)))) - 128;
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        compute[(((i0_i1_fused_i2_fused * 128) + cse_var_3) + i3_inner)] = ((v__1) > (-128) ? (v__1) : (-128));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_4_var, uint8_t* global_workspace_5_var) {
  void* fused_nn_conv2d_subtract_add_constant_2_let = (&(global_const_workspace_4_var[908032]));
  void* fused_nn_conv2d_subtract_add_constant_1_let = (&(global_const_workspace_4_var[908096]));
  void* fused_nn_conv2d_subtract_add_constant_let = (&(global_const_workspace_4_var[908160]));
  void* fused_nn_conv2d_constant_let = (&(global_const_workspace_4_var[908352]));
  void* fused_nn_conv2d_subtract_constant_let = (&(global_const_workspace_4_var[907584]));
  void* fused_constant_let = (&(global_const_workspace_4_var[874784]));
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
  void* fused_nn_conv2d_subtract_add_constant_5_let = (&(global_const_workspace_8_var[907648]));
  void* fused_nn_conv2d_subtract_add_constant_4_let = (&(global_const_workspace_8_var[907712]));
  void* fused_nn_conv2d_subtract_add_constant_3_let = (&(global_const_workspace_8_var[907968]));
  void* fused_nn_conv2d_subtract_constant_1_let = (&(global_const_workspace_8_var[907520]));
  void* fused_nn_conv2d_constant_1_let = (&(global_const_workspace_8_var[908288]));
  void* fused_constant_1_let = (&(global_const_workspace_8_var[900976]));
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
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_10(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_34_var, uint8_t* global_workspace_35_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED v8 HW-REQUANT] 1x1 conv: 48->16 channels, 64 spatial positions
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_34_var[907776]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_34_var[907904]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_34_var[908224]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_34_var[907456]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_34_var[839824]);

  // Safe copy: TVM may alias input/output workspace buffers
  static int8_t _inp[3072];
  for (int32_t _i = 0; _i < 3072; _i++) _inp[_i] = p0[_i];

  // Set per-layer zero-point once. The helper is provided by conv_accel.h.
  accel_set_output_zp(5);

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

  void* fused_nn_conv2d_subtract_add_constant_32_let = (&(global_const_workspace_34_var[907776]));
  void* fused_nn_conv2d_subtract_add_constant_31_let = (&(global_const_workspace_34_var[907840]));
  void* fused_nn_conv2d_subtract_add_constant_30_let = (&(global_const_workspace_34_var[907904]));
  void* fused_nn_conv2d_constant_10_let = (&(global_const_workspace_34_var[908224]));
  void* fused_nn_conv2d_subtract_constant_10_let = (&(global_const_workspace_34_var[907456]));
  void* fused_constant_10_let = (&(global_const_workspace_34_var[839824]));
  void* pad_temp_let = (&(global_workspace_35_var[0]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 8; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 8; ++i2) {
      for (int32_t i3 = 0; i3 < 48; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 384) + (i2 * 48)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 64; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_35_var[12416]));
    for (int32_t ax3 = 0; ax3 < 16; ++ax3) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 48; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 48) + rc)]) * ((int32_t)((int8_t*)fused_constant_10_let)[((rc * 16) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_10_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_10_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_30_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_32_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_32_let)[ax3] + 31)))) + 5;
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
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_54_var[886480]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_54_var[887248]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_54_var[889552]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_54_var[880336]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_54_var[757936]);

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

  void* fused_nn_conv2d_subtract_add_constant_38_let = (&(global_const_workspace_54_var[886480]));
  void* fused_nn_conv2d_subtract_add_constant_37_let = (&(global_const_workspace_54_var[886864]));
  void* fused_nn_conv2d_subtract_add_constant_36_let = (&(global_const_workspace_54_var[887248]));
  void* fused_nn_conv2d_constant_12_let = (&(global_const_workspace_54_var[889552]));
  void* fused_nn_conv2d_subtract_constant_12_let = (&(global_const_workspace_54_var[880336]));
  void* fused_constant_16_let = (&(global_const_workspace_54_var[757936]));
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
  void* fused_nn_conv2d_subtract_add_constant_41_let = (&(global_const_workspace_58_var[885328]));
  void* fused_nn_conv2d_subtract_add_constant_40_let = (&(global_const_workspace_58_var[885712]));
  void* fused_nn_conv2d_subtract_add_constant_39_let = (&(global_const_workspace_58_var[886096]));
  void* fused_nn_conv2d_subtract_constant_13_let = (&(global_const_workspace_58_var[879952]));
  void* fused_nn_conv2d_constant_13_let = (&(global_const_workspace_58_var[889168]));
  void* fused_constant_17_let = (&(global_const_workspace_58_var[815920]));
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
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_62_var[884176]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_62_var[884944]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_62_var[888784]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_62_var[879568]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_62_var[756400]);

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

  void* fused_nn_conv2d_subtract_add_constant_44_let = (&(global_const_workspace_62_var[884176]));
  void* fused_nn_conv2d_subtract_add_constant_43_let = (&(global_const_workspace_62_var[884560]));
  void* fused_nn_conv2d_subtract_add_constant_42_let = (&(global_const_workspace_62_var[884944]));
  void* fused_nn_conv2d_constant_14_let = (&(global_const_workspace_62_var[888784]));
  void* fused_nn_conv2d_subtract_constant_14_let = (&(global_const_workspace_62_var[879568]));
  void* fused_constant_18_let = (&(global_const_workspace_62_var[756400]));
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
  void* fused_nn_conv2d_subtract_add_constant_47_let = (&(global_const_workspace_64_var[883024]));
  void* fused_nn_conv2d_subtract_add_constant_46_let = (&(global_const_workspace_64_var[883408]));
  void* fused_nn_conv2d_subtract_add_constant_45_let = (&(global_const_workspace_64_var[883792]));
  void* fused_nn_conv2d_subtract_constant_15_let = (&(global_const_workspace_64_var[879184]));
  void* fused_nn_conv2d_constant_15_let = (&(global_const_workspace_64_var[888400]));
  void* fused_constant_19_let = (&(global_const_workspace_64_var[815056]));
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
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_15(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_68_var, uint8_t* global_workspace_69_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED v8 HW-REQUANT] 1x1 conv: 16->96 channels, 64 spatial positions
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_68_var[881872]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_68_var[882640]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_68_var[888016]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_68_var[878800]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_68_var[754864]);

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

  void* fused_nn_conv2d_subtract_add_constant_50_let = (&(global_const_workspace_68_var[881872]));
  void* fused_nn_conv2d_subtract_add_constant_49_let = (&(global_const_workspace_68_var[882256]));
  void* fused_nn_conv2d_subtract_add_constant_48_let = (&(global_const_workspace_68_var[882640]));
  void* fused_nn_conv2d_constant_16_let = (&(global_const_workspace_68_var[888016]));
  void* fused_nn_conv2d_subtract_constant_16_let = (&(global_const_workspace_68_var[878800]));
  void* fused_constant_20_let = (&(global_const_workspace_68_var[754864]));
  void* pad_temp_let = (&(global_workspace_69_var[36224]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 8; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 8; ++i2) {
      for (int32_t i3 = 0; i3 < 16; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 128) + (i2 * 16)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 64; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_69_var[37248]));
    for (int32_t ax3 = 0; ax3 < 96; ++ax3) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 16; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 16) + rc)]) * ((int32_t)((int8_t*)fused_constant_20_let)[((rc * 96) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_16_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_16_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_48_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_50_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_50_let)[ax3] + 31)))) - 128;
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
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_16(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_72_var, uint8_t* global_workspace_73_var) {
  void* fused_nn_conv2d_subtract_add_constant_53_let = (&(global_const_workspace_72_var[880720]));
  void* fused_nn_conv2d_subtract_add_constant_52_let = (&(global_const_workspace_72_var[881104]));
  void* fused_nn_conv2d_subtract_add_constant_51_let = (&(global_const_workspace_72_var[881488]));
  void* fused_nn_conv2d_subtract_constant_17_let = (&(global_const_workspace_72_var[878416]));
  void* fused_nn_conv2d_constant_17_let = (&(global_const_workspace_72_var[887632]));
  void* fused_constant_21_let = (&(global_const_workspace_72_var[814192]));
  void* PaddedInput_let = (&(global_workspace_73_var[7776]));
  void* DepthwiseConv2d_let = (&(global_workspace_73_var[15552]));
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
            ((int32_t*)DepthwiseConv2d_let)[cse_var_2] = (((int32_t*)DepthwiseConv2d_let)[cse_var_2] + (((int32_t)((int8_t*)PaddedInput_let)[(((((i * 1728) + (di * 864)) + (j * 192)) + cse_var_3) + c)]) * ((int32_t)((int8_t*)fused_constant_21_let)[(((di * 288) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 4; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 4; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 96; ++ax3) {
        int32_t cse_var_4 = (((ax1 * 384) + (ax2 * 96)) + ax3);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_4] = (((int32_t*)DepthwiseConv2d_let)[cse_var_4] - ((int32_t*)fused_nn_conv2d_constant_17_let)[ax3]);
      }
    }
  }
  for (int32_t ax1_1 = 0; ax1_1 < 4; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 4; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 96; ++ax3_1) {
        int32_t cse_var_5 = (((ax1_1 * 384) + (ax2_1 * 96)) + ax3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_5] = (((int32_t*)DepthwiseConv2d_let)[cse_var_5] + ((int32_t*)fused_nn_conv2d_subtract_constant_17_let)[ax3_1]);
      }
    }
  }
  for (int32_t i1_1 = 0; i1_1 < 4; ++i1_1) {
    for (int32_t i2_1 = 0; i2_1 < 4; ++i2_1) {
      for (int32_t i3_1 = 0; i3_1 < 96; ++i3_1) {
        int32_t cse_var_6 = (((i1_1 * 384) + (i2_1 * 96)) + i3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_6] = ((int32_t)(((((int64_t)((int32_t*)DepthwiseConv2d_let)[cse_var_6]) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_51_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_53_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_53_let)[i3_1] + 31))));
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
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_17(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_74_var, uint8_t* global_workspace_75_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED v8 HW-REQUANT] 1x1 conv: 96->24 channels, 16 spatial positions
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_74_var[905824]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_74_var[906016]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_74_var[906208]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_74_var[905440]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_74_var[747376]);

  // Safe copy: TVM may alias input/output workspace buffers
  static int8_t _inp[1536];
  for (int32_t _i = 0; _i < 1536; _i++) _inp[_i] = p0[_i];

  // Set per-layer zero-point once. The helper is provided by conv_accel.h.
  accel_set_output_zp(13);

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

  void* fused_nn_conv2d_subtract_add_constant_56_let = (&(global_const_workspace_74_var[905824]));
  void* fused_nn_conv2d_subtract_add_constant_55_let = (&(global_const_workspace_74_var[905920]));
  void* fused_nn_conv2d_subtract_add_constant_54_let = (&(global_const_workspace_74_var[906016]));
  void* fused_nn_conv2d_constant_18_let = (&(global_const_workspace_74_var[906208]));
  void* fused_nn_conv2d_subtract_constant_18_let = (&(global_const_workspace_74_var[905440]));
  void* fused_constant_22_let = (&(global_const_workspace_74_var[747376]));
  void* pad_temp_let = (&(global_workspace_75_var[0]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 4; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 4; ++i2) {
      for (int32_t i3 = 0; i3 < 96; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 384) + (i2 * 96)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 16; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_75_var[15168]));
    for (int32_t ax3 = 0; ax3 < 24; ++ax3) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 96; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 96) + rc)]) * ((int32_t)((int8_t*)fused_constant_22_let)[((rc * 24) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_18_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_18_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_54_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_56_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_56_let)[ax3] + 31)))) + 13;
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
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_18(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_76_var, uint8_t* global_workspace_77_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED v8 HW-REQUANT] 1x1 conv: 24->144 channels, 16 spatial positions
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_76_var[854992]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_76_var[856144]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_76_var[860752]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_76_var[844048]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_76_var[727936]);

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

  void* fused_nn_conv2d_subtract_add_constant_59_let = (&(global_const_workspace_76_var[854992]));
  void* fused_nn_conv2d_subtract_add_constant_58_let = (&(global_const_workspace_76_var[855568]));
  void* fused_nn_conv2d_subtract_add_constant_57_let = (&(global_const_workspace_76_var[856144]));
  void* fused_nn_conv2d_constant_19_let = (&(global_const_workspace_76_var[860752]));
  void* fused_nn_conv2d_subtract_constant_19_let = (&(global_const_workspace_76_var[844048]));
  void* fused_constant_23_let = (&(global_const_workspace_76_var[727936]));
  void* pad_temp_let = (&(global_workspace_77_var[15168]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 4; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 4; ++i2) {
      for (int32_t i3 = 0; i3 < 24; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 96) + (i2 * 24)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 16; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_77_var[15552]));
    for (int32_t ax3 = 0; ax3 < 144; ++ax3) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 24; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 24) + rc)]) * ((int32_t)((int8_t*)fused_constant_23_let)[((rc * 144) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_19_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_19_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_57_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_59_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_59_let)[ax3] + 31)))) - 128;
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
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_19(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_80_var, uint8_t* global_workspace_81_var) {
  void* fused_nn_conv2d_subtract_add_constant_62_let = (&(global_const_workspace_80_var[853264]));
  void* fused_nn_conv2d_subtract_add_constant_61_let = (&(global_const_workspace_80_var[853840]));
  void* fused_nn_conv2d_subtract_add_constant_60_let = (&(global_const_workspace_80_var[854416]));
  void* fused_nn_conv2d_subtract_constant_20_let = (&(global_const_workspace_80_var[843472]));
  void* fused_nn_conv2d_constant_20_let = (&(global_const_workspace_80_var[860176]));
  void* fused_constant_24_let = (&(global_const_workspace_80_var[806752]));
  void* PaddedInput_let = (&(global_workspace_81_var[9216]));
  void* DepthwiseConv2d_let = (&(global_workspace_81_var[0]));
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
            ((int32_t*)DepthwiseConv2d_let)[cse_var_2] = (((int32_t*)DepthwiseConv2d_let)[cse_var_2] + (((int32_t)((int8_t*)PaddedInput_let)[(((((i * 864) + (di * 864)) + cse_var_4) + cse_var_3) + c)]) * ((int32_t)((int8_t*)fused_constant_24_let)[(((di * 432) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 4; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 4; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 144; ++ax3) {
        int32_t cse_var_5 = (((ax1 * 576) + (ax2 * 144)) + ax3);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_5] = (((int32_t*)DepthwiseConv2d_let)[cse_var_5] - ((int32_t*)fused_nn_conv2d_constant_20_let)[ax3]);
      }
    }
  }
  for (int32_t ax1_1 = 0; ax1_1 < 4; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 4; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 144; ++ax3_1) {
        int32_t cse_var_6 = (((ax1_1 * 576) + (ax2_1 * 144)) + ax3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_6] = (((int32_t*)DepthwiseConv2d_let)[cse_var_6] + ((int32_t*)fused_nn_conv2d_subtract_constant_20_let)[ax3_1]);
      }
    }
  }
  for (int32_t i1_1 = 0; i1_1 < 4; ++i1_1) {
    for (int32_t i2_1 = 0; i2_1 < 4; ++i2_1) {
      for (int32_t i3_1 = 0; i3_1 < 144; ++i3_1) {
        int32_t cse_var_7 = (((i1_1 * 576) + (i2_1 * 144)) + i3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_7] = ((int32_t)(((((int64_t)((int32_t*)DepthwiseConv2d_let)[cse_var_7]) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_60_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_62_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_62_let)[i3_1] + 31))));
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
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_2(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_10_var, uint8_t* global_workspace_11_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED v8 HW-REQUANT] 1x1 conv: 16->8 channels, 1024 spatial positions
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_10_var[909248]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_10_var[909312]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_10_var[909472]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_10_var[909216]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_10_var[904320]);

  // Safe copy: TVM may alias input/output workspace buffers
  static int8_t _inp[16384];
  for (int32_t _i = 0; _i < 16384; _i++) _inp[_i] = p0[_i];

  // Set per-layer zero-point once. The helper is provided by conv_accel.h.
  accel_set_output_zp(-37);

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

  void* fused_nn_conv2d_subtract_add_constant_8_let = (&(global_const_workspace_10_var[909248]));
  void* fused_nn_conv2d_subtract_add_constant_7_let = (&(global_const_workspace_10_var[909280]));
  void* fused_nn_conv2d_subtract_add_constant_6_let = (&(global_const_workspace_10_var[909312]));
  void* fused_nn_conv2d_constant_2_let = (&(global_const_workspace_10_var[909472]));
  void* fused_nn_conv2d_subtract_constant_2_let = (&(global_const_workspace_10_var[909216]));
  void* fused_constant_2_let = (&(global_const_workspace_10_var[904320]));
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
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_2_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_2_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_6_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_8_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_8_let)[ax3] + 31)))) - 37;
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
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_20(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_84_var, uint8_t* global_workspace_85_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED v8 HW-REQUANT] 1x1 conv: 24->144 channels, 16 spatial positions
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_84_var[851536]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_84_var[852688]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_84_var[859600]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_84_var[842896]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_84_var[724480]);

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

  void* fused_nn_conv2d_subtract_add_constant_65_let = (&(global_const_workspace_84_var[851536]));
  void* fused_nn_conv2d_subtract_add_constant_64_let = (&(global_const_workspace_84_var[852112]));
  void* fused_nn_conv2d_subtract_add_constant_63_let = (&(global_const_workspace_84_var[852688]));
  void* fused_nn_conv2d_constant_21_let = (&(global_const_workspace_84_var[859600]));
  void* fused_nn_conv2d_subtract_constant_21_let = (&(global_const_workspace_84_var[842896]));
  void* fused_constant_25_let = (&(global_const_workspace_84_var[724480]));
  void* pad_temp_let = (&(global_workspace_85_var[14784]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 4; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 4; ++i2) {
      for (int32_t i3 = 0; i3 < 24; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 96) + (i2 * 24)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 16; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_85_var[15168]));
    for (int32_t ax3 = 0; ax3 < 144; ++ax3) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 24; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 24) + rc)]) * ((int32_t)((int8_t*)fused_constant_25_let)[((rc * 144) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_21_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_21_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_63_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_65_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_65_let)[ax3] + 31)))) - 128;
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
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_21(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_86_var, uint8_t* global_workspace_87_var) {
  void* fused_nn_conv2d_subtract_add_constant_68_let = (&(global_const_workspace_86_var[849808]));
  void* fused_nn_conv2d_subtract_add_constant_67_let = (&(global_const_workspace_86_var[850384]));
  void* fused_nn_conv2d_subtract_add_constant_66_let = (&(global_const_workspace_86_var[850960]));
  void* fused_nn_conv2d_subtract_constant_22_let = (&(global_const_workspace_86_var[842320]));
  void* fused_nn_conv2d_constant_22_let = (&(global_const_workspace_86_var[859024]));
  void* fused_constant_26_let = (&(global_const_workspace_86_var[805456]));
  void* PaddedInput_let = (&(global_workspace_87_var[9216]));
  void* DepthwiseConv2d_let = (&(global_workspace_87_var[0]));
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
            ((int32_t*)DepthwiseConv2d_let)[cse_var_2] = (((int32_t*)DepthwiseConv2d_let)[cse_var_2] + (((int32_t)((int8_t*)PaddedInput_let)[(((((i * 864) + (di * 864)) + cse_var_4) + cse_var_3) + c)]) * ((int32_t)((int8_t*)fused_constant_26_let)[(((di * 432) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 4; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 4; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 144; ++ax3) {
        int32_t cse_var_5 = (((ax1 * 576) + (ax2 * 144)) + ax3);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_5] = (((int32_t*)DepthwiseConv2d_let)[cse_var_5] - ((int32_t*)fused_nn_conv2d_constant_22_let)[ax3]);
      }
    }
  }
  for (int32_t ax1_1 = 0; ax1_1 < 4; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 4; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 144; ++ax3_1) {
        int32_t cse_var_6 = (((ax1_1 * 576) + (ax2_1 * 144)) + ax3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_6] = (((int32_t*)DepthwiseConv2d_let)[cse_var_6] + ((int32_t*)fused_nn_conv2d_subtract_constant_22_let)[ax3_1]);
      }
    }
  }
  for (int32_t i1_1 = 0; i1_1 < 4; ++i1_1) {
    for (int32_t i2_1 = 0; i2_1 < 4; ++i2_1) {
      for (int32_t i3_1 = 0; i3_1 < 144; ++i3_1) {
        int32_t cse_var_7 = (((i1_1 * 576) + (i2_1 * 144)) + i3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_7] = ((int32_t)(((((int64_t)((int32_t*)DepthwiseConv2d_let)[cse_var_7]) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_66_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_68_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_68_let)[i3_1] + 31))));
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
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_22(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_88_var, uint8_t* global_workspace_89_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED v8 HW-REQUANT] 1x1 conv: 144->24 channels, 16 spatial positions
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_88_var[905536]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_88_var[905728]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_88_var[906112]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_88_var[905344]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_88_var[721024]);

  // Safe copy: TVM may alias input/output workspace buffers
  static int8_t _inp[2304];
  for (int32_t _i = 0; _i < 2304; _i++) _inp[_i] = p0[_i];

  // Set per-layer zero-point once. The helper is provided by conv_accel.h.
  accel_set_output_zp(-15);

  for (int32_t tile = 0; tile < 1; tile++) {
    int32_t oc_base = tile * 24;
    int32_t oc_count = 24;
    if (oc_base + oc_count > 24) oc_count = 24 - oc_base;

    // Pack weights for this tile (relayout from [rc][oc] to [oc][rc])
    static int8_t rw[3456];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      for (int32_t rc = 0; rc < 144; rc++)
        rw[oc * 144 + rc] = weights[rc * 24 + oc_base + oc];
    }
    accel_spad_write(0x090, rw, oc_count * 144);

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
    accel_spad_write(0xE70, (int8_t*)params, oc_count * 16);

    for (int32_t sp = 0; sp < 16; sp++) {
      accel_spad_write(0x000, &_inp[sp * 144], 144);
      hw_multi_dot_requant(0x000, 0x090, 0xE10,
                           0xE70, 144, oc_count);
      accel_unpack_i8_outputs(&T_cast[(sp * 24) + oc_base],
                              0xE10, oc_count);
    }
  }
  return 0;

#else

  void* fused_nn_conv2d_subtract_add_constant_71_let = (&(global_const_workspace_88_var[905536]));
  void* fused_nn_conv2d_subtract_add_constant_70_let = (&(global_const_workspace_88_var[905632]));
  void* fused_nn_conv2d_subtract_add_constant_69_let = (&(global_const_workspace_88_var[905728]));
  void* fused_nn_conv2d_constant_23_let = (&(global_const_workspace_88_var[906112]));
  void* fused_nn_conv2d_subtract_constant_23_let = (&(global_const_workspace_88_var[905344]));
  void* fused_constant_27_let = (&(global_const_workspace_88_var[721024]));
  void* pad_temp_let = (&(global_workspace_89_var[0]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 4; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 4; ++i2) {
      for (int32_t i3 = 0; i3 < 144; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 576) + (i2 * 144)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 16; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_89_var[15168]));
    for (int32_t ax3 = 0; ax3 < 24; ++ax3) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 144; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 144) + rc)]) * ((int32_t)((int8_t*)fused_constant_27_let)[((rc * 24) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_23_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_23_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_69_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_71_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_71_let)[ax3] + 31)))) - 15;
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
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_23(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_92_var, uint8_t* global_workspace_93_var) {
  void* fused_nn_conv2d_subtract_add_constant_74_let = (&(global_const_workspace_92_var[902144]));
  void* fused_nn_conv2d_subtract_add_constant_73_let = (&(global_const_workspace_92_var[902272]));
  void* fused_nn_conv2d_subtract_add_constant_72_let = (&(global_const_workspace_92_var[902400]));
  void* fused_nn_conv2d_constant_24_let = (&(global_const_workspace_92_var[904064]));
  void* fused_nn_conv2d_subtract_constant_24_let = (&(global_const_workspace_92_var[901504]));
  void* fused_constant_28_let = (&(global_const_workspace_92_var[633472]));
  void* pad_temp_let = (&(global_workspace_93_var[0]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 6; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 6; ++i2) {
      for (int32_t i3 = 0; i3 < 24; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 144) + (i2 * 24)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 16; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_93_var[15168]));
    for (int32_t ax3 = 0; ax3 < 32; ++ax3) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t ry = 0; ry < 3; ++ry) {
        for (int32_t rx = 0; rx < 3; ++rx) {
          for (int32_t rc = 0; rc < 24; ++rc) {
            ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((((((ax0_ax1_fused_ax2_fused >> 2) * 144) + (ry * 144)) + (rx * 24)) + ((ax0_ax1_fused_ax2_fused & 3) * 24)) + rc)]) * ((int32_t)((int8_t*)fused_constant_28_let)[((((ry * 2304) + (rx * 768)) + (rc * 32)) + ax3)])));
          }
        }
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_24_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_24_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_72_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_74_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_74_let)[ax3] + 31)))) - 128;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_cast[((ax0_ax1_fused_ax2_fused * 32) + ax3)] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_24(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_110_var, uint8_t* global_workspace_111_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED v8 HW-REQUANT] 1x1 conv: 24->144 channels, 16 spatial positions
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_110_var[848080]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_110_var[849232]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_110_var[858448]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_110_var[841744]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_110_var[717568]);

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

  void* fused_nn_conv2d_subtract_add_constant_80_let = (&(global_const_workspace_110_var[848080]));
  void* fused_nn_conv2d_subtract_add_constant_79_let = (&(global_const_workspace_110_var[848656]));
  void* fused_nn_conv2d_subtract_add_constant_78_let = (&(global_const_workspace_110_var[849232]));
  void* fused_nn_conv2d_constant_26_let = (&(global_const_workspace_110_var[858448]));
  void* fused_nn_conv2d_subtract_constant_26_let = (&(global_const_workspace_110_var[841744]));
  void* fused_constant_34_let = (&(global_const_workspace_110_var[717568]));
  void* pad_temp_let = (&(global_workspace_111_var[15552]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 4; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 4; ++i2) {
      for (int32_t i3 = 0; i3 < 24; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 96) + (i2 * 24)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 16; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_111_var[15936]));
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
  void* fused_nn_conv2d_subtract_add_constant_83_let = (&(global_const_workspace_114_var[846352]));
  void* fused_nn_conv2d_subtract_add_constant_82_let = (&(global_const_workspace_114_var[846928]));
  void* fused_nn_conv2d_subtract_add_constant_81_let = (&(global_const_workspace_114_var[847504]));
  void* fused_nn_conv2d_subtract_constant_27_let = (&(global_const_workspace_114_var[841168]));
  void* fused_nn_conv2d_constant_27_let = (&(global_const_workspace_114_var[857872]));
  void* fused_constant_35_let = (&(global_const_workspace_114_var[804160]));
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
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_26(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_122_var, uint8_t* global_workspace_123_var) {
  void* fused_nn_conv2d_subtract_add_constant_86_let = (&(global_const_workspace_122_var[844624]));
  void* fused_nn_conv2d_subtract_add_constant_85_let = (&(global_const_workspace_122_var[845200]));
  void* fused_nn_conv2d_subtract_add_constant_84_let = (&(global_const_workspace_122_var[845776]));
  void* fused_nn_conv2d_subtract_constant_28_let = (&(global_const_workspace_122_var[840592]));
  void* fused_nn_conv2d_constant_29_let = (&(global_const_workspace_122_var[856720]));
  void* fused_constant_37_let = (&(global_const_workspace_122_var[802864]));
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
        ((int32_t*)DepthwiseConv2d_let)[cse_var_6] = (((int32_t*)DepthwiseConv2d_let)[cse_var_6] + ((int32_t*)fused_nn_conv2d_subtract_constant_28_let)[ax3_1]);
      }
    }
  }
  for (int32_t i1_1 = 0; i1_1 < 4; ++i1_1) {
    for (int32_t i2_1 = 0; i2_1 < 4; ++i2_1) {
      for (int32_t i3_1 = 0; i3_1 < 144; ++i3_1) {
        int32_t cse_var_7 = (((i1_1 * 576) + (i2_1 * 144)) + i3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_7] = ((int32_t)(((((int64_t)((int32_t*)DepthwiseConv2d_let)[cse_var_7]) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_84_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_86_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_86_let)[i3_1] + 31))));
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
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_27(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_124_var, uint8_t* global_workspace_125_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED v8 HW-REQUANT] 1x1 conv: 144->32 channels, 16 spatial positions
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_124_var[901760]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_124_var[902016]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_124_var[903936]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_124_var[901376]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_124_var[696704]);

  // Safe copy: TVM may alias input/output workspace buffers
  static int8_t _inp[2304];
  for (int32_t _i = 0; _i < 2304; _i++) _inp[_i] = p0[_i];

  // Set per-layer zero-point once. The helper is provided by conv_accel.h.
  accel_set_output_zp(4);

  for (int32_t tile = 0; tile < 1; tile++) {
    int32_t oc_base = tile * 32;
    int32_t oc_count = 32;
    if (oc_base + oc_count > 32) oc_count = 32 - oc_base;

    // Pack weights for this tile (relayout from [rc][oc] to [oc][rc])
    static int8_t rw[4608];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      for (int32_t rc = 0; rc < 144; rc++)
        rw[oc * 144 + rc] = weights[rc * 32 + oc_base + oc];
    }
    accel_spad_write(0x090, rw, oc_count * 144);

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
    accel_spad_write(0x1310, (int8_t*)params, oc_count * 16);

    for (int32_t sp = 0; sp < 16; sp++) {
      accel_spad_write(0x000, &_inp[sp * 144], 144);
      hw_multi_dot_requant(0x000, 0x090, 0x1290,
                           0x1310, 144, oc_count);
      accel_unpack_i8_outputs(&T_cast[(sp * 32) + oc_base],
                              0x1290, oc_count);
    }
  }
  return 0;

#else

  void* fused_nn_conv2d_subtract_add_constant_89_let = (&(global_const_workspace_124_var[901760]));
  void* fused_nn_conv2d_subtract_add_constant_88_let = (&(global_const_workspace_124_var[901888]));
  void* fused_nn_conv2d_subtract_add_constant_87_let = (&(global_const_workspace_124_var[902016]));
  void* fused_nn_conv2d_constant_30_let = (&(global_const_workspace_124_var[903936]));
  void* fused_nn_conv2d_subtract_constant_29_let = (&(global_const_workspace_124_var[901376]));
  void* fused_constant_38_let = (&(global_const_workspace_124_var[696704]));
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
    void* conv2d_nhwc_let = (&(global_workspace_125_var[27136]));
    for (int32_t ax3 = 0; ax3 < 32; ++ax3) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 144; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 144) + rc)]) * ((int32_t)((int8_t*)fused_constant_38_let)[((rc * 32) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_29_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_30_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_87_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_89_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_89_let)[ax3] + 31)))) + 4;
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
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_28(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_126_var, uint8_t* global_workspace_127_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED v8 HW-REQUANT] 1x1 conv: 32->192 channels, 16 spatial positions
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_126_var[826768]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_126_var[828304]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_126_var[839056]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_126_var[820624]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_126_var[658816]);

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

  void* fused_nn_conv2d_subtract_add_constant_92_let = (&(global_const_workspace_126_var[826768]));
  void* fused_nn_conv2d_subtract_add_constant_91_let = (&(global_const_workspace_126_var[827536]));
  void* fused_nn_conv2d_subtract_add_constant_90_let = (&(global_const_workspace_126_var[828304]));
  void* fused_nn_conv2d_constant_31_let = (&(global_const_workspace_126_var[839056]));
  void* fused_nn_conv2d_subtract_constant_30_let = (&(global_const_workspace_126_var[820624]));
  void* fused_constant_39_let = (&(global_const_workspace_126_var[658816]));
  void* pad_temp_let = (&(global_workspace_127_var[27136]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 4; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 4; ++i2) {
      for (int32_t i3 = 0; i3 < 32; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 128) + (i2 * 32)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 16; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_127_var[27648]));
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
        int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[ax3_inner] + ((int32_t*)fused_nn_conv2d_subtract_constant_30_let)[cse_var_2]) - ((int32_t*)fused_nn_conv2d_constant_31_let)[cse_var_2])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_90_let)[cse_var_2])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_92_let)[cse_var_2] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_92_let)[cse_var_2] + 31)))) - 128;
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
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_29(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_130_var, uint8_t* global_workspace_131_var) {
  void* fused_nn_conv2d_subtract_add_constant_95_let = (&(global_const_workspace_130_var[824464]));
  void* fused_nn_conv2d_subtract_add_constant_94_let = (&(global_const_workspace_130_var[825232]));
  void* fused_nn_conv2d_subtract_add_constant_93_let = (&(global_const_workspace_130_var[826000]));
  void* fused_nn_conv2d_subtract_constant_31_let = (&(global_const_workspace_130_var[819856]));
  void* fused_nn_conv2d_constant_32_let = (&(global_const_workspace_130_var[838288]));
  void* fused_constant_40_let = (&(global_const_workspace_130_var[753136]));
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
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_3(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_12_var, uint8_t* global_workspace_13_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED v8 HW-REQUANT] 1x1 conv: 8->48 channels, 1024 spatial positions
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_12_var[899440]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_12_var[896368]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_12_var[900784]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_12_var[896176]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_12_var[891088]);

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

  void* fused_nn_conv2d_subtract_add_constant_11_let = (&(global_const_workspace_12_var[899440]));
  void* fused_nn_conv2d_subtract_add_constant_10_let = (&(global_const_workspace_12_var[899632]));
  void* fused_nn_conv2d_subtract_add_constant_9_let = (&(global_const_workspace_12_var[896368]));
  void* fused_nn_conv2d_constant_3_let = (&(global_const_workspace_12_var[900784]));
  void* fused_nn_conv2d_subtract_constant_3_let = (&(global_const_workspace_12_var[896176]));
  void* fused_constant_3_let = (&(global_const_workspace_12_var[891088]));
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
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_30(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_134_var, uint8_t* global_workspace_135_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED v8 HW-REQUANT] 1x1 conv: 32->192 channels, 16 spatial positions
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_134_var[822160]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_134_var[823696]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_134_var[837520]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_134_var[819088]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_134_var[652672]);

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

  void* fused_nn_conv2d_subtract_add_constant_98_let = (&(global_const_workspace_134_var[822160]));
  void* fused_nn_conv2d_subtract_add_constant_97_let = (&(global_const_workspace_134_var[822928]));
  void* fused_nn_conv2d_subtract_add_constant_96_let = (&(global_const_workspace_134_var[823696]));
  void* fused_nn_conv2d_constant_33_let = (&(global_const_workspace_134_var[837520]));
  void* fused_nn_conv2d_subtract_constant_32_let = (&(global_const_workspace_134_var[819088]));
  void* fused_constant_41_let = (&(global_const_workspace_134_var[652672]));
  void* pad_temp_let = (&(global_workspace_135_var[26624]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 4; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 4; ++i2) {
      for (int32_t i3 = 0; i3 < 32; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 128) + (i2 * 32)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 16; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_135_var[27136]));
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
        int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[ax3_inner] + ((int32_t*)fused_nn_conv2d_subtract_constant_32_let)[cse_var_2]) - ((int32_t*)fused_nn_conv2d_constant_33_let)[cse_var_2])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_96_let)[cse_var_2])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_98_let)[cse_var_2] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_98_let)[cse_var_2] + 31)))) - 128;
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
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_31(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_136_var, uint8_t* global_workspace_137_var) {
  void* fused_nn_conv2d_subtract_add_constant_101_let = (&(global_const_workspace_136_var[833680]));
  void* fused_nn_conv2d_subtract_add_constant_100_let = (&(global_const_workspace_136_var[834448]));
  void* fused_nn_conv2d_subtract_add_constant_99_let = (&(global_const_workspace_136_var[821392]));
  void* fused_nn_conv2d_subtract_constant_33_let = (&(global_const_workspace_136_var[818320]));
  void* fused_nn_conv2d_constant_34_let = (&(global_const_workspace_136_var[836752]));
  void* fused_constant_42_let = (&(global_const_workspace_136_var[751408]));
  void* PaddedInput_let = (&(global_workspace_137_var[12288]));
  void* DepthwiseConv2d_let = (&(global_workspace_137_var[0]));
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
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_32(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_138_var, uint8_t* global_workspace_139_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED v8 HW-REQUANT] 1x1 conv: 192->32 channels, 16 spatial positions
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_138_var[903296]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_138_var[903552]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_138_var[903808]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_138_var[901248]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_138_var[646528]);

  // Safe copy: TVM may alias input/output workspace buffers
  static int8_t _inp[3072];
  for (int32_t _i = 0; _i < 3072; _i++) _inp[_i] = p0[_i];

  // Set per-layer zero-point once. The helper is provided by conv_accel.h.
  accel_set_output_zp(8);

  for (int32_t tile = 0; tile < 1; tile++) {
    int32_t oc_base = tile * 32;
    int32_t oc_count = 32;
    if (oc_base + oc_count > 32) oc_count = 32 - oc_base;

    // Pack weights for this tile (relayout from [rc][oc] to [oc][rc])
    static int8_t rw[6144];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      for (int32_t rc = 0; rc < 192; rc++)
        rw[oc * 192 + rc] = weights[rc * 32 + oc_base + oc];
    }
    accel_spad_write(0x0C0, rw, oc_count * 192);

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
    accel_spad_write(0x1940, (int8_t*)params, oc_count * 16);

    for (int32_t sp = 0; sp < 16; sp++) {
      accel_spad_write(0x000, &_inp[sp * 192], 192);
      hw_multi_dot_requant(0x000, 0x0C0, 0x18C0,
                           0x1940, 192, oc_count);
      accel_unpack_i8_outputs(&T_cast[(sp * 32) + oc_base],
                              0x18C0, oc_count);
    }
  }
  return 0;

#else

  void* fused_nn_conv2d_subtract_add_constant_104_let = (&(global_const_workspace_138_var[903296]));
  void* fused_nn_conv2d_subtract_add_constant_103_let = (&(global_const_workspace_138_var[903424]));
  void* fused_nn_conv2d_subtract_add_constant_102_let = (&(global_const_workspace_138_var[903552]));
  void* fused_nn_conv2d_constant_35_let = (&(global_const_workspace_138_var[903808]));
  void* fused_nn_conv2d_subtract_constant_34_let = (&(global_const_workspace_138_var[901248]));
  void* fused_constant_43_let = (&(global_const_workspace_138_var[646528]));
  void* pad_temp_let = (&(global_workspace_139_var[0]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 4; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 4; ++i2) {
      for (int32_t i3 = 0; i3 < 192; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 768) + (i2 * 192)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 16; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_139_var[26624]));
    for (int32_t ax3 = 0; ax3 < 32; ++ax3) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 192; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 192) + rc)]) * ((int32_t)((int8_t*)fused_constant_43_let)[((rc * 32) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_34_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_35_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_102_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_104_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_104_let)[ax3] + 31)))) + 8;
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
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_33(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_142_var, uint8_t* global_workspace_143_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED v8 HW-REQUANT] 1x1 conv: 32->192 channels, 16 spatial positions
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_142_var[831376]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_142_var[832912]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_142_var[835984]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_142_var[817552]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_142_var[640384]);

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

  void* fused_nn_conv2d_subtract_add_constant_107_let = (&(global_const_workspace_142_var[831376]));
  void* fused_nn_conv2d_subtract_add_constant_106_let = (&(global_const_workspace_142_var[832144]));
  void* fused_nn_conv2d_subtract_add_constant_105_let = (&(global_const_workspace_142_var[832912]));
  void* fused_nn_conv2d_constant_36_let = (&(global_const_workspace_142_var[835984]));
  void* fused_nn_conv2d_subtract_constant_35_let = (&(global_const_workspace_142_var[817552]));
  void* fused_constant_44_let = (&(global_const_workspace_142_var[640384]));
  void* pad_temp_let = (&(global_workspace_143_var[26112]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 4; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 4; ++i2) {
      for (int32_t i3 = 0; i3 < 32; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 128) + (i2 * 32)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 16; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_143_var[26624]));
    for (int32_t ax3_outer = 0; ax3_outer < 3; ++ax3_outer) {
      for (int32_t ff = 0; ff < 64; ++ff) {
        ((int32_t*)conv2d_nhwc_let)[ff] = 0;
        for (int32_t rc = 0; rc < 32; ++rc) {
          ((int32_t*)conv2d_nhwc_let)[ff] = (((int32_t*)conv2d_nhwc_let)[ff] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 32) + rc)]) * ((int32_t)((int8_t*)fused_constant_44_let)[(((rc * 192) + (ax3_outer * 64)) + ff)])));
        }
      }
      for (int32_t ax3_inner = 0; ax3_inner < 64; ++ax3_inner) {
        int32_t cse_var_3 = (ax3_outer * 64);
        int32_t cse_var_2 = (cse_var_3 + ax3_inner);
        int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[ax3_inner] + ((int32_t*)fused_nn_conv2d_subtract_constant_35_let)[cse_var_2]) - ((int32_t*)fused_nn_conv2d_constant_36_let)[cse_var_2])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_105_let)[cse_var_2])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_107_let)[cse_var_2] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_107_let)[cse_var_2] + 31)))) - 128;
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
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_34(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_146_var, uint8_t* global_workspace_147_var) {
  void* fused_nn_conv2d_subtract_add_constant_110_let = (&(global_const_workspace_146_var[829072]));
  void* fused_nn_conv2d_subtract_add_constant_109_let = (&(global_const_workspace_146_var[829840]));
  void* fused_nn_conv2d_subtract_add_constant_108_let = (&(global_const_workspace_146_var[830608]));
  void* fused_nn_conv2d_subtract_constant_36_let = (&(global_const_workspace_146_var[816784]));
  void* fused_nn_conv2d_constant_37_let = (&(global_const_workspace_146_var[835216]));
  void* fused_constant_45_let = (&(global_const_workspace_146_var[749680]));
  void* PaddedInput_let = (&(global_workspace_147_var[4800]));
  void* DepthwiseConv2d_let = (&(global_workspace_147_var[9600]));
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
            ((int32_t*)DepthwiseConv2d_let)[cse_var_2] = (((int32_t*)DepthwiseConv2d_let)[cse_var_2] + (((int32_t)((int8_t*)PaddedInput_let)[(((((i * 1920) + (di * 960)) + (j * 384)) + cse_var_3) + c)]) * ((int32_t)((int8_t*)fused_constant_45_let)[(((di * 576) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 2; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 2; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 192; ++ax3) {
        int32_t cse_var_4 = (((ax1 * 384) + (ax2 * 192)) + ax3);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_4] = (((int32_t*)DepthwiseConv2d_let)[cse_var_4] - ((int32_t*)fused_nn_conv2d_constant_37_let)[ax3]);
      }
    }
  }
  for (int32_t ax1_1 = 0; ax1_1 < 2; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 2; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 192; ++ax3_1) {
        int32_t cse_var_5 = (((ax1_1 * 384) + (ax2_1 * 192)) + ax3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_5] = (((int32_t*)DepthwiseConv2d_let)[cse_var_5] + ((int32_t*)fused_nn_conv2d_subtract_constant_36_let)[ax3_1]);
      }
    }
  }
  for (int32_t i1_1 = 0; i1_1 < 2; ++i1_1) {
    for (int32_t i2_1 = 0; i2_1 < 2; ++i2_1) {
      for (int32_t i3_1 = 0; i3_1 < 192; ++i3_1) {
        int32_t cse_var_6 = (((i1_1 * 384) + (i2_1 * 192)) + i3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_6] = ((int32_t)(((((int64_t)((int32_t*)DepthwiseConv2d_let)[cse_var_6]) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_108_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_110_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_110_let)[i3_1] + 31))));
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
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_35(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_148_var, uint8_t* global_workspace_149_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED v8 HW-REQUANT] 1x1 conv: 192->56 channels, 4 spatial positions
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_148_var[892080]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_148_var[892528]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_148_var[892752]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_148_var[891856]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_148_var[605312]);

  // Safe copy: TVM may alias input/output workspace buffers
  static int8_t _inp[768];
  for (int32_t _i = 0; _i < 768; _i++) _inp[_i] = p0[_i];

  // Set per-layer zero-point once. The helper is provided by conv_accel.h.
  accel_set_output_zp(-1);

  for (int32_t tile = 0; tile < 1; tile++) {
    int32_t oc_base = tile * 56;
    int32_t oc_count = 56;
    if (oc_base + oc_count > 56) oc_count = 56 - oc_base;

    // Pack weights for this tile (relayout from [rc][oc] to [oc][rc])
    static int8_t rw[10752];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      for (int32_t rc = 0; rc < 192; rc++)
        rw[oc * 192 + rc] = weights[rc * 56 + oc_base + oc];
    }
    accel_spad_write(0x0C0, rw, oc_count * 192);

    // Pack params for this tile: 16 bytes per OC.
    //   word 0: scale (high 32) and bias (low 32)
    //   word 1: zero  (high 32) and shift (low 32)
    static int32_t params[56 * 4];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      int32_t ax3 = oc_base + oc;
      params[oc*4 + 0] = (conv_sub[ax3] - conv_const[ax3]);         // bias
      params[oc*4 + 1] = quant_scale[ax3];      // scale
      params[oc*4 + 2] = quant_shift[ax3] + 31; // shift
      params[oc*4 + 3] = 0;                     // reserved
    }
    accel_spad_write(0x2BA0, (int8_t*)params, oc_count * 16);

    for (int32_t sp = 0; sp < 4; sp++) {
      accel_spad_write(0x000, &_inp[sp * 192], 192);
      hw_multi_dot_requant(0x000, 0x0C0, 0x2AC0,
                           0x2BA0, 192, oc_count);
      accel_unpack_i8_outputs(&T_cast[(sp * 56) + oc_base],
                              0x2AC0, oc_count);
    }
  }
  return 0;

#else

  void* fused_nn_conv2d_subtract_add_constant_113_let = (&(global_const_workspace_148_var[892080]));
  void* fused_nn_conv2d_subtract_add_constant_112_let = (&(global_const_workspace_148_var[892304]));
  void* fused_nn_conv2d_subtract_add_constant_111_let = (&(global_const_workspace_148_var[892528]));
  void* fused_nn_conv2d_constant_38_let = (&(global_const_workspace_148_var[892752]));
  void* fused_nn_conv2d_subtract_constant_37_let = (&(global_const_workspace_148_var[891856]));
  void* fused_constant_46_let = (&(global_const_workspace_148_var[605312]));
  void* pad_temp_let = (&(global_workspace_149_var[0]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 2; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 2; ++i2) {
      for (int32_t i3 = 0; i3 < 192; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 384) + (i2 * 192)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 4; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_149_var[26560]));
    for (int32_t ax3 = 0; ax3 < 56; ++ax3) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 192; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 192) + rc)]) * ((int32_t)((int8_t*)fused_constant_46_let)[((rc * 56) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_37_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_38_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_111_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_113_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_113_let)[ax3] + 31)))) - 1;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_cast[((ax0_ax1_fused_ax2_fused * 56) + ax3)] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
    }
  }
  return 0;

#endif
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_36(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_150_var, uint8_t* global_workspace_151_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED v8 HW-REQUANT] 1x1 conv: 56->336 channels, 4 spatial positions
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_150_var[790768]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_150_var[793456]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_150_var[801520]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_150_var[769264]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_150_var[510464]);

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

  void* fused_nn_conv2d_subtract_add_constant_116_let = (&(global_const_workspace_150_var[790768]));
  void* fused_nn_conv2d_subtract_add_constant_115_let = (&(global_const_workspace_150_var[792112]));
  void* fused_nn_conv2d_subtract_add_constant_114_let = (&(global_const_workspace_150_var[793456]));
  void* fused_nn_conv2d_constant_39_let = (&(global_const_workspace_150_var[801520]));
  void* fused_nn_conv2d_subtract_constant_38_let = (&(global_const_workspace_150_var[769264]));
  void* fused_constant_47_let = (&(global_const_workspace_150_var[510464]));
  void* pad_temp_let = (&(global_workspace_151_var[26560]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 2; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 2; ++i2) {
      for (int32_t i3 = 0; i3 < 56; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 112) + (i2 * 56)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 4; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_151_var[26784]));
    for (int32_t ax3 = 0; ax3 < 336; ++ax3) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 56; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 56) + rc)]) * ((int32_t)((int8_t*)fused_constant_47_let)[((rc * 336) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_38_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_39_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_114_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_116_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_116_let)[ax3] + 31)))) - 128;
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
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_37(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_154_var, uint8_t* global_workspace_155_var) {
  void* fused_nn_conv2d_subtract_add_constant_119_let = (&(global_const_workspace_154_var[786736]));
  void* fused_nn_conv2d_subtract_add_constant_118_let = (&(global_const_workspace_154_var[788080]));
  void* fused_nn_conv2d_subtract_add_constant_117_let = (&(global_const_workspace_154_var[789424]));
  void* fused_nn_conv2d_subtract_constant_39_let = (&(global_const_workspace_154_var[767920]));
  void* fused_nn_conv2d_constant_40_let = (&(global_const_workspace_154_var[800176]));
  void* fused_constant_48_let = (&(global_const_workspace_154_var[744352]));
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
            ((int32_t*)DepthwiseConv2d_let)[cse_var_2] = (((int32_t*)DepthwiseConv2d_let)[cse_var_2] + (((int32_t)((int8_t*)PaddedInput_let)[(((((i * 1344) + (di * 1344)) + cse_var_4) + cse_var_3) + c)]) * ((int32_t)((int8_t*)fused_constant_48_let)[(((di * 1008) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 2; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 2; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 336; ++ax3) {
        int32_t cse_var_5 = (((ax1 * 672) + (ax2 * 336)) + ax3);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_5] = (((int32_t*)DepthwiseConv2d_let)[cse_var_5] - ((int32_t*)fused_nn_conv2d_constant_40_let)[ax3]);
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
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_38(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_158_var, uint8_t* global_workspace_159_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED v8 HW-REQUANT] 1x1 conv: 56->336 channels, 4 spatial positions
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_158_var[782704]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_158_var[785392]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_158_var[798832]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_158_var[766576]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_158_var[491648]);

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

  void* fused_nn_conv2d_subtract_add_constant_122_let = (&(global_const_workspace_158_var[782704]));
  void* fused_nn_conv2d_subtract_add_constant_121_let = (&(global_const_workspace_158_var[784048]));
  void* fused_nn_conv2d_subtract_add_constant_120_let = (&(global_const_workspace_158_var[785392]));
  void* fused_nn_conv2d_constant_41_let = (&(global_const_workspace_158_var[798832]));
  void* fused_nn_conv2d_subtract_constant_40_let = (&(global_const_workspace_158_var[766576]));
  void* fused_constant_49_let = (&(global_const_workspace_158_var[491648]));
  void* pad_temp_let = (&(global_workspace_159_var[26336]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 2; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 2; ++i2) {
      for (int32_t i3 = 0; i3 < 56; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 112) + (i2 * 56)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 4; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_159_var[26560]));
    for (int32_t ax3 = 0; ax3 < 336; ++ax3) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 56; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 56) + rc)]) * ((int32_t)((int8_t*)fused_constant_49_let)[((rc * 336) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_40_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_41_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_120_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_122_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_122_let)[ax3] + 31)))) - 128;
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
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_39(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_160_var, uint8_t* global_workspace_161_var) {
  void* fused_nn_conv2d_subtract_add_constant_125_let = (&(global_const_workspace_160_var[778672]));
  void* fused_nn_conv2d_subtract_add_constant_124_let = (&(global_const_workspace_160_var[780016]));
  void* fused_nn_conv2d_subtract_add_constant_123_let = (&(global_const_workspace_160_var[781360]));
  void* fused_nn_conv2d_subtract_constant_41_let = (&(global_const_workspace_160_var[765232]));
  void* fused_nn_conv2d_constant_42_let = (&(global_const_workspace_160_var[797488]));
  void* fused_constant_50_let = (&(global_const_workspace_160_var[741328]));
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
            ((int32_t*)DepthwiseConv2d_let)[cse_var_2] = (((int32_t*)DepthwiseConv2d_let)[cse_var_2] + (((int32_t)((int8_t*)PaddedInput_let)[(((((i * 1344) + (di * 1344)) + cse_var_4) + cse_var_3) + c)]) * ((int32_t)((int8_t*)fused_constant_50_let)[(((di * 1008) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 2; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 2; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 336; ++ax3) {
        int32_t cse_var_5 = (((ax1 * 672) + (ax2 * 336)) + ax3);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_5] = (((int32_t*)DepthwiseConv2d_let)[cse_var_5] - ((int32_t*)fused_nn_conv2d_constant_42_let)[ax3]);
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
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_4(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_16_var, uint8_t* global_workspace_17_var) {
  void* fused_nn_conv2d_subtract_add_constant_14_let = (&(global_const_workspace_16_var[898864]));
  void* fused_nn_conv2d_subtract_add_constant_13_let = (&(global_const_workspace_16_var[899056]));
  void* fused_nn_conv2d_subtract_add_constant_12_let = (&(global_const_workspace_16_var[899248]));
  void* fused_nn_conv2d_subtract_constant_4_let = (&(global_const_workspace_16_var[895984]));
  void* fused_nn_conv2d_constant_4_let = (&(global_const_workspace_16_var[900592]));
  void* fused_constant_4_let = (&(global_const_workspace_16_var[874352]));
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
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_40(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_164_var, uint8_t* global_workspace_165_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED v8 HW-REQUANT] 1x1 conv: 56->336 channels, 4 spatial positions
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_164_var[774640]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_164_var[777328]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_164_var[796144]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_164_var[763888]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_164_var[472832]);

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

  void* fused_nn_conv2d_subtract_add_constant_128_let = (&(global_const_workspace_164_var[774640]));
  void* fused_nn_conv2d_subtract_add_constant_127_let = (&(global_const_workspace_164_var[775984]));
  void* fused_nn_conv2d_subtract_add_constant_126_let = (&(global_const_workspace_164_var[777328]));
  void* fused_nn_conv2d_constant_43_let = (&(global_const_workspace_164_var[796144]));
  void* fused_nn_conv2d_subtract_constant_42_let = (&(global_const_workspace_164_var[763888]));
  void* fused_constant_51_let = (&(global_const_workspace_164_var[472832]));
  void* pad_temp_let = (&(global_workspace_165_var[26560]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 2; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 2; ++i2) {
      for (int32_t i3 = 0; i3 < 56; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 112) + (i2 * 56)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 4; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_165_var[26784]));
    for (int32_t ax3 = 0; ax3 < 336; ++ax3) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 56; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 56) + rc)]) * ((int32_t)((int8_t*)fused_constant_51_let)[((rc * 336) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_42_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_43_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_126_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_128_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_128_let)[ax3] + 31)))) - 128;
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
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_41(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_168_var, uint8_t* global_workspace_169_var) {
  void* fused_nn_conv2d_subtract_add_constant_131_let = (&(global_const_workspace_168_var[770608]));
  void* fused_nn_conv2d_subtract_add_constant_130_let = (&(global_const_workspace_168_var[771952]));
  void* fused_nn_conv2d_subtract_add_constant_129_let = (&(global_const_workspace_168_var[773296]));
  void* fused_nn_conv2d_subtract_constant_43_let = (&(global_const_workspace_168_var[762544]));
  void* fused_nn_conv2d_constant_44_let = (&(global_const_workspace_168_var[794800]));
  void* fused_constant_52_let = (&(global_const_workspace_168_var[738304]));
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
            ((int32_t*)DepthwiseConv2d_let)[cse_var_2] = (((int32_t*)DepthwiseConv2d_let)[cse_var_2] + (((int32_t)((int8_t*)PaddedInput_let)[(((((i * 1344) + (di * 1344)) + cse_var_4) + cse_var_3) + c)]) * ((int32_t)((int8_t*)fused_constant_52_let)[(((di * 1008) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 2; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 2; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 336; ++ax3) {
        int32_t cse_var_5 = (((ax1 * 672) + (ax2 * 336)) + ax3);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_5] = (((int32_t*)DepthwiseConv2d_let)[cse_var_5] - ((int32_t*)fused_nn_conv2d_constant_44_let)[ax3]);
      }
    }
  }
  for (int32_t ax1_1 = 0; ax1_1 < 2; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 2; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 336; ++ax3_1) {
        int32_t cse_var_6 = (((ax1_1 * 672) + (ax2_1 * 336)) + ax3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_6] = (((int32_t*)DepthwiseConv2d_let)[cse_var_6] + ((int32_t*)fused_nn_conv2d_subtract_constant_43_let)[ax3_1]);
      }
    }
  }
  for (int32_t i1_1 = 0; i1_1 < 2; ++i1_1) {
    for (int32_t i2_1 = 0; i2_1 < 2; ++i2_1) {
      for (int32_t i3_1 = 0; i3_1 < 336; ++i3_1) {
        int32_t cse_var_7 = (((i1_1 * 672) + (i2_1 * 336)) + i3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_7] = ((int32_t)(((((int64_t)((int32_t*)DepthwiseConv2d_let)[cse_var_7]) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_129_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_131_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_131_let)[i3_1] + 31))));
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
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_42(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_170_var, uint8_t* global_workspace_171_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED v8 HW-REQUANT] 1x1 conv: 336->112 channels, 4 spatial positions
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_170_var[871696]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_170_var[872592]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_170_var[873040]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_170_var[871248]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_170_var[271360]);

  // Safe copy: TVM may alias input/output workspace buffers
  static int8_t _inp[1344];
  for (int32_t _i = 0; _i < 1344; _i++) _inp[_i] = p0[_i];

  // Set per-layer zero-point once. The helper is provided by conv_accel.h.
  accel_set_output_zp(-7);

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

  void* fused_nn_conv2d_subtract_add_constant_134_let = (&(global_const_workspace_170_var[871696]));
  void* fused_nn_conv2d_subtract_add_constant_133_let = (&(global_const_workspace_170_var[872144]));
  void* fused_nn_conv2d_subtract_add_constant_132_let = (&(global_const_workspace_170_var[872592]));
  void* fused_nn_conv2d_constant_45_let = (&(global_const_workspace_170_var[873040]));
  void* fused_nn_conv2d_subtract_constant_44_let = (&(global_const_workspace_170_var[871248]));
  void* fused_constant_53_let = (&(global_const_workspace_170_var[271360]));
  void* pad_temp_let = (&(global_workspace_171_var[0]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 2; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 2; ++i2) {
      for (int32_t i3 = 0; i3 < 336; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 672) + (i2 * 336)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 4; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_171_var[26560]));
    for (int32_t ax3 = 0; ax3 < 112; ++ax3) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 336; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 336) + rc)]) * ((int32_t)((int8_t*)fused_constant_53_let)[((rc * 112) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_44_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_45_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_132_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_134_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_134_let)[ax3] + 31)))) - 7;
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
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_43(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_184_var, uint8_t* global_workspace_185_var) {
  void* fused_nn_conv2d_subtract_add_constant_140_let = (&(global_const_workspace_184_var[902912]));
  void* fused_nn_conv2d_subtract_add_constant_139_let = (&(global_const_workspace_184_var[903040]));
  void* fused_nn_conv2d_subtract_add_constant_138_let = (&(global_const_workspace_184_var[903168]));
  void* fused_nn_conv2d_constant_47_let = (&(global_const_workspace_184_var[903680]));
  void* fused_nn_conv2d_subtract_constant_46_let = (&(global_const_workspace_184_var[901120]));
  void* fused_constant_57_let = (&(global_const_workspace_184_var[616064]));
  void* pad_temp_let = (&(global_workspace_185_var[0]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 6; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 6; ++i2) {
      for (int32_t i3 = 0; i3 < 32; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 192) + (i2 * 32)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 16; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_185_var[1664]));
    for (int32_t ax3 = 0; ax3 < 32; ++ax3) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t ry = 0; ry < 3; ++ry) {
        for (int32_t rx = 0; rx < 3; ++rx) {
          for (int32_t rc = 0; rc < 32; ++rc) {
            ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((((((ax0_ax1_fused_ax2_fused >> 2) * 192) + (ry * 192)) + (rx * 32)) + ((ax0_ax1_fused_ax2_fused & 3) * 32)) + rc)]) * ((int32_t)((int8_t*)fused_constant_57_let)[((((ry * 3072) + (rx * 1024)) + (rc * 32)) + ax3)])));
          }
        }
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_46_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_47_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_138_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_140_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_140_let)[ax3] + 31)))) - 128;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_cast[((ax0_ax1_fused_ax2_fused * 32) + ax3)] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
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
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_18_var[909344]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_18_var[909408]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_18_var[909440]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_18_var[909184]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_18_var[890704]);

  // Safe copy: TVM may alias input/output workspace buffers
  static int8_t _inp[12288];
  for (int32_t _i = 0; _i < 12288; _i++) _inp[_i] = p0[_i];

  // Set per-layer zero-point once. The helper is provided by conv_accel.h.
  accel_set_output_zp(-20);

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

  void* fused_nn_conv2d_subtract_add_constant_17_let = (&(global_const_workspace_18_var[909344]));
  void* fused_nn_conv2d_subtract_add_constant_16_let = (&(global_const_workspace_18_var[909376]));
  void* fused_nn_conv2d_subtract_add_constant_15_let = (&(global_const_workspace_18_var[909408]));
  void* fused_nn_conv2d_constant_5_let = (&(global_const_workspace_18_var[909440]));
  void* fused_nn_conv2d_subtract_constant_5_let = (&(global_const_workspace_18_var[909184]));
  void* fused_constant_5_let = (&(global_const_workspace_18_var[890704]));
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
    void* conv2d_nhwc_let = (&(global_workspace_19_var[66752]));
    for (int32_t ax3 = 0; ax3 < 8; ++ax3) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 48; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 48) + rc)]) * ((int32_t)((int8_t*)fused_constant_5_let)[((rc * 8) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_5_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_5_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_15_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_17_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_17_let)[ax3] + 31)))) - 20;
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
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_6(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_20_var, uint8_t* global_workspace_21_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED v8 HW-REQUANT] 1x1 conv: 8->48 channels, 256 spatial positions
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_20_var[898288]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_20_var[898672]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_20_var[900400]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_20_var[895792]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_20_var[890320]);

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

  void* fused_nn_conv2d_subtract_add_constant_20_let = (&(global_const_workspace_20_var[898288]));
  void* fused_nn_conv2d_subtract_add_constant_19_let = (&(global_const_workspace_20_var[898480]));
  void* fused_nn_conv2d_subtract_add_constant_18_let = (&(global_const_workspace_20_var[898672]));
  void* fused_nn_conv2d_constant_6_let = (&(global_const_workspace_20_var[900400]));
  void* fused_nn_conv2d_subtract_constant_6_let = (&(global_const_workspace_20_var[895792]));
  void* fused_constant_6_let = (&(global_const_workspace_20_var[890320]));
  void* pad_temp_let = (&(global_workspace_21_var[66752]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 16; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 16; ++i2) {
      for (int32_t i3 = 0; i3 < 8; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 128) + (i2 * 8)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 256; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_21_var[68800]));
    for (int32_t ax3 = 0; ax3 < 48; ++ax3) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 8; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 8) + rc)]) * ((int32_t)((int8_t*)fused_constant_6_let)[((rc * 48) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_6_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_6_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_18_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_20_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_20_let)[ax3] + 31)))) - 128;
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
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_7(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_24_var, uint8_t* global_workspace_25_var) {
  void* fused_nn_conv2d_subtract_add_constant_23_let = (&(global_const_workspace_24_var[897712]));
  void* fused_nn_conv2d_subtract_add_constant_22_let = (&(global_const_workspace_24_var[897904]));
  void* fused_nn_conv2d_subtract_add_constant_21_let = (&(global_const_workspace_24_var[898096]));
  void* fused_nn_conv2d_subtract_constant_7_let = (&(global_const_workspace_24_var[895600]));
  void* fused_nn_conv2d_constant_7_let = (&(global_const_workspace_24_var[900208]));
  void* fused_constant_7_let = (&(global_const_workspace_24_var[873920]));
  void* PaddedInput_let = (&(global_workspace_25_var[49152]));
  void* DepthwiseConv2d_let = (&(global_workspace_25_var[0]));
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
            ((int32_t*)DepthwiseConv2d_let)[cse_var_2] = (((int32_t*)DepthwiseConv2d_let)[cse_var_2] + (((int32_t)((int8_t*)PaddedInput_let)[(((((i * 864) + (di * 864)) + cse_var_4) + cse_var_3) + c)]) * ((int32_t)((int8_t*)fused_constant_7_let)[(((di * 144) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 16; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 16; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 48; ++ax3) {
        int32_t cse_var_5 = (((ax1 * 768) + (ax2 * 48)) + ax3);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_5] = (((int32_t*)DepthwiseConv2d_let)[cse_var_5] - ((int32_t*)fused_nn_conv2d_constant_7_let)[ax3]);
      }
    }
  }
  for (int32_t ax1_1 = 0; ax1_1 < 16; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 16; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 48; ++ax3_1) {
        int32_t cse_var_6 = (((ax1_1 * 768) + (ax2_1 * 48)) + ax3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_6] = (((int32_t*)DepthwiseConv2d_let)[cse_var_6] + ((int32_t*)fused_nn_conv2d_subtract_constant_7_let)[ax3_1]);
      }
    }
  }
  for (int32_t i1_1 = 0; i1_1 < 16; ++i1_1) {
    for (int32_t i2_1 = 0; i2_1 < 16; ++i2_1) {
      for (int32_t i3_1 = 0; i3_1 < 48; ++i3_1) {
        int32_t cse_var_7 = (((i1_1 * 768) + (i2_1 * 48)) + i3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_7] = ((int32_t)(((((int64_t)((int32_t*)DepthwiseConv2d_let)[cse_var_7]) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_21_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_23_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_23_let)[i3_1] + 31))));
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
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_8(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_28_var, uint8_t* global_workspace_29_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED v8 HW-REQUANT] 1x1 conv: 8->48 channels, 256 spatial positions
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_28_var[897136]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_28_var[897520]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_28_var[900016]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_28_var[895408]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_28_var[889936]);

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

  void* fused_nn_conv2d_subtract_add_constant_26_let = (&(global_const_workspace_28_var[897136]));
  void* fused_nn_conv2d_subtract_add_constant_25_let = (&(global_const_workspace_28_var[897328]));
  void* fused_nn_conv2d_subtract_add_constant_24_let = (&(global_const_workspace_28_var[897520]));
  void* fused_nn_conv2d_constant_8_let = (&(global_const_workspace_28_var[900016]));
  void* fused_nn_conv2d_subtract_constant_8_let = (&(global_const_workspace_28_var[895408]));
  void* fused_constant_8_let = (&(global_const_workspace_28_var[889936]));
  void* pad_temp_let = (&(global_workspace_29_var[68800]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 16; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 16; ++i2) {
      for (int32_t i3 = 0; i3 < 8; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 128) + (i2 * 8)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 256; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_29_var[70848]));
    for (int32_t ax3 = 0; ax3 < 48; ++ax3) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 8; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 8) + rc)]) * ((int32_t)((int8_t*)fused_constant_8_let)[((rc * 48) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_8_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_8_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_24_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_26_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_26_let)[ax3] + 31)))) - 128;
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
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_9(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_32_var, uint8_t* global_workspace_33_var) {
  void* fused_nn_conv2d_subtract_add_constant_29_let = (&(global_const_workspace_32_var[896560]));
  void* fused_nn_conv2d_subtract_add_constant_28_let = (&(global_const_workspace_32_var[896752]));
  void* fused_nn_conv2d_subtract_add_constant_27_let = (&(global_const_workspace_32_var[896944]));
  void* fused_nn_conv2d_subtract_constant_9_let = (&(global_const_workspace_32_var[895216]));
  void* fused_nn_conv2d_constant_9_let = (&(global_const_workspace_32_var[899824]));
  void* fused_constant_9_let = (&(global_const_workspace_32_var[873488]));
  void* PaddedInput_let = (&(global_workspace_33_var[13872]));
  void* DepthwiseConv2d_let = (&(global_workspace_33_var[27744]));
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
            ((int32_t*)DepthwiseConv2d_let)[cse_var_2] = (((int32_t*)DepthwiseConv2d_let)[cse_var_2] + (((int32_t)((int8_t*)PaddedInput_let)[(((((i * 1632) + (di * 816)) + (j * 96)) + cse_var_3) + c)]) * ((int32_t)((int8_t*)fused_constant_9_let)[(((di * 144) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 8; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 8; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 48; ++ax3) {
        int32_t cse_var_4 = (((ax1 * 384) + (ax2 * 48)) + ax3);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_4] = (((int32_t*)DepthwiseConv2d_let)[cse_var_4] - ((int32_t*)fused_nn_conv2d_constant_9_let)[ax3]);
      }
    }
  }
  for (int32_t ax1_1 = 0; ax1_1 < 8; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 8; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 48; ++ax3_1) {
        int32_t cse_var_5 = (((ax1_1 * 384) + (ax2_1 * 48)) + ax3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_5] = (((int32_t*)DepthwiseConv2d_let)[cse_var_5] + ((int32_t*)fused_nn_conv2d_subtract_constant_9_let)[ax3_1]);
      }
    }
  }
  for (int32_t i1_1 = 0; i1_1 < 8; ++i1_1) {
    for (int32_t i2_1 = 0; i2_1 < 8; ++i2_1) {
      for (int32_t i3_1 = 0; i3_1 < 48; ++i3_1) {
        int32_t cse_var_6 = (((i1_1 * 384) + (i2_1 * 48)) + i3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_6] = ((int32_t)(((((int64_t)((int32_t*)DepthwiseConv2d_let)[cse_var_6]) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_27_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_29_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_29_let)[i3_1] + 31))));
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
      for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
        for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
          int32_t cse_var_2 = (ax2 * 32);
          int32_t cse_var_1 = (ax3_outer * 16);
          T_pad[((((ax0_ax1_fused * 192) + cse_var_2) + cse_var_1) + ax3_inner)] = (((((1 <= ax0_ax1_fused) && (ax0_ax1_fused < 5)) && (1 <= ax2)) && (ax2 < 5)) ? p0[(((((ax0_ax1_fused * 128) + cse_var_2) + cse_var_1) + ax3_inner) - 160)] : (int8_t)8);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_2(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_22_var, uint8_t* global_workspace_23_var) {
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
TVM_DLL int32_t tvmgen_default_fused_nn_pad_3(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_30_var, uint8_t* global_workspace_31_var) {
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
TVM_DLL int32_t tvmgen_default_fused_nn_pad_4(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_36_var, uint8_t* global_workspace_37_var) {
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 10; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 10; ++ax2) {
      for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
        int32_t cse_var_1 = (ax2 * 16);
        T_pad[(((ax0_ax1_fused * 160) + cse_var_1) + ax3_inner)] = (((((1 <= ax0_ax1_fused) && (ax0_ax1_fused < 9)) && (1 <= ax2)) && (ax2 < 9)) ? p0[((((ax0_ax1_fused * 128) + cse_var_1) + ax3_inner) - 144)] : (int8_t)5);
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
TVM_DLL int32_t tvmgen_default_fused_nn_pad_6(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_70_var, uint8_t* global_workspace_71_var) {
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
TVM_DLL int32_t tvmgen_default_fused_nn_pad_7(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_78_var, uint8_t* global_workspace_79_var) {
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
TVM_DLL int32_t tvmgen_default_fused_nn_pad_8(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_90_var, uint8_t* global_workspace_91_var) {
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 6; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 6; ++ax2) {
      for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
        for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
          if (((ax3_outer * 2) + (ax3_inner >> 3)) < 3) {
            int32_t cse_var_2 = (ax2 * 24);
            int32_t cse_var_1 = (ax3_outer * 16);
            T_pad[((((ax0_ax1_fused * 144) + cse_var_2) + cse_var_1) + ax3_inner)] = (((((1 <= ax0_ax1_fused) && (ax0_ax1_fused < 5)) && (1 <= ax2)) && (ax2 < 5)) ? p0[(((((ax0_ax1_fused * 96) + cse_var_2) + cse_var_1) + ax3_inner) - 120)] : (int8_t)-15);
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
TVM_DLL int32_t tvmgen_default_fused_nn_pad_9(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_112_var, uint8_t* global_workspace_113_var) {
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
TVM_DLL int32_t tvmgen_default_fused_nn_softmax_divide_round_add_clip_cast_subtract_cast_multiply(float* p0, float* T_multiply, uint8_t* global_const_workspace_50_var, uint8_t* global_workspace_51_var) {
  void* T_softmax_maxelem_let = (&(global_workspace_51_var[13216]));
  void* T_softmax_exp_let = (&(global_workspace_51_var[12816]));
  void* T_softmax_expsum_let = (&(global_workspace_51_var[13216]));
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
TVM_DLL int32_t tvmgen_default_fused_nn_softmax_divide_round_add_clip_cast_subtract_cast_multiply_1(float* p0, float* T_multiply, uint8_t* global_const_workspace_106_var, uint8_t* global_workspace_107_var) {
  void* T_softmax_maxelem_let = (&(global_workspace_107_var[15168]));
  void* T_softmax_exp_let = (&(global_workspace_107_var[400]));
  void* T_softmax_expsum_let = (&(global_workspace_107_var[15168]));
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
TVM_DLL int32_t tvmgen_default_fused_nn_softmax_divide_round_add_clip_cast_subtract_cast_multiply_2(float* p0, float* T_multiply, uint8_t* global_const_workspace_180_var, uint8_t* global_workspace_181_var) {
  void* T_softmax_maxelem_let = (&(global_workspace_181_var[26912]));
  void* T_softmax_exp_let = (&(global_workspace_181_var[26512]));
  void* T_softmax_expsum_let = (&(global_workspace_181_var[26912]));
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
TVM_DLL int32_t tvmgen_default_fused_nn_softmax_divide_round_add_clip_cast_subtract_cast_multiply_3(float* p0, float* T_multiply, uint8_t* global_const_workspace_198_var, uint8_t* global_workspace_199_var) {
  void* T_softmax_maxelem_let = (&(global_workspace_199_var[800]));
  void* T_softmax_exp_let = (&(global_workspace_199_var[400]));
  void* T_softmax_expsum_let = (&(global_workspace_199_var[800]));
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
TVM_DLL int32_t tvmgen_default_fused_subtract_add_clip_cast_reshape(int32_t* p0, int8_t* T_reshape, uint8_t* global_const_workspace_176_var, uint8_t* global_workspace_177_var) {
  void* fused_constant_55_let = (&(global_const_workspace_176_var[909680]));
  for (int32_t ax1_outer = 0; ax1_outer < 80; ++ax1_outer) {
    for (int32_t ax1_inner = 0; ax1_inner < 16; ++ax1_inner) {
      int32_t cse_var_1 = ((ax1_outer * 16) + ax1_inner);
      int32_t v_ = (p0[cse_var_1] - ((int32_t*)fused_constant_55_let)[0]) - 128;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_reshape[cse_var_1] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_fixed_point_multiply_add_clip_cast_reshape(int32_t* p0, int8_t* T_reshape, uint8_t* global_const_workspace_42_var, uint8_t* global_workspace_43_var) {
  void* fused_constant_12_let = (&(global_const_workspace_42_var[909712]));
  for (int32_t ax1_outer = 0; ax1_outer < 2; ++ax1_outer) {
    for (int32_t ax1_inner = 0; ax1_inner < 16; ++ax1_inner) {
      int32_t cse_var_1 = ((ax1_outer * 16) + ax1_inner);
      int32_t v_ = ((int32_t)(((((2 != 0) ? (((int64_t)(p0[cse_var_1] - ((int32_t*)fused_constant_12_let)[0])) << ((int64_t)2)) : ((int64_t)(p0[cse_var_1] - ((int32_t*)fused_constant_12_let)[0]))) * (int64_t)1094498661) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31)))) - 128;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_reshape[cse_var_1] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_fixed_point_multiply_add_clip_cast_reshape_1(int32_t* p0, int8_t* T_reshape, uint8_t* global_const_workspace_98_var, uint8_t* global_workspace_99_var) {
  void* fused_constant_30_let = (&(global_const_workspace_98_var[909696]));
  for (int32_t ax1_outer = 0; ax1_outer < 8; ++ax1_outer) {
    for (int32_t ax1_inner = 0; ax1_inner < 16; ++ax1_inner) {
      int32_t cse_var_1 = ((ax1_outer * 16) + ax1_inner);
      int32_t v_ = ((int32_t)(((((2 != 0) ? (((int64_t)(p0[cse_var_1] - ((int32_t*)fused_constant_30_let)[0])) << ((int64_t)2)) : ((int64_t)(p0[cse_var_1] - ((int32_t*)fused_constant_30_let)[0]))) * (int64_t)1372508207) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31)))) - 128;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_reshape[cse_var_1] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_fixed_point_multiply_add_clip_cast_reshape_2(int32_t* p0, int8_t* T_reshape, uint8_t* global_const_workspace_190_var, uint8_t* global_workspace_191_var) {
  void* fused_constant_59_let = (&(global_const_workspace_190_var[909664]));
  for (int32_t ax1_outer = 0; ax1_outer < 8; ++ax1_outer) {
    for (int32_t ax1_inner = 0; ax1_inner < 16; ++ax1_inner) {
      int32_t cse_var_1 = ((ax1_outer * 16) + ax1_inner);
      int32_t v_ = ((int32_t)(((((2 != 0) ? (((int64_t)(p0[cse_var_1] - ((int32_t*)fused_constant_59_let)[0])) << ((int64_t)2)) : ((int64_t)(p0[cse_var_1] - ((int32_t*)fused_constant_59_let)[0]))) * (int64_t)1790905770) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31)))) - 128;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_reshape[cse_var_1] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default___tvm_main__(float* serving_default_input_1_0_buffer_var, float* StatefulPartitionedCall_1_buffer_var, float* StatefulPartitionedCall_2_buffer_var, float* StatefulPartitionedCall_0_buffer_var, float* StatefulPartitionedCall_3_buffer_var, uint8_t* global_const_workspace_0_var, uint8_t* global_workspace_1_var) {
  void* sid_82_let = (&(global_workspace_1_var[5376]));
  void* sid_76_let = (&(global_workspace_1_var[12672]));
  void* sid_68_let = (&(global_workspace_1_var[26112]));
  void* sid_81_let = (&(global_workspace_1_var[26112]));
  void* sid_67_let = (&(global_workspace_1_var[12288]));
  void* sid_84_let = (&(global_workspace_1_var[16128]));
  void* sid_66_let = (&(global_workspace_1_var[0]));
  void* sid_49_let = (&(global_workspace_1_var[0]));
  void* sid_64_let = (&(global_workspace_1_var[26624]));
  void* sid_63_let = (&(global_workspace_1_var[9216]));
  void* sid_60_let = (&(global_workspace_1_var[15552]));
  void* sid_69_let = (&(global_workspace_1_var[6912]));
  void* sid_62_let = (&(global_workspace_1_var[0]));
  void* sid_58_let = (&(global_workspace_1_var[0]));
  void* sid_57_let = (&(global_workspace_1_var[5184]));
  void* sid_80_let = (&(global_workspace_1_var[16128]));
  void* sid_79_let = (&(global_workspace_1_var[0]));
  void* sid_54_let = (&(global_workspace_1_var[0]));
  void* sid_53_let = (&(global_workspace_1_var[15424]));
  void* sid_51_let = (&(global_workspace_1_var[15680]));
  void* sid_27_let = (&(global_workspace_1_var[9600]));
  void* sid_91_let = (&(global_workspace_1_var[0]));
  void* sid_50_let = (&(global_workspace_1_var[0]));
  void* sid_88_let = (&(global_workspace_1_var[16128]));
  void* sid_56_let = (&(global_workspace_1_var[15168]));
  void* sid_21_let = (&(global_workspace_1_var[12928]));
  void* sid_89_let = (&(global_workspace_1_var[26112]));
  void* sid_33_let = (&(global_workspace_1_var[24576]));
  void* sid_20_let = (&(global_workspace_1_var[12416]));
  void* sid_75_let = (&(global_workspace_1_var[0]));
  void* sid_19_let = (&(global_workspace_1_var[0]));
  void* sid_59_let = (&(global_workspace_1_var[9216]));
  void* sid_6_let = (&(global_workspace_1_var[52272]));
  void* sid_18_let = (&(global_workspace_1_var[9792]));
  void* sid_48_let = (&(global_workspace_1_var[864]));
  void* sid_16_let = (&(global_workspace_1_var[40032]));
  void* sid_15_let = (&(global_workspace_1_var[0]));
  void* sid_93_let = (&(global_workspace_1_var[26112]));
  void* sid_14_let = (&(global_workspace_1_var[13872]));
  void* sid_5_let = (&(global_workspace_1_var[16384]));
  void* sid_73_let = (&(global_workspace_1_var[26624]));
  void* sid_95_let = (&(global_workspace_1_var[1152]));
  void* sid_72_let = (&(global_workspace_1_var[25600]));
  void* sid_78_let = (&(global_workspace_1_var[5376]));
  void* sid_23_let = (&(global_workspace_1_var[12816]));
  void* sid_71_let = (&(global_workspace_1_var[12288]));
  void* sid_102_let = (&(global_workspace_1_var[0]));
  void* sid_17_let = (&(global_workspace_1_var[11392]));
  void* sid_77_let = (&(global_workspace_1_var[26336]));
  void* sid_7_let = (&(global_workspace_1_var[0]));
  void* sid_9_let = (&(global_workspace_1_var[64704]));
  void* sid_65_let = (&(global_workspace_1_var[6912]));
  void* sid_2_let = (&(global_workspace_1_var[18496]));
  void* sid_1_let = (&(global_workspace_1_var[47560]));
  void* sid_86_let = (&(global_workspace_1_var[5376]));
  void* sid_8_let = (&(global_workspace_1_var[153696]));
  void* sid_10_let = (&(global_workspace_1_var[15552]));
  void* sid_61_let = (&(global_workspace_1_var[5184]));
  void* sid_4_let = (&(global_workspace_1_var[65536]));
  void* sid_92_let = (&(global_workspace_1_var[5120]));
  void* sid_24_let = (&(global_workspace_1_var[12416]));
  void* sid_3_let = (&(global_workspace_1_var[0]));
  void* sid_74_let = (&(global_workspace_1_var[4800]));
  void* sid_96_let = (&(global_workspace_1_var[1152]));
  void* sid_70_let = (&(global_workspace_1_var[0]));
  void* sid_28_let = (&(global_workspace_1_var[0]));
  void* sid_29_let = (&(global_workspace_1_var[24576]));
  void* sid_13_let = (&(global_workspace_1_var[66752]));
  void* sid_30_let = (&(global_workspace_1_var[34176]));
  void* sid_31_let = (&(global_workspace_1_var[9600]));
  void* sid_52_let = (&(global_workspace_1_var[15168]));
  void* sid_43_let = (&(global_workspace_1_var[5184]));
  void* sid_32_let = (&(global_workspace_1_var[0]));
  void* sid_90_let = (&(global_workspace_1_var[0]));
  void* sid_87_let = (&(global_workspace_1_var[0]));
  void* sid_22_let = (&(global_workspace_1_var[12416]));
  void* sid_11_let = (&(global_workspace_1_var[0]));
  void* sid_34_let = (&(global_workspace_1_var[35200]));
  void* sid_12_let = (&(global_workspace_1_var[49152]));
  void* sid_35_let = (&(global_workspace_1_var[7776]));
  void* sid_83_let = (&(global_workspace_1_var[0]));
  void* sid_36_let = (&(global_workspace_1_var[0]));
  void* sid_42_let = (&(global_workspace_1_var[14400]));
  void* sid_85_let = (&(global_workspace_1_var[26336]));
  void* sid_38_let = (&(global_workspace_1_var[14784]));
  void* sid_26_let = (&(global_workspace_1_var[35200]));
  void* sid_39_let = (&(global_workspace_1_var[5184]));
  void* sid_40_let = (&(global_workspace_1_var[0]));
  void* sid_41_let = (&(global_workspace_1_var[9216]));
  void* sid_97_let = (&(global_workspace_1_var[0]));
  void* sid_37_let = (&(global_workspace_1_var[21696]));
  void* sid_47_let = (&(global_workspace_1_var[864]));
  void* sid_44_let = (&(global_workspace_1_var[0]));
  void* sid_45_let = (&(global_workspace_1_var[9216]));
  void* sid_46_let = (&(global_workspace_1_var[14784]));
  void* sid_98_let = (&(global_workspace_1_var[0]));
  void* sid_99_let = (&(global_workspace_1_var[512]));
  void* sid_100_let = (&(global_workspace_1_var[0]));
  void* sid_101_let = (&(global_workspace_1_var[400]));
  if (tvmgen_default_fused_divide_round_add_clip_cast_nn_pad(serving_default_input_1_0_buffer_var, sid_1_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast(sid_1_let, sid_2_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_pad(sid_2_let, sid_3_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_1(sid_3_let, sid_4_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_2(sid_4_let, sid_5_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_3(sid_5_let, sid_6_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_pad_1(sid_6_let, sid_7_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_4(sid_7_let, sid_8_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_5(sid_8_let, sid_9_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_6(sid_9_let, sid_10_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_pad_2(sid_10_let, sid_11_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_7(sid_11_let, sid_12_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point__7462b0c1d1f4a4f5_(sid_9_let, sid_12_let, sid_13_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_8(sid_13_let, sid_14_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_pad_3(sid_14_let, sid_15_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_9(sid_15_let, sid_16_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_10(sid_16_let, sid_17_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;

  while(*HANDSHAKE != 0xC0);
  clock_ungate_signal();
  while(*HANDSHAKE != 0xCF);

  // if (tvmgen_default_fused_nn_pad_4(sid_17_let, sid_18_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip(sid_18_let, sid_19_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_mean(sid_19_let, sid_20_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_subtract_fixed_point_multiply_add_clip_cast_reshape(sid_20_let, sid_21_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast(sid_21_let, sid_22_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast_1(sid_22_let, sid_23_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_subtract__fa059688879ad8de_(sid_23_let, sid_24_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_softmax_divide_round_add_clip_cast_subtract_cast_multiply(sid_24_let, StatefulPartitionedCall_1_buffer_var, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_cast_subtract_multiply_fixed_point_multiply_add_clip_subtract_fixed_point__feae580412b1470c_(sid_17_let, sid_26_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_11(sid_26_let, sid_27_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_pad_5(sid_27_let, sid_28_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_12(sid_28_let, sid_29_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point__7462b0c1d1f4a4f5__1(sid_26_let, sid_29_let, sid_30_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_13(sid_30_let, sid_31_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_pad_5(sid_31_let, sid_32_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_14(sid_32_let, sid_33_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point__7462b0c1d1f4a4f5__2(sid_30_let, sid_33_let, sid_34_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_15(sid_34_let, sid_35_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_pad_6(sid_35_let, sid_36_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_16(sid_36_let, sid_37_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_17(sid_37_let, sid_38_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_18(sid_38_let, sid_39_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_pad_7(sid_39_let, sid_40_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_19(sid_40_let, sid_41_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point__7462b0c1d1f4a4f5__3(sid_38_let, sid_41_let, sid_42_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_20(sid_42_let, sid_43_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_pad_7(sid_43_let, sid_44_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_21(sid_44_let, sid_45_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_22(sid_45_let, sid_46_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;

  while(*HANDSHAKE != 0xC0);
  clock_ungate_signal();
  while(*HANDSHAKE != 0xCF);

  // if (tvmgen_default_fused_nn_pad_8(sid_46_let, sid_47_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_23(sid_47_let, sid_48_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_1(sid_48_let, sid_49_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_mean_1(sid_49_let, sid_50_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_subtract_fixed_point_multiply_add_clip_cast_reshape_1(sid_50_let, sid_51_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast_2(sid_51_let, sid_52_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast_3(sid_52_let, sid_53_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_subtract__fa059688879ad8de__1(sid_53_let, sid_54_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_softmax_divide_round_add_clip_cast_subtract_cast_multiply_1(sid_54_let, StatefulPartitionedCall_2_buffer_var, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_cast_subtract_fixed_point_multiply_add_cast_subtract_multiply_fixed_point__e776241b78dd908_(sid_42_let, sid_46_let, sid_56_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_24(sid_56_let, sid_57_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_pad_9(sid_57_let, sid_58_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_25(sid_58_let, sid_59_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_cast_subtract_fixed_point_multiply_nn_conv2d_subtract_add_fixed_point_mult_6a0898f32fb5072b_(sid_56_let, sid_59_let, sid_60_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast(sid_60_let, sid_61_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_pad_10(sid_61_let, sid_62_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_26(sid_62_let, sid_63_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_27(sid_63_let, sid_64_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_28(sid_64_let, sid_65_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_pad_11(sid_65_let, sid_66_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_29(sid_66_let, sid_67_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point__7462b0c1d1f4a4f5__4(sid_64_let, sid_67_let, sid_68_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_30(sid_68_let, sid_69_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_pad_11(sid_69_let, sid_70_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_31(sid_70_let, sid_71_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_32(sid_71_let, sid_72_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;

  while(*HANDSHAKE != 0xC0);
  clock_ungate_signal();
  while(*HANDSHAKE != 0xCF);

  if (tvmgen_default_fused_cast_subtract_fixed_point_multiply_add_cast_subtract_multiply_fixed_point__e776241b78dd908__1(sid_68_let, sid_72_let, sid_73_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_33(sid_73_let, sid_74_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_pad_12(sid_74_let, sid_75_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_34(sid_75_let, sid_76_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_35(sid_76_let, sid_77_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_36(sid_77_let, sid_78_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_pad_13(sid_78_let, sid_79_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_37(sid_79_let, sid_80_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point__7462b0c1d1f4a4f5__5(sid_77_let, sid_80_let, sid_81_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_38(sid_81_let, sid_82_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_pad_13(sid_82_let, sid_83_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_39(sid_83_let, sid_84_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point__7462b0c1d1f4a4f5__6(sid_81_let, sid_84_let, sid_85_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_40(sid_85_let, sid_86_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_pad_14(sid_86_let, sid_87_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_41(sid_87_let, sid_88_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_42(sid_88_let, sid_89_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_2(sid_89_let, sid_90_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_mean_2(sid_90_let, sid_91_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_subtract_add_clip_cast_reshape(sid_91_let, sid_92_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_subtract__fa059688879ad8de__2(sid_92_let, sid_93_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_softmax_divide_round_add_clip_cast_subtract_cast_multiply_2(sid_93_let, StatefulPartitionedCall_0_buffer_var, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_pad_15(sid_72_let, sid_95_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_43(sid_95_let, sid_96_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_3(sid_96_let, sid_97_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_mean_3(sid_97_let, sid_98_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_subtract_fixed_point_multiply_add_clip_cast_reshape_2(sid_98_let, sid_99_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast_4(sid_99_let, sid_100_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast_5(sid_100_let, sid_101_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_subtract__fa059688879ad8de__3(sid_101_let, sid_102_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_softmax_divide_round_add_clip_cast_subtract_cast_multiply_3(sid_102_let, StatefulPartitionedCall_3_buffer_var, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  return 0;
}

