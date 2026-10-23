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
TVM_DLL int32_t tvmgen_default_fused_cast_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply__ad3cbdcd07b87e28_(int8_t* p0, int8_t* p1, int8_t* T_cast, uint8_t* global_const_workspace_128_var, uint8_t* global_workspace_129_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_cast_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply__ad3cbdcd07b87e28__1(int8_t* p0, int8_t* p1, int8_t* T_cast, uint8_t* global_const_workspace_150_var, uint8_t* global_workspace_151_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point__7462b0c1d1f4a4f5_(int8_t* p0, int8_t* p1, int8_t* T_cast, uint8_t* global_const_workspace_26_var, uint8_t* global_workspace_27_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point__7462b0c1d1f4a4f5__1(int8_t* p0, int8_t* p1, int8_t* T_cast, uint8_t* global_const_workspace_42_var, uint8_t* global_workspace_43_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point__7462b0c1d1f4a4f5__2(int8_t* p0, int8_t* p1, int8_t* T_cast, uint8_t* global_const_workspace_48_var, uint8_t* global_workspace_49_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point__7462b0c1d1f4a4f5__3(int8_t* p0, int8_t* p1, int8_t* T_cast, uint8_t* global_const_workspace_80_var, uint8_t* global_workspace_81_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point__7462b0c1d1f4a4f5__4(int8_t* p0, int8_t* p1, int8_t* T_cast, uint8_t* global_const_workspace_86_var, uint8_t* global_workspace_87_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point__7462b0c1d1f4a4f5__5(int8_t* p0, int8_t* p1, int8_t* T_cast, uint8_t* global_const_workspace_92_var, uint8_t* global_workspace_93_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point__7462b0c1d1f4a4f5__6(int8_t* p0, int8_t* p1, int8_t* T_cast, uint8_t* global_const_workspace_134_var, uint8_t* global_workspace_135_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point__7462b0c1d1f4a4f5__7(int8_t* p0, int8_t* p1, int8_t* T_cast, uint8_t* global_const_workspace_158_var, uint8_t* global_workspace_159_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_divide_round_add_clip_cast_nn_pad(float* p0, int8_t* T_pad, uint8_t* global_const_workspace_2_var, uint8_t* global_workspace_3_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_mean(int32_t* p0, int32_t* T_divide, uint8_t* global_const_workspace_62_var, uint8_t* global_workspace_63_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_mean_1(int32_t* p0, int32_t* T_divide, uint8_t* global_const_workspace_102_var, uint8_t* global_workspace_103_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_mean_2(int32_t* p0, int32_t* T_divide, uint8_t* global_const_workspace_168_var, uint8_t* global_workspace_169_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_mean_3(int32_t* p0, int32_t* T_divide, uint8_t* global_const_workspace_184_var, uint8_t* global_workspace_185_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_66_var, uint8_t* global_workspace_67_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast_1(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_68_var, uint8_t* global_workspace_69_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast_2(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_106_var, uint8_t* global_workspace_107_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast_3(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_108_var, uint8_t* global_workspace_109_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast_4(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_188_var, uint8_t* global_workspace_189_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast_5(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_190_var, uint8_t* global_workspace_191_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_subtract__fa059688879ad8de_(int8_t* p0, float* T_multiply, uint8_t* global_const_workspace_70_var, uint8_t* global_workspace_71_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_subtract__fa059688879ad8de__1(int8_t* p0, float* T_multiply, uint8_t* global_const_workspace_110_var, uint8_t* global_workspace_111_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_subtract__fa059688879ad8de__2(int8_t* p0, float* T_multiply, uint8_t* global_const_workspace_172_var, uint8_t* global_workspace_173_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_subtract__fa059688879ad8de__3(int8_t* p0, float* T_multiply, uint8_t* global_const_workspace_192_var, uint8_t* global_workspace_193_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_122_var, uint8_t* global_workspace_123_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_1(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_144_var, uint8_t* global_workspace_145_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_2(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_178_var, uint8_t* global_workspace_179_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip(int8_t* p0, int32_t* compute, uint8_t* global_const_workspace_60_var, uint8_t* global_workspace_61_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_1(int8_t* p0, int32_t* compute, uint8_t* global_const_workspace_100_var, uint8_t* global_workspace_101_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_2(int8_t* p0, int32_t* compute, uint8_t* global_const_workspace_166_var, uint8_t* global_workspace_167_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_3(int8_t* p0, int32_t* compute, uint8_t* global_const_workspace_182_var, uint8_t* global_workspace_183_var);
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
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_11(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_36_var, uint8_t* global_workspace_37_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_12(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_40_var, uint8_t* global_workspace_41_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_13(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_44_var, uint8_t* global_workspace_45_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_14(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_46_var, uint8_t* global_workspace_47_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_15(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_50_var, uint8_t* global_workspace_51_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_16(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_54_var, uint8_t* global_workspace_55_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_17(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_56_var, uint8_t* global_workspace_57_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_18(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_74_var, uint8_t* global_workspace_75_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_19(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_78_var, uint8_t* global_workspace_79_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_2(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_10_var, uint8_t* global_workspace_11_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_20(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_82_var, uint8_t* global_workspace_83_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_21(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_84_var, uint8_t* global_workspace_85_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_22(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_88_var, uint8_t* global_workspace_89_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_23(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_90_var, uint8_t* global_workspace_91_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_24(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_96_var, uint8_t* global_workspace_97_var);
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
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_27(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_126_var, uint8_t* global_workspace_127_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_28(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_130_var, uint8_t* global_workspace_131_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_29(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_132_var, uint8_t* global_workspace_133_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_3(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_12_var, uint8_t* global_workspace_13_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_30(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_136_var, uint8_t* global_workspace_137_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_31(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_140_var, uint8_t* global_workspace_141_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_32(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_148_var, uint8_t* global_workspace_149_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_33(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_152_var, uint8_t* global_workspace_153_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_34(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_156_var, uint8_t* global_workspace_157_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_35(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_160_var, uint8_t* global_workspace_161_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_36(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_162_var, uint8_t* global_workspace_163_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_37(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_164_var, uint8_t* global_workspace_165_var);
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
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_clip_cast(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_120_var, uint8_t* global_workspace_121_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_clip_cast_1(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_142_var, uint8_t* global_workspace_143_var);
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
TVM_DLL int32_t tvmgen_default_fused_nn_pad_10(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_116_var, uint8_t* global_workspace_117_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_11(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_124_var, uint8_t* global_workspace_125_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_12(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_138_var, uint8_t* global_workspace_139_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_13(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_146_var, uint8_t* global_workspace_147_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_14(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_154_var, uint8_t* global_workspace_155_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_15(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_176_var, uint8_t* global_workspace_177_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_16(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_180_var, uint8_t* global_workspace_181_var);
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
TVM_DLL int32_t tvmgen_default_fused_nn_pad_4(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_38_var, uint8_t* global_workspace_39_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_5(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_52_var, uint8_t* global_workspace_53_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_6(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_58_var, uint8_t* global_workspace_59_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_7(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_76_var, uint8_t* global_workspace_77_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_8(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_94_var, uint8_t* global_workspace_95_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_9(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_98_var, uint8_t* global_workspace_99_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_softmax_divide_round_add_clip_cast_subtract_cast_multiply(float* p0, float* T_multiply, uint8_t* global_const_workspace_72_var, uint8_t* global_workspace_73_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_softmax_divide_round_add_clip_cast_subtract_cast_multiply_1(float* p0, float* T_multiply, uint8_t* global_const_workspace_112_var, uint8_t* global_workspace_113_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_softmax_divide_round_add_clip_cast_subtract_cast_multiply_2(float* p0, float* T_multiply, uint8_t* global_const_workspace_174_var, uint8_t* global_workspace_175_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_softmax_divide_round_add_clip_cast_subtract_cast_multiply_3(float* p0, float* T_multiply, uint8_t* global_const_workspace_194_var, uint8_t* global_workspace_195_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_add_clip_cast_reshape(int32_t* p0, int8_t* T_reshape, uint8_t* global_const_workspace_170_var, uint8_t* global_workspace_171_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_fixed_point_multiply_add_clip_cast_reshape(int32_t* p0, int8_t* T_reshape, uint8_t* global_const_workspace_64_var, uint8_t* global_workspace_65_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_fixed_point_multiply_add_clip_cast_reshape_1(int32_t* p0, int8_t* T_reshape, uint8_t* global_const_workspace_104_var, uint8_t* global_workspace_105_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_fixed_point_multiply_add_clip_cast_reshape_2(int32_t* p0, int8_t* T_reshape, uint8_t* global_const_workspace_186_var, uint8_t* global_workspace_187_var);
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
TVM_DLL int32_t tvmgen_default_fused_cast_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply__ad3cbdcd07b87e28_(int8_t* p0, int8_t* p1, int8_t* T_cast, uint8_t* global_const_workspace_128_var, uint8_t* global_workspace_129_var) {
  void* fused_cast_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_let = (&(global_const_workspace_128_var[615024]));
  void* fused_cast_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_2_let = (&(global_const_workspace_128_var[609280]));
  void* fused_cast_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_1_let = (&(global_const_workspace_128_var[609408]));
  void* fused_cast_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_let = (&(global_const_workspace_128_var[609536]));
  void* fused_cast_fixed_point_multiply_add_nn_conv2d_constant_let = (&(global_const_workspace_128_var[609664]));
  void* fused_cast_fixed_point_multiply_add_nn_conv2d_subtract_constant_let = (&(global_const_workspace_128_var[609152]));
  void* fused_cast_fixed_point_multiply_add_constant_let = (&(global_const_workspace_128_var[377728]));
  void* pad_temp_let = (&(global_workspace_129_var[0]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 4; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 4; ++i2) {
      for (int32_t i3 = 0; i3 < 192; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 768) + (i2 * 192)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p1[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 16; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_129_var[20224]));
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
      int32_t v__4 = (((int32_t)(((((0 != 0) ? (((int64_t)((int32_t)p0[cse_var_2])) << ((int64_t)0)) : ((int64_t)((int32_t)p0[cse_var_2]))) * (int64_t)1946967914) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31)))) + ((int32_t)(((((0 != 0) ? (((int64_t)(((v__1) > (-128) ? (v__1) : (-128)) - ((int32_t*)fused_cast_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_let)[0])) << ((int64_t)0)) : ((int64_t)(((v__3) > (-128) ? (v__3) : (-128)) - ((int32_t*)fused_cast_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_let)[0]))) * (int64_t)1463630438) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31))))) - 1;
      int32_t v__5 = (v__4) < (127) ? (v__4) : (127);
      T_cast[cse_var_2] = ((int8_t)((v__5) > (-128) ? (v__5) : (-128)));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_cast_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply__ad3cbdcd07b87e28__1(int8_t* p0, int8_t* p1, int8_t* T_cast, uint8_t* global_const_workspace_150_var, uint8_t* global_workspace_151_var) {
  void* fused_cast_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_1_let = (&(global_const_workspace_150_var[615008]));
  void* fused_cast_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_5_let = (&(global_const_workspace_150_var[599152]));
  void* fused_cast_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_4_let = (&(global_const_workspace_150_var[599376]));
  void* fused_cast_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_3_let = (&(global_const_workspace_150_var[599600]));
  void* fused_cast_fixed_point_multiply_add_nn_conv2d_constant_1_let = (&(global_const_workspace_150_var[599824]));
  void* fused_cast_fixed_point_multiply_add_nn_conv2d_subtract_constant_1_let = (&(global_const_workspace_150_var[598928]));
  void* fused_cast_fixed_point_multiply_add_constant_1_let = (&(global_const_workspace_150_var[256256]));
  void* pad_temp_let = (&(global_workspace_151_var[0]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 2; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 2; ++i2) {
      for (int32_t i3 = 0; i3 < 336; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 672) + (i2 * 336)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p1[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 4; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_151_var[26048]));
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
      int32_t v__4 = (((int32_t)(((((0 != 0) ? (((int64_t)((int32_t)p0[cse_var_2])) << ((int64_t)0)) : ((int64_t)((int32_t)p0[cse_var_2]))) * (int64_t)1825012673) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31)))) + ((int32_t)(((((0 != 0) ? (((int64_t)(((v__1) > (-128) ? (v__1) : (-128)) - ((int32_t*)fused_cast_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_1_let)[0])) << ((int64_t)0)) : ((int64_t)(((v__3) > (-128) ? (v__3) : (-128)) - ((int32_t*)fused_cast_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_1_let)[0]))) * (int64_t)1762732201) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31))))) - 3;
      int32_t v__5 = (v__4) < (127) ? (v__4) : (127);
      T_cast[cse_var_2] = ((int8_t)((v__5) > (-128) ? (v__5) : (-128)));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point__7462b0c1d1f4a4f5_(int8_t* p0, int8_t* p1, int8_t* T_cast, uint8_t* global_const_workspace_26_var, uint8_t* global_workspace_27_var) {
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_let = (&(global_const_workspace_26_var[614992]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_2_let = (&(global_const_workspace_26_var[614688]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_1_let = (&(global_const_workspace_26_var[614720]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_let = (&(global_const_workspace_26_var[614752]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_constant_let = (&(global_const_workspace_26_var[614784]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_constant_let = (&(global_const_workspace_26_var[614656]));
  void* fused_cast_constant_let = (&(global_const_workspace_26_var[615152]));
  void* fused_cast_subtract_fixed_point_multiply_add_constant_let = (&(global_const_workspace_26_var[594768]));
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
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_constant_let)[ax3]) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_constant_let)[ax3])) * ((int64_t)((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_2_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_2_let)[ax3] + 31)))) - 4;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      int32_t v__2 = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_constant_let)[ax3]) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_constant_let)[ax3])) * ((int64_t)((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_2_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_2_let)[ax3] + 31)))) - 4;
      int32_t v__3 = (v__2) < (127) ? (v__2) : (127);
      int32_t v__4 = (((int32_t)(((((0 != 0) ? (((int64_t)(((int32_t)p0[cse_var_2]) - ((int32_t*)fused_cast_constant_let)[0])) << ((int64_t)0)) : ((int64_t)(((int32_t)p0[cse_var_2]) - ((int32_t*)fused_cast_constant_let)[0]))) * (int64_t)1511661628) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31)))) + ((int32_t)(((((0 != 0) ? (((int64_t)(((v__1) > (-128) ? (v__1) : (-128)) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_let)[0])) << ((int64_t)0)) : ((int64_t)(((v__3) > (-128) ? (v__3) : (-128)) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_let)[0]))) * (int64_t)1880779075) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31))))) - 9;
      int32_t v__5 = (v__4) < (127) ? (v__4) : (127);
      T_cast[cse_var_2] = ((int8_t)((v__5) > (-128) ? (v__5) : (-128)));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point__7462b0c1d1f4a4f5__1(int8_t* p0, int8_t* p1, int8_t* T_cast, uint8_t* global_const_workspace_42_var, uint8_t* global_workspace_43_var) {
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_1_let = (&(global_const_workspace_42_var[614976]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_5_let = (&(global_const_workspace_42_var[613632]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_4_let = (&(global_const_workspace_42_var[613696]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_3_let = (&(global_const_workspace_42_var[613760]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_constant_1_let = (&(global_const_workspace_42_var[613888]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_constant_1_let = (&(global_const_workspace_42_var[613376]));
  void* fused_cast_constant_1_let = (&(global_const_workspace_42_var[615136]));
  void* fused_cast_subtract_fixed_point_multiply_add_constant_1_let = (&(global_const_workspace_42_var[478384]));
  void* pad_temp_let = (&(global_workspace_43_var[0]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 8; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 8; ++i2) {
      for (int32_t i3 = 0; i3 < 96; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 768) + (i2 * 96)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p1[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 64; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_43_var[36224]));
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
      int32_t v__4 = (((int32_t)(((((0 != 0) ? (((int64_t)(((int32_t)p0[cse_var_2]) - ((int32_t*)fused_cast_constant_1_let)[0])) << ((int64_t)0)) : ((int64_t)(((int32_t)p0[cse_var_2]) - ((int32_t*)fused_cast_constant_1_let)[0]))) * (int64_t)1492918573) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31)))) + ((int32_t)(((((0 != 0) ? (((int64_t)(((v__1) > (-128) ? (v__1) : (-128)) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_1_let)[0])) << ((int64_t)0)) : ((int64_t)(((v__3) > (-128) ? (v__3) : (-128)) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_1_let)[0]))) * (int64_t)1763861835) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31))))) + 9;
      int32_t v__5 = (v__4) < (127) ? (v__4) : (127);
      T_cast[cse_var_2] = ((int8_t)((v__5) > (-128) ? (v__5) : (-128)));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point__7462b0c1d1f4a4f5__2(int8_t* p0, int8_t* p1, int8_t* T_cast, uint8_t* global_const_workspace_48_var, uint8_t* global_workspace_49_var) {
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_2_let = (&(global_const_workspace_48_var[614960]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_8_let = (&(global_const_workspace_48_var[613440]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_7_let = (&(global_const_workspace_48_var[613504]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_6_let = (&(global_const_workspace_48_var[613568]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_constant_2_let = (&(global_const_workspace_48_var[613824]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_constant_2_let = (&(global_const_workspace_48_var[613312]));
  void* fused_cast_constant_2_let = (&(global_const_workspace_48_var[615120]));
  void* fused_cast_subtract_fixed_point_multiply_add_constant_2_let = (&(global_const_workspace_48_var[476848]));
  void* pad_temp_let = (&(global_workspace_49_var[0]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 8; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 8; ++i2) {
      for (int32_t i3 = 0; i3 < 96; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 768) + (i2 * 96)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p1[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 64; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_49_var[36224]));
    for (int32_t ax3 = 0; ax3 < 16; ++ax3) {
      int32_t cse_var_2 = ((ax0_ax1_fused_ax2_fused * 16) + ax3);
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 96; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 96) + rc)]) * ((int32_t)((int8_t*)fused_cast_subtract_fixed_point_multiply_add_constant_2_let)[((rc * 16) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_constant_2_let)[ax3]) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_constant_2_let)[ax3])) * ((int64_t)((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_6_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_8_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_8_let)[ax3] + 31)))) - 5;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      int32_t v__2 = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_constant_2_let)[ax3]) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_constant_2_let)[ax3])) * ((int64_t)((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_6_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_8_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_8_let)[ax3] + 31)))) - 5;
      int32_t v__3 = (v__2) < (127) ? (v__2) : (127);
      int32_t v__4 = (((int32_t)(((((0 != 0) ? (((int64_t)(((int32_t)p0[cse_var_2]) - ((int32_t*)fused_cast_constant_2_let)[0])) << ((int64_t)0)) : ((int64_t)(((int32_t)p0[cse_var_2]) - ((int32_t*)fused_cast_constant_2_let)[0]))) * (int64_t)1926558041) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31)))) + ((int32_t)(((((0 != 0) ? (((int64_t)(((v__1) > (-128) ? (v__1) : (-128)) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_2_let)[0])) << ((int64_t)0)) : ((int64_t)(((v__3) > (-128) ? (v__3) : (-128)) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_2_let)[0]))) * (int64_t)1573993830) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31))))) - 8;
      int32_t v__5 = (v__4) < (127) ? (v__4) : (127);
      T_cast[cse_var_2] = ((int8_t)((v__5) > (-128) ? (v__5) : (-128)));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point__7462b0c1d1f4a4f5__3(int8_t* p0, int8_t* p1, int8_t* T_cast, uint8_t* global_const_workspace_80_var, uint8_t* global_workspace_81_var) {
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_3_let = (&(global_const_workspace_80_var[614944]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_11_let = (&(global_const_workspace_80_var[611232]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_10_let = (&(global_const_workspace_80_var[611328]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_9_let = (&(global_const_workspace_80_var[610560]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_constant_3_let = (&(global_const_workspace_80_var[611616]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_constant_3_let = (&(global_const_workspace_80_var[610464]));
  void* fused_cast_constant_3_let = (&(global_const_workspace_80_var[615104]));
  void* fused_cast_subtract_fixed_point_multiply_add_constant_3_let = (&(global_const_workspace_80_var[448128]));
  void* pad_temp_let = (&(global_workspace_81_var[0]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 4; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 4; ++i2) {
      for (int32_t i3 = 0; i3 < 144; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 576) + (i2 * 144)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p1[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 16; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_81_var[15168]));
    for (int32_t ax3 = 0; ax3 < 24; ++ax3) {
      int32_t cse_var_2 = ((ax0_ax1_fused_ax2_fused * 24) + ax3);
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 144; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 144) + rc)]) * ((int32_t)((int8_t*)fused_cast_subtract_fixed_point_multiply_add_constant_3_let)[((rc * 24) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_constant_3_let)[ax3]) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_constant_3_let)[ax3])) * ((int64_t)((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_9_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_11_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_11_let)[ax3] + 31)))) + 6;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      int32_t v__2 = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_constant_3_let)[ax3]) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_constant_3_let)[ax3])) * ((int64_t)((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_9_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_11_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_11_let)[ax3] + 31)))) + 6;
      int32_t v__3 = (v__2) < (127) ? (v__2) : (127);
      int32_t v__4 = (((int32_t)(((((0 != 0) ? (((int64_t)(((int32_t)p0[cse_var_2]) - ((int32_t*)fused_cast_constant_3_let)[0])) << ((int64_t)0)) : ((int64_t)(((int32_t)p0[cse_var_2]) - ((int32_t*)fused_cast_constant_3_let)[0]))) * (int64_t)2088858997) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31)))) + ((int32_t)(((((0 != 0) ? (((int64_t)(((v__1) > (-128) ? (v__1) : (-128)) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_3_let)[0])) << ((int64_t)0)) : ((int64_t)(((v__3) > (-128) ? (v__3) : (-128)) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_3_let)[0]))) * (int64_t)1999302534) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31))))) + 12;
      int32_t v__5 = (v__4) < (127) ? (v__4) : (127);
      T_cast[cse_var_2] = ((int8_t)((v__5) > (-128) ? (v__5) : (-128)));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point__7462b0c1d1f4a4f5__4(int8_t* p0, int8_t* p1, int8_t* T_cast, uint8_t* global_const_workspace_86_var, uint8_t* global_workspace_87_var) {
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_4_let = (&(global_const_workspace_86_var[614928]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_14_let = (&(global_const_workspace_86_var[610944]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_13_let = (&(global_const_workspace_86_var[611040]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_12_let = (&(global_const_workspace_86_var[611136]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_constant_4_let = (&(global_const_workspace_86_var[611520]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_constant_4_let = (&(global_const_workspace_86_var[610368]));
  void* fused_cast_constant_4_let = (&(global_const_workspace_86_var[615088]));
  void* fused_cast_subtract_fixed_point_multiply_add_constant_4_let = (&(global_const_workspace_86_var[444672]));
  void* pad_temp_let = (&(global_workspace_87_var[0]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 4; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 4; ++i2) {
      for (int32_t i3 = 0; i3 < 144; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 576) + (i2 * 144)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p1[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 16; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_87_var[15168]));
    for (int32_t ax3 = 0; ax3 < 24; ++ax3) {
      int32_t cse_var_2 = ((ax0_ax1_fused_ax2_fused * 24) + ax3);
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 144; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 144) + rc)]) * ((int32_t)((int8_t*)fused_cast_subtract_fixed_point_multiply_add_constant_4_let)[((rc * 24) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_constant_4_let)[ax3]) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_constant_4_let)[ax3])) * ((int64_t)((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_12_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_14_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_14_let)[ax3] + 31)))) - 2;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      int32_t v__2 = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_constant_4_let)[ax3]) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_constant_4_let)[ax3])) * ((int64_t)((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_12_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_14_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_14_let)[ax3] + 31)))) - 2;
      int32_t v__3 = (v__2) < (127) ? (v__2) : (127);
      int32_t v__4 = (((int32_t)(((((0 != 0) ? (((int64_t)(((int32_t)p0[cse_var_2]) - ((int32_t*)fused_cast_constant_4_let)[0])) << ((int64_t)0)) : ((int64_t)(((int32_t)p0[cse_var_2]) - ((int32_t*)fused_cast_constant_4_let)[0]))) * (int64_t)1783875753) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31)))) + ((int32_t)(((((0 != 0) ? (((int64_t)(((v__1) > (-128) ? (v__1) : (-128)) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_4_let)[0])) << ((int64_t)0)) : ((int64_t)(((v__3) > (-128) ? (v__3) : (-128)) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_4_let)[0]))) * (int64_t)1369115772) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31))))) + 12;
      int32_t v__5 = (v__4) < (127) ? (v__4) : (127);
      T_cast[cse_var_2] = ((int8_t)((v__5) > (-128) ? (v__5) : (-128)));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point__7462b0c1d1f4a4f5__5(int8_t* p0, int8_t* p1, int8_t* T_cast, uint8_t* global_const_workspace_92_var, uint8_t* global_workspace_93_var) {
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_5_let = (&(global_const_workspace_92_var[614912]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_17_let = (&(global_const_workspace_92_var[610656]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_16_let = (&(global_const_workspace_92_var[610752]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_15_let = (&(global_const_workspace_92_var[610848]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_constant_5_let = (&(global_const_workspace_92_var[611424]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_constant_5_let = (&(global_const_workspace_92_var[610272]));
  void* fused_cast_constant_5_let = (&(global_const_workspace_92_var[615072]));
  void* fused_cast_subtract_fixed_point_multiply_add_constant_5_let = (&(global_const_workspace_92_var[441216]));
  void* pad_temp_let = (&(global_workspace_93_var[0]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 4; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 4; ++i2) {
      for (int32_t i3 = 0; i3 < 144; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 576) + (i2 * 144)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p1[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 16; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_93_var[14784]));
    for (int32_t ax3 = 0; ax3 < 24; ++ax3) {
      int32_t cse_var_2 = ((ax0_ax1_fused_ax2_fused * 24) + ax3);
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 144; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 144) + rc)]) * ((int32_t)((int8_t*)fused_cast_subtract_fixed_point_multiply_add_constant_5_let)[((rc * 24) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_constant_5_let)[ax3]) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_constant_5_let)[ax3])) * ((int64_t)((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_15_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_17_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_17_let)[ax3] + 31)))) - 27;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      int32_t v__2 = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_constant_5_let)[ax3]) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_constant_5_let)[ax3])) * ((int64_t)((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_15_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_17_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_17_let)[ax3] + 31)))) - 27;
      int32_t v__3 = (v__2) < (127) ? (v__2) : (127);
      int32_t v__4 = (((int32_t)(((((0 != 0) ? (((int64_t)(((int32_t)p0[cse_var_2]) - ((int32_t*)fused_cast_constant_5_let)[0])) << ((int64_t)0)) : ((int64_t)(((int32_t)p0[cse_var_2]) - ((int32_t*)fused_cast_constant_5_let)[0]))) * (int64_t)1878100031) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31)))) + ((int32_t)(((((0 != 0) ? (((int64_t)(((v__1) > (-128) ? (v__1) : (-128)) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_5_let)[0])) << ((int64_t)0)) : ((int64_t)(((v__3) > (-128) ? (v__3) : (-128)) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_5_let)[0]))) * (int64_t)1143662040) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31))))) - 8;
      int32_t v__5 = (v__4) < (127) ? (v__4) : (127);
      T_cast[cse_var_2] = ((int8_t)((v__5) > (-128) ? (v__5) : (-128)));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point__7462b0c1d1f4a4f5__6(int8_t* p0, int8_t* p1, int8_t* T_cast, uint8_t* global_const_workspace_134_var, uint8_t* global_workspace_135_var) {
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_6_let = (&(global_const_workspace_134_var[614896]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_20_let = (&(global_const_workspace_134_var[608640]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_19_let = (&(global_const_workspace_134_var[608768]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_18_let = (&(global_const_workspace_134_var[608896]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_constant_6_let = (&(global_const_workspace_134_var[609024]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_constant_6_let = (&(global_const_workspace_134_var[608512]));
  void* fused_cast_constant_6_let = (&(global_const_workspace_134_var[615056]));
  void* fused_cast_subtract_fixed_point_multiply_add_constant_6_let = (&(global_const_workspace_134_var[371584]));
  void* pad_temp_let = (&(global_workspace_135_var[0]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 4; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 4; ++i2) {
      for (int32_t i3 = 0; i3 < 192; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 768) + (i2 * 192)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p1[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 16; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_135_var[20224]));
    for (int32_t ax3 = 0; ax3 < 32; ++ax3) {
      int32_t cse_var_2 = ((ax0_ax1_fused_ax2_fused * 32) + ax3);
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 192; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 192) + rc)]) * ((int32_t)((int8_t*)fused_cast_subtract_fixed_point_multiply_add_constant_6_let)[((rc * 32) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_constant_6_let)[ax3]) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_constant_6_let)[ax3])) * ((int64_t)((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_18_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_20_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_20_let)[ax3] + 31)))) + 16;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      int32_t v__2 = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_constant_6_let)[ax3]) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_constant_6_let)[ax3])) * ((int64_t)((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_18_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_20_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_20_let)[ax3] + 31)))) + 16;
      int32_t v__3 = (v__2) < (127) ? (v__2) : (127);
      int32_t v__4 = (((int32_t)(((((0 != 0) ? (((int64_t)(((int32_t)p0[cse_var_2]) - ((int32_t*)fused_cast_constant_6_let)[0])) << ((int64_t)0)) : ((int64_t)(((int32_t)p0[cse_var_2]) - ((int32_t*)fused_cast_constant_6_let)[0]))) * (int64_t)1445483913) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31)))) + ((int32_t)(((((0 != 0) ? (((int64_t)(((v__1) > (-128) ? (v__1) : (-128)) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_6_let)[0])) << ((int64_t)0)) : ((int64_t)(((v__3) > (-128) ? (v__3) : (-128)) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_6_let)[0]))) * (int64_t)1730971801) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31))))) + 18;
      int32_t v__5 = (v__4) < (127) ? (v__4) : (127);
      T_cast[cse_var_2] = ((int8_t)((v__5) > (-128) ? (v__5) : (-128)));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point__7462b0c1d1f4a4f5__7(int8_t* p0, int8_t* p1, int8_t* T_cast, uint8_t* global_const_workspace_158_var, uint8_t* global_workspace_159_var) {
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_7_let = (&(global_const_workspace_158_var[614880]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_23_let = (&(global_const_workspace_158_var[598032]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_22_let = (&(global_const_workspace_158_var[598256]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_21_let = (&(global_const_workspace_158_var[598480]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_constant_7_let = (&(global_const_workspace_158_var[598704]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_constant_7_let = (&(global_const_workspace_158_var[597808]));
  void* fused_cast_constant_7_let = (&(global_const_workspace_158_var[615040]));
  void* fused_cast_subtract_fixed_point_multiply_add_constant_7_let = (&(global_const_workspace_158_var[237440]));
  void* pad_temp_let = (&(global_workspace_159_var[0]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 2; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 2; ++i2) {
      for (int32_t i3 = 0; i3 < 336; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 672) + (i2 * 336)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p1[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 4; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_159_var[26272]));
    for (int32_t ax3 = 0; ax3 < 56; ++ax3) {
      int32_t cse_var_2 = ((ax0_ax1_fused_ax2_fused * 56) + ax3);
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 336; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 336) + rc)]) * ((int32_t)((int8_t*)fused_cast_subtract_fixed_point_multiply_add_constant_7_let)[((rc * 56) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_constant_7_let)[ax3]) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_constant_7_let)[ax3])) * ((int64_t)((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_21_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_23_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_23_let)[ax3] + 31)))) + 9;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      int32_t v__2 = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_constant_7_let)[ax3]) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_constant_7_let)[ax3])) * ((int64_t)((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_21_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_23_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_23_let)[ax3] + 31)))) + 9;
      int32_t v__3 = (v__2) < (127) ? (v__2) : (127);
      int32_t v__4 = (((int32_t)(((((0 != 0) ? (((int64_t)(((int32_t)p0[cse_var_2]) - ((int32_t*)fused_cast_constant_7_let)[0])) << ((int64_t)0)) : ((int64_t)(((int32_t)p0[cse_var_2]) - ((int32_t*)fused_cast_constant_7_let)[0]))) * (int64_t)1815118908) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31)))) + ((int32_t)(((((0 != 0) ? (((int64_t)(((v__1) > (-128) ? (v__1) : (-128)) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_7_let)[0])) << ((int64_t)0)) : ((int64_t)(((v__3) > (-128) ? (v__3) : (-128)) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_7_let)[0]))) * (int64_t)1808148466) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31))))) + 2;
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
TVM_DLL int32_t tvmgen_default_fused_mean(int32_t* p0, int32_t* T_divide, uint8_t* global_const_workspace_62_var, uint8_t* global_workspace_63_var) {
  void* p0_red_let = (&(global_workspace_63_var[14912]));
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
TVM_DLL int32_t tvmgen_default_fused_mean_1(int32_t* p0, int32_t* T_divide, uint8_t* global_const_workspace_102_var, uint8_t* global_workspace_103_var) {
  void* p0_red_let = (&(global_workspace_103_var[3264]));
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
TVM_DLL int32_t tvmgen_default_fused_mean_2(int32_t* p0, int32_t* T_divide, uint8_t* global_const_workspace_168_var, uint8_t* global_workspace_169_var) {
  void* p0_red_let = (&(global_workspace_169_var[20480]));
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
TVM_DLL int32_t tvmgen_default_fused_mean_3(int32_t* p0, int32_t* T_divide, uint8_t* global_const_workspace_184_var, uint8_t* global_workspace_185_var) {
  void* p0_red_let = (&(global_workspace_185_var[768]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 16; ++ax0_ax1_fused) {
    ((int32_t*)p0_red_let)[ax0_ax1_fused] = 0;
    for (int32_t k1 = 0; k1 < 2; ++k1) {
      for (int32_t k2 = 0; k2 < 2; ++k2) {
        ((int32_t*)p0_red_let)[ax0_ax1_fused] = (((int32_t*)p0_red_let)[ax0_ax1_fused] + p0[(((k1 * 32) + (k2 * 16)) + ax0_ax1_fused)]);
      }
    }
  }
  for (int32_t ax1_inner = 0; ax1_inner < 16; ++ax1_inner) {
    T_divide[ax1_inner] = (((int32_t*)p0_red_let)[ax1_inner] / 4);
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_66_var, uint8_t* global_workspace_67_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED] dense: 32->128 (packed [4][4][32][8])
  int32_t* conv_const = (int32_t*)(&global_const_workspace_66_var[577232]);
  int32_t* conv_sub   = (int32_t*)(&global_const_workspace_66_var[575696]);
  int8_t*  weights    = (int8_t*) (&global_const_workspace_66_var[423296]);

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
        * (int64_t)1639932292) + ((int64_t)1 << ((int64_t)((7 + 31) - 1))))
        >> ((int64_t)(7 + 31)))) - 128;
      int32_t v1 = (v_) < (127) ? (v_) : (127);
      T_cast[ax3] = (int8_t)((v1) > (-128) ? (v1) : (-128));
    }
  }
  return 0;

#else

  void* fused_nn_contrib_dense_pack_constant_let = (&(global_const_workspace_66_var[577232]));
  void* fused_nn_contrib_dense_pack_subtract_constant_let = (&(global_const_workspace_66_var[575696]));
  void* fused_constant_20_let = (&(global_const_workspace_66_var[423296]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 4; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_67_var[14912]));
    void* compute_global_let = (&(global_workspace_67_var[15072]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 4; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 32; ++k_outer) {
        for (int32_t x_c = 0; x_c < 8; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[k_outer]) * ((int32_t)((int8_t*)fused_constant_20_let)[((((ax1_outer_ax0_outer_fused * 1024) + (y_inner_outer_x_inner_outer_fused * 256)) + (k_outer * 8)) + x_c)])));
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
        int32_t v_ = ((int32_t)(((((0 != 0) ? (((int64_t)((((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_let)[cse_var_1])) << ((int64_t)0)) : ((int64_t)((((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_let)[cse_var_1]))) * (int64_t)1639932292) + ((int64_t)1 << ((int64_t)((7 + 31) - 1)))) >> ((int64_t)(7 + 31)))) - 128;
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
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast_1(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_68_var, uint8_t* global_workspace_69_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED] dense: 128->64 (packed [4][2][128][8])
  int32_t* conv_const = (int32_t*)(&global_const_workspace_68_var[596432]);
  int32_t* conv_sub   = (int32_t*)(&global_const_workspace_68_var[595664]);
  int8_t*  weights    = (int8_t*) (&global_const_workspace_68_var[331136]);

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
        * (int64_t)2080674379) + ((int64_t)1 << ((int64_t)((9 + 31) - 1))))
        >> ((int64_t)(9 + 31)))) - 128;
      int32_t v1 = (v_) < (127) ? (v_) : (127);
      T_cast[ax3] = (int8_t)((v1) > (-128) ? (v1) : (-128));
    }
  }
  return 0;

#else

  void* fused_nn_contrib_dense_pack_constant_1_let = (&(global_const_workspace_68_var[596432]));
  void* fused_nn_contrib_dense_pack_subtract_constant_1_let = (&(global_const_workspace_68_var[595664]));
  void* fused_constant_21_let = (&(global_const_workspace_68_var[331136]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 4; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_69_var[14976]));
    void* compute_global_let = (&(global_workspace_69_var[15040]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 2; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 128; ++k_outer) {
        for (int32_t x_c = 0; x_c < 8; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[k_outer]) * ((int32_t)((int8_t*)fused_constant_21_let)[((((ax1_outer_ax0_outer_fused * 2048) + (y_inner_outer_x_inner_outer_fused * 1024)) + (k_outer * 8)) + x_c)])));
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
        int32_t v_ = ((int32_t)(((((0 != 0) ? (((int64_t)((((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_1_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_1_let)[cse_var_1])) << ((int64_t)0)) : ((int64_t)((((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_1_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_1_let)[cse_var_1]))) * (int64_t)2080674379) + ((int64_t)1 << ((int64_t)((9 + 31) - 1)))) >> ((int64_t)(9 + 31)))) - 128;
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
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast_2(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_106_var, uint8_t* global_workspace_107_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED] dense: 16->128 (packed [4][4][16][8])
  int32_t* conv_const = (int32_t*)(&global_const_workspace_106_var[576720]);
  int32_t* conv_sub   = (int32_t*)(&global_const_workspace_106_var[575184]);
  int8_t*  weights    = (int8_t*) (&global_const_workspace_106_var[465008]);

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
        * (int64_t)1080508680) + ((int64_t)1 << ((int64_t)((6 + 31) - 1))))
        >> ((int64_t)(6 + 31)))) - 128;
      int32_t v1 = (v_) < (127) ? (v_) : (127);
      T_cast[ax3] = (int8_t)((v1) > (-128) ? (v1) : (-128));
    }
  }
  return 0;

#else

  void* fused_nn_contrib_dense_pack_constant_3_let = (&(global_const_workspace_106_var[576720]));
  void* fused_nn_contrib_dense_pack_subtract_constant_3_let = (&(global_const_workspace_106_var[575184]));
  void* fused_constant_32_let = (&(global_const_workspace_106_var[465008]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 4; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_107_var[3328]));
    void* compute_global_let = (&(global_workspace_107_var[3456]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 4; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 16; ++k_outer) {
        for (int32_t x_c = 0; x_c < 8; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[k_outer]) * ((int32_t)((int8_t*)fused_constant_32_let)[((((ax1_outer_ax0_outer_fused * 512) + (y_inner_outer_x_inner_outer_fused * 128)) + (k_outer * 8)) + x_c)])));
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
        int32_t v_ = ((int32_t)(((((0 != 0) ? (((int64_t)((((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_3_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_3_let)[cse_var_1])) << ((int64_t)0)) : ((int64_t)((((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_3_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_3_let)[cse_var_1]))) * (int64_t)1080508680) + ((int64_t)1 << ((int64_t)((6 + 31) - 1)))) >> ((int64_t)(6 + 31)))) - 128;
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
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast_3(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_108_var, uint8_t* global_workspace_109_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED] dense: 128->64 (packed [4][2][128][8])
  int32_t* conv_const = (int32_t*)(&global_const_workspace_108_var[596176]);
  int32_t* conv_sub   = (int32_t*)(&global_const_workspace_108_var[595408]);
  int8_t*  weights    = (int8_t*) (&global_const_workspace_108_var[322944]);

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
        * (int64_t)1156411675) + ((int64_t)1 << ((int64_t)((8 + 31) - 1))))
        >> ((int64_t)(8 + 31)))) - 128;
      int32_t v1 = (v_) < (127) ? (v_) : (127);
      T_cast[ax3] = (int8_t)((v1) > (-128) ? (v1) : (-128));
    }
  }
  return 0;

#else

  void* fused_nn_contrib_dense_pack_constant_4_let = (&(global_const_workspace_108_var[596176]));
  void* fused_nn_contrib_dense_pack_subtract_constant_4_let = (&(global_const_workspace_108_var[595408]));
  void* fused_constant_33_let = (&(global_const_workspace_108_var[322944]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 4; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_109_var[3392]));
    void* compute_global_let = (&(global_workspace_109_var[3456]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 2; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 128; ++k_outer) {
        for (int32_t x_c = 0; x_c < 8; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[k_outer]) * ((int32_t)((int8_t*)fused_constant_33_let)[((((ax1_outer_ax0_outer_fused * 2048) + (y_inner_outer_x_inner_outer_fused * 1024)) + (k_outer * 8)) + x_c)])));
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
        int32_t v_ = ((int32_t)(((((0 != 0) ? (((int64_t)((((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_4_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_4_let)[cse_var_1])) << ((int64_t)0)) : ((int64_t)((((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_4_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_4_let)[cse_var_1]))) * (int64_t)1156411675) + ((int64_t)1 << ((int64_t)((8 + 31) - 1)))) >> ((int64_t)(8 + 31)))) - 128;
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
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast_4(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_188_var, uint8_t* global_workspace_189_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED] dense: 16->128 (packed [4][4][16][8])
  int32_t* conv_const = (int32_t*)(&global_const_workspace_188_var[576208]);
  int32_t* conv_sub   = (int32_t*)(&global_const_workspace_188_var[574672]);
  int8_t*  weights    = (int8_t*) (&global_const_workspace_188_var[462960]);

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
        * (int64_t)1728272594) + ((int64_t)1 << ((int64_t)((7 + 31) - 1))))
        >> ((int64_t)(7 + 31)))) - 128;
      int32_t v1 = (v_) < (127) ? (v_) : (127);
      T_cast[ax3] = (int8_t)((v1) > (-128) ? (v1) : (-128));
    }
  }
  return 0;

#else

  void* fused_nn_contrib_dense_pack_constant_7_let = (&(global_const_workspace_188_var[576208]));
  void* fused_nn_contrib_dense_pack_subtract_constant_7_let = (&(global_const_workspace_188_var[574672]));
  void* fused_constant_58_let = (&(global_const_workspace_188_var[462960]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 4; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_189_var[128]));
    void* compute_global_let = (&(global_workspace_189_var[256]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 4; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 16; ++k_outer) {
        for (int32_t x_c = 0; x_c < 8; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[k_outer]) * ((int32_t)((int8_t*)fused_constant_58_let)[((((ax1_outer_ax0_outer_fused * 512) + (y_inner_outer_x_inner_outer_fused * 128)) + (k_outer * 8)) + x_c)])));
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
        int32_t v_ = ((int32_t)(((((0 != 0) ? (((int64_t)((((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_7_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_7_let)[cse_var_1])) << ((int64_t)0)) : ((int64_t)((((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_7_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_7_let)[cse_var_1]))) * (int64_t)1728272594) + ((int64_t)1 << ((int64_t)((7 + 31) - 1)))) >> ((int64_t)(7 + 31)))) - 128;
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
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast_5(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_190_var, uint8_t* global_workspace_191_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED] dense: 128->64 (packed [4][2][128][8])
  int32_t* conv_const = (int32_t*)(&global_const_workspace_190_var[595920]);
  int32_t* conv_sub   = (int32_t*)(&global_const_workspace_190_var[595152]);
  int8_t*  weights    = (int8_t*) (&global_const_workspace_190_var[314752]);

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
        * (int64_t)2031568558) + ((int64_t)1 << ((int64_t)((9 + 31) - 1))))
        >> ((int64_t)(9 + 31)))) - 128;
      int32_t v1 = (v_) < (127) ? (v_) : (127);
      T_cast[ax3] = (int8_t)((v1) > (-128) ? (v1) : (-128));
    }
  }
  return 0;

#else

  void* fused_nn_contrib_dense_pack_constant_8_let = (&(global_const_workspace_190_var[595920]));
  void* fused_nn_contrib_dense_pack_subtract_constant_8_let = (&(global_const_workspace_190_var[595152]));
  void* fused_constant_59_let = (&(global_const_workspace_190_var[314752]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 4; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_191_var[192]));
    void* compute_global_let = (&(global_workspace_191_var[256]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 2; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 128; ++k_outer) {
        for (int32_t x_c = 0; x_c < 8; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[k_outer]) * ((int32_t)((int8_t*)fused_constant_59_let)[((((ax1_outer_ax0_outer_fused * 2048) + (y_inner_outer_x_inner_outer_fused * 1024)) + (k_outer * 8)) + x_c)])));
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
        int32_t v_ = ((int32_t)(((((0 != 0) ? (((int64_t)((((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_8_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_8_let)[cse_var_1])) << ((int64_t)0)) : ((int64_t)((((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_8_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_8_let)[cse_var_1]))) * (int64_t)2031568558) + ((int64_t)1 << ((int64_t)((9 + 31) - 1)))) >> ((int64_t)(9 + 31)))) - 128;
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
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_subtract__fa059688879ad8de_(int8_t* p0, float* T_multiply, uint8_t* global_const_workspace_70_var, uint8_t* global_workspace_71_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED] dense: 64->10 (packed [2][1][64][5])
  int32_t* conv_const = (int32_t*)(&global_const_workspace_70_var[614288]);
  int32_t* conv_sub   = (int32_t*)(&global_const_workspace_70_var[614096]);
  int8_t*  weights    = (int8_t*) (&global_const_workspace_70_var[550992]);

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
        * (int64_t)1200113073) + ((int64_t)1 << ((int64_t)((8 + 31) - 1))))
        >> ((int64_t)(8 + 31)))) - 7;
      int32_t v1 = (v_) < (127) ? (v_) : (127);
      T_multiply[ax3] = (((float)(((v1) > (-128) ? (v1) : (-128)) + 7)) * 1.157580e-01f);
    }
  }
  return 0;

#else

  void* fused_nn_contrib_dense_pack_constant_2_let = (&(global_const_workspace_70_var[614288]));
  void* fused_nn_contrib_dense_pack_subtract_constant_2_let = (&(global_const_workspace_70_var[614096]));
  void* fused_constant_22_let = (&(global_const_workspace_70_var[550992]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 2; ++ax1_outer_ax0_outer_fused) {
    void* compute_global_let = (&(global_workspace_71_var[15016]));
    for (int32_t x_c_init = 0; x_c_init < 5; ++x_c_init) {
      ((int32_t*)compute_global_let)[x_c_init] = 0;
    }
    for (int32_t k_outer = 0; k_outer < 64; ++k_outer) {
      for (int32_t x_c = 0; x_c < 5; ++x_c) {
        ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[k_outer]) * ((int32_t)((int8_t*)fused_constant_22_let)[(((ax1_outer_ax0_outer_fused * 320) + (k_outer * 5)) + x_c)])));
      }
    }
    for (int32_t ax1_inner_inner = 0; ax1_inner_inner < 5; ++ax1_inner_inner) {
      int32_t cse_var_1 = ((ax1_outer_ax0_outer_fused * 5) + ax1_inner_inner);
      int32_t v_ = ((int32_t)(((((0 != 0) ? (((int64_t)((((int32_t*)compute_global_let)[ax1_inner_inner] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_2_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_2_let)[cse_var_1])) << ((int64_t)0)) : ((int64_t)((((int32_t*)compute_global_let)[ax1_inner_inner] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_2_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_2_let)[cse_var_1]))) * (int64_t)1200113073) + ((int64_t)1 << ((int64_t)((8 + 31) - 1)))) >> ((int64_t)(8 + 31)))) - 7;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_multiply[cse_var_1] = (((float)(((v__1) > (-128) ? (v__1) : (-128)) + 7)) * 1.157580e-01f);
    }
  }
  return 0;

#endif
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_subtract__fa059688879ad8de__1(int8_t* p0, float* T_multiply, uint8_t* global_const_workspace_110_var, uint8_t* global_workspace_111_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED] dense: 64->10 (packed [2][1][64][5])
  int32_t* conv_const = (int32_t*)(&global_const_workspace_110_var[614240]);
  int32_t* conv_sub   = (int32_t*)(&global_const_workspace_110_var[614048]);
  int8_t*  weights    = (int8_t*) (&global_const_workspace_110_var[550352]);

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
        * (int64_t)1998860971) + ((int64_t)1 << ((int64_t)((9 + 31) - 1))))
        >> ((int64_t)(9 + 31)))) - 16;
      int32_t v1 = (v_) < (127) ? (v_) : (127);
      T_multiply[ax3] = (((float)(((v1) > (-128) ? (v1) : (-128)) + 16)) * 1.257643e-01f);
    }
  }
  return 0;

#else

  void* fused_nn_contrib_dense_pack_constant_5_let = (&(global_const_workspace_110_var[614240]));
  void* fused_nn_contrib_dense_pack_subtract_constant_5_let = (&(global_const_workspace_110_var[614048]));
  void* fused_constant_34_let = (&(global_const_workspace_110_var[550352]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 2; ++ax1_outer_ax0_outer_fused) {
    void* compute_global_let = (&(global_workspace_111_var[3432]));
    for (int32_t x_c_init = 0; x_c_init < 5; ++x_c_init) {
      ((int32_t*)compute_global_let)[x_c_init] = 0;
    }
    for (int32_t k_outer = 0; k_outer < 64; ++k_outer) {
      for (int32_t x_c = 0; x_c < 5; ++x_c) {
        ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[k_outer]) * ((int32_t)((int8_t*)fused_constant_34_let)[(((ax1_outer_ax0_outer_fused * 320) + (k_outer * 5)) + x_c)])));
      }
    }
    for (int32_t ax1_inner_inner = 0; ax1_inner_inner < 5; ++ax1_inner_inner) {
      int32_t cse_var_1 = ((ax1_outer_ax0_outer_fused * 5) + ax1_inner_inner);
      int32_t v_ = ((int32_t)(((((0 != 0) ? (((int64_t)((((int32_t*)compute_global_let)[ax1_inner_inner] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_5_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_5_let)[cse_var_1])) << ((int64_t)0)) : ((int64_t)((((int32_t*)compute_global_let)[ax1_inner_inner] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_5_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_5_let)[cse_var_1]))) * (int64_t)1998860971) + ((int64_t)1 << ((int64_t)((9 + 31) - 1)))) >> ((int64_t)(9 + 31)))) - 16;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_multiply[cse_var_1] = (((float)(((v__1) > (-128) ? (v__1) : (-128)) + 16)) * 1.257643e-01f);
    }
  }
  return 0;

#endif
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_subtract__fa059688879ad8de__2(int8_t* p0, float* T_multiply, uint8_t* global_const_workspace_172_var, uint8_t* global_workspace_173_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED] dense: 1280->10 with reduction tiling (chunk=512)
  int32_t* conv_const = (int32_t*)(&global_const_workspace_172_var[614192]);
  int32_t* conv_sub   = (int32_t*)(&global_const_workspace_172_var[614000]);
  int8_t*  weights    = (int8_t*) (&global_const_workspace_172_var[291200]);
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
      * (int64_t)2068779874) + ((int64_t)1 << ((int64_t)((11 + 31) - 1))))
      >> ((int64_t)(11 + 31)))) + 40;
    int32_t v1 = (v_) < (127) ? (v_) : (127);
    T_multiply[ax3] = (((float)(((v1) > (-128) ? (v1) : (-128)) - 40)) * 3.254866e-01f);
  }
  return 0;

#else

  void* fused_nn_contrib_dense_pack_constant_6_let = (&(global_const_workspace_172_var[614192]));
  void* fused_nn_contrib_dense_pack_subtract_constant_6_let = (&(global_const_workspace_172_var[614000]));
  void* fused_constant_54_let = (&(global_const_workspace_172_var[291200]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 2; ++ax1_outer_ax0_outer_fused) {
    void* compute_global_let = (&(global_workspace_173_var[25864]));
    for (int32_t x_c_init = 0; x_c_init < 5; ++x_c_init) {
      ((int32_t*)compute_global_let)[x_c_init] = 0;
    }
    for (int32_t k_outer = 0; k_outer < 1280; ++k_outer) {
      for (int32_t x_c = 0; x_c < 5; ++x_c) {
        ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[k_outer]) * ((int32_t)((int8_t*)fused_constant_54_let)[(((ax1_outer_ax0_outer_fused * 6400) + (k_outer * 5)) + x_c)])));
      }
    }
    for (int32_t ax1_inner_inner = 0; ax1_inner_inner < 5; ++ax1_inner_inner) {
      int32_t cse_var_1 = ((ax1_outer_ax0_outer_fused * 5) + ax1_inner_inner);
      int32_t v_ = ((int32_t)(((((0 != 0) ? (((int64_t)((((int32_t*)compute_global_let)[ax1_inner_inner] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_6_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_6_let)[cse_var_1])) << ((int64_t)0)) : ((int64_t)((((int32_t*)compute_global_let)[ax1_inner_inner] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_6_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_6_let)[cse_var_1]))) * (int64_t)2068779874) + ((int64_t)1 << ((int64_t)((11 + 31) - 1)))) >> ((int64_t)(11 + 31)))) + 40;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_multiply[cse_var_1] = (((float)(((v__1) > (-128) ? (v__1) : (-128)) - 40)) * 3.254866e-01f);
    }
  }
  return 0;

#endif
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_subtract__fa059688879ad8de__3(int8_t* p0, float* T_multiply, uint8_t* global_const_workspace_192_var, uint8_t* global_workspace_193_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED] dense: 64->10 (packed [2][1][64][5])
  int32_t* conv_const = (int32_t*)(&global_const_workspace_192_var[614144]);
  int32_t* conv_sub   = (int32_t*)(&global_const_workspace_192_var[613952]);
  int8_t*  weights    = (int8_t*) (&global_const_workspace_192_var[549712]);

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
        * (int64_t)1726131118) + ((int64_t)1 << ((int64_t)((8 + 31) - 1))))
        >> ((int64_t)(8 + 31)))) - 28;
      int32_t v1 = (v_) < (127) ? (v_) : (127);
      T_multiply[ax3] = (((float)(((v1) > (-128) ? (v1) : (-128)) + 28)) * 2.351235e-01f);
    }
  }
  return 0;

#else

  void* fused_nn_contrib_dense_pack_constant_9_let = (&(global_const_workspace_192_var[614144]));
  void* fused_nn_contrib_dense_pack_subtract_constant_9_let = (&(global_const_workspace_192_var[613952]));
  void* fused_constant_60_let = (&(global_const_workspace_192_var[549712]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 2; ++ax1_outer_ax0_outer_fused) {
    void* compute_global_let = (&(global_workspace_193_var[232]));
    for (int32_t x_c_init = 0; x_c_init < 5; ++x_c_init) {
      ((int32_t*)compute_global_let)[x_c_init] = 0;
    }
    for (int32_t k_outer = 0; k_outer < 64; ++k_outer) {
      for (int32_t x_c = 0; x_c < 5; ++x_c) {
        ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[k_outer]) * ((int32_t)((int8_t*)fused_constant_60_let)[(((ax1_outer_ax0_outer_fused * 320) + (k_outer * 5)) + x_c)])));
      }
    }
    for (int32_t ax1_inner_inner = 0; ax1_inner_inner < 5; ++ax1_inner_inner) {
      int32_t cse_var_1 = ((ax1_outer_ax0_outer_fused * 5) + ax1_inner_inner);
      int32_t v_ = ((int32_t)(((((0 != 0) ? (((int64_t)((((int32_t*)compute_global_let)[ax1_inner_inner] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_9_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_9_let)[cse_var_1])) << ((int64_t)0)) : ((int64_t)((((int32_t*)compute_global_let)[ax1_inner_inner] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_9_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_9_let)[cse_var_1]))) * (int64_t)1726131118) + ((int64_t)1 << ((int64_t)((8 + 31) - 1)))) >> ((int64_t)(8 + 31)))) - 28;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_multiply[cse_var_1] = (((float)(((v__1) > (-128) ? (v__1) : (-128)) + 28)) * 2.351235e-01f);
    }
  }
  return 0;

#endif
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_122_var, uint8_t* global_workspace_123_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED v8 HW-REQUANT] 1x1 conv: 32->192 channels, 16 spatial positions
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_122_var[546640]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_122_var[548176]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_122_var[545872]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_122_var[365440]);

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

  void* fused_nn_conv2d_add_constant_2_let = (&(global_const_workspace_122_var[546640]));
  void* fused_nn_conv2d_add_constant_1_let = (&(global_const_workspace_122_var[547408]));
  void* fused_nn_conv2d_add_constant_let = (&(global_const_workspace_122_var[548176]));
  void* fused_nn_conv2d_constant_30_let = (&(global_const_workspace_122_var[545872]));
  void* fused_constant_38_let = (&(global_const_workspace_122_var[365440]));
  void* pad_temp_let = (&(global_workspace_123_var[20224]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 4; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 4; ++i2) {
      for (int32_t i3 = 0; i3 < 32; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 128) + (i2 * 32)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 16; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_123_var[20736]));
    for (int32_t ax3_outer = 0; ax3_outer < 3; ++ax3_outer) {
      for (int32_t ff = 0; ff < 64; ++ff) {
        ((int32_t*)conv2d_nhwc_let)[ff] = 0;
        for (int32_t rc = 0; rc < 32; ++rc) {
          ((int32_t*)conv2d_nhwc_let)[ff] = (((int32_t*)conv2d_nhwc_let)[ff] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 32) + rc)]) * ((int32_t)((int8_t*)fused_constant_38_let)[(((rc * 192) + (ax3_outer * 64)) + ff)])));
        }
      }
      for (int32_t ax3_inner = 0; ax3_inner < 64; ++ax3_inner) {
        int32_t cse_var_3 = (ax3_outer * 64);
        int32_t cse_var_2 = (cse_var_3 + ax3_inner);
        int32_t v_ = ((int32_t)(((((int64_t)(((int32_t*)conv2d_nhwc_let)[ax3_inner] + ((int32_t*)fused_nn_conv2d_constant_30_let)[cse_var_2])) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_let)[cse_var_2])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_2_let)[cse_var_2] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_2_let)[cse_var_2] + 31)))) - 128;
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
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_1(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_144_var, uint8_t* global_workspace_145_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED v8 HW-REQUANT] 1x1 conv: 56->336 channels, 4 spatial positions
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_144_var[514864]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_144_var[517552]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_144_var[513520]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_144_var[218624]);

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

  void* fused_nn_conv2d_add_constant_5_let = (&(global_const_workspace_144_var[514864]));
  void* fused_nn_conv2d_add_constant_4_let = (&(global_const_workspace_144_var[516208]));
  void* fused_nn_conv2d_add_constant_3_let = (&(global_const_workspace_144_var[517552]));
  void* fused_nn_conv2d_constant_37_let = (&(global_const_workspace_144_var[513520]));
  void* fused_constant_45_let = (&(global_const_workspace_144_var[218624]));
  void* pad_temp_let = (&(global_workspace_145_var[25824]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 2; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 2; ++i2) {
      for (int32_t i3 = 0; i3 < 56; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 112) + (i2 * 56)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 4; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_145_var[26048]));
    for (int32_t ax3 = 0; ax3 < 336; ++ax3) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 56; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 56) + rc)]) * ((int32_t)((int8_t*)fused_constant_45_let)[((rc * 336) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)(((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_constant_37_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_3_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_5_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_5_let)[ax3] + 31)))) - 128;
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
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_2(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_178_var, uint8_t* global_workspace_179_var) {
  void* fused_nn_conv2d_add_constant_8_let = (&(global_const_workspace_178_var[608000]));
  void* fused_nn_conv2d_add_constant_7_let = (&(global_const_workspace_178_var[608128]));
  void* fused_nn_conv2d_add_constant_6_let = (&(global_const_workspace_178_var[608256]));
  void* fused_nn_conv2d_constant_45_let = (&(global_const_workspace_178_var[607488]));
  void* fused_constant_55_let = (&(global_const_workspace_178_var[275072]));
  void* pad_temp_let = (&(global_workspace_179_var[0]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 4; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 4; ++i2) {
      for (int32_t i3 = 0; i3 < 56; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 224) + (i2 * 56)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 4; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_179_var[1152]));
    for (int32_t ax3 = 0; ax3 < 32; ++ax3) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t ry = 0; ry < 3; ++ry) {
        for (int32_t rx = 0; rx < 3; ++rx) {
          for (int32_t rc = 0; rc < 56; ++rc) {
            ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((((((ax0_ax1_fused_ax2_fused >> 1) * 224) + (ry * 224)) + (rx * 56)) + ((ax0_ax1_fused_ax2_fused & 1) * 56)) + rc)]) * ((int32_t)((int8_t*)fused_constant_55_let)[((((ry * 5376) + (rx * 1792)) + (rc * 32)) + ax3)])));
          }
        }
      }
      int32_t v_ = ((int32_t)(((((int64_t)(((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_constant_45_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_6_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_8_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_8_let)[ax3] + 31)))) - 128;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_cast[((ax0_ax1_fused_ax2_fused * 32) + ax3)] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip(int8_t* p0, int32_t* compute, uint8_t* global_const_workspace_60_var, uint8_t* global_workspace_61_var) {
  void* fused_nn_conv2d_subtract_add_constant_56_let = (&(global_const_workspace_60_var[607104]));
  void* fused_nn_conv2d_subtract_add_constant_55_let = (&(global_const_workspace_60_var[607232]));
  void* fused_nn_conv2d_subtract_add_constant_54_let = (&(global_const_workspace_60_var[607360]));
  void* fused_nn_conv2d_constant_18_let = (&(global_const_workspace_60_var[607872]));
  void* fused_nn_conv2d_subtract_constant_18_let = (&(global_const_workspace_60_var[606208]));
  void* fused_constant_18_let = (&(global_const_workspace_60_var[346240]));
  void* pad_temp_let = (&(global_workspace_61_var[2048]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 6; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 6; ++i2) {
      for (int32_t i3 = 0; i3 < 24; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 144) + (i2 * 24)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 16; ++i0_i1_fused_i2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_61_var[14784]));
    for (int32_t i3_1 = 0; i3_1 < 32; ++i3_1) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t ry = 0; ry < 3; ++ry) {
        for (int32_t rx = 0; rx < 3; ++rx) {
          for (int32_t rc = 0; rc < 24; ++rc) {
            ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((((((i0_i1_fused_i2_fused >> 2) * 144) + (ry * 144)) + (rx * 24)) + ((i0_i1_fused_i2_fused & 3) * 24)) + rc)]) * ((int32_t)((int8_t*)fused_constant_18_let)[((((ry * 2304) + (rx * 768)) + (rc * 32)) + i3_1)])));
          }
        }
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_18_let)[i3_1]) - ((int32_t*)fused_nn_conv2d_constant_18_let)[i3_1])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_54_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_56_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_56_let)[i3_1] + 31)))) - 128;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      compute[((i0_i1_fused_i2_fused * 32) + i3_1)] = ((v__1) > (-128) ? (v__1) : (-128));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_1(int8_t* p0, int32_t* compute, uint8_t* global_const_workspace_100_var, uint8_t* global_workspace_101_var) {
  void* fused_nn_conv2d_subtract_add_constant_80_let = (&(global_const_workspace_100_var[612032]));
  void* fused_nn_conv2d_subtract_add_constant_79_let = (&(global_const_workspace_100_var[612096]));
  void* fused_nn_conv2d_subtract_add_constant_78_let = (&(global_const_workspace_100_var[612160]));
  void* fused_nn_conv2d_constant_26_let = (&(global_const_workspace_100_var[613056]));
  void* fused_nn_conv2d_subtract_constant_26_let = (&(global_const_workspace_100_var[611776]));
  void* fused_constant_30_let = (&(global_const_workspace_100_var[418688]));
  void* pad_temp_let = (&(global_workspace_101_var[0]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 6; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 6; ++i2) {
      for (int32_t i3 = 0; i3 < 32; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 192) + (i2 * 32)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 16; ++i0_i1_fused_i2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_101_var[3200]));
    for (int32_t i3_1 = 0; i3_1 < 16; ++i3_1) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t ry = 0; ry < 3; ++ry) {
        for (int32_t rx = 0; rx < 3; ++rx) {
          for (int32_t rc = 0; rc < 32; ++rc) {
            ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((((((i0_i1_fused_i2_fused >> 2) * 192) + (ry * 192)) + (rx * 32)) + ((i0_i1_fused_i2_fused & 3) * 32)) + rc)]) * ((int32_t)((int8_t*)fused_constant_30_let)[((((ry * 1536) + (rx * 512)) + (rc * 16)) + i3_1)])));
          }
        }
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_26_let)[i3_1]) - ((int32_t*)fused_nn_conv2d_constant_26_let)[i3_1])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_78_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_80_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_80_let)[i3_1] + 31)))) - 128;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      compute[((i0_i1_fused_i2_fused * 16) + i3_1)] = ((v__1) > (-128) ? (v__1) : (-128));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_2(int8_t* p0, int32_t* compute, uint8_t* global_const_workspace_166_var, uint8_t* global_workspace_167_var) {
  void* fused_nn_conv2d_subtract_add_constant_128_let = (&(global_const_workspace_166_var[388992]));
  void* fused_nn_conv2d_subtract_add_constant_127_let = (&(global_const_workspace_166_var[394112]));
  void* fused_nn_conv2d_subtract_add_constant_126_let = (&(global_const_workspace_166_var[399232]));
  void* fused_nn_conv2d_constant_44_let = (&(global_const_workspace_166_var[404352]));
  void* fused_nn_conv2d_subtract_constant_42_let = (&(global_const_workspace_166_var[383872]));
  void* fused_constant_52_let = (&(global_const_workspace_166_var[0]));
  void* pad_temp_let = (&(global_workspace_167_var[20480]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 2; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 2; ++i2) {
      for (int32_t i3 = 0; i3 < 112; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 224) + (i2 * 112)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 4; ++i0_i1_fused_i2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_167_var[20928]));
    for (int32_t i3_outer = 0; i3_outer < 20; ++i3_outer) {
      for (int32_t ff = 0; ff < 64; ++ff) {
        ((int32_t*)conv2d_nhwc_let)[ff] = 0;
        for (int32_t rc = 0; rc < 112; ++rc) {
          ((int32_t*)conv2d_nhwc_let)[ff] = (((int32_t*)conv2d_nhwc_let)[ff] + (((int32_t)((int8_t*)pad_temp_let)[((i0_i1_fused_i2_fused * 112) + rc)]) * ((int32_t)((int8_t*)fused_constant_52_let)[(((rc * 1280) + (i3_outer * 64)) + ff)])));
        }
      }
      for (int32_t i3_inner = 0; i3_inner < 64; ++i3_inner) {
        int32_t cse_var_3 = (i3_outer * 64);
        int32_t cse_var_2 = (cse_var_3 + i3_inner);
        int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[i3_inner] + ((int32_t*)fused_nn_conv2d_subtract_constant_42_let)[cse_var_2]) - ((int32_t*)fused_nn_conv2d_constant_44_let)[cse_var_2])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_126_let)[cse_var_2])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_128_let)[cse_var_2] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_128_let)[cse_var_2] + 31)))) - 128;
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
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_3(int8_t* p0, int32_t* compute, uint8_t* global_const_workspace_182_var, uint8_t* global_workspace_183_var) {
  void* fused_nn_conv2d_subtract_add_constant_131_let = (&(global_const_workspace_182_var[612672]));
  void* fused_nn_conv2d_subtract_add_constant_130_let = (&(global_const_workspace_182_var[612736]));
  void* fused_nn_conv2d_subtract_add_constant_129_let = (&(global_const_workspace_182_var[612800]));
  void* fused_nn_conv2d_constant_46_let = (&(global_const_workspace_182_var[612992]));
  void* fused_nn_conv2d_subtract_constant_43_let = (&(global_const_workspace_182_var[611712]));
  void* fused_constant_56_let = (&(global_const_workspace_182_var[409472]));
  void* pad_temp_let = (&(global_workspace_183_var[0]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 4; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 4; ++i2) {
      for (int32_t i3 = 0; i3 < 32; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 128) + (i2 * 32)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 4; ++i0_i1_fused_i2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_183_var[768]));
    for (int32_t i3_1 = 0; i3_1 < 16; ++i3_1) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t ry = 0; ry < 3; ++ry) {
        for (int32_t rx = 0; rx < 3; ++rx) {
          for (int32_t rc = 0; rc < 32; ++rc) {
            ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((((((i0_i1_fused_i2_fused >> 1) * 128) + (ry * 128)) + (rx * 32)) + ((i0_i1_fused_i2_fused & 1) * 32)) + rc)]) * ((int32_t)((int8_t*)fused_constant_56_let)[((((ry * 1536) + (rx * 512)) + (rc * 16)) + i3_1)])));
          }
        }
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_43_let)[i3_1]) - ((int32_t*)fused_nn_conv2d_constant_46_let)[i3_1])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_129_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_131_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_131_let)[i3_1] + 31)))) - 128;
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
  void* fused_nn_conv2d_subtract_add_constant_2_let = (&(global_const_workspace_4_var[612608]));
  void* fused_nn_conv2d_subtract_add_constant_1_let = (&(global_const_workspace_4_var[612864]));
  void* fused_nn_conv2d_subtract_add_constant_let = (&(global_const_workspace_4_var[612928]));
  void* fused_nn_conv2d_constant_let = (&(global_const_workspace_4_var[613248]));
  void* fused_nn_conv2d_subtract_constant_let = (&(global_const_workspace_4_var[611968]));
  void* fused_constant_let = (&(global_const_workspace_4_var[581280]));
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
  void* fused_nn_conv2d_subtract_add_constant_5_let = (&(global_const_workspace_8_var[612224]));
  void* fused_nn_conv2d_subtract_add_constant_4_let = (&(global_const_workspace_8_var[612288]));
  void* fused_nn_conv2d_subtract_add_constant_3_let = (&(global_const_workspace_8_var[612544]));
  void* fused_nn_conv2d_subtract_constant_1_let = (&(global_const_workspace_8_var[611904]));
  void* fused_nn_conv2d_constant_1_let = (&(global_const_workspace_8_var[613184]));
  void* fused_constant_1_let = (&(global_const_workspace_8_var[605808]));
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
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_34_var[612352]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_34_var[612480]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_34_var[613120]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_34_var[611840]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_34_var[548944]);

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

  void* fused_nn_conv2d_subtract_add_constant_32_let = (&(global_const_workspace_34_var[612352]));
  void* fused_nn_conv2d_subtract_add_constant_31_let = (&(global_const_workspace_34_var[612416]));
  void* fused_nn_conv2d_subtract_add_constant_30_let = (&(global_const_workspace_34_var[612480]));
  void* fused_nn_conv2d_constant_10_let = (&(global_const_workspace_34_var[613120]));
  void* fused_nn_conv2d_subtract_constant_10_let = (&(global_const_workspace_34_var[611840]));
  void* fused_constant_10_let = (&(global_const_workspace_34_var[548944]));
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
    void* conv2d_nhwc_let = (&(global_workspace_35_var[36224]));
    for (int32_t ax3 = 0; ax3 < 16; ++ax3) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 48; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 48) + rc)]) * ((int32_t)((int8_t*)fused_constant_10_let)[((rc * 16) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_10_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_10_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_30_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_32_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_32_let)[ax3] + 31)))) - 16;
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
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_11(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_36_var, uint8_t* global_workspace_37_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED v8 HW-REQUANT] 1x1 conv: 16->96 channels, 64 spatial positions
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_36_var[589776]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_36_var[590544]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_36_var[592848]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_36_var[583632]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_36_var[475312]);

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

  void* fused_nn_conv2d_subtract_add_constant_35_let = (&(global_const_workspace_36_var[589776]));
  void* fused_nn_conv2d_subtract_add_constant_34_let = (&(global_const_workspace_36_var[590160]));
  void* fused_nn_conv2d_subtract_add_constant_33_let = (&(global_const_workspace_36_var[590544]));
  void* fused_nn_conv2d_constant_11_let = (&(global_const_workspace_36_var[592848]));
  void* fused_nn_conv2d_subtract_constant_11_let = (&(global_const_workspace_36_var[583632]));
  void* fused_constant_11_let = (&(global_const_workspace_36_var[475312]));
  void* pad_temp_let = (&(global_workspace_37_var[36224]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 8; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 8; ++i2) {
      for (int32_t i3 = 0; i3 < 16; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 128) + (i2 * 16)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 64; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_37_var[37248]));
    for (int32_t ax3 = 0; ax3 < 96; ++ax3) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 16; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 16) + rc)]) * ((int32_t)((int8_t*)fused_constant_11_let)[((rc * 96) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_11_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_11_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_33_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_35_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_35_let)[ax3] + 31)))) - 128;
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
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_12(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_40_var, uint8_t* global_workspace_41_var) {
  void* fused_nn_conv2d_subtract_add_constant_38_let = (&(global_const_workspace_40_var[588624]));
  void* fused_nn_conv2d_subtract_add_constant_37_let = (&(global_const_workspace_40_var[589008]));
  void* fused_nn_conv2d_subtract_add_constant_36_let = (&(global_const_workspace_40_var[589392]));
  void* fused_nn_conv2d_subtract_constant_12_let = (&(global_const_workspace_40_var[583248]));
  void* fused_nn_conv2d_constant_12_let = (&(global_const_workspace_40_var[592464]));
  void* fused_constant_12_let = (&(global_const_workspace_40_var[525808]));
  void* PaddedInput_let = (&(global_workspace_41_var[24576]));
  void* DepthwiseConv2d_let = (&(global_workspace_41_var[0]));
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
            ((int32_t*)DepthwiseConv2d_let)[cse_var_2] = (((int32_t*)DepthwiseConv2d_let)[cse_var_2] + (((int32_t)((int8_t*)PaddedInput_let)[(((((i * 960) + (di * 960)) + cse_var_4) + cse_var_3) + c)]) * ((int32_t)((int8_t*)fused_constant_12_let)[(((di * 288) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 8; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 8; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 96; ++ax3) {
        int32_t cse_var_5 = (((ax1 * 768) + (ax2 * 96)) + ax3);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_5] = (((int32_t*)DepthwiseConv2d_let)[cse_var_5] - ((int32_t*)fused_nn_conv2d_constant_12_let)[ax3]);
      }
    }
  }
  for (int32_t ax1_1 = 0; ax1_1 < 8; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 8; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 96; ++ax3_1) {
        int32_t cse_var_6 = (((ax1_1 * 768) + (ax2_1 * 96)) + ax3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_6] = (((int32_t*)DepthwiseConv2d_let)[cse_var_6] + ((int32_t*)fused_nn_conv2d_subtract_constant_12_let)[ax3_1]);
      }
    }
  }
  for (int32_t i1_1 = 0; i1_1 < 8; ++i1_1) {
    for (int32_t i2_1 = 0; i2_1 < 8; ++i2_1) {
      for (int32_t i3_1 = 0; i3_1 < 96; ++i3_1) {
        int32_t cse_var_7 = (((i1_1 * 768) + (i2_1 * 96)) + i3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_7] = ((int32_t)(((((int64_t)((int32_t*)DepthwiseConv2d_let)[cse_var_7]) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_36_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_38_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_38_let)[i3_1] + 31))));
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
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_13(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_44_var, uint8_t* global_workspace_45_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED v8 HW-REQUANT] 1x1 conv: 16->96 channels, 64 spatial positions
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_44_var[587472]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_44_var[588240]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_44_var[592080]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_44_var[582864]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_44_var[473776]);

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

  void* fused_nn_conv2d_subtract_add_constant_41_let = (&(global_const_workspace_44_var[587472]));
  void* fused_nn_conv2d_subtract_add_constant_40_let = (&(global_const_workspace_44_var[587856]));
  void* fused_nn_conv2d_subtract_add_constant_39_let = (&(global_const_workspace_44_var[588240]));
  void* fused_nn_conv2d_constant_13_let = (&(global_const_workspace_44_var[592080]));
  void* fused_nn_conv2d_subtract_constant_13_let = (&(global_const_workspace_44_var[582864]));
  void* fused_constant_13_let = (&(global_const_workspace_44_var[473776]));
  void* pad_temp_let = (&(global_workspace_45_var[35200]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 8; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 8; ++i2) {
      for (int32_t i3 = 0; i3 < 16; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 128) + (i2 * 16)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 64; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_45_var[36224]));
    for (int32_t ax3 = 0; ax3 < 96; ++ax3) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 16; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 16) + rc)]) * ((int32_t)((int8_t*)fused_constant_13_let)[((rc * 96) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_13_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_13_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_39_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_41_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_41_let)[ax3] + 31)))) - 128;
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
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_14(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_46_var, uint8_t* global_workspace_47_var) {
  void* fused_nn_conv2d_subtract_add_constant_44_let = (&(global_const_workspace_46_var[586320]));
  void* fused_nn_conv2d_subtract_add_constant_43_let = (&(global_const_workspace_46_var[586704]));
  void* fused_nn_conv2d_subtract_add_constant_42_let = (&(global_const_workspace_46_var[587088]));
  void* fused_nn_conv2d_subtract_constant_14_let = (&(global_const_workspace_46_var[582480]));
  void* fused_nn_conv2d_constant_14_let = (&(global_const_workspace_46_var[591696]));
  void* fused_constant_14_let = (&(global_const_workspace_46_var[524944]));
  void* PaddedInput_let = (&(global_workspace_47_var[24576]));
  void* DepthwiseConv2d_let = (&(global_workspace_47_var[0]));
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
            ((int32_t*)DepthwiseConv2d_let)[cse_var_2] = (((int32_t*)DepthwiseConv2d_let)[cse_var_2] + (((int32_t)((int8_t*)PaddedInput_let)[(((((i * 960) + (di * 960)) + cse_var_4) + cse_var_3) + c)]) * ((int32_t)((int8_t*)fused_constant_14_let)[(((di * 288) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 8; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 8; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 96; ++ax3) {
        int32_t cse_var_5 = (((ax1 * 768) + (ax2 * 96)) + ax3);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_5] = (((int32_t*)DepthwiseConv2d_let)[cse_var_5] - ((int32_t*)fused_nn_conv2d_constant_14_let)[ax3]);
      }
    }
  }
  for (int32_t ax1_1 = 0; ax1_1 < 8; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 8; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 96; ++ax3_1) {
        int32_t cse_var_6 = (((ax1_1 * 768) + (ax2_1 * 96)) + ax3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_6] = (((int32_t*)DepthwiseConv2d_let)[cse_var_6] + ((int32_t*)fused_nn_conv2d_subtract_constant_14_let)[ax3_1]);
      }
    }
  }
  for (int32_t i1_1 = 0; i1_1 < 8; ++i1_1) {
    for (int32_t i2_1 = 0; i2_1 < 8; ++i2_1) {
      for (int32_t i3_1 = 0; i3_1 < 96; ++i3_1) {
        int32_t cse_var_7 = (((i1_1 * 768) + (i2_1 * 96)) + i3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_7] = ((int32_t)(((((int64_t)((int32_t*)DepthwiseConv2d_let)[cse_var_7]) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_42_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_44_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_44_let)[i3_1] + 31))));
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
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_15(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_50_var, uint8_t* global_workspace_51_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED v8 HW-REQUANT] 1x1 conv: 16->96 channels, 64 spatial positions
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_50_var[585168]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_50_var[585936]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_50_var[591312]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_50_var[582096]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_50_var[472240]);

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

  void* fused_nn_conv2d_subtract_add_constant_47_let = (&(global_const_workspace_50_var[585168]));
  void* fused_nn_conv2d_subtract_add_constant_46_let = (&(global_const_workspace_50_var[585552]));
  void* fused_nn_conv2d_subtract_add_constant_45_let = (&(global_const_workspace_50_var[585936]));
  void* fused_nn_conv2d_constant_15_let = (&(global_const_workspace_50_var[591312]));
  void* fused_nn_conv2d_subtract_constant_15_let = (&(global_const_workspace_50_var[582096]));
  void* fused_constant_15_let = (&(global_const_workspace_50_var[472240]));
  void* pad_temp_let = (&(global_workspace_51_var[36224]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 8; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 8; ++i2) {
      for (int32_t i3 = 0; i3 < 16; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 128) + (i2 * 16)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 64; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_51_var[37248]));
    for (int32_t ax3 = 0; ax3 < 96; ++ax3) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 16; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 16) + rc)]) * ((int32_t)((int8_t*)fused_constant_15_let)[((rc * 96) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_15_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_15_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_45_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_47_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_47_let)[ax3] + 31)))) - 128;
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
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_16(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_54_var, uint8_t* global_workspace_55_var) {
  void* fused_nn_conv2d_subtract_add_constant_50_let = (&(global_const_workspace_54_var[584016]));
  void* fused_nn_conv2d_subtract_add_constant_49_let = (&(global_const_workspace_54_var[584400]));
  void* fused_nn_conv2d_subtract_add_constant_48_let = (&(global_const_workspace_54_var[584784]));
  void* fused_nn_conv2d_subtract_constant_16_let = (&(global_const_workspace_54_var[581712]));
  void* fused_nn_conv2d_constant_16_let = (&(global_const_workspace_54_var[590928]));
  void* fused_constant_16_let = (&(global_const_workspace_54_var[524080]));
  void* PaddedInput_let = (&(global_workspace_55_var[7776]));
  void* DepthwiseConv2d_let = (&(global_workspace_55_var[15552]));
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
            ((int32_t*)DepthwiseConv2d_let)[cse_var_2] = (((int32_t*)DepthwiseConv2d_let)[cse_var_2] + (((int32_t)((int8_t*)PaddedInput_let)[(((((i * 1728) + (di * 864)) + (j * 192)) + cse_var_3) + c)]) * ((int32_t)((int8_t*)fused_constant_16_let)[(((di * 288) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 4; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 4; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 96; ++ax3) {
        int32_t cse_var_4 = (((ax1 * 384) + (ax2 * 96)) + ax3);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_4] = (((int32_t*)DepthwiseConv2d_let)[cse_var_4] - ((int32_t*)fused_nn_conv2d_constant_16_let)[ax3]);
      }
    }
  }
  for (int32_t ax1_1 = 0; ax1_1 < 4; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 4; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 96; ++ax3_1) {
        int32_t cse_var_5 = (((ax1_1 * 384) + (ax2_1 * 96)) + ax3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_5] = (((int32_t*)DepthwiseConv2d_let)[cse_var_5] + ((int32_t*)fused_nn_conv2d_subtract_constant_16_let)[ax3_1]);
      }
    }
  }
  for (int32_t i1_1 = 0; i1_1 < 4; ++i1_1) {
    for (int32_t i2_1 = 0; i2_1 < 4; ++i2_1) {
      for (int32_t i3_1 = 0; i3_1 < 96; ++i3_1) {
        int32_t cse_var_6 = (((i1_1 * 384) + (i2_1 * 96)) + i3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_6] = ((int32_t)(((((int64_t)((int32_t*)DepthwiseConv2d_let)[cse_var_6]) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_48_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_50_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_50_let)[i3_1] + 31))));
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
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_17(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_56_var, uint8_t* global_workspace_57_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED v8 HW-REQUANT] 1x1 conv: 96->24 channels, 16 spatial positions
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_56_var[609888]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_56_var[610080]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_56_var[610176]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_56_var[609792]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_56_var[460656]);

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

  void* fused_nn_conv2d_subtract_add_constant_53_let = (&(global_const_workspace_56_var[609888]));
  void* fused_nn_conv2d_subtract_add_constant_52_let = (&(global_const_workspace_56_var[609984]));
  void* fused_nn_conv2d_subtract_add_constant_51_let = (&(global_const_workspace_56_var[610080]));
  void* fused_nn_conv2d_constant_17_let = (&(global_const_workspace_56_var[610176]));
  void* fused_nn_conv2d_subtract_constant_17_let = (&(global_const_workspace_56_var[609792]));
  void* fused_constant_17_let = (&(global_const_workspace_56_var[460656]));
  void* pad_temp_let = (&(global_workspace_57_var[0]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 4; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 4; ++i2) {
      for (int32_t i3 = 0; i3 < 96; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 384) + (i2 * 96)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 16; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_57_var[14784]));
    for (int32_t ax3 = 0; ax3 < 24; ++ax3) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 96; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 96) + rc)]) * ((int32_t)((int8_t*)fused_constant_17_let)[((rc * 24) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_17_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_17_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_51_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_53_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_53_let)[ax3] + 31)))) + 10;
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
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_18(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_74_var, uint8_t* global_workspace_75_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED v8 HW-REQUANT] 1x1 conv: 24->144 channels, 16 spatial positions
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_74_var[568336]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_74_var[569488]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_74_var[574096]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_74_var[555664]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_74_var[437760]);

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

  void* fused_nn_conv2d_subtract_add_constant_59_let = (&(global_const_workspace_74_var[568336]));
  void* fused_nn_conv2d_subtract_add_constant_58_let = (&(global_const_workspace_74_var[568912]));
  void* fused_nn_conv2d_subtract_add_constant_57_let = (&(global_const_workspace_74_var[569488]));
  void* fused_nn_conv2d_constant_19_let = (&(global_const_workspace_74_var[574096]));
  void* fused_nn_conv2d_subtract_constant_19_let = (&(global_const_workspace_74_var[555664]));
  void* fused_constant_23_let = (&(global_const_workspace_74_var[437760]));
  void* pad_temp_let = (&(global_workspace_75_var[14784]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 4; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 4; ++i2) {
      for (int32_t i3 = 0; i3 < 24; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 96) + (i2 * 24)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 16; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_75_var[15168]));
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
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_19(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_78_var, uint8_t* global_workspace_79_var) {
  void* fused_nn_conv2d_subtract_add_constant_62_let = (&(global_const_workspace_78_var[566608]));
  void* fused_nn_conv2d_subtract_add_constant_61_let = (&(global_const_workspace_78_var[567184]));
  void* fused_nn_conv2d_subtract_add_constant_60_let = (&(global_const_workspace_78_var[567760]));
  void* fused_nn_conv2d_subtract_constant_20_let = (&(global_const_workspace_78_var[555088]));
  void* fused_nn_conv2d_constant_20_let = (&(global_const_workspace_78_var[573520]));
  void* fused_constant_24_let = (&(global_const_workspace_78_var[522784]));
  void* PaddedInput_let = (&(global_workspace_79_var[9216]));
  void* DepthwiseConv2d_let = (&(global_workspace_79_var[0]));
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
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_10_var[614400]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_10_var[614464]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_10_var[614624]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_10_var[614368]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_10_var[608384]);

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

  void* fused_nn_conv2d_subtract_add_constant_8_let = (&(global_const_workspace_10_var[614400]));
  void* fused_nn_conv2d_subtract_add_constant_7_let = (&(global_const_workspace_10_var[614432]));
  void* fused_nn_conv2d_subtract_add_constant_6_let = (&(global_const_workspace_10_var[614464]));
  void* fused_nn_conv2d_constant_2_let = (&(global_const_workspace_10_var[614624]));
  void* fused_nn_conv2d_subtract_constant_2_let = (&(global_const_workspace_10_var[614368]));
  void* fused_constant_2_let = (&(global_const_workspace_10_var[608384]));
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
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_20(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_82_var, uint8_t* global_workspace_83_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED v8 HW-REQUANT] 1x1 conv: 24->144 channels, 16 spatial positions
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_82_var[564880]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_82_var[566032]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_82_var[572944]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_82_var[554512]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_82_var[434304]);

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

  void* fused_nn_conv2d_subtract_add_constant_65_let = (&(global_const_workspace_82_var[564880]));
  void* fused_nn_conv2d_subtract_add_constant_64_let = (&(global_const_workspace_82_var[565456]));
  void* fused_nn_conv2d_subtract_add_constant_63_let = (&(global_const_workspace_82_var[566032]));
  void* fused_nn_conv2d_constant_21_let = (&(global_const_workspace_82_var[572944]));
  void* fused_nn_conv2d_subtract_constant_21_let = (&(global_const_workspace_82_var[554512]));
  void* fused_constant_25_let = (&(global_const_workspace_82_var[434304]));
  void* pad_temp_let = (&(global_workspace_83_var[15168]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 4; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 4; ++i2) {
      for (int32_t i3 = 0; i3 < 24; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 96) + (i2 * 24)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 16; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_83_var[15552]));
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
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_21(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_84_var, uint8_t* global_workspace_85_var) {
  void* fused_nn_conv2d_subtract_add_constant_68_let = (&(global_const_workspace_84_var[563152]));
  void* fused_nn_conv2d_subtract_add_constant_67_let = (&(global_const_workspace_84_var[563728]));
  void* fused_nn_conv2d_subtract_add_constant_66_let = (&(global_const_workspace_84_var[564304]));
  void* fused_nn_conv2d_subtract_constant_22_let = (&(global_const_workspace_84_var[553936]));
  void* fused_nn_conv2d_constant_22_let = (&(global_const_workspace_84_var[572368]));
  void* fused_constant_26_let = (&(global_const_workspace_84_var[521488]));
  void* PaddedInput_let = (&(global_workspace_85_var[9216]));
  void* DepthwiseConv2d_let = (&(global_workspace_85_var[0]));
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
  // [ACCELERATED v8 HW-REQUANT] 1x1 conv: 24->144 channels, 16 spatial positions
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_88_var[561424]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_88_var[562576]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_88_var[571792]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_88_var[553360]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_88_var[430848]);

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

  void* fused_nn_conv2d_subtract_add_constant_71_let = (&(global_const_workspace_88_var[561424]));
  void* fused_nn_conv2d_subtract_add_constant_70_let = (&(global_const_workspace_88_var[562000]));
  void* fused_nn_conv2d_subtract_add_constant_69_let = (&(global_const_workspace_88_var[562576]));
  void* fused_nn_conv2d_constant_23_let = (&(global_const_workspace_88_var[571792]));
  void* fused_nn_conv2d_subtract_constant_23_let = (&(global_const_workspace_88_var[553360]));
  void* fused_constant_27_let = (&(global_const_workspace_88_var[430848]));
  void* pad_temp_let = (&(global_workspace_89_var[14784]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 4; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 4; ++i2) {
      for (int32_t i3 = 0; i3 < 24; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 96) + (i2 * 24)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 16; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_89_var[15168]));
    for (int32_t ax3 = 0; ax3 < 144; ++ax3) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 24; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 24) + rc)]) * ((int32_t)((int8_t*)fused_constant_27_let)[((rc * 144) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_23_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_23_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_69_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_71_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_71_let)[ax3] + 31)))) - 128;
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
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_23(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_90_var, uint8_t* global_workspace_91_var) {
  void* fused_nn_conv2d_subtract_add_constant_74_let = (&(global_const_workspace_90_var[559696]));
  void* fused_nn_conv2d_subtract_add_constant_73_let = (&(global_const_workspace_90_var[560272]));
  void* fused_nn_conv2d_subtract_add_constant_72_let = (&(global_const_workspace_90_var[560848]));
  void* fused_nn_conv2d_subtract_constant_24_let = (&(global_const_workspace_90_var[552784]));
  void* fused_nn_conv2d_constant_24_let = (&(global_const_workspace_90_var[571216]));
  void* fused_constant_28_let = (&(global_const_workspace_90_var[520192]));
  void* PaddedInput_let = (&(global_workspace_91_var[9216]));
  void* DepthwiseConv2d_let = (&(global_workspace_91_var[0]));
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
            ((int32_t*)DepthwiseConv2d_let)[cse_var_2] = (((int32_t*)DepthwiseConv2d_let)[cse_var_2] + (((int32_t)((int8_t*)PaddedInput_let)[(((((i * 864) + (di * 864)) + cse_var_4) + cse_var_3) + c)]) * ((int32_t)((int8_t*)fused_constant_28_let)[(((di * 432) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 4; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 4; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 144; ++ax3) {
        int32_t cse_var_5 = (((ax1 * 576) + (ax2 * 144)) + ax3);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_5] = (((int32_t*)DepthwiseConv2d_let)[cse_var_5] - ((int32_t*)fused_nn_conv2d_constant_24_let)[ax3]);
      }
    }
  }
  for (int32_t ax1_1 = 0; ax1_1 < 4; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 4; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 144; ++ax3_1) {
        int32_t cse_var_6 = (((ax1_1 * 576) + (ax2_1 * 144)) + ax3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_6] = (((int32_t*)DepthwiseConv2d_let)[cse_var_6] + ((int32_t*)fused_nn_conv2d_subtract_constant_24_let)[ax3_1]);
      }
    }
  }
  for (int32_t i1_1 = 0; i1_1 < 4; ++i1_1) {
    for (int32_t i2_1 = 0; i2_1 < 4; ++i2_1) {
      for (int32_t i3_1 = 0; i3_1 < 144; ++i3_1) {
        int32_t cse_var_7 = (((i1_1 * 576) + (i2_1 * 144)) + i3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_7] = ((int32_t)(((((int64_t)((int32_t*)DepthwiseConv2d_let)[cse_var_7]) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_72_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_74_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_74_let)[i3_1] + 31))));
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
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_24(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_96_var, uint8_t* global_workspace_97_var) {
  void* fused_nn_conv2d_subtract_add_constant_77_let = (&(global_const_workspace_96_var[606720]));
  void* fused_nn_conv2d_subtract_add_constant_76_let = (&(global_const_workspace_96_var[606848]));
  void* fused_nn_conv2d_subtract_add_constant_75_let = (&(global_const_workspace_96_var[606976]));
  void* fused_nn_conv2d_constant_25_let = (&(global_const_workspace_96_var[607744]));
  void* fused_nn_conv2d_subtract_constant_25_let = (&(global_const_workspace_96_var[606080]));
  void* fused_constant_29_let = (&(global_const_workspace_96_var[339328]));
  void* pad_temp_let = (&(global_workspace_97_var[0]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 6; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 6; ++i2) {
      for (int32_t i3 = 0; i3 < 24; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 144) + (i2 * 24)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 16; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_97_var[3200]));
    for (int32_t ax3 = 0; ax3 < 32; ++ax3) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t ry = 0; ry < 3; ++ry) {
        for (int32_t rx = 0; rx < 3; ++rx) {
          for (int32_t rc = 0; rc < 24; ++rc) {
            ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((((((ax0_ax1_fused_ax2_fused >> 2) * 144) + (ry * 144)) + (rx * 24)) + ((ax0_ax1_fused_ax2_fused & 3) * 24)) + rc)]) * ((int32_t)((int8_t*)fused_constant_29_let)[((((ry * 2304) + (rx * 768)) + (rc * 32)) + ax3)])));
          }
        }
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_25_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_25_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_75_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_77_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_77_let)[ax3] + 31)))) - 128;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_cast[((ax0_ax1_fused_ax2_fused * 32) + ax3)] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_25(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_114_var, uint8_t* global_workspace_115_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED v8 HW-REQUANT] 1x1 conv: 24->144 channels, 16 spatial positions
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_114_var[557968]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_114_var[559120]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_114_var[570640]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_114_var[552208]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_114_var[427392]);

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

  void* fused_nn_conv2d_subtract_add_constant_83_let = (&(global_const_workspace_114_var[557968]));
  void* fused_nn_conv2d_subtract_add_constant_82_let = (&(global_const_workspace_114_var[558544]));
  void* fused_nn_conv2d_subtract_add_constant_81_let = (&(global_const_workspace_114_var[559120]));
  void* fused_nn_conv2d_constant_27_let = (&(global_const_workspace_114_var[570640]));
  void* fused_nn_conv2d_subtract_constant_27_let = (&(global_const_workspace_114_var[552208]));
  void* fused_constant_35_let = (&(global_const_workspace_114_var[427392]));
  void* pad_temp_let = (&(global_workspace_115_var[7488]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 4; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 4; ++i2) {
      for (int32_t i3 = 0; i3 < 24; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 96) + (i2 * 24)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 16; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_115_var[7872]));
    for (int32_t ax3 = 0; ax3 < 144; ++ax3) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 24; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 24) + rc)]) * ((int32_t)((int8_t*)fused_constant_35_let)[((rc * 144) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_27_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_27_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_81_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_83_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_83_let)[ax3] + 31)))) - 128;
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
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_26(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_118_var, uint8_t* global_workspace_119_var) {
  void* fused_nn_conv2d_subtract_add_constant_86_let = (&(global_const_workspace_118_var[556240]));
  void* fused_nn_conv2d_subtract_add_constant_85_let = (&(global_const_workspace_118_var[556816]));
  void* fused_nn_conv2d_subtract_add_constant_84_let = (&(global_const_workspace_118_var[557392]));
  void* fused_nn_conv2d_subtract_constant_28_let = (&(global_const_workspace_118_var[551632]));
  void* fused_nn_conv2d_constant_28_let = (&(global_const_workspace_118_var[570064]));
  void* fused_constant_36_let = (&(global_const_workspace_118_var[518896]));
  void* PaddedInput_let = (&(global_workspace_119_var[9216]));
  void* DepthwiseConv2d_let = (&(global_workspace_119_var[0]));
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
            ((int32_t*)DepthwiseConv2d_let)[cse_var_2] = (((int32_t*)DepthwiseConv2d_let)[cse_var_2] + (((int32_t)((int8_t*)PaddedInput_let)[(((((i * 864) + (di * 864)) + cse_var_4) + cse_var_3) + c)]) * ((int32_t)((int8_t*)fused_constant_36_let)[(((di * 432) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 4; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 4; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 144; ++ax3) {
        int32_t cse_var_5 = (((ax1 * 576) + (ax2 * 144)) + ax3);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_5] = (((int32_t*)DepthwiseConv2d_let)[cse_var_5] - ((int32_t*)fused_nn_conv2d_constant_28_let)[ax3]);
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
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_27(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_126_var, uint8_t* global_workspace_127_var) {
  void* fused_nn_conv2d_subtract_add_constant_92_let = (&(global_const_workspace_126_var[535888]));
  void* fused_nn_conv2d_subtract_add_constant_91_let = (&(global_const_workspace_126_var[536656]));
  void* fused_nn_conv2d_subtract_add_constant_90_let = (&(global_const_workspace_126_var[537424]));
  void* fused_nn_conv2d_subtract_constant_30_let = (&(global_const_workspace_126_var[529744]));
  void* fused_nn_conv2d_constant_31_let = (&(global_const_workspace_126_var[545104]));
  void* fused_constant_39_let = (&(global_const_workspace_126_var[470512]));
  void* PaddedInput_let = (&(global_workspace_127_var[12288]));
  void* DepthwiseConv2d_let = (&(global_workspace_127_var[0]));
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
            ((int32_t*)DepthwiseConv2d_let)[cse_var_2] = (((int32_t*)DepthwiseConv2d_let)[cse_var_2] + (((int32_t)((int8_t*)PaddedInput_let)[(((((i * 1152) + (di * 1152)) + cse_var_4) + cse_var_3) + c)]) * ((int32_t)((int8_t*)fused_constant_39_let)[(((di * 576) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 4; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 4; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 192; ++ax3) {
        int32_t cse_var_5 = (((ax1 * 768) + (ax2 * 192)) + ax3);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_5] = (((int32_t*)DepthwiseConv2d_let)[cse_var_5] - ((int32_t*)fused_nn_conv2d_constant_31_let)[ax3]);
      }
    }
  }
  for (int32_t ax1_1 = 0; ax1_1 < 4; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 4; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 192; ++ax3_1) {
        int32_t cse_var_6 = (((ax1_1 * 768) + (ax2_1 * 192)) + ax3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_6] = (((int32_t*)DepthwiseConv2d_let)[cse_var_6] + ((int32_t*)fused_nn_conv2d_subtract_constant_30_let)[ax3_1]);
      }
    }
  }
  for (int32_t i1_1 = 0; i1_1 < 4; ++i1_1) {
    for (int32_t i2_1 = 0; i2_1 < 4; ++i2_1) {
      for (int32_t i3_1 = 0; i3_1 < 192; ++i3_1) {
        int32_t cse_var_7 = (((i1_1 * 768) + (i2_1 * 192)) + i3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_7] = ((int32_t)(((((int64_t)((int32_t*)DepthwiseConv2d_let)[cse_var_7]) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_90_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_92_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_92_let)[i3_1] + 31))));
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
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_28(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_130_var, uint8_t* global_workspace_131_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED v8 HW-REQUANT] 1x1 conv: 32->192 channels, 16 spatial positions
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_130_var[533584]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_130_var[535120]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_130_var[544336]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_130_var[528976]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_130_var[359296]);

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

  void* fused_nn_conv2d_subtract_add_constant_95_let = (&(global_const_workspace_130_var[533584]));
  void* fused_nn_conv2d_subtract_add_constant_94_let = (&(global_const_workspace_130_var[534352]));
  void* fused_nn_conv2d_subtract_add_constant_93_let = (&(global_const_workspace_130_var[535120]));
  void* fused_nn_conv2d_constant_32_let = (&(global_const_workspace_130_var[544336]));
  void* fused_nn_conv2d_subtract_constant_31_let = (&(global_const_workspace_130_var[528976]));
  void* fused_constant_40_let = (&(global_const_workspace_130_var[359296]));
  void* pad_temp_let = (&(global_workspace_131_var[19712]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 4; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 4; ++i2) {
      for (int32_t i3 = 0; i3 < 32; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 128) + (i2 * 32)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 16; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_131_var[20224]));
    for (int32_t ax3_outer = 0; ax3_outer < 3; ++ax3_outer) {
      for (int32_t ff = 0; ff < 64; ++ff) {
        ((int32_t*)conv2d_nhwc_let)[ff] = 0;
        for (int32_t rc = 0; rc < 32; ++rc) {
          ((int32_t*)conv2d_nhwc_let)[ff] = (((int32_t*)conv2d_nhwc_let)[ff] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 32) + rc)]) * ((int32_t)((int8_t*)fused_constant_40_let)[(((rc * 192) + (ax3_outer * 64)) + ff)])));
        }
      }
      for (int32_t ax3_inner = 0; ax3_inner < 64; ++ax3_inner) {
        int32_t cse_var_3 = (ax3_outer * 64);
        int32_t cse_var_2 = (cse_var_3 + ax3_inner);
        int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[ax3_inner] + ((int32_t*)fused_nn_conv2d_subtract_constant_31_let)[cse_var_2]) - ((int32_t*)fused_nn_conv2d_constant_32_let)[cse_var_2])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_93_let)[cse_var_2])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_95_let)[cse_var_2] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_95_let)[cse_var_2] + 31)))) - 128;
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
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_29(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_132_var, uint8_t* global_workspace_133_var) {
  void* fused_nn_conv2d_subtract_add_constant_98_let = (&(global_const_workspace_132_var[531280]));
  void* fused_nn_conv2d_subtract_add_constant_97_let = (&(global_const_workspace_132_var[532048]));
  void* fused_nn_conv2d_subtract_add_constant_96_let = (&(global_const_workspace_132_var[532816]));
  void* fused_nn_conv2d_subtract_constant_32_let = (&(global_const_workspace_132_var[528208]));
  void* fused_nn_conv2d_constant_33_let = (&(global_const_workspace_132_var[543568]));
  void* fused_constant_41_let = (&(global_const_workspace_132_var[468784]));
  void* PaddedInput_let = (&(global_workspace_133_var[12288]));
  void* DepthwiseConv2d_let = (&(global_workspace_133_var[0]));
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
            ((int32_t*)DepthwiseConv2d_let)[cse_var_2] = (((int32_t*)DepthwiseConv2d_let)[cse_var_2] + (((int32_t)((int8_t*)PaddedInput_let)[(((((i * 1152) + (di * 1152)) + cse_var_4) + cse_var_3) + c)]) * ((int32_t)((int8_t*)fused_constant_41_let)[(((di * 576) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 4; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 4; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 192; ++ax3) {
        int32_t cse_var_5 = (((ax1 * 768) + (ax2 * 192)) + ax3);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_5] = (((int32_t*)DepthwiseConv2d_let)[cse_var_5] - ((int32_t*)fused_nn_conv2d_constant_33_let)[ax3]);
      }
    }
  }
  for (int32_t ax1_1 = 0; ax1_1 < 4; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 4; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 192; ++ax3_1) {
        int32_t cse_var_6 = (((ax1_1 * 768) + (ax2_1 * 192)) + ax3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_6] = (((int32_t*)DepthwiseConv2d_let)[cse_var_6] + ((int32_t*)fused_nn_conv2d_subtract_constant_32_let)[ax3_1]);
      }
    }
  }
  for (int32_t i1_1 = 0; i1_1 < 4; ++i1_1) {
    for (int32_t i2_1 = 0; i2_1 < 4; ++i2_1) {
      for (int32_t i3_1 = 0; i3_1 < 192; ++i3_1) {
        int32_t cse_var_7 = (((i1_1 * 768) + (i2_1 * 192)) + i3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_7] = ((int32_t)(((((int64_t)((int32_t*)DepthwiseConv2d_let)[cse_var_7]) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_96_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_98_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_98_let)[i3_1] + 31))));
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
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_12_var[604272]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_12_var[601200]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_12_var[605616]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_12_var[601008]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_12_var[594384]);

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

  void* fused_nn_conv2d_subtract_add_constant_11_let = (&(global_const_workspace_12_var[604272]));
  void* fused_nn_conv2d_subtract_add_constant_10_let = (&(global_const_workspace_12_var[604464]));
  void* fused_nn_conv2d_subtract_add_constant_9_let = (&(global_const_workspace_12_var[601200]));
  void* fused_nn_conv2d_constant_3_let = (&(global_const_workspace_12_var[605616]));
  void* fused_nn_conv2d_subtract_constant_3_let = (&(global_const_workspace_12_var[601008]));
  void* fused_constant_3_let = (&(global_const_workspace_12_var[594384]));
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
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_30(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_136_var, uint8_t* global_workspace_137_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED v8 HW-REQUANT] 1x1 conv: 32->192 channels, 16 spatial positions
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_136_var[540496]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_136_var[530512]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_136_var[542800]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_136_var[527440]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_136_var[353152]);

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

  void* fused_nn_conv2d_subtract_add_constant_101_let = (&(global_const_workspace_136_var[540496]));
  void* fused_nn_conv2d_subtract_add_constant_100_let = (&(global_const_workspace_136_var[541264]));
  void* fused_nn_conv2d_subtract_add_constant_99_let = (&(global_const_workspace_136_var[530512]));
  void* fused_nn_conv2d_constant_34_let = (&(global_const_workspace_136_var[542800]));
  void* fused_nn_conv2d_subtract_constant_33_let = (&(global_const_workspace_136_var[527440]));
  void* fused_constant_42_let = (&(global_const_workspace_136_var[353152]));
  void* pad_temp_let = (&(global_workspace_137_var[20224]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 4; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 4; ++i2) {
      for (int32_t i3 = 0; i3 < 32; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 128) + (i2 * 32)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 16; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_137_var[20736]));
    for (int32_t ax3_outer = 0; ax3_outer < 3; ++ax3_outer) {
      for (int32_t ff = 0; ff < 64; ++ff) {
        ((int32_t*)conv2d_nhwc_let)[ff] = 0;
        for (int32_t rc = 0; rc < 32; ++rc) {
          ((int32_t*)conv2d_nhwc_let)[ff] = (((int32_t*)conv2d_nhwc_let)[ff] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 32) + rc)]) * ((int32_t)((int8_t*)fused_constant_42_let)[(((rc * 192) + (ax3_outer * 64)) + ff)])));
        }
      }
      for (int32_t ax3_inner = 0; ax3_inner < 64; ++ax3_inner) {
        int32_t cse_var_3 = (ax3_outer * 64);
        int32_t cse_var_2 = (cse_var_3 + ax3_inner);
        int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[ax3_inner] + ((int32_t*)fused_nn_conv2d_subtract_constant_33_let)[cse_var_2]) - ((int32_t*)fused_nn_conv2d_constant_34_let)[cse_var_2])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_99_let)[cse_var_2])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_101_let)[cse_var_2] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_101_let)[cse_var_2] + 31)))) - 128;
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
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_31(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_140_var, uint8_t* global_workspace_141_var) {
  void* fused_nn_conv2d_subtract_add_constant_104_let = (&(global_const_workspace_140_var[538192]));
  void* fused_nn_conv2d_subtract_add_constant_103_let = (&(global_const_workspace_140_var[538960]));
  void* fused_nn_conv2d_subtract_add_constant_102_let = (&(global_const_workspace_140_var[539728]));
  void* fused_nn_conv2d_subtract_constant_34_let = (&(global_const_workspace_140_var[526672]));
  void* fused_nn_conv2d_constant_35_let = (&(global_const_workspace_140_var[542032]));
  void* fused_constant_43_let = (&(global_const_workspace_140_var[467056]));
  void* PaddedInput_let = (&(global_workspace_141_var[4800]));
  void* DepthwiseConv2d_let = (&(global_workspace_141_var[9600]));
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
            ((int32_t*)DepthwiseConv2d_let)[cse_var_2] = (((int32_t*)DepthwiseConv2d_let)[cse_var_2] + (((int32_t)((int8_t*)PaddedInput_let)[(((((i * 1920) + (di * 960)) + (j * 384)) + cse_var_3) + c)]) * ((int32_t)((int8_t*)fused_constant_43_let)[(((di * 576) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 2; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 2; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 192; ++ax3) {
        int32_t cse_var_4 = (((ax1 * 384) + (ax2 * 192)) + ax3);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_4] = (((int32_t*)DepthwiseConv2d_let)[cse_var_4] - ((int32_t*)fused_nn_conv2d_constant_35_let)[ax3]);
      }
    }
  }
  for (int32_t ax1_1 = 0; ax1_1 < 2; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 2; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 192; ++ax3_1) {
        int32_t cse_var_5 = (((ax1_1 * 384) + (ax2_1 * 192)) + ax3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_5] = (((int32_t*)DepthwiseConv2d_let)[cse_var_5] + ((int32_t*)fused_nn_conv2d_subtract_constant_34_let)[ax3_1]);
      }
    }
  }
  for (int32_t i1_1 = 0; i1_1 < 2; ++i1_1) {
    for (int32_t i2_1 = 0; i2_1 < 2; ++i2_1) {
      for (int32_t i3_1 = 0; i3_1 < 192; ++i3_1) {
        int32_t cse_var_6 = (((i1_1 * 384) + (i2_1 * 192)) + i3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_6] = ((int32_t)(((((int64_t)((int32_t*)DepthwiseConv2d_let)[cse_var_6]) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_102_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_104_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_104_let)[i3_1] + 31))));
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
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_32(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_148_var, uint8_t* global_workspace_149_var) {
  void* fused_nn_conv2d_subtract_add_constant_110_let = (&(global_const_workspace_148_var[502768]));
  void* fused_nn_conv2d_subtract_add_constant_109_let = (&(global_const_workspace_148_var[504112]));
  void* fused_nn_conv2d_subtract_add_constant_108_let = (&(global_const_workspace_148_var[505456]));
  void* fused_nn_conv2d_subtract_constant_36_let = (&(global_const_workspace_148_var[485296]));
  void* fused_nn_conv2d_constant_38_let = (&(global_const_workspace_148_var[512176]));
  void* fused_constant_46_let = (&(global_const_workspace_148_var[457632]));
  void* PaddedInput_let = (&(global_workspace_149_var[5376]));
  void* DepthwiseConv2d_let = (&(global_workspace_149_var[10752]));
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
            ((int32_t*)DepthwiseConv2d_let)[cse_var_2] = (((int32_t*)DepthwiseConv2d_let)[cse_var_2] + (((int32_t)((int8_t*)PaddedInput_let)[(((((i * 1344) + (di * 1344)) + cse_var_4) + cse_var_3) + c)]) * ((int32_t)((int8_t*)fused_constant_46_let)[(((di * 1008) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 2; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 2; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 336; ++ax3) {
        int32_t cse_var_5 = (((ax1 * 672) + (ax2 * 336)) + ax3);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_5] = (((int32_t*)DepthwiseConv2d_let)[cse_var_5] - ((int32_t*)fused_nn_conv2d_constant_38_let)[ax3]);
      }
    }
  }
  for (int32_t ax1_1 = 0; ax1_1 < 2; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 2; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 336; ++ax3_1) {
        int32_t cse_var_6 = (((ax1_1 * 672) + (ax2_1 * 336)) + ax3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_6] = (((int32_t*)DepthwiseConv2d_let)[cse_var_6] + ((int32_t*)fused_nn_conv2d_subtract_constant_36_let)[ax3_1]);
      }
    }
  }
  for (int32_t i1_1 = 0; i1_1 < 2; ++i1_1) {
    for (int32_t i2_1 = 0; i2_1 < 2; ++i2_1) {
      for (int32_t i3_1 = 0; i3_1 < 336; ++i3_1) {
        int32_t cse_var_7 = (((i1_1 * 672) + (i2_1 * 336)) + i3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_7] = ((int32_t)(((((int64_t)((int32_t*)DepthwiseConv2d_let)[cse_var_7]) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_108_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_110_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_110_let)[i3_1] + 31))));
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
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_33(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_152_var, uint8_t* global_workspace_153_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED v8 HW-REQUANT] 1x1 conv: 56->336 channels, 4 spatial positions
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_152_var[498736]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_152_var[501424]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_152_var[510832]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_152_var[483952]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_152_var[199808]);

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

  void* fused_nn_conv2d_subtract_add_constant_113_let = (&(global_const_workspace_152_var[498736]));
  void* fused_nn_conv2d_subtract_add_constant_112_let = (&(global_const_workspace_152_var[500080]));
  void* fused_nn_conv2d_subtract_add_constant_111_let = (&(global_const_workspace_152_var[501424]));
  void* fused_nn_conv2d_constant_39_let = (&(global_const_workspace_152_var[510832]));
  void* fused_nn_conv2d_subtract_constant_37_let = (&(global_const_workspace_152_var[483952]));
  void* fused_constant_47_let = (&(global_const_workspace_152_var[199808]));
  void* pad_temp_let = (&(global_workspace_153_var[26048]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 2; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 2; ++i2) {
      for (int32_t i3 = 0; i3 < 56; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 112) + (i2 * 56)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 4; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_153_var[26272]));
    for (int32_t ax3 = 0; ax3 < 336; ++ax3) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 56; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 56) + rc)]) * ((int32_t)((int8_t*)fused_constant_47_let)[((rc * 336) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_37_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_39_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_111_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_113_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_113_let)[ax3] + 31)))) - 128;
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
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_34(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_156_var, uint8_t* global_workspace_157_var) {
  void* fused_nn_conv2d_subtract_add_constant_116_let = (&(global_const_workspace_156_var[494704]));
  void* fused_nn_conv2d_subtract_add_constant_115_let = (&(global_const_workspace_156_var[496048]));
  void* fused_nn_conv2d_subtract_add_constant_114_let = (&(global_const_workspace_156_var[497392]));
  void* fused_nn_conv2d_subtract_constant_38_let = (&(global_const_workspace_156_var[482608]));
  void* fused_nn_conv2d_constant_40_let = (&(global_const_workspace_156_var[509488]));
  void* fused_constant_48_let = (&(global_const_workspace_156_var[454608]));
  void* PaddedInput_let = (&(global_workspace_157_var[5376]));
  void* DepthwiseConv2d_let = (&(global_workspace_157_var[10752]));
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
        ((int32_t*)DepthwiseConv2d_let)[cse_var_6] = (((int32_t*)DepthwiseConv2d_let)[cse_var_6] + ((int32_t*)fused_nn_conv2d_subtract_constant_38_let)[ax3_1]);
      }
    }
  }
  for (int32_t i1_1 = 0; i1_1 < 2; ++i1_1) {
    for (int32_t i2_1 = 0; i2_1 < 2; ++i2_1) {
      for (int32_t i3_1 = 0; i3_1 < 336; ++i3_1) {
        int32_t cse_var_7 = (((i1_1 * 672) + (i2_1 * 336)) + i3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_7] = ((int32_t)(((((int64_t)((int32_t*)DepthwiseConv2d_let)[cse_var_7]) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_114_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_116_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_116_let)[i3_1] + 31))));
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
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_35(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_160_var, uint8_t* global_workspace_161_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED v8 HW-REQUANT] 1x1 conv: 56->336 channels, 4 spatial positions
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_160_var[490672]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_160_var[493360]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_160_var[508144]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_160_var[481264]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_160_var[180992]);

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

  void* fused_nn_conv2d_subtract_add_constant_119_let = (&(global_const_workspace_160_var[490672]));
  void* fused_nn_conv2d_subtract_add_constant_118_let = (&(global_const_workspace_160_var[492016]));
  void* fused_nn_conv2d_subtract_add_constant_117_let = (&(global_const_workspace_160_var[493360]));
  void* fused_nn_conv2d_constant_41_let = (&(global_const_workspace_160_var[508144]));
  void* fused_nn_conv2d_subtract_constant_39_let = (&(global_const_workspace_160_var[481264]));
  void* fused_constant_49_let = (&(global_const_workspace_160_var[180992]));
  void* pad_temp_let = (&(global_workspace_161_var[26272]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 2; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 2; ++i2) {
      for (int32_t i3 = 0; i3 < 56; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 112) + (i2 * 56)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 4; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_161_var[26496]));
    for (int32_t ax3 = 0; ax3 < 336; ++ax3) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 56; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 56) + rc)]) * ((int32_t)((int8_t*)fused_constant_49_let)[((rc * 336) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_39_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_41_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_117_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_119_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_119_let)[ax3] + 31)))) - 128;
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
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_36(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_162_var, uint8_t* global_workspace_163_var) {
  void* fused_nn_conv2d_subtract_add_constant_122_let = (&(global_const_workspace_162_var[486640]));
  void* fused_nn_conv2d_subtract_add_constant_121_let = (&(global_const_workspace_162_var[487984]));
  void* fused_nn_conv2d_subtract_add_constant_120_let = (&(global_const_workspace_162_var[489328]));
  void* fused_nn_conv2d_subtract_constant_40_let = (&(global_const_workspace_162_var[479920]));
  void* fused_nn_conv2d_constant_42_let = (&(global_const_workspace_162_var[506800]));
  void* fused_constant_50_let = (&(global_const_workspace_162_var[451584]));
  void* PaddedInput_let = (&(global_workspace_163_var[5376]));
  void* DepthwiseConv2d_let = (&(global_workspace_163_var[10752]));
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
        ((int32_t*)DepthwiseConv2d_let)[cse_var_6] = (((int32_t*)DepthwiseConv2d_let)[cse_var_6] + ((int32_t*)fused_nn_conv2d_subtract_constant_40_let)[ax3_1]);
      }
    }
  }
  for (int32_t i1_1 = 0; i1_1 < 2; ++i1_1) {
    for (int32_t i2_1 = 0; i2_1 < 2; ++i2_1) {
      for (int32_t i3_1 = 0; i3_1 < 336; ++i3_1) {
        int32_t cse_var_7 = (((i1_1 * 672) + (i2_1 * 336)) + i3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_7] = ((int32_t)(((((int64_t)((int32_t*)DepthwiseConv2d_let)[cse_var_7]) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_120_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_122_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_122_let)[i3_1] + 31))));
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
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_37(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_164_var, uint8_t* global_workspace_165_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED v8 HW-REQUANT] 1x1 conv: 336->112 channels, 4 spatial positions
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_164_var[578192]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_164_var[579088]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_164_var[579536]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_164_var[577744]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_164_var[143360]);

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

  void* fused_nn_conv2d_subtract_add_constant_125_let = (&(global_const_workspace_164_var[578192]));
  void* fused_nn_conv2d_subtract_add_constant_124_let = (&(global_const_workspace_164_var[578640]));
  void* fused_nn_conv2d_subtract_add_constant_123_let = (&(global_const_workspace_164_var[579088]));
  void* fused_nn_conv2d_constant_43_let = (&(global_const_workspace_164_var[579536]));
  void* fused_nn_conv2d_subtract_constant_41_let = (&(global_const_workspace_164_var[577744]));
  void* fused_constant_51_let = (&(global_const_workspace_164_var[143360]));
  void* pad_temp_let = (&(global_workspace_165_var[0]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 2; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 2; ++i2) {
      for (int32_t i3 = 0; i3 < 336; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 672) + (i2 * 336)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 4; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_165_var[25824]));
    for (int32_t ax3 = 0; ax3 < 112; ++ax3) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 336; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 336) + rc)]) * ((int32_t)((int8_t*)fused_constant_51_let)[((rc * 112) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_41_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_43_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_123_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_125_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_125_let)[ax3] + 31)))) - 3;
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
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_4(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_16_var, uint8_t* global_workspace_17_var) {
  void* fused_nn_conv2d_subtract_add_constant_14_let = (&(global_const_workspace_16_var[603696]));
  void* fused_nn_conv2d_subtract_add_constant_13_let = (&(global_const_workspace_16_var[603888]));
  void* fused_nn_conv2d_subtract_add_constant_12_let = (&(global_const_workspace_16_var[604080]));
  void* fused_nn_conv2d_subtract_constant_4_let = (&(global_const_workspace_16_var[600816]));
  void* fused_nn_conv2d_constant_4_let = (&(global_const_workspace_16_var[605424]));
  void* fused_constant_4_let = (&(global_const_workspace_16_var[580848]));
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
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_18_var[614496]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_18_var[614560]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_18_var[614592]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_18_var[614336]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_18_var[594000]);

  // Safe copy: TVM may alias input/output workspace buffers
  static int8_t _inp[12288];
  for (int32_t _i = 0; _i < 12288; _i++) _inp[_i] = p0[_i];

  // Set per-layer zero-point once. The helper is provided by conv_accel.h.
  accel_set_output_zp(-22);

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

  void* fused_nn_conv2d_subtract_add_constant_17_let = (&(global_const_workspace_18_var[614496]));
  void* fused_nn_conv2d_subtract_add_constant_16_let = (&(global_const_workspace_18_var[614528]));
  void* fused_nn_conv2d_subtract_add_constant_15_let = (&(global_const_workspace_18_var[614560]));
  void* fused_nn_conv2d_constant_5_let = (&(global_const_workspace_18_var[614592]));
  void* fused_nn_conv2d_subtract_constant_5_let = (&(global_const_workspace_18_var[614336]));
  void* fused_constant_5_let = (&(global_const_workspace_18_var[594000]));
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
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_5_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_5_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_15_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_17_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_17_let)[ax3] + 31)))) - 22;
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
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_20_var[603120]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_20_var[603504]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_20_var[605232]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_20_var[600624]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_20_var[593616]);

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

  void* fused_nn_conv2d_subtract_add_constant_20_let = (&(global_const_workspace_20_var[603120]));
  void* fused_nn_conv2d_subtract_add_constant_19_let = (&(global_const_workspace_20_var[603312]));
  void* fused_nn_conv2d_subtract_add_constant_18_let = (&(global_const_workspace_20_var[603504]));
  void* fused_nn_conv2d_constant_6_let = (&(global_const_workspace_20_var[605232]));
  void* fused_nn_conv2d_subtract_constant_6_let = (&(global_const_workspace_20_var[600624]));
  void* fused_constant_6_let = (&(global_const_workspace_20_var[593616]));
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
  void* fused_nn_conv2d_subtract_add_constant_23_let = (&(global_const_workspace_24_var[602544]));
  void* fused_nn_conv2d_subtract_add_constant_22_let = (&(global_const_workspace_24_var[602736]));
  void* fused_nn_conv2d_subtract_add_constant_21_let = (&(global_const_workspace_24_var[602928]));
  void* fused_nn_conv2d_subtract_constant_7_let = (&(global_const_workspace_24_var[600432]));
  void* fused_nn_conv2d_constant_7_let = (&(global_const_workspace_24_var[605040]));
  void* fused_constant_7_let = (&(global_const_workspace_24_var[580416]));
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
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_28_var[601968]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_28_var[602352]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_28_var[604848]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_28_var[600240]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_28_var[593232]);

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

  void* fused_nn_conv2d_subtract_add_constant_26_let = (&(global_const_workspace_28_var[601968]));
  void* fused_nn_conv2d_subtract_add_constant_25_let = (&(global_const_workspace_28_var[602160]));
  void* fused_nn_conv2d_subtract_add_constant_24_let = (&(global_const_workspace_28_var[602352]));
  void* fused_nn_conv2d_constant_8_let = (&(global_const_workspace_28_var[604848]));
  void* fused_nn_conv2d_subtract_constant_8_let = (&(global_const_workspace_28_var[600240]));
  void* fused_constant_8_let = (&(global_const_workspace_28_var[593232]));
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
  void* fused_nn_conv2d_subtract_add_constant_29_let = (&(global_const_workspace_32_var[601392]));
  void* fused_nn_conv2d_subtract_add_constant_28_let = (&(global_const_workspace_32_var[601584]));
  void* fused_nn_conv2d_subtract_add_constant_27_let = (&(global_const_workspace_32_var[601776]));
  void* fused_nn_conv2d_subtract_constant_9_let = (&(global_const_workspace_32_var[600048]));
  void* fused_nn_conv2d_constant_9_let = (&(global_const_workspace_32_var[604656]));
  void* fused_constant_9_let = (&(global_const_workspace_32_var[579984]));
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
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_clip_cast(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_120_var, uint8_t* global_workspace_121_var) {
  void* fused_nn_conv2d_subtract_add_constant_89_let = (&(global_const_workspace_120_var[606336]));
  void* fused_nn_conv2d_subtract_add_constant_88_let = (&(global_const_workspace_120_var[606464]));
  void* fused_nn_conv2d_subtract_add_constant_87_let = (&(global_const_workspace_120_var[606592]));
  void* fused_nn_conv2d_constant_29_let = (&(global_const_workspace_120_var[607616]));
  void* fused_nn_conv2d_subtract_constant_29_let = (&(global_const_workspace_120_var[605952]));
  void* fused_constant_37_let = (&(global_const_workspace_120_var[414080]));
  void* pad_temp_let = (&(global_workspace_121_var[0]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 4; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 4; ++i2) {
      for (int32_t i3 = 0; i3 < 144; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 576) + (i2 * 144)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 16; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_121_var[20224]));
    for (int32_t ax3 = 0; ax3 < 32; ++ax3) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 144; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 144) + rc)]) * ((int32_t)((int8_t*)fused_constant_37_let)[((rc * 32) + ax3)])));
      }
      int32_t v_ = (int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_29_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_29_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_87_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_89_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_89_let)[ax3] + 31)));
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_cast[((ax0_ax1_fused_ax2_fused * 32) + ax3)] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_clip_cast_1(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_142_var, uint8_t* global_workspace_143_var) {
  void* fused_nn_conv2d_subtract_add_constant_107_let = (&(global_const_workspace_142_var[596912]));
  void* fused_nn_conv2d_subtract_add_constant_106_let = (&(global_const_workspace_142_var[597136]));
  void* fused_nn_conv2d_subtract_add_constant_105_let = (&(global_const_workspace_142_var[597360]));
  void* fused_nn_conv2d_constant_36_let = (&(global_const_workspace_142_var[597584]));
  void* fused_nn_conv2d_subtract_constant_35_let = (&(global_const_workspace_142_var[596688]));
  void* fused_constant_44_let = (&(global_const_workspace_142_var[304000]));
  void* pad_temp_let = (&(global_workspace_143_var[0]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 2; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 2; ++i2) {
      for (int32_t i3 = 0; i3 < 192; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 384) + (i2 * 192)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 4; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_143_var[25824]));
    for (int32_t ax3 = 0; ax3 < 56; ++ax3) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 192; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 192) + rc)]) * ((int32_t)((int8_t*)fused_constant_44_let)[((rc * 56) + ax3)])));
      }
      int32_t v_ = (int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_35_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_36_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_105_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_107_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_107_let)[ax3] + 31)));
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
TVM_DLL int32_t tvmgen_default_fused_nn_pad_10(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_116_var, uint8_t* global_workspace_117_var) {
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
TVM_DLL int32_t tvmgen_default_fused_nn_pad_11(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_124_var, uint8_t* global_workspace_125_var) {
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
TVM_DLL int32_t tvmgen_default_fused_nn_pad_12(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_138_var, uint8_t* global_workspace_139_var) {
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
TVM_DLL int32_t tvmgen_default_fused_nn_pad_13(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_146_var, uint8_t* global_workspace_147_var) {
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
TVM_DLL int32_t tvmgen_default_fused_nn_pad_14(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_154_var, uint8_t* global_workspace_155_var) {
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
TVM_DLL int32_t tvmgen_default_fused_nn_pad_15(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_176_var, uint8_t* global_workspace_177_var) {
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 4; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 4; ++ax2) {
      for (int32_t ax3_outer = 0; ax3_outer < 4; ++ax3_outer) {
        for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
          if (((ax3_outer * 2) + (ax3_inner >> 3)) < 7) {
            int32_t cse_var_2 = (ax2 * 56);
            int32_t cse_var_1 = (ax3_outer * 16);
            T_pad[((((ax0_ax1_fused * 224) + cse_var_2) + cse_var_1) + ax3_inner)] = (((((1 <= ax0_ax1_fused) && (ax0_ax1_fused < 3)) && (1 <= ax2)) && (ax2 < 3)) ? p0[(((((ax0_ax1_fused * 112) + cse_var_2) + cse_var_1) + ax3_inner) - 168)] : (int8_t)0);
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
TVM_DLL int32_t tvmgen_default_fused_nn_pad_16(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_180_var, uint8_t* global_workspace_181_var) {
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 4; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 4; ++ax2) {
      for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
        for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
          int32_t cse_var_2 = (ax2 * 32);
          int32_t cse_var_1 = (ax3_outer * 16);
          T_pad[((((ax0_ax1_fused * 128) + cse_var_2) + cse_var_1) + ax3_inner)] = (((((1 <= ax0_ax1_fused) && (ax0_ax1_fused < 3)) && (1 <= ax2)) && (ax2 < 3)) ? p0[(((((ax0_ax1_fused * 64) + cse_var_2) + cse_var_1) + ax3_inner) - 96)] : (int8_t)-128);
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
TVM_DLL int32_t tvmgen_default_fused_nn_pad_4(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_38_var, uint8_t* global_workspace_39_var) {
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
TVM_DLL int32_t tvmgen_default_fused_nn_pad_5(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_52_var, uint8_t* global_workspace_53_var) {
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
TVM_DLL int32_t tvmgen_default_fused_nn_pad_6(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_58_var, uint8_t* global_workspace_59_var) {
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 6; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 6; ++ax2) {
      for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
        for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
          if (((ax3_outer * 2) + (ax3_inner >> 3)) < 3) {
            int32_t cse_var_2 = (ax2 * 24);
            int32_t cse_var_1 = (ax3_outer * 16);
            T_pad[((((ax0_ax1_fused * 144) + cse_var_2) + cse_var_1) + ax3_inner)] = (((((1 <= ax0_ax1_fused) && (ax0_ax1_fused < 5)) && (1 <= ax2)) && (ax2 < 5)) ? p0[(((((ax0_ax1_fused * 96) + cse_var_2) + cse_var_1) + ax3_inner) - 120)] : (int8_t)10);
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
TVM_DLL int32_t tvmgen_default_fused_nn_pad_7(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_76_var, uint8_t* global_workspace_77_var) {
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
TVM_DLL int32_t tvmgen_default_fused_nn_pad_8(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_94_var, uint8_t* global_workspace_95_var) {
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 6; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 6; ++ax2) {
      for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
        for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
          if (((ax3_outer * 2) + (ax3_inner >> 3)) < 3) {
            int32_t cse_var_2 = (ax2 * 24);
            int32_t cse_var_1 = (ax3_outer * 16);
            T_pad[((((ax0_ax1_fused * 144) + cse_var_2) + cse_var_1) + ax3_inner)] = (((((1 <= ax0_ax1_fused) && (ax0_ax1_fused < 5)) && (1 <= ax2)) && (ax2 < 5)) ? p0[(((((ax0_ax1_fused * 96) + cse_var_2) + cse_var_1) + ax3_inner) - 120)] : (int8_t)-8);
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
TVM_DLL int32_t tvmgen_default_fused_nn_pad_9(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_98_var, uint8_t* global_workspace_99_var) {
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
TVM_DLL int32_t tvmgen_default_fused_nn_softmax_divide_round_add_clip_cast_subtract_cast_multiply(float* p0, float* T_multiply, uint8_t* global_const_workspace_72_var, uint8_t* global_workspace_73_var) {
  void* T_softmax_maxelem_let = (&(global_workspace_73_var[15056]));
  void* T_softmax_exp_let = (&(global_workspace_73_var[15016]));
  void* T_softmax_expsum_let = (&(global_workspace_73_var[15056]));
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
TVM_DLL int32_t tvmgen_default_fused_nn_softmax_divide_round_add_clip_cast_subtract_cast_multiply_1(float* p0, float* T_multiply, uint8_t* global_const_workspace_112_var, uint8_t* global_workspace_113_var) {
  void* T_softmax_maxelem_let = (&(global_workspace_113_var[3472]));
  void* T_softmax_exp_let = (&(global_workspace_113_var[3432]));
  void* T_softmax_expsum_let = (&(global_workspace_113_var[3472]));
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
TVM_DLL int32_t tvmgen_default_fused_nn_softmax_divide_round_add_clip_cast_subtract_cast_multiply_2(float* p0, float* T_multiply, uint8_t* global_const_workspace_174_var, uint8_t* global_workspace_175_var) {
  void* T_softmax_maxelem_let = (&(global_workspace_175_var[25904]));
  void* T_softmax_exp_let = (&(global_workspace_175_var[25864]));
  void* T_softmax_expsum_let = (&(global_workspace_175_var[25904]));
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
TVM_DLL int32_t tvmgen_default_fused_nn_softmax_divide_round_add_clip_cast_subtract_cast_multiply_3(float* p0, float* T_multiply, uint8_t* global_const_workspace_194_var, uint8_t* global_workspace_195_var) {
  void* T_softmax_maxelem_let = (&(global_workspace_195_var[272]));
  void* T_softmax_exp_let = (&(global_workspace_195_var[232]));
  void* T_softmax_expsum_let = (&(global_workspace_195_var[272]));
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
TVM_DLL int32_t tvmgen_default_fused_subtract_add_clip_cast_reshape(int32_t* p0, int8_t* T_reshape, uint8_t* global_const_workspace_170_var, uint8_t* global_workspace_171_var) {
  void* fused_constant_53_let = (&(global_const_workspace_170_var[614832]));
  for (int32_t ax1_outer = 0; ax1_outer < 80; ++ax1_outer) {
    for (int32_t ax1_inner = 0; ax1_inner < 16; ++ax1_inner) {
      int32_t cse_var_1 = ((ax1_outer * 16) + ax1_inner);
      int32_t v_ = (p0[cse_var_1] - ((int32_t*)fused_constant_53_let)[0]) - 128;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_reshape[cse_var_1] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_fixed_point_multiply_add_clip_cast_reshape(int32_t* p0, int8_t* T_reshape, uint8_t* global_const_workspace_64_var, uint8_t* global_workspace_65_var) {
  void* fused_constant_19_let = (&(global_const_workspace_64_var[614864]));
  for (int32_t ax1_outer = 0; ax1_outer < 2; ++ax1_outer) {
    for (int32_t ax1_inner = 0; ax1_inner < 16; ++ax1_inner) {
      int32_t cse_var_1 = ((ax1_outer * 16) + ax1_inner);
      int32_t v_ = ((int32_t)(((((2 != 0) ? (((int64_t)(p0[cse_var_1] - ((int32_t*)fused_constant_19_let)[0])) << ((int64_t)2)) : ((int64_t)(p0[cse_var_1] - ((int32_t*)fused_constant_19_let)[0]))) * (int64_t)1733772006) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31)))) - 128;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_reshape[cse_var_1] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_fixed_point_multiply_add_clip_cast_reshape_1(int32_t* p0, int8_t* T_reshape, uint8_t* global_const_workspace_104_var, uint8_t* global_workspace_105_var) {
  void* fused_constant_31_let = (&(global_const_workspace_104_var[614848]));
  for (int32_t ax1_inner = 0; ax1_inner < 16; ++ax1_inner) {
    int32_t v_ = ((int32_t)(((((2 != 0) ? (((int64_t)(p0[ax1_inner] - ((int32_t*)fused_constant_31_let)[0])) << ((int64_t)2)) : ((int64_t)(p0[ax1_inner] - ((int32_t*)fused_constant_31_let)[0]))) * (int64_t)1415154739) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31)))) - 128;
    int32_t v__1 = (v_) < (127) ? (v_) : (127);
    T_reshape[ax1_inner] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_fixed_point_multiply_add_clip_cast_reshape_2(int32_t* p0, int8_t* T_reshape, uint8_t* global_const_workspace_186_var, uint8_t* global_workspace_187_var) {
  void* fused_constant_57_let = (&(global_const_workspace_186_var[614816]));
  for (int32_t ax1_inner = 0; ax1_inner < 16; ++ax1_inner) {
    int32_t v_ = ((int32_t)(((((1 != 0) ? (((int64_t)(p0[ax1_inner] - ((int32_t*)fused_constant_57_let)[0])) << ((int64_t)1)) : ((int64_t)(p0[ax1_inner] - ((int32_t*)fused_constant_57_let)[0]))) * (int64_t)1849806406) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31)))) - 128;
    int32_t v__1 = (v_) < (127) ? (v_) : (127);
    T_reshape[ax1_inner] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default___tvm_main__(float* serving_default_input_0_buffer_var, float* StatefulPartitionedCall_1_buffer_var, float* StatefulPartitionedCall_2_buffer_var, float* StatefulPartitionedCall_0_buffer_var, float* StatefulPartitionedCall_3_buffer_var, uint8_t* global_const_workspace_0_var, uint8_t* global_workspace_1_var) {
  void* sid_97_let = (&(global_workspace_1_var[0]));
  void* sid_95_let = (&(global_workspace_1_var[512]));
  void* sid_89_let = (&(global_workspace_1_var[0]));
  void* sid_84_let = (&(global_workspace_1_var[5376]));
  void* sid_91_let = (&(global_workspace_1_var[25824]));
  void* sid_76_let = (&(global_workspace_1_var[5376]));
  void* sid_75_let = (&(((uint8_t*)(*BB_GLOBAL_WS_ADDR))[25600]));
  void* sid_74_let = (&(global_workspace_1_var[12672]));
  void* sid_73_let = (&(global_workspace_1_var[0]));
  void* sid_87_let = (&(global_workspace_1_var[1344]));
  void* sid_65_let = (&(global_workspace_1_var[0]));
  void* sid_64_let = (&(global_workspace_1_var[6912]));
  void* sid_68_let = (&(global_workspace_1_var[6912]));
  void* sid_62_let = (&(global_workspace_1_var[9216]));
  void* sid_60_let = (&(global_workspace_1_var[5184]));
  void* sid_88_let = (&(global_workspace_1_var[0]));
  void* sid_58_let = (&(global_workspace_1_var[3392]));
  void* sid_96_let = (&(global_workspace_1_var[512]));
  void* sid_44_let = (&(global_workspace_1_var[9216]));
  void* sid_80_let = (&(global_workspace_1_var[5376]));
  void* sid_54_let = (&(global_workspace_1_var[3200]));
  void* sid_53_let = (&(global_workspace_1_var[1152]));
  void* sid_49_let = (&(((uint8_t*)(*BB_GLOBAL_WS_ADDR))[2816]));
  void* sid_93_let = (&(global_workspace_1_var[896]));
  void* sid_48_let = (&(global_workspace_1_var[9216]));
  void* sid_78_let = (&(global_workspace_1_var[16128]));
  void* sid_77_let = (&(global_workspace_1_var[0]));
  void* sid_21_let = (&(global_workspace_1_var[34176]));
  void* sid_79_let = (&(global_workspace_1_var[25824]));
  void* sid_17_let = (&(global_workspace_1_var[35200]));
  void* sid_56_let = (&(global_workspace_1_var[3200]));
  void* sid_72_let = (&(global_workspace_1_var[4800]));
  void* sid_90_let = (&(global_workspace_1_var[5120]));
  void* sid_50_let = (&(global_workspace_1_var[864]));
  void* sid_12_let = (&(global_workspace_1_var[49152]));
  void* sid_19_let = (&(global_workspace_1_var[0]));
  void* sid_55_let = (&(global_workspace_1_var[3488]));
  void* sid_23_let = (&(global_workspace_1_var[0]));
  void* sid_83_let = (&(global_workspace_1_var[26048]));
  void* sid_9_let = (&(global_workspace_1_var[64704]));
  void* sid_13_let = (&(global_workspace_1_var[66752]));
  void* sid_16_let = (&(global_workspace_1_var[40032]));
  void* sid_14_let = (&(global_workspace_1_var[13872]));
  void* sid_67_let = (&(global_workspace_1_var[19200]));
  void* sid_43_let = (&(global_workspace_1_var[0]));
  void* sid_22_let = (&(global_workspace_1_var[9600]));
  void* sid_42_let = (&(global_workspace_1_var[5184]));
  void* sid_7_let = (&(global_workspace_1_var[0]));
  void* sid_15_let = (&(global_workspace_1_var[0]));
  void* sid_70_let = (&(global_workspace_1_var[12288]));
  void* sid_33_let = (&(global_workspace_1_var[15040]));
  void* sid_51_let = (&(global_workspace_1_var[2304]));
  void* sid_11_let = (&(global_workspace_1_var[0]));
  void* sid_63_let = (&(global_workspace_1_var[19712]));
  void* sid_94_let = (&(global_workspace_1_var[1024]));
  void* sid_20_let = (&(global_workspace_1_var[24576]));
  void* sid_82_let = (&(global_workspace_1_var[16128]));
  void* sid_6_let = (&(global_workspace_1_var[52272]));
  void* sid_10_let = (&(global_workspace_1_var[15552]));
  void* sid_45_let = (&(global_workspace_1_var[14400]));
  void* sid_61_let = (&(global_workspace_1_var[0]));
  void* sid_24_let = (&(global_workspace_1_var[24576]));
  void* sid_25_let = (&(global_workspace_1_var[35200]));
  void* sid_3_let = (&(global_workspace_1_var[0]));
  void* sid_5_let = (&(global_workspace_1_var[16384]));
  void* sid_26_let = (&(global_workspace_1_var[7776]));
  void* sid_81_let = (&(global_workspace_1_var[0]));
  void* sid_27_let = (&(global_workspace_1_var[0]));
  void* sid_28_let = (&(global_workspace_1_var[21696]));
  void* sid_52_let = (&(global_workspace_1_var[1152]));
  void* sid_29_let = (&(((uint8_t*)(*BB_GLOBAL_WS_ADDR))[14400]));
  void* sid_30_let = (&(global_workspace_1_var[2912]));
  void* sid_36_let = (&(global_workspace_1_var[14976]));
  void* sid_66_let = (&(global_workspace_1_var[12288]));
  void* sid_1_let = (&(global_workspace_1_var[47560]));
  void* sid_34_let = (&(global_workspace_1_var[14784]));
  void* sid_85_let = (&(global_workspace_1_var[0]));
  void* sid_18_let = (&(global_workspace_1_var[9600]));
  void* sid_46_let = (&(global_workspace_1_var[5184]));
  void* sid_4_let = (&(global_workspace_1_var[65536]));
  void* sid_35_let = (&(global_workspace_1_var[14912]));
  void* sid_86_let = (&(global_workspace_1_var[16128]));
  void* sid_38_let = (&(global_workspace_1_var[5184]));
  void* sid_39_let = (&(global_workspace_1_var[0]));
  void* sid_71_let = (&(global_workspace_1_var[19712]));
  void* sid_40_let = (&(global_workspace_1_var[9216]));
  void* sid_57_let = (&(global_workspace_1_var[3328]));
  void* sid_41_let = (&(global_workspace_1_var[14784]));
  void* sid_32_let = (&(global_workspace_1_var[14784]));
  void* sid_2_let = (&(global_workspace_1_var[18496]));
  void* sid_47_let = (&(global_workspace_1_var[0]));
  void* sid_69_let = (&(global_workspace_1_var[0]));
  void* sid_31_let = (&(global_workspace_1_var[0]));
  void* sid_8_let = (&(global_workspace_1_var[153696]));
  void* sid_98_let = (&(global_workspace_1_var[288]));
  void* sid_99_let = (&(global_workspace_1_var[0]));
  void* sid_100_let = (&(global_workspace_1_var[128]));
  void* sid_101_let = (&(global_workspace_1_var[192]));
  // if (tvmgen_default_fused_divide_round_add_clip_cast_nn_pad(serving_default_input_0_buffer_var, sid_1_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast(sid_1_let, sid_2_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_pad(sid_2_let, sid_3_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_1(sid_3_let, sid_4_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_2(sid_4_let, sid_5_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_3(sid_5_let, sid_6_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_pad_1(sid_6_let, sid_7_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_4(sid_7_let, sid_8_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_5(sid_8_let, sid_9_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_6(sid_9_let, sid_10_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_pad_2(sid_10_let, sid_11_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_7(sid_11_let, sid_12_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point__7462b0c1d1f4a4f5_(sid_9_let, sid_12_let, sid_13_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_8(sid_13_let, sid_14_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_pad_3(sid_14_let, sid_15_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_9(sid_15_let, sid_16_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_10(sid_16_let, sid_17_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_11(sid_17_let, sid_18_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_pad_4(sid_18_let, sid_19_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_12(sid_19_let, sid_20_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point__7462b0c1d1f4a4f5__1(sid_17_let, sid_20_let, sid_21_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_13(sid_21_let, sid_22_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_pad_4(sid_22_let, sid_23_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_14(sid_23_let, sid_24_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point__7462b0c1d1f4a4f5__2(sid_21_let, sid_24_let, sid_25_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_15(sid_25_let, sid_26_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_pad_5(sid_26_let, sid_27_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_16(sid_27_let, sid_28_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_17(sid_28_let, sid_29_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_18(sid_29_let, sid_38_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_pad_7(sid_38_let, sid_39_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_19(sid_39_let, sid_40_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point__7462b0c1d1f4a4f5__3(sid_29_let, sid_40_let, sid_41_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_20(sid_41_let, sid_42_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_pad_7(sid_42_let, sid_43_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_21(sid_43_let, sid_44_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point__7462b0c1d1f4a4f5__4(sid_41_let, sid_44_let, sid_45_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_22(sid_45_let, sid_46_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_pad_7(sid_46_let, sid_47_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_23(sid_47_let, sid_48_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point__7462b0c1d1f4a4f5__5(sid_45_let, sid_48_let, sid_49_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_25(sid_49_let, sid_60_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_pad_10(sid_60_let, sid_61_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_26(sid_61_let, sid_62_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_clip_cast(sid_62_let, sid_63_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast(sid_63_let, sid_64_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_pad_11(sid_64_let, sid_65_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_27(sid_65_let, sid_66_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_cast_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply__ad3cbdcd07b87e28_(sid_63_let, sid_66_let, sid_67_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_28(sid_67_let, sid_68_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_pad_11(sid_68_let, sid_69_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_29(sid_69_let, sid_70_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point__7462b0c1d1f4a4f5__6(sid_67_let, sid_70_let, sid_71_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_30(sid_71_let, sid_72_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_pad_12(sid_72_let, sid_73_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_31(sid_73_let, sid_74_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_clip_cast_1(sid_74_let, sid_75_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_1(sid_75_let, sid_76_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_pad_13(sid_76_let, sid_77_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_32(sid_77_let, sid_78_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_cast_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply__ad3cbdcd07b87e28__1(sid_75_let, sid_78_let, sid_79_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_33(sid_79_let, sid_80_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_pad_14(sid_80_let, sid_81_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_34(sid_81_let, sid_82_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point__7462b0c1d1f4a4f5__7(sid_79_let, sid_82_let, sid_83_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_35(sid_83_let, sid_84_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_pad_13(sid_84_let, sid_85_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_36(sid_85_let, sid_86_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_37(sid_86_let, sid_87_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_2(sid_87_let, sid_88_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_mean_2(sid_88_let, sid_89_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_subtract_add_clip_cast_reshape(sid_89_let, sid_90_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_subtract__fa059688879ad8de__2(sid_90_let, sid_91_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_softmax_divide_round_add_clip_cast_subtract_cast_multiply_2(sid_91_let, StatefulPartitionedCall_0_buffer_var, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;

  if (tvmgen_default_fused_nn_pad_6(sid_29_let, sid_30_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  *HANDSHAKE= 0xCF;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip(sid_30_let, sid_31_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_mean(sid_31_let, sid_32_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_subtract_fixed_point_multiply_add_clip_cast_reshape(sid_32_let, sid_33_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast(sid_33_let, sid_34_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast_1(sid_34_let, sid_35_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_subtract__fa059688879ad8de_(sid_35_let, sid_36_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_softmax_divide_round_add_clip_cast_subtract_cast_multiply(sid_36_let, StatefulPartitionedCall_1_buffer_var, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;

  eval(StatefulPartitionedCall_1_buffer_var);
  *HANDSHAKE= 0xC0;
  clock_gate_signal();

  if (tvmgen_default_fused_nn_pad_8(sid_49_let, sid_50_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  *HANDSHAKE= 0xCF;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_24(sid_50_let, sid_51_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_pad_9(sid_51_let, sid_52_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_1(sid_52_let, sid_53_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_mean_1(sid_53_let, sid_54_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_subtract_fixed_point_multiply_add_clip_cast_reshape_1(sid_54_let, sid_55_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast_2(sid_55_let, sid_56_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast_3(sid_56_let, sid_57_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_subtract__fa059688879ad8de__1(sid_57_let, sid_58_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_softmax_divide_round_add_clip_cast_subtract_cast_multiply_1(sid_58_let, StatefulPartitionedCall_2_buffer_var, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;

  eval(StatefulPartitionedCall_2_buffer_var);
  *HANDSHAKE= 0xC0;
  clock_gate_signal();

  if (tvmgen_default_fused_nn_pad_15(sid_75_let, sid_93_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  *HANDSHAKE= 0xCF;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_2(sid_93_let, sid_94_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_pad_16(sid_94_let, sid_95_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_3(sid_95_let, sid_96_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_mean_3(sid_96_let, sid_97_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_subtract_fixed_point_multiply_add_clip_cast_reshape_2(sid_97_let, sid_98_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast_4(sid_98_let, sid_99_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast_5(sid_99_let, sid_100_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_subtract__fa059688879ad8de__3(sid_100_let, sid_101_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_softmax_divide_round_add_clip_cast_subtract_cast_multiply_3(sid_101_let, StatefulPartitionedCall_3_buffer_var, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;

  eval(StatefulPartitionedCall_3_buffer_var);
  *HANDSHAKE= 0xC0;
  clock_gate_signal();
  return 0;
}

