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
TVM_DLL int32_t tvmgen_default_fused_cast_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply__ad3cbdcd07b87e28_(int8_t* p0, int8_t* p1, int8_t* T_cast, uint8_t* global_const_workspace_108_var, uint8_t* global_workspace_109_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point__7462b0c1d1f4a4f5_(int8_t* p0, int8_t* p1, int8_t* T_cast, uint8_t* global_const_workspace_52_var, uint8_t* global_workspace_53_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point__7462b0c1d1f4a4f5__1(int8_t* p0, int8_t* p1, int8_t* T_cast, uint8_t* global_const_workspace_144_var, uint8_t* global_workspace_145_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point__7462b0c1d1f4a4f5__2(int8_t* p0, int8_t* p1, int8_t* T_cast, uint8_t* global_const_workspace_180_var, uint8_t* global_workspace_181_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point__7462b0c1d1f4a4f5__3(int8_t* p0, int8_t* p1, int8_t* T_cast, uint8_t* global_const_workspace_198_var, uint8_t* global_workspace_199_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_cast_subtract_fixed_point_multiply_cast_subtract_fixed_point_multiply_add__5d3ea50422bc822a_(int8_t* p0, int8_t* p1, int8_t* T_cast, uint8_t* global_const_workspace_90_var, uint8_t* global_workspace_91_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_divide_round_add_clip_cast_nn_pad(float* p0, int8_t* T_pad, uint8_t* global_const_workspace_2_var, uint8_t* global_workspace_3_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_mean(int32_t* p0, int32_t* T_divide, uint8_t* global_const_workspace_10_var, uint8_t* global_workspace_11_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_mean_1(int32_t* p0, int32_t* T_divide, uint8_t* global_const_workspace_34_var, uint8_t* global_workspace_35_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_mean_10(int32_t* p0, int32_t* T_divide, uint8_t* global_const_workspace_202_var, uint8_t* global_workspace_203_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_mean_11(int32_t* p0, int32_t* T_divide, uint8_t* global_const_workspace_218_var, uint8_t* global_workspace_219_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_mean_12(int32_t* p0, int32_t* T_divide, uint8_t* global_const_workspace_238_var, uint8_t* global_workspace_239_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_mean_2(int32_t* p0, int32_t* T_divide, uint8_t* global_const_workspace_60_var, uint8_t* global_workspace_61_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_mean_3(int32_t* p0, int32_t* T_divide, uint8_t* global_const_workspace_78_var, uint8_t* global_workspace_79_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_mean_4(int32_t* p0, int32_t* T_divide, uint8_t* global_const_workspace_98_var, uint8_t* global_workspace_99_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_mean_5(int32_t* p0, int32_t* T_divide, uint8_t* global_const_workspace_116_var, uint8_t* global_workspace_117_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_mean_6(int32_t* p0, int32_t* T_divide, uint8_t* global_const_workspace_134_var, uint8_t* global_workspace_135_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_mean_7(int32_t* p0, int32_t* T_divide, uint8_t* global_const_workspace_152_var, uint8_t* global_workspace_153_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_mean_8(int32_t* p0, int32_t* T_divide, uint8_t* global_const_workspace_170_var, uint8_t* global_workspace_171_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_mean_9(int32_t* p0, int32_t* T_divide, uint8_t* global_const_workspace_188_var, uint8_t* global_workspace_189_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_38_var, uint8_t* global_workspace_39_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast_1(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_40_var, uint8_t* global_workspace_41_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast_2(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_222_var, uint8_t* global_workspace_223_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast_3(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_224_var, uint8_t* global_workspace_225_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast_4(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_242_var, uint8_t* global_workspace_243_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast_5(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_244_var, uint8_t* global_workspace_245_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_subtract__fa059688879ad8de_(int8_t* p0, float* T_multiply, uint8_t* global_const_workspace_42_var, uint8_t* global_workspace_43_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_subtract__fa059688879ad8de__1(int8_t* p0, float* T_multiply, uint8_t* global_const_workspace_206_var, uint8_t* global_workspace_207_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_subtract__fa059688879ad8de__2(int8_t* p0, float* T_multiply, uint8_t* global_const_workspace_226_var, uint8_t* global_workspace_227_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_subtract__fa059688879ad8de__3(int8_t* p0, float* T_multiply, uint8_t* global_const_workspace_246_var, uint8_t* global_workspace_247_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_subtract_cast_multipl_a0b6f984222e477_(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_92_var, uint8_t* global_workspace_93_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_subtract_multiply_fix_52d6a4719dd81c1d_(int8_t* p0, int32_t* T_subtract, uint8_t* global_const_workspace_122_var, uint8_t* global_workspace_123_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip(int8_t* p0, int32_t* compute, uint8_t* global_const_workspace_8_var, uint8_t* global_workspace_9_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_1(int8_t* p0, int32_t* compute, uint8_t* global_const_workspace_32_var, uint8_t* global_workspace_33_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_2(int8_t* p0, int32_t* compute, uint8_t* global_const_workspace_216_var, uint8_t* global_workspace_217_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_3(int8_t* p0, int32_t* compute, uint8_t* global_const_workspace_236_var, uint8_t* global_workspace_237_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_14_var, uint8_t* global_workspace_15_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_1(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_20_var, uint8_t* global_workspace_21_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_10(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_88_var, uint8_t* global_workspace_89_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_11(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_102_var, uint8_t* global_workspace_103_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_12(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_126_var, uint8_t* global_workspace_127_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_13(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_138_var, uint8_t* global_workspace_139_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_14(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_156_var, uint8_t* global_workspace_157_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_15(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_162_var, uint8_t* global_workspace_163_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_16(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_174_var, uint8_t* global_workspace_175_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_17(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_192_var, uint8_t* global_workspace_193_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_18(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_212_var, uint8_t* global_workspace_213_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_19(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_232_var, uint8_t* global_workspace_233_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_2(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_22_var, uint8_t* global_workspace_23_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_3(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_26_var, uint8_t* global_workspace_27_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_4(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_28_var, uint8_t* global_workspace_29_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_5(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_46_var, uint8_t* global_workspace_47_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_6(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_50_var, uint8_t* global_workspace_51_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_7(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_64_var, uint8_t* global_workspace_65_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_8(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_70_var, uint8_t* global_workspace_71_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_9(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_82_var, uint8_t* global_workspace_83_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_subtract_cas_c93f40e30d1c190e_(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_4_var, uint8_t* global_workspace_5_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_subtract_cas_c93f40e30d1c190e__1(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_54_var, uint8_t* global_workspace_55_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_subtract_cas_c93f40e30d1c190e__10(int8_t* p0, int32_t* T_cast, uint8_t* global_const_workspace_150_var, uint8_t* global_workspace_151_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_subtract_cas_c93f40e30d1c190e__11(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_164_var, uint8_t* global_workspace_165_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_subtract_cas_c93f40e30d1c190e__12(int8_t* p0, int32_t* T_cast, uint8_t* global_const_workspace_168_var, uint8_t* global_workspace_169_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_subtract_cas_c93f40e30d1c190e__13(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_182_var, uint8_t* global_workspace_183_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_subtract_cas_c93f40e30d1c190e__14(int8_t* p0, int32_t* T_cast, uint8_t* global_const_workspace_186_var, uint8_t* global_workspace_187_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_subtract_cas_c93f40e30d1c190e__15(int8_t* p0, int32_t* T_cast, uint8_t* global_const_workspace_200_var, uint8_t* global_workspace_201_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_subtract_cas_c93f40e30d1c190e__2(int8_t* p0, int32_t* T_cast, uint8_t* global_const_workspace_58_var, uint8_t* global_workspace_59_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_subtract_cas_c93f40e30d1c190e__3(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_72_var, uint8_t* global_workspace_73_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_subtract_cas_c93f40e30d1c190e__4(int8_t* p0, int32_t* T_cast, uint8_t* global_const_workspace_76_var, uint8_t* global_workspace_77_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_subtract_cas_c93f40e30d1c190e__5(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_110_var, uint8_t* global_workspace_111_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_subtract_cas_c93f40e30d1c190e__6(int8_t* p0, int32_t* T_cast, uint8_t* global_const_workspace_114_var, uint8_t* global_workspace_115_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_subtract_cas_c93f40e30d1c190e__7(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_128_var, uint8_t* global_workspace_129_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_subtract_cas_c93f40e30d1c190e__8(int8_t* p0, int32_t* T_cast, uint8_t* global_const_workspace_132_var, uint8_t* global_workspace_133_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_subtract_cas_c93f40e30d1c190e__9(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_146_var, uint8_t* global_workspace_147_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_subtract_mul_add8c47b972ae6c2_(int8_t* p0, int32_t* T_subtract, uint8_t* global_const_workspace_16_var, uint8_t* global_workspace_17_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_subtract_mul_add8c47b972ae6c2__1(int8_t* p0, int32_t* T_subtract, uint8_t* global_const_workspace_66_var, uint8_t* global_workspace_67_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_subtract_mul_add8c47b972ae6c2__2(int8_t* p0, int32_t* T_subtract, uint8_t* global_const_workspace_84_var, uint8_t* global_workspace_85_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_subtract_mul_add8c47b972ae6c2__3(int8_t* p0, int32_t* T_subtract, uint8_t* global_const_workspace_104_var, uint8_t* global_workspace_105_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_subtract_mul_add8c47b972ae6c2__4(int8_t* p0, int32_t* T_subtract, uint8_t* global_const_workspace_140_var, uint8_t* global_workspace_141_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_subtract_mul_add8c47b972ae6c2__5(int8_t* p0, int32_t* T_subtract, uint8_t* global_const_workspace_158_var, uint8_t* global_workspace_159_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_subtract_mul_add8c47b972ae6c2__6(int8_t* p0, int32_t* T_subtract, uint8_t* global_const_workspace_176_var, uint8_t* global_workspace_177_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_subtract_mul_add8c47b972ae6c2__7(int8_t* p0, int32_t* T_subtract, uint8_t* global_const_workspace_194_var, uint8_t* global_workspace_195_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_clip_cast_clip(int8_t* p0, int8_t* compute, uint8_t* global_const_workspace_120_var, uint8_t* global_workspace_121_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_clip_cast_multiply_ad_b57e37aeb09540e8_(int8_t* p0, int32_t* T_cast, uint8_t* global_const_workspace_96_var, uint8_t* global_workspace_97_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_6_var, uint8_t* global_workspace_7_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_1(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_24_var, uint8_t* global_workspace_25_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_10(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_166_var, uint8_t* global_workspace_167_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_11(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_184_var, uint8_t* global_workspace_185_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_12(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_210_var, uint8_t* global_workspace_211_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_13(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_214_var, uint8_t* global_workspace_215_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_14(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_230_var, uint8_t* global_workspace_231_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_15(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_234_var, uint8_t* global_workspace_235_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_2(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_30_var, uint8_t* global_workspace_31_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_3(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_48_var, uint8_t* global_workspace_49_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_4(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_56_var, uint8_t* global_workspace_57_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_5(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_74_var, uint8_t* global_workspace_75_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_6(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_94_var, uint8_t* global_workspace_95_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_7(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_112_var, uint8_t* global_workspace_113_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_8(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_130_var, uint8_t* global_workspace_131_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_9(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_148_var, uint8_t* global_workspace_149_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_softmax_divide_round_add_clip_cast_subtract_cast_multiply(float* p0, float* T_multiply, uint8_t* global_const_workspace_44_var, uint8_t* global_workspace_45_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_softmax_divide_round_add_clip_cast_subtract_cast_multiply_1(float* p0, float* T_multiply, uint8_t* global_const_workspace_208_var, uint8_t* global_workspace_209_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_softmax_divide_round_add_clip_cast_subtract_cast_multiply_2(float* p0, float* T_multiply, uint8_t* global_const_workspace_228_var, uint8_t* global_workspace_229_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_softmax_divide_round_add_clip_cast_subtract_cast_multiply_3(float* p0, float* T_multiply, uint8_t* global_const_workspace_248_var, uint8_t* global_workspace_249_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_fixed_point_multiply_add_clip_cast(int32_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_12_var, uint8_t* global_workspace_13_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_fixed_point_multiply_add_clip_cast_1(int32_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_62_var, uint8_t* global_workspace_63_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_fixed_point_multiply_add_clip_cast_2(int32_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_80_var, uint8_t* global_workspace_81_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_fixed_point_multiply_add_clip_cast_3(int32_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_100_var, uint8_t* global_workspace_101_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_fixed_point_multiply_add_clip_cast_4(int32_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_118_var, uint8_t* global_workspace_119_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_fixed_point_multiply_add_clip_cast_5(int32_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_136_var, uint8_t* global_workspace_137_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_fixed_point_multiply_add_clip_cast_6(int32_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_154_var, uint8_t* global_workspace_155_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_fixed_point_multiply_add_clip_cast_7(int32_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_172_var, uint8_t* global_workspace_173_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_fixed_point_multiply_add_clip_cast_8(int32_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_190_var, uint8_t* global_workspace_191_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_fixed_point_multiply_add_clip_cast_reshape(int32_t* p0, int8_t* T_reshape, uint8_t* global_const_workspace_36_var, uint8_t* global_workspace_37_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_fixed_point_multiply_add_clip_cast_reshape_1(int32_t* p0, int8_t* T_reshape, uint8_t* global_const_workspace_204_var, uint8_t* global_workspace_205_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_fixed_point_multiply_add_clip_cast_reshape_2(int32_t* p0, int8_t* T_reshape, uint8_t* global_const_workspace_220_var, uint8_t* global_workspace_221_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_fixed_point_multiply_add_clip_cast_reshape_3(int32_t* p0, int8_t* T_reshape, uint8_t* global_const_workspace_240_var, uint8_t* global_workspace_241_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_multiply_fixed_point_multiply_add_clip_cast(int32_t* p0, int32_t* p1, int8_t* T_cast, uint8_t* global_const_workspace_18_var, uint8_t* global_workspace_19_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_multiply_fixed_point_multiply_add_clip_cast_1(int32_t* p0, int32_t* p1, int8_t* T_cast, uint8_t* global_const_workspace_68_var, uint8_t* global_workspace_69_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_multiply_fixed_point_multiply_add_clip_cast_2(int32_t* p0, int32_t* p1, int8_t* T_cast, uint8_t* global_const_workspace_86_var, uint8_t* global_workspace_87_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_multiply_fixed_point_multiply_add_clip_cast_3(int32_t* p0, int32_t* p1, int8_t* T_cast, uint8_t* global_const_workspace_106_var, uint8_t* global_workspace_107_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_multiply_fixed_point_multiply_add_clip_cast_4(int32_t* p0, int32_t* p1, int8_t* T_cast, uint8_t* global_const_workspace_124_var, uint8_t* global_workspace_125_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_multiply_fixed_point_multiply_add_clip_cast_5(int32_t* p0, int32_t* p1, int8_t* T_cast, uint8_t* global_const_workspace_142_var, uint8_t* global_workspace_143_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_multiply_fixed_point_multiply_add_clip_cast_6(int32_t* p0, int32_t* p1, int8_t* T_cast, uint8_t* global_const_workspace_160_var, uint8_t* global_workspace_161_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_multiply_fixed_point_multiply_add_clip_cast_7(int32_t* p0, int32_t* p1, int8_t* T_cast, uint8_t* global_const_workspace_178_var, uint8_t* global_workspace_179_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_multiply_fixed_point_multiply_add_clip_cast_8(int32_t* p0, int32_t* p1, int8_t* T_cast, uint8_t* global_const_workspace_196_var, uint8_t* global_workspace_197_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default___tvm_main__(float* serving_default_input_243_0_buffer_var, float* StatefulPartitionedCall_1_buffer_var, float* StatefulPartitionedCall_0_buffer_var, float* StatefulPartitionedCall_2_buffer_var, float* StatefulPartitionedCall_3_buffer_var, uint8_t* global_const_workspace_0_var, uint8_t* global_workspace_1_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL float roundf(float);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL float roundf(float);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL float roundf(float);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL float roundf(float);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL float roundf(float);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL float roundf(float);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL float roundf(float);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL float roundf(float);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL float roundf(float);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL float roundf(float);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL float roundf(float);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL float roundf(float);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL float roundf(float);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL float roundf(float);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL float roundf(float);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL float roundf(float);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL float roundf(float);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL float roundf(float);
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
TVM_DLL int32_t tvmgen_default_fused_cast_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply__ad3cbdcd07b87e28_(int8_t* p0, int8_t* p1, int8_t* T_cast, uint8_t* global_const_workspace_108_var, uint8_t* global_workspace_109_var) {
  void* fused_cast_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_let = (&(global_const_workspace_108_var[795872]));
  void* fused_cast_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_2_let = (&(global_const_workspace_108_var[790688]));
  void* fused_cast_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_1_let = (&(global_const_workspace_108_var[790816]));
  void* fused_cast_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_let = (&(global_const_workspace_108_var[790944]));
  void* fused_cast_fixed_point_multiply_add_nn_conv2d_constant_let = (&(global_const_workspace_108_var[791072]));
  void* fused_cast_fixed_point_multiply_add_nn_conv2d_subtract_constant_let = (&(global_const_workspace_108_var[790560]));
  void* fused_cast_fixed_point_multiply_add_constant_let = (&(global_const_workspace_108_var[544992]));
  void* pad_temp_let = (&(global_workspace_109_var[15360]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 4; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 4; ++i2) {
      for (int32_t i3 = 0; i3 < 192; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 768) + (i2 * 192)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p1[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 16; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_109_var[54272]));
    for (int32_t ax3 = 0; ax3 < 32; ++ax3) {
      int32_t cse_var_2 = ((ax0_ax1_fused_ax2_fused * 32) + ax3);
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 192; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 192) + rc)]) * ((int32_t)((int8_t*)fused_cast_fixed_point_multiply_add_constant_let)[((rc * 32) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_cast_fixed_point_multiply_add_nn_conv2d_subtract_constant_let)[ax3]) - ((int32_t*)fused_cast_fixed_point_multiply_add_nn_conv2d_constant_let)[ax3])) * ((int64_t)((int32_t*)fused_cast_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_cast_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_2_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_cast_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_2_let)[ax3] + 31)))) + 37;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      int32_t v__2 = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_cast_fixed_point_multiply_add_nn_conv2d_subtract_constant_let)[ax3]) - ((int32_t*)fused_cast_fixed_point_multiply_add_nn_conv2d_constant_let)[ax3])) * ((int64_t)((int32_t*)fused_cast_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_cast_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_2_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_cast_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_2_let)[ax3] + 31)))) + 37;
      int32_t v__3 = (v__2) < (127) ? (v__2) : (127);
      int32_t v__4 = (((int32_t)(((((0 != 0) ? (((int64_t)((int32_t)p0[cse_var_2])) << ((int64_t)0)) : ((int64_t)((int32_t)p0[cse_var_2]))) * (int64_t)1531116282) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31)))) + ((int32_t)(((((0 != 0) ? (((int64_t)(((v__1) > (-128) ? (v__1) : (-128)) - ((int32_t*)fused_cast_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_let)[0])) << ((int64_t)0)) : ((int64_t)(((v__3) > (-128) ? (v__3) : (-128)) - ((int32_t*)fused_cast_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_let)[0]))) * (int64_t)1713759410) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31))))) + 24;
      int32_t v__5 = (v__4) < (127) ? (v__4) : (127);
      T_cast[cse_var_2] = ((int8_t)((v__5) > (-128) ? (v__5) : (-128)));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point__7462b0c1d1f4a4f5_(int8_t* p0, int8_t* p1, int8_t* T_cast, uint8_t* global_const_workspace_52_var, uint8_t* global_workspace_53_var) {
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_let = (&(global_const_workspace_52_var[795856]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_2_let = (&(global_const_workspace_52_var[792736]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_1_let = (&(global_const_workspace_52_var[792832]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_let = (&(global_const_workspace_52_var[792928]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_constant_let = (&(global_const_workspace_52_var[793024]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_constant_let = (&(global_const_workspace_52_var[792640]));
  void* fused_cast_constant_let = (&(global_const_workspace_52_var[795952]));
  void* fused_cast_subtract_fixed_point_multiply_add_constant_let = (&(global_const_workspace_52_var[633072]));
  void* pad_temp_let = (&(global_workspace_53_var[0]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 8; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 8; ++i2) {
      for (int32_t i3 = 0; i3 < 88; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 704) + (i2 * 88)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p1[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 64; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_53_var[34400]));
    for (int32_t ax3 = 0; ax3 < 24; ++ax3) {
      int32_t cse_var_2 = ((ax0_ax1_fused_ax2_fused * 24) + ax3);
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 88; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 88) + rc)]) * ((int32_t)((int8_t*)fused_cast_subtract_fixed_point_multiply_add_constant_let)[((rc * 24) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_constant_let)[ax3]) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_constant_let)[ax3])) * ((int64_t)((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_2_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_2_let)[ax3] + 31)))) - 5;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      int32_t v__2 = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_constant_let)[ax3]) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_constant_let)[ax3])) * ((int64_t)((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_2_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_2_let)[ax3] + 31)))) - 5;
      int32_t v__3 = (v__2) < (127) ? (v__2) : (127);
      int32_t v__4 = (((int32_t)(((((0 != 0) ? (((int64_t)(((int32_t)p0[cse_var_2]) - ((int32_t*)fused_cast_constant_let)[0])) << ((int64_t)0)) : ((int64_t)(((int32_t)p0[cse_var_2]) - ((int32_t*)fused_cast_constant_let)[0]))) * (int64_t)1824104132) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31)))) + ((int32_t)(((((0 != 0) ? (((int64_t)(((v__1) > (-128) ? (v__1) : (-128)) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_let)[0])) << ((int64_t)0)) : ((int64_t)(((v__3) > (-128) ? (v__3) : (-128)) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_let)[0]))) * (int64_t)1617122022) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31))))) + 9;
      int32_t v__5 = (v__4) < (127) ? (v__4) : (127);
      T_cast[cse_var_2] = ((int8_t)((v__5) > (-128) ? (v__5) : (-128)));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point__7462b0c1d1f4a4f5__1(int8_t* p0, int8_t* p1, int8_t* T_cast, uint8_t* global_const_workspace_144_var, uint8_t* global_workspace_145_var) {
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_1_let = (&(global_const_workspace_144_var[795840]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_5_let = (&(global_const_workspace_144_var[785680]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_4_let = (&(global_const_workspace_144_var[785840]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_3_let = (&(global_const_workspace_144_var[786000]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_constant_1_let = (&(global_const_workspace_144_var[786160]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_constant_1_let = (&(global_const_workspace_144_var[785520]));
  void* fused_cast_constant_2_let = (&(global_const_workspace_144_var[795920]));
  void* fused_cast_subtract_fixed_point_multiply_add_constant_1_let = (&(global_const_workspace_144_var[571536]));
  void* pad_temp_let = (&(global_workspace_145_var[9600]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 4; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 4; ++i2) {
      for (int32_t i3 = 0; i3 < 120; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 480) + (i2 * 120)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p1[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 16; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_145_var[52736]));
    for (int32_t ax3 = 0; ax3 < 40; ++ax3) {
      int32_t cse_var_2 = ((ax0_ax1_fused_ax2_fused * 40) + ax3);
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 120; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 120) + rc)]) * ((int32_t)((int8_t*)fused_cast_subtract_fixed_point_multiply_add_constant_1_let)[((rc * 40) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_constant_1_let)[ax3]) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_constant_1_let)[ax3])) * ((int64_t)((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_3_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_5_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_5_let)[ax3] + 31)))) - 14;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      int32_t v__2 = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_constant_1_let)[ax3]) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_constant_1_let)[ax3])) * ((int64_t)((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_3_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_5_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_5_let)[ax3] + 31)))) - 14;
      int32_t v__3 = (v__2) < (127) ? (v__2) : (127);
      int32_t v__4 = (((int32_t)(((((0 != 0) ? (((int64_t)(((int32_t)p0[cse_var_2]) - ((int32_t*)fused_cast_constant_2_let)[0])) << ((int64_t)0)) : ((int64_t)(((int32_t)p0[cse_var_2]) - ((int32_t*)fused_cast_constant_2_let)[0]))) * (int64_t)1601486657) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31)))) + ((int32_t)(((((0 != 0) ? (((int64_t)(((v__1) > (-128) ? (v__1) : (-128)) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_1_let)[0])) << ((int64_t)0)) : ((int64_t)(((v__3) > (-128) ? (v__3) : (-128)) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_1_let)[0]))) * (int64_t)2124099591) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31))))) - 20;
      int32_t v__5 = (v__4) < (127) ? (v__4) : (127);
      T_cast[cse_var_2] = ((int8_t)((v__5) > (-128) ? (v__5) : (-128)));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point__7462b0c1d1f4a4f5__2(int8_t* p0, int8_t* p1, int8_t* T_cast, uint8_t* global_const_workspace_180_var, uint8_t* global_workspace_181_var) {
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_2_let = (&(global_const_workspace_180_var[795824]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_8_let = (&(global_const_workspace_180_var[777712]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_7_let = (&(global_const_workspace_180_var[778000]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_6_let = (&(global_const_workspace_180_var[778288]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_constant_2_let = (&(global_const_workspace_180_var[779440]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_constant_2_let = (&(global_const_workspace_180_var[777136]));
  void* fused_cast_constant_3_let = (&(global_const_workspace_180_var[795904]));
  void* fused_cast_subtract_fixed_point_multiply_add_constant_2_let = (&(global_const_workspace_180_var[317952]));
  void* pad_temp_let = (&(global_workspace_181_var[10368]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 2; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 2; ++i2) {
      for (int32_t i3 = 0; i3 < 432; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 864) + (i2 * 432)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p1[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 4; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_181_var[54176]));
    for (int32_t ax3 = 0; ax3 < 72; ++ax3) {
      int32_t cse_var_2 = ((ax0_ax1_fused_ax2_fused * 72) + ax3);
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 432; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 432) + rc)]) * ((int32_t)((int8_t*)fused_cast_subtract_fixed_point_multiply_add_constant_2_let)[((rc * 72) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_constant_2_let)[ax3]) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_constant_2_let)[ax3])) * ((int64_t)((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_6_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_8_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_8_let)[ax3] + 31)))) + 30;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      int32_t v__2 = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_constant_2_let)[ax3]) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_constant_2_let)[ax3])) * ((int64_t)((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_6_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_8_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_8_let)[ax3] + 31)))) + 30;
      int32_t v__3 = (v__2) < (127) ? (v__2) : (127);
      int32_t v__4 = (((int32_t)(((((0 != 0) ? (((int64_t)(((int32_t)p0[cse_var_2]) - ((int32_t*)fused_cast_constant_3_let)[0])) << ((int64_t)0)) : ((int64_t)(((int32_t)p0[cse_var_2]) - ((int32_t*)fused_cast_constant_3_let)[0]))) * (int64_t)1996538816) + ((int64_t)1 << ((int64_t)((1 + 31) - 1)))) >> ((int64_t)(1 + 31)))) + ((int32_t)(((((0 != 0) ? (((int64_t)(((v__1) > (-128) ? (v__1) : (-128)) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_2_let)[0])) << ((int64_t)0)) : ((int64_t)(((v__3) > (-128) ? (v__3) : (-128)) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_2_let)[0]))) * (int64_t)1881217306) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31))))) + 14;
      int32_t v__5 = (v__4) < (127) ? (v__4) : (127);
      T_cast[cse_var_2] = ((int8_t)((v__5) > (-128) ? (v__5) : (-128)));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point__7462b0c1d1f4a4f5__3(int8_t* p0, int8_t* p1, int8_t* T_cast, uint8_t* global_const_workspace_198_var, uint8_t* global_workspace_199_var) {
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_3_let = (&(global_const_workspace_198_var[795808]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_11_let = (&(global_const_workspace_198_var[778576]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_10_let = (&(global_const_workspace_198_var[778864]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_9_let = (&(global_const_workspace_198_var[777424]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_constant_3_let = (&(global_const_workspace_198_var[779152]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_constant_3_let = (&(global_const_workspace_198_var[776848]));
  void* fused_cast_constant_4_let = (&(global_const_workspace_198_var[795888]));
  void* fused_cast_subtract_fixed_point_multiply_add_constant_3_let = (&(global_const_workspace_198_var[286848]));
  void* pad_temp_let = (&(global_workspace_199_var[10368]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 2; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 2; ++i2) {
      for (int32_t i3 = 0; i3 < 432; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 864) + (i2 * 432)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p1[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 4; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_199_var[54464]));
    for (int32_t ax3 = 0; ax3 < 72; ++ax3) {
      int32_t cse_var_2 = ((ax0_ax1_fused_ax2_fused * 72) + ax3);
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 432; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 432) + rc)]) * ((int32_t)((int8_t*)fused_cast_subtract_fixed_point_multiply_add_constant_3_let)[((rc * 72) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_constant_3_let)[ax3]) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_constant_3_let)[ax3])) * ((int64_t)((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_9_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_11_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_11_let)[ax3] + 31)))) + 25;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      int32_t v__2 = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_constant_3_let)[ax3]) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_constant_3_let)[ax3])) * ((int64_t)((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_9_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_11_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_constant_11_let)[ax3] + 31)))) + 25;
      int32_t v__3 = (v__2) < (127) ? (v__2) : (127);
      int32_t v__4 = (((int32_t)(((((0 != 0) ? (((int64_t)(((int32_t)p0[cse_var_2]) - ((int32_t*)fused_cast_constant_4_let)[0])) << ((int64_t)0)) : ((int64_t)(((int32_t)p0[cse_var_2]) - ((int32_t*)fused_cast_constant_4_let)[0]))) * (int64_t)1275096805) + ((int64_t)1 << ((int64_t)((2 + 31) - 1)))) >> ((int64_t)(2 + 31)))) + ((int32_t)(((((0 != 0) ? (((int64_t)(((v__1) > (-128) ? (v__1) : (-128)) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_3_let)[0])) << ((int64_t)0)) : ((int64_t)(((v__3) > (-128) ? (v__3) : (-128)) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_constant_3_let)[0]))) * (int64_t)1915484708) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31))))) + 29;
      int32_t v__5 = (v__4) < (127) ? (v__4) : (127);
      T_cast[cse_var_2] = ((int8_t)((v__5) > (-128) ? (v__5) : (-128)));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_cast_subtract_fixed_point_multiply_cast_subtract_fixed_point_multiply_add__5d3ea50422bc822a_(int8_t* p0, int8_t* p1, int8_t* T_cast, uint8_t* global_const_workspace_90_var, uint8_t* global_workspace_91_var) {
  void* fused_cast_subtract_fixed_point_multiply_cast_constant_let = (&(global_const_workspace_90_var[795792]));
  void* fused_cast_constant_1_let = (&(global_const_workspace_90_var[795936]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 4; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 4; ++ax2) {
      for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
        for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
          int32_t cse_var_1 = ((((ax0_ax1_fused * 128) + (ax2 * 32)) + (ax3_outer * 16)) + ax3_inner);
          int32_t v_ = ((int32_t)(((((0 != 0) ? (((int64_t)(((int32_t)p0[cse_var_1]) - ((int32_t*)fused_cast_constant_1_let)[0])) << ((int64_t)0)) : ((int64_t)(((int32_t)p0[cse_var_1]) - ((int32_t*)fused_cast_constant_1_let)[0]))) * (int64_t)1580484798) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31)))) + ((int32_t)(((((1 != 0) ? (((int64_t)(((int32_t)p1[cse_var_1]) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_cast_constant_let)[0])) << ((int64_t)1)) : ((int64_t)(((int32_t)p1[cse_var_1]) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_cast_constant_let)[0]))) * (int64_t)1131365474) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31))));
          int32_t v__1 = (v_) < (127) ? (v_) : (127);
          T_cast[cse_var_1] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
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
TVM_DLL int32_t tvmgen_default_fused_mean(int32_t* p0, int32_t* T_divide, uint8_t* global_const_workspace_10_var, uint8_t* global_workspace_11_var) {
  void* p0_red_let = (&(global_workspace_11_var[16448]));
  for (int32_t ax0_ax1_fused_ax2_fused_ax3_fused = 0; ax0_ax1_fused_ax2_fused_ax3_fused < 16; ++ax0_ax1_fused_ax2_fused_ax3_fused) {
    ((int32_t*)p0_red_let)[ax0_ax1_fused_ax2_fused_ax3_fused] = 0;
    for (int32_t k1 = 0; k1 < 16; ++k1) {
      for (int32_t k2 = 0; k2 < 16; ++k2) {
        ((int32_t*)p0_red_let)[ax0_ax1_fused_ax2_fused_ax3_fused] = (((int32_t*)p0_red_let)[ax0_ax1_fused_ax2_fused_ax3_fused] + p0[(((k1 * 256) + (k2 * 16)) + ax0_ax1_fused_ax2_fused_ax3_fused)]);
      }
    }
  }
  for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
    T_divide[ax3_inner] = (((int32_t*)p0_red_let)[ax3_inner] / 256);
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_mean_1(int32_t* p0, int32_t* T_divide, uint8_t* global_const_workspace_34_var, uint8_t* global_workspace_35_var) {
  void* p0_red_let = (&(global_workspace_35_var[32992]));
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
TVM_DLL int32_t tvmgen_default_fused_mean_10(int32_t* p0, int32_t* T_divide, uint8_t* global_const_workspace_202_var, uint8_t* global_workspace_203_var) {
  void* p0_red_let = (&(global_workspace_203_var[6912]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 432; ++ax0_ax1_fused) {
    ((int32_t*)p0_red_let)[ax0_ax1_fused] = 0;
    for (int32_t k1 = 0; k1 < 2; ++k1) {
      for (int32_t k2 = 0; k2 < 2; ++k2) {
        ((int32_t*)p0_red_let)[ax0_ax1_fused] = (((int32_t*)p0_red_let)[ax0_ax1_fused] + p0[(((k1 * 864) + (k2 * 432)) + ax0_ax1_fused)]);
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 27; ++ax1_outer) {
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
TVM_DLL int32_t tvmgen_default_fused_mean_11(int32_t* p0, int32_t* T_divide, uint8_t* global_const_workspace_218_var, uint8_t* global_workspace_219_var) {
  void* p0_red_let = (&(global_workspace_219_var[53952]));
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
TVM_DLL int32_t tvmgen_default_fused_mean_12(int32_t* p0, int32_t* T_divide, uint8_t* global_const_workspace_238_var, uint8_t* global_workspace_239_var) {
  void* p0_red_let = (&(global_workspace_239_var[768]));
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
TVM_DLL int32_t tvmgen_default_fused_mean_2(int32_t* p0, int32_t* T_divide, uint8_t* global_const_workspace_60_var, uint8_t* global_workspace_61_var) {
  void* p0_red_let = (&(global_workspace_61_var[6528]));
  for (int32_t ax0_ax1_fused_ax2_fused_ax3_fused = 0; ax0_ax1_fused_ax2_fused_ax3_fused < 96; ++ax0_ax1_fused_ax2_fused_ax3_fused) {
    ((int32_t*)p0_red_let)[ax0_ax1_fused_ax2_fused_ax3_fused] = 0;
    for (int32_t k1 = 0; k1 < 4; ++k1) {
      for (int32_t k2 = 0; k2 < 4; ++k2) {
        ((int32_t*)p0_red_let)[ax0_ax1_fused_ax2_fused_ax3_fused] = (((int32_t*)p0_red_let)[ax0_ax1_fused_ax2_fused_ax3_fused] + p0[(((k1 * 384) + (k2 * 96)) + ax0_ax1_fused_ax2_fused_ax3_fused)]);
      }
    }
  }
  for (int32_t ax3_outer = 0; ax3_outer < 6; ++ax3_outer) {
    for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
      int32_t cse_var_1 = ((ax3_outer * 16) + ax3_inner);
      T_divide[cse_var_1] = (((int32_t*)p0_red_let)[cse_var_1] / 16);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_mean_3(int32_t* p0, int32_t* T_divide, uint8_t* global_const_workspace_78_var, uint8_t* global_workspace_79_var) {
  void* p0_red_let = (&(global_workspace_79_var[13056]));
  for (int32_t ax0_ax1_fused_ax2_fused_ax3_fused = 0; ax0_ax1_fused_ax2_fused_ax3_fused < 192; ++ax0_ax1_fused_ax2_fused_ax3_fused) {
    ((int32_t*)p0_red_let)[ax0_ax1_fused_ax2_fused_ax3_fused] = 0;
    for (int32_t k1 = 0; k1 < 4; ++k1) {
      for (int32_t k2 = 0; k2 < 4; ++k2) {
        ((int32_t*)p0_red_let)[ax0_ax1_fused_ax2_fused_ax3_fused] = (((int32_t*)p0_red_let)[ax0_ax1_fused_ax2_fused_ax3_fused] + p0[(((k1 * 768) + (k2 * 192)) + ax0_ax1_fused_ax2_fused_ax3_fused)]);
      }
    }
  }
  for (int32_t ax3_outer = 0; ax3_outer < 12; ++ax3_outer) {
    for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
      int32_t cse_var_1 = ((ax3_outer * 16) + ax3_inner);
      T_divide[cse_var_1] = (((int32_t*)p0_red_let)[cse_var_1] / 16);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_mean_4(int32_t* p0, int32_t* T_divide, uint8_t* global_const_workspace_98_var, uint8_t* global_workspace_99_var) {
  void* p0_red_let = (&(global_workspace_99_var[13056]));
  for (int32_t ax0_ax1_fused_ax2_fused_ax3_fused = 0; ax0_ax1_fused_ax2_fused_ax3_fused < 192; ++ax0_ax1_fused_ax2_fused_ax3_fused) {
    ((int32_t*)p0_red_let)[ax0_ax1_fused_ax2_fused_ax3_fused] = 0;
    for (int32_t k1 = 0; k1 < 4; ++k1) {
      for (int32_t k2 = 0; k2 < 4; ++k2) {
        ((int32_t*)p0_red_let)[ax0_ax1_fused_ax2_fused_ax3_fused] = (((int32_t*)p0_red_let)[ax0_ax1_fused_ax2_fused_ax3_fused] + p0[(((k1 * 768) + (k2 * 192)) + ax0_ax1_fused_ax2_fused_ax3_fused)]);
      }
    }
  }
  for (int32_t ax3_outer = 0; ax3_outer < 12; ++ax3_outer) {
    for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
      int32_t cse_var_1 = ((ax3_outer * 16) + ax3_inner);
      T_divide[cse_var_1] = (((int32_t*)p0_red_let)[cse_var_1] / 16);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_mean_5(int32_t* p0, int32_t* T_divide, uint8_t* global_const_workspace_116_var, uint8_t* global_workspace_117_var) {
  void* p0_red_let = (&(global_workspace_117_var[53120]));
  for (int32_t ax0_ax1_fused_ax2_fused_ax3_fused = 0; ax0_ax1_fused_ax2_fused_ax3_fused < 96; ++ax0_ax1_fused_ax2_fused_ax3_fused) {
    ((int32_t*)p0_red_let)[ax0_ax1_fused_ax2_fused_ax3_fused] = 0;
    for (int32_t k1 = 0; k1 < 4; ++k1) {
      for (int32_t k2 = 0; k2 < 4; ++k2) {
        ((int32_t*)p0_red_let)[ax0_ax1_fused_ax2_fused_ax3_fused] = (((int32_t*)p0_red_let)[ax0_ax1_fused_ax2_fused_ax3_fused] + p0[(((k1 * 384) + (k2 * 96)) + ax0_ax1_fused_ax2_fused_ax3_fused)]);
      }
    }
  }
  for (int32_t ax3_outer = 0; ax3_outer < 6; ++ax3_outer) {
    for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
      int32_t cse_var_1 = ((ax3_outer * 16) + ax3_inner);
      T_divide[cse_var_1] = (((int32_t*)p0_red_let)[cse_var_1] / 16);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_mean_6(int32_t* p0, int32_t* T_divide, uint8_t* global_const_workspace_134_var, uint8_t* global_workspace_135_var) {
  void* p0_red_let = (&(global_workspace_135_var[53216]));
  for (int32_t ax0_ax1_fused_ax2_fused_ax3_fused = 0; ax0_ax1_fused_ax2_fused_ax3_fused < 120; ++ax0_ax1_fused_ax2_fused_ax3_fused) {
    ((int32_t*)p0_red_let)[ax0_ax1_fused_ax2_fused_ax3_fused] = 0;
    for (int32_t k1 = 0; k1 < 4; ++k1) {
      for (int32_t k2 = 0; k2 < 4; ++k2) {
        ((int32_t*)p0_red_let)[ax0_ax1_fused_ax2_fused_ax3_fused] = (((int32_t*)p0_red_let)[ax0_ax1_fused_ax2_fused_ax3_fused] + p0[(((k1 * 480) + (k2 * 120)) + ax0_ax1_fused_ax2_fused_ax3_fused)]);
      }
    }
  }
  for (int32_t ax3_outer = 0; ax3_outer < 8; ++ax3_outer) {
    for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
      if (((ax3_outer * 2) + (ax3_inner >> 3)) < 15) {
        int32_t cse_var_1 = ((ax3_outer * 16) + ax3_inner);
        T_divide[cse_var_1] = (((int32_t*)p0_red_let)[cse_var_1] / 16);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_mean_7(int32_t* p0, int32_t* T_divide, uint8_t* global_const_workspace_152_var, uint8_t* global_workspace_153_var) {
  void* p0_red_let = (&(global_workspace_153_var[4800]));
  for (int32_t ax0_ax1_fused_ax2_fused_ax3_fused = 0; ax0_ax1_fused_ax2_fused_ax3_fused < 240; ++ax0_ax1_fused_ax2_fused_ax3_fused) {
    ((int32_t*)p0_red_let)[ax0_ax1_fused_ax2_fused_ax3_fused] = 0;
    for (int32_t k1 = 0; k1 < 2; ++k1) {
      for (int32_t k2 = 0; k2 < 2; ++k2) {
        ((int32_t*)p0_red_let)[ax0_ax1_fused_ax2_fused_ax3_fused] = (((int32_t*)p0_red_let)[ax0_ax1_fused_ax2_fused_ax3_fused] + p0[(((k1 * 480) + (k2 * 240)) + ax0_ax1_fused_ax2_fused_ax3_fused)]);
      }
    }
  }
  for (int32_t ax3_outer = 0; ax3_outer < 15; ++ax3_outer) {
    for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
      int32_t cse_var_1 = ((ax3_outer * 16) + ax3_inner);
      T_divide[cse_var_1] = (((int32_t*)p0_red_let)[cse_var_1] / 4);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_mean_8(int32_t* p0, int32_t* T_divide, uint8_t* global_const_workspace_170_var, uint8_t* global_workspace_171_var) {
  void* p0_red_let = (&(global_workspace_171_var[8640]));
  for (int32_t ax0_ax1_fused_ax2_fused_ax3_fused = 0; ax0_ax1_fused_ax2_fused_ax3_fused < 432; ++ax0_ax1_fused_ax2_fused_ax3_fused) {
    ((int32_t*)p0_red_let)[ax0_ax1_fused_ax2_fused_ax3_fused] = 0;
    for (int32_t k1 = 0; k1 < 2; ++k1) {
      for (int32_t k2 = 0; k2 < 2; ++k2) {
        ((int32_t*)p0_red_let)[ax0_ax1_fused_ax2_fused_ax3_fused] = (((int32_t*)p0_red_let)[ax0_ax1_fused_ax2_fused_ax3_fused] + p0[(((k1 * 864) + (k2 * 432)) + ax0_ax1_fused_ax2_fused_ax3_fused)]);
      }
    }
  }
  for (int32_t ax3_outer = 0; ax3_outer < 27; ++ax3_outer) {
    for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
      int32_t cse_var_1 = ((ax3_outer * 16) + ax3_inner);
      T_divide[cse_var_1] = (((int32_t*)p0_red_let)[cse_var_1] / 4);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_mean_9(int32_t* p0, int32_t* T_divide, uint8_t* global_const_workspace_188_var, uint8_t* global_workspace_189_var) {
  void* p0_red_let = (&(global_workspace_189_var[8640]));
  for (int32_t ax0_ax1_fused_ax2_fused_ax3_fused = 0; ax0_ax1_fused_ax2_fused_ax3_fused < 432; ++ax0_ax1_fused_ax2_fused_ax3_fused) {
    ((int32_t*)p0_red_let)[ax0_ax1_fused_ax2_fused_ax3_fused] = 0;
    for (int32_t k1 = 0; k1 < 2; ++k1) {
      for (int32_t k2 = 0; k2 < 2; ++k2) {
        ((int32_t*)p0_red_let)[ax0_ax1_fused_ax2_fused_ax3_fused] = (((int32_t*)p0_red_let)[ax0_ax1_fused_ax2_fused_ax3_fused] + p0[(((k1 * 864) + (k2 * 432)) + ax0_ax1_fused_ax2_fused_ax3_fused)]);
      }
    }
  }
  for (int32_t ax3_outer = 0; ax3_outer < 27; ++ax3_outer) {
    for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
      int32_t cse_var_1 = ((ax3_outer * 16) + ax3_inner);
      T_divide[cse_var_1] = (((int32_t*)p0_red_let)[cse_var_1] / 4);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_38_var, uint8_t* global_workspace_39_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED] dense: 32->128 (packed [4][4][32][8])
  int32_t* conv_const = (int32_t*)(&global_const_workspace_38_var[745248]);
  int32_t* conv_sub   = (int32_t*)(&global_const_workspace_38_var[743712]);
  int8_t*  weights    = (int8_t*) (&global_const_workspace_38_var[589872]);

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
        * (int64_t)1469677332) + ((int64_t)1 << ((int64_t)((7 + 31) - 1))))
        >> ((int64_t)(7 + 31)))) - 128;
      int32_t v1 = (v_) < (127) ? (v_) : (127);
      T_cast[ax3] = (int8_t)((v1) > (-128) ? (v1) : (-128));
    }
  }
  return 0;

#else

  void* fused_nn_contrib_dense_pack_constant_let = (&(global_const_workspace_38_var[745248]));
  void* fused_nn_contrib_dense_pack_subtract_constant_let = (&(global_const_workspace_38_var[743712]));
  void* fused_constant_11_let = (&(global_const_workspace_38_var[589872]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 4; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_39_var[32992]));
    void* compute_global_let = (&(global_workspace_39_var[33152]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 4; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 32; ++k_outer) {
        for (int32_t x_c = 0; x_c < 8; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[k_outer]) * ((int32_t)((int8_t*)fused_constant_11_let)[((((ax1_outer_ax0_outer_fused * 1024) + (y_inner_outer_x_inner_outer_fused * 256)) + (k_outer * 8)) + x_c)])));
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
        int32_t v_ = ((int32_t)(((((0 != 0) ? (((int64_t)((((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_let)[cse_var_1])) << ((int64_t)0)) : ((int64_t)((((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_let)[cse_var_1]))) * (int64_t)1469677332) + ((int64_t)1 << ((int64_t)((7 + 31) - 1)))) >> ((int64_t)(7 + 31)))) - 128;
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
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast_1(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_40_var, uint8_t* global_workspace_41_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED] dense: 128->64 (packed [4][2][128][8])
  int32_t* conv_const = (int32_t*)(&global_const_workspace_40_var[782288]);
  int32_t* conv_sub   = (int32_t*)(&global_const_workspace_40_var[781520]);
  int8_t*  weights    = (int8_t*) (&global_const_workspace_40_var[511456]);

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
        * (int64_t)1841903874) + ((int64_t)1 << ((int64_t)((8 + 31) - 1))))
        >> ((int64_t)(8 + 31)))) - 128;
      int32_t v1 = (v_) < (127) ? (v_) : (127);
      T_cast[ax3] = (int8_t)((v1) > (-128) ? (v1) : (-128));
    }
  }
  return 0;

#else

  void* fused_nn_contrib_dense_pack_constant_1_let = (&(global_const_workspace_40_var[782288]));
  void* fused_nn_contrib_dense_pack_subtract_constant_1_let = (&(global_const_workspace_40_var[781520]));
  void* fused_constant_12_let = (&(global_const_workspace_40_var[511456]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 4; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_41_var[33056]));
    void* compute_global_let = (&(global_workspace_41_var[33120]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 2; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 128; ++k_outer) {
        for (int32_t x_c = 0; x_c < 8; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[k_outer]) * ((int32_t)((int8_t*)fused_constant_12_let)[((((ax1_outer_ax0_outer_fused * 2048) + (y_inner_outer_x_inner_outer_fused * 1024)) + (k_outer * 8)) + x_c)])));
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
        int32_t v_ = ((int32_t)(((((0 != 0) ? (((int64_t)((((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_1_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_1_let)[cse_var_1])) << ((int64_t)0)) : ((int64_t)((((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_1_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_1_let)[cse_var_1]))) * (int64_t)1841903874) + ((int64_t)1 << ((int64_t)((8 + 31) - 1)))) >> ((int64_t)(8 + 31)))) - 128;
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
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast_2(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_222_var, uint8_t* global_workspace_223_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED] dense: 16->128 (packed [4][4][16][8])
  int32_t* conv_const = (int32_t*)(&global_const_workspace_222_var[744736]);
  int32_t* conv_sub   = (int32_t*)(&global_const_workspace_222_var[743200]);
  int8_t*  weights    = (int8_t*) (&global_const_workspace_222_var[637232]);

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
        * (int64_t)1575364211) + ((int64_t)1 << ((int64_t)((7 + 31) - 1))))
        >> ((int64_t)(7 + 31)))) - 128;
      int32_t v1 = (v_) < (127) ? (v_) : (127);
      T_cast[ax3] = (int8_t)((v1) > (-128) ? (v1) : (-128));
    }
  }
  return 0;

#else

  void* fused_nn_contrib_dense_pack_constant_4_let = (&(global_const_workspace_222_var[744736]));
  void* fused_nn_contrib_dense_pack_subtract_constant_4_let = (&(global_const_workspace_222_var[743200]));
  void* fused_constant_66_let = (&(global_const_workspace_222_var[637232]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 4; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_223_var[54016]));
    void* compute_global_let = (&(global_workspace_223_var[54144]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 4; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 16; ++k_outer) {
        for (int32_t x_c = 0; x_c < 8; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[k_outer]) * ((int32_t)((int8_t*)fused_constant_66_let)[((((ax1_outer_ax0_outer_fused * 512) + (y_inner_outer_x_inner_outer_fused * 128)) + (k_outer * 8)) + x_c)])));
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
        int32_t v_ = ((int32_t)(((((0 != 0) ? (((int64_t)((((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_4_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_4_let)[cse_var_1])) << ((int64_t)0)) : ((int64_t)((((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_4_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_4_let)[cse_var_1]))) * (int64_t)1575364211) + ((int64_t)1 << ((int64_t)((7 + 31) - 1)))) >> ((int64_t)(7 + 31)))) - 128;
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
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast_3(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_224_var, uint8_t* global_workspace_225_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED] dense: 128->64 (packed [4][2][128][8])
  int32_t* conv_const = (int32_t*)(&global_const_workspace_224_var[782032]);
  int32_t* conv_sub   = (int32_t*)(&global_const_workspace_224_var[781264]);
  int8_t*  weights    = (int8_t*) (&global_const_workspace_224_var[503264]);

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
        * (int64_t)1230695951) + ((int64_t)1 << ((int64_t)((8 + 31) - 1))))
        >> ((int64_t)(8 + 31)))) - 128;
      int32_t v1 = (v_) < (127) ? (v_) : (127);
      T_cast[ax3] = (int8_t)((v1) > (-128) ? (v1) : (-128));
    }
  }
  return 0;

#else

  void* fused_nn_contrib_dense_pack_constant_5_let = (&(global_const_workspace_224_var[782032]));
  void* fused_nn_contrib_dense_pack_subtract_constant_5_let = (&(global_const_workspace_224_var[781264]));
  void* fused_constant_67_let = (&(global_const_workspace_224_var[503264]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 4; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_225_var[54080]));
    void* compute_global_let = (&(global_workspace_225_var[54144]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 2; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 128; ++k_outer) {
        for (int32_t x_c = 0; x_c < 8; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[k_outer]) * ((int32_t)((int8_t*)fused_constant_67_let)[((((ax1_outer_ax0_outer_fused * 2048) + (y_inner_outer_x_inner_outer_fused * 1024)) + (k_outer * 8)) + x_c)])));
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
        int32_t v_ = ((int32_t)(((((0 != 0) ? (((int64_t)((((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_5_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_5_let)[cse_var_1])) << ((int64_t)0)) : ((int64_t)((((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_5_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_5_let)[cse_var_1]))) * (int64_t)1230695951) + ((int64_t)1 << ((int64_t)((8 + 31) - 1)))) >> ((int64_t)(8 + 31)))) - 128;
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
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast_4(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_242_var, uint8_t* global_workspace_243_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED] dense: 16->128 (packed [4][4][16][8])
  int32_t* conv_const = (int32_t*)(&global_const_workspace_242_var[744224]);
  int32_t* conv_sub   = (int32_t*)(&global_const_workspace_242_var[742688]);
  int8_t*  weights    = (int8_t*) (&global_const_workspace_242_var[635184]);

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
        * (int64_t)1107954487) + ((int64_t)1 << ((int64_t)((6 + 31) - 1))))
        >> ((int64_t)(6 + 31)))) - 128;
      int32_t v1 = (v_) < (127) ? (v_) : (127);
      T_cast[ax3] = (int8_t)((v1) > (-128) ? (v1) : (-128));
    }
  }
  return 0;

#else

  void* fused_nn_contrib_dense_pack_constant_7_let = (&(global_const_workspace_242_var[744224]));
  void* fused_nn_contrib_dense_pack_subtract_constant_7_let = (&(global_const_workspace_242_var[742688]));
  void* fused_constant_72_let = (&(global_const_workspace_242_var[635184]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 4; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_243_var[128]));
    void* compute_global_let = (&(global_workspace_243_var[256]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 4; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 16; ++k_outer) {
        for (int32_t x_c = 0; x_c < 8; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[k_outer]) * ((int32_t)((int8_t*)fused_constant_72_let)[((((ax1_outer_ax0_outer_fused * 512) + (y_inner_outer_x_inner_outer_fused * 128)) + (k_outer * 8)) + x_c)])));
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
        int32_t v_ = ((int32_t)(((((0 != 0) ? (((int64_t)((((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_7_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_7_let)[cse_var_1])) << ((int64_t)0)) : ((int64_t)((((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_7_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_7_let)[cse_var_1]))) * (int64_t)1107954487) + ((int64_t)1 << ((int64_t)((6 + 31) - 1)))) >> ((int64_t)(6 + 31)))) - 128;
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
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast_5(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_244_var, uint8_t* global_workspace_245_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED] dense: 128->64 (packed [4][2][128][8])
  int32_t* conv_const = (int32_t*)(&global_const_workspace_244_var[781776]);
  int32_t* conv_sub   = (int32_t*)(&global_const_workspace_244_var[781008]);
  int8_t*  weights    = (int8_t*) (&global_const_workspace_244_var[495072]);

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
        * (int64_t)1090410441) + ((int64_t)1 << ((int64_t)((8 + 31) - 1))))
        >> ((int64_t)(8 + 31)))) - 128;
      int32_t v1 = (v_) < (127) ? (v_) : (127);
      T_cast[ax3] = (int8_t)((v1) > (-128) ? (v1) : (-128));
    }
  }
  return 0;

#else

  void* fused_nn_contrib_dense_pack_constant_8_let = (&(global_const_workspace_244_var[781776]));
  void* fused_nn_contrib_dense_pack_subtract_constant_8_let = (&(global_const_workspace_244_var[781008]));
  void* fused_constant_73_let = (&(global_const_workspace_244_var[495072]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 4; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_245_var[192]));
    void* compute_global_let = (&(global_workspace_245_var[256]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 2; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 128; ++k_outer) {
        for (int32_t x_c = 0; x_c < 8; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[k_outer]) * ((int32_t)((int8_t*)fused_constant_73_let)[((((ax1_outer_ax0_outer_fused * 2048) + (y_inner_outer_x_inner_outer_fused * 1024)) + (k_outer * 8)) + x_c)])));
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
        int32_t v_ = ((int32_t)(((((0 != 0) ? (((int64_t)((((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_8_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_8_let)[cse_var_1])) << ((int64_t)0)) : ((int64_t)((((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_8_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_8_let)[cse_var_1]))) * (int64_t)1090410441) + ((int64_t)1 << ((int64_t)((8 + 31) - 1)))) >> ((int64_t)(8 + 31)))) - 128;
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
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_subtract__fa059688879ad8de_(int8_t* p0, float* T_multiply, uint8_t* global_const_workspace_42_var, uint8_t* global_workspace_43_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED] dense: 64->10 (packed [2][1][64][5])
  int32_t* conv_const = (int32_t*)(&global_const_workspace_42_var[795376]);
  int32_t* conv_sub   = (int32_t*)(&global_const_workspace_42_var[795184]);
  int8_t*  weights    = (int8_t*) (&global_const_workspace_42_var[742048]);

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
        * (int64_t)1914750604) + ((int64_t)1 << ((int64_t)((9 + 31) - 1))))
        >> ((int64_t)(9 + 31)))) + 14;
      int32_t v1 = (v_) < (127) ? (v_) : (127);
      T_multiply[ax3] = (((float)(((v1) > (-128) ? (v1) : (-128)) - 14)) * 1.133282e-01f);
    }
  }
  return 0;

#else

  void* fused_nn_contrib_dense_pack_constant_2_let = (&(global_const_workspace_42_var[795376]));
  void* fused_nn_contrib_dense_pack_subtract_constant_2_let = (&(global_const_workspace_42_var[795184]));
  void* fused_constant_13_let = (&(global_const_workspace_42_var[742048]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 2; ++ax1_outer_ax0_outer_fused) {
    void* compute_global_let = (&(global_workspace_43_var[33096]));
    for (int32_t x_c_init = 0; x_c_init < 5; ++x_c_init) {
      ((int32_t*)compute_global_let)[x_c_init] = 0;
    }
    for (int32_t k_outer = 0; k_outer < 64; ++k_outer) {
      for (int32_t x_c = 0; x_c < 5; ++x_c) {
        ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[k_outer]) * ((int32_t)((int8_t*)fused_constant_13_let)[(((ax1_outer_ax0_outer_fused * 320) + (k_outer * 5)) + x_c)])));
      }
    }
    for (int32_t ax1_inner_inner = 0; ax1_inner_inner < 5; ++ax1_inner_inner) {
      int32_t cse_var_1 = ((ax1_outer_ax0_outer_fused * 5) + ax1_inner_inner);
      int32_t v_ = ((int32_t)(((((0 != 0) ? (((int64_t)((((int32_t*)compute_global_let)[ax1_inner_inner] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_2_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_2_let)[cse_var_1])) << ((int64_t)0)) : ((int64_t)((((int32_t*)compute_global_let)[ax1_inner_inner] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_2_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_2_let)[cse_var_1]))) * (int64_t)1914750604) + ((int64_t)1 << ((int64_t)((9 + 31) - 1)))) >> ((int64_t)(9 + 31)))) + 14;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_multiply[cse_var_1] = (((float)(((v__1) > (-128) ? (v__1) : (-128)) - 14)) * 1.133282e-01f);
    }
  }
  return 0;

#endif
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_subtract__fa059688879ad8de__1(int8_t* p0, float* T_multiply, uint8_t* global_const_workspace_206_var, uint8_t* global_workspace_207_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED] dense: 432->10 (packed [2][1][432][5])
  int32_t* conv_const = (int32_t*)(&global_const_workspace_206_var[795328]);
  int32_t* conv_sub   = (int32_t*)(&global_const_workspace_206_var[795136]);
  int8_t*  weights    = (int8_t*) (&global_const_workspace_206_var[585552]);

  // Padded input vector (aligned to MAC_BYTES)
  static int8_t _inp_pad[432];
  for (int32_t k = 0; k < 432; k++) _inp_pad[k] = p0[k];

  for (int32_t tile = 0; tile < 1; tile++) {
    int32_t oc_base = tile * 10;
    int32_t oc_count = 10;
    if (oc_base + oc_count > 10) oc_count = 10 - oc_base;
    static int8_t rw[4320];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      int32_t goc = oc_base + oc;
      int32_t ax1 = goc / 5;
      int32_t yi  = (goc % 5) / 5;
      int32_t xc  = goc % 5;
      for (int32_t k = 0; k < 432; k++)
        rw[oc * 432 + k] = weights[ax1 * 2160 + yi * 2160 + k * 5 + xc];
    }
    accel_spad_write(0x1B0, rw, oc_count * 432);
    accel_spad_write(0x000, _inp_pad, 432);
    hw_multi_dot(0x000, 0x1B0, 0x1290, 432, oc_count);
    for (int32_t oc = 0; oc < oc_count; oc++) {
      int32_t ax3 = oc_base + oc;
      int32_t dot = (int32_t)accel_spad_read32(0x1290 + oc * 4);
      int32_t v_ = ((int32_t)(((((int64_t)((dot + conv_sub[ax3]) - conv_const[ax3]))
        * (int64_t)1496183668) + ((int64_t)1 << ((int64_t)((9 + 31) - 1))))
        >> ((int64_t)(9 + 31)))) + 14;
      int32_t v1 = (v_) < (127) ? (v_) : (127);
      T_multiply[ax3] = (((float)(((v1) > (-128) ? (v1) : (-128)) - 14)) * 4.437626e-01f);
    }
  }
  return 0;

#else

  void* fused_nn_contrib_dense_pack_constant_3_let = (&(global_const_workspace_206_var[795328]));
  void* fused_nn_contrib_dense_pack_subtract_constant_3_let = (&(global_const_workspace_206_var[795136]));
  void* fused_constant_62_let = (&(global_const_workspace_206_var[585552]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 2; ++ax1_outer_ax0_outer_fused) {
    void* compute_global_let = (&(global_workspace_207_var[53928]));
    for (int32_t x_c_init = 0; x_c_init < 5; ++x_c_init) {
      ((int32_t*)compute_global_let)[x_c_init] = 0;
    }
    for (int32_t k_outer = 0; k_outer < 432; ++k_outer) {
      for (int32_t x_c = 0; x_c < 5; ++x_c) {
        ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[k_outer]) * ((int32_t)((int8_t*)fused_constant_62_let)[(((ax1_outer_ax0_outer_fused * 2160) + (k_outer * 5)) + x_c)])));
      }
    }
    for (int32_t ax1_inner_inner = 0; ax1_inner_inner < 5; ++ax1_inner_inner) {
      int32_t cse_var_1 = ((ax1_outer_ax0_outer_fused * 5) + ax1_inner_inner);
      int32_t v_ = ((int32_t)(((((0 != 0) ? (((int64_t)((((int32_t*)compute_global_let)[ax1_inner_inner] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_3_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_3_let)[cse_var_1])) << ((int64_t)0)) : ((int64_t)((((int32_t*)compute_global_let)[ax1_inner_inner] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_3_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_3_let)[cse_var_1]))) * (int64_t)1496183668) + ((int64_t)1 << ((int64_t)((9 + 31) - 1)))) >> ((int64_t)(9 + 31)))) + 14;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_multiply[cse_var_1] = (((float)(((v__1) > (-128) ? (v__1) : (-128)) - 14)) * 4.437626e-01f);
    }
  }
  return 0;

#endif
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_subtract__fa059688879ad8de__2(int8_t* p0, float* T_multiply, uint8_t* global_const_workspace_226_var, uint8_t* global_workspace_227_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED] dense: 64->10 (packed [2][1][64][5])
  int32_t* conv_const = (int32_t*)(&global_const_workspace_226_var[795280]);
  int32_t* conv_sub   = (int32_t*)(&global_const_workspace_226_var[795088]);
  int8_t*  weights    = (int8_t*) (&global_const_workspace_226_var[741408]);

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
        * (int64_t)1802675342) + ((int64_t)1 << ((int64_t)((9 + 31) - 1))))
        >> ((int64_t)(9 + 31)))) - 19;
      int32_t v1 = (v_) < (127) ? (v_) : (127);
      T_multiply[ax3] = (((float)(((v1) > (-128) ? (v1) : (-128)) + 19)) * 1.166592e-01f);
    }
  }
  return 0;

#else

  void* fused_nn_contrib_dense_pack_constant_6_let = (&(global_const_workspace_226_var[795280]));
  void* fused_nn_contrib_dense_pack_subtract_constant_6_let = (&(global_const_workspace_226_var[795088]));
  void* fused_constant_68_let = (&(global_const_workspace_226_var[741408]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 2; ++ax1_outer_ax0_outer_fused) {
    void* compute_global_let = (&(global_workspace_227_var[54120]));
    for (int32_t x_c_init = 0; x_c_init < 5; ++x_c_init) {
      ((int32_t*)compute_global_let)[x_c_init] = 0;
    }
    for (int32_t k_outer = 0; k_outer < 64; ++k_outer) {
      for (int32_t x_c = 0; x_c < 5; ++x_c) {
        ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[k_outer]) * ((int32_t)((int8_t*)fused_constant_68_let)[(((ax1_outer_ax0_outer_fused * 320) + (k_outer * 5)) + x_c)])));
      }
    }
    for (int32_t ax1_inner_inner = 0; ax1_inner_inner < 5; ++ax1_inner_inner) {
      int32_t cse_var_1 = ((ax1_outer_ax0_outer_fused * 5) + ax1_inner_inner);
      int32_t v_ = ((int32_t)(((((0 != 0) ? (((int64_t)((((int32_t*)compute_global_let)[ax1_inner_inner] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_6_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_6_let)[cse_var_1])) << ((int64_t)0)) : ((int64_t)((((int32_t*)compute_global_let)[ax1_inner_inner] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_6_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_6_let)[cse_var_1]))) * (int64_t)1802675342) + ((int64_t)1 << ((int64_t)((9 + 31) - 1)))) >> ((int64_t)(9 + 31)))) - 19;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_multiply[cse_var_1] = (((float)(((v__1) > (-128) ? (v__1) : (-128)) + 19)) * 1.166592e-01f);
    }
  }
  return 0;

#endif
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_subtract__fa059688879ad8de__3(int8_t* p0, float* T_multiply, uint8_t* global_const_workspace_246_var, uint8_t* global_workspace_247_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED] dense: 64->10 (packed [2][1][64][5])
  int32_t* conv_const = (int32_t*)(&global_const_workspace_246_var[795232]);
  int32_t* conv_sub   = (int32_t*)(&global_const_workspace_246_var[795040]);
  int8_t*  weights    = (int8_t*) (&global_const_workspace_246_var[740768]);

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
        * (int64_t)1265221862) + ((int64_t)1 << ((int64_t)((9 + 31) - 1))))
        >> ((int64_t)(9 + 31)))) - 9;
      int32_t v1 = (v_) < (127) ? (v_) : (127);
      T_multiply[ax3] = (((float)(((v1) > (-128) ? (v1) : (-128)) + 9)) * 2.416645e-01f);
    }
  }
  return 0;

#else

  void* fused_nn_contrib_dense_pack_constant_9_let = (&(global_const_workspace_246_var[795232]));
  void* fused_nn_contrib_dense_pack_subtract_constant_9_let = (&(global_const_workspace_246_var[795040]));
  void* fused_constant_74_let = (&(global_const_workspace_246_var[740768]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 2; ++ax1_outer_ax0_outer_fused) {
    void* compute_global_let = (&(global_workspace_247_var[232]));
    for (int32_t x_c_init = 0; x_c_init < 5; ++x_c_init) {
      ((int32_t*)compute_global_let)[x_c_init] = 0;
    }
    for (int32_t k_outer = 0; k_outer < 64; ++k_outer) {
      for (int32_t x_c = 0; x_c < 5; ++x_c) {
        ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[k_outer]) * ((int32_t)((int8_t*)fused_constant_74_let)[(((ax1_outer_ax0_outer_fused * 320) + (k_outer * 5)) + x_c)])));
      }
    }
    for (int32_t ax1_inner_inner = 0; ax1_inner_inner < 5; ++ax1_inner_inner) {
      int32_t cse_var_1 = ((ax1_outer_ax0_outer_fused * 5) + ax1_inner_inner);
      int32_t v_ = ((int32_t)(((((0 != 0) ? (((int64_t)((((int32_t*)compute_global_let)[ax1_inner_inner] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_9_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_9_let)[cse_var_1])) << ((int64_t)0)) : ((int64_t)((((int32_t*)compute_global_let)[ax1_inner_inner] + ((int32_t*)fused_nn_contrib_dense_pack_subtract_constant_9_let)[cse_var_1]) - ((int32_t*)fused_nn_contrib_dense_pack_constant_9_let)[cse_var_1]))) * (int64_t)1265221862) + ((int64_t)1 << ((int64_t)((9 + 31) - 1)))) >> ((int64_t)(9 + 31)))) - 9;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_multiply[cse_var_1] = (((float)(((v__1) > (-128) ? (v__1) : (-128)) + 9)) * 2.416645e-01f);
    }
  }
  return 0;

#endif
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_subtract_cast_multipl_a0b6f984222e477_(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_92_var, uint8_t* global_workspace_93_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED] 1x1 conv: 32->192 channels, 16 spatial positions [with fused h-swish]
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_92_var[737808]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_92_var[739344]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_92_var[734736]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_92_var[526560]);

  // Safe copy: TVM may alias input/output workspace buffers
  static int8_t _inp[512];
  for (int32_t _i = 0; _i < 512; _i++) _inp[_i] = p0[_i];

  for (int32_t tile = 0; tile < 1; tile++) {
    int32_t oc_base = tile * 192;
    int32_t oc_count = 192;
    if (oc_base + oc_count > 192) oc_count = 192 - oc_base;
    static int8_t rw[6144];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      for (int32_t rc = 0; rc < 32; rc++)
        rw[oc * 32 + rc] = weights[rc * 192 + oc_base + oc];
    }
    accel_spad_write(0x020, rw, oc_count * 32);
    for (int32_t sp = 0; sp < 16; sp++) {
      accel_spad_write(0x000, &_inp[sp * 32], 32);
      hw_multi_dot(0x000, 0x020, 0x1820, 32, oc_count);
      for (int32_t oc = 0; oc < oc_count; oc++) {
        int32_t ax3 = oc_base + oc;
        int32_t dot = (int32_t)accel_spad_read32(0x1820 + oc * 4);
        int32_t v_ = ((int32_t)(((((int64_t)(dot + conv_const[ax3]))
          * ((int64_t)quant_scale[ax3]))
          + ((int64_t)1 << ((int64_t)((quant_shift[ax3] + 31) - 1))))
          >> ((int64_t)(quant_shift[ax3] + 31)))) + 23;
        int32_t v1 = (v_) < (127) ? (v_) : (127);
        float _dq = (float)(((v1) > (-128) ? (v1) : (-128)) - 23) * 1.537299e-01f;
        float _hs_in = (_dq + 3.0f) < (6.0f) ? (_dq + 3.0f) : (6.0f);
        float _hs = roundf((_dq * ((_hs_in) > (0.0f) ? (_hs_in) : (0.0f)) * 1.666667e-01f) * 1.560734e+01f) + -1.220000e+02f;
        float _hc = (_hs) < (1.270000e+02f) ? (_hs) : (1.270000e+02f);
        T_cast[(sp * 192) + ax3] = (int8_t)((_hc) > (-1.280000e+02f) ? (_hc) : (-1.280000e+02f));
      }
    }
  }
  return 0;

#else

  void* fused_nn_conv2d_add_constant_2_let = (&(global_const_workspace_92_var[737808]));
  void* fused_nn_conv2d_add_constant_1_let = (&(global_const_workspace_92_var[738576]));
  void* fused_nn_conv2d_add_constant_let = (&(global_const_workspace_92_var[739344]));
  void* fused_nn_conv2d_constant_21_let = (&(global_const_workspace_92_var[734736]));
  void* fused_constant_28_let = (&(global_const_workspace_92_var[526560]));
  void* pad_temp_let = (&(global_workspace_93_var[53760]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 4; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 4; ++i2) {
      for (int32_t i3 = 0; i3 < 32; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 128) + (i2 * 32)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 16; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_93_var[54272]));
    for (int32_t ax3_outer = 0; ax3_outer < 3; ++ax3_outer) {
      for (int32_t ff = 0; ff < 64; ++ff) {
        ((int32_t*)conv2d_nhwc_let)[ff] = 0;
        for (int32_t rc = 0; rc < 32; ++rc) {
          ((int32_t*)conv2d_nhwc_let)[ff] = (((int32_t*)conv2d_nhwc_let)[ff] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 32) + rc)]) * ((int32_t)((int8_t*)fused_constant_28_let)[(((rc * 192) + (ax3_outer * 64)) + ff)])));
        }
      }
      for (int32_t ax3_inner = 0; ax3_inner < 64; ++ax3_inner) {
        int32_t cse_var_3 = (ax3_outer * 64);
        int32_t cse_var_2 = (cse_var_3 + ax3_inner);
        int32_t v_ = ((int32_t)(((((int64_t)(((int32_t*)conv2d_nhwc_let)[ax3_inner] + ((int32_t*)fused_nn_conv2d_constant_21_let)[cse_var_2])) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_let)[cse_var_2])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_2_let)[cse_var_2] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_2_let)[cse_var_2] + 31)))) + 23;
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        float v__2 = (((float)(((v__1) > (-128) ? (v__1) : (-128)) - 23)) * 1.537299e-01f) + 3.000000e+00f;
        float v__3 = (v__2) < (6.000000e+00f) ? (v__2) : (6.000000e+00f);
        float v__4 = roundf(((((((float)(((v__1) > (-128) ? (v__1) : (-128)) - 23)) * 1.537299e-01f) * ((v__3) > (0.000000e+00f) ? (v__3) : (0.000000e+00f))) * 1.666667e-01f) * 1.560734e+01f)) + -1.220000e+02f;
        float v__5 = (v__4) < (1.270000e+02f) ? (v__4) : (1.270000e+02f);
        T_cast[(((ax0_ax1_fused_ax2_fused * 192) + cse_var_3) + ax3_inner)] = ((int8_t)((v__5) > (-1.280000e+02f) ? (v__5) : (-1.280000e+02f)));
      }
    }
  }
  return 0;

#endif
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_subtract_multiply_fix_52d6a4719dd81c1d_(int8_t* p0, int32_t* T_subtract, uint8_t* global_const_workspace_122_var, uint8_t* global_workspace_123_var) {
  void* fused_nn_conv2d_add_constant_5_let = (&(global_const_workspace_122_var[767856]));
  void* fused_nn_conv2d_add_constant_4_let = (&(global_const_workspace_122_var[768240]));
  void* fused_nn_conv2d_add_constant_3_let = (&(global_const_workspace_122_var[768624]));
  void* fused_nn_conv2d_constant_28_let = (&(global_const_workspace_122_var[765552]));
  void* fused_constant_37_let = (&(global_const_workspace_122_var[619440]));
  void* pad_temp_let = (&(global_workspace_123_var[53120]));
  void* conv2d_nhwc_let = (&(global_workspace_123_var[53144]));
  for (int32_t i3 = 0; i3 < 24; ++i3) {
    ((int8_t*)pad_temp_let)[i3] = p0[i3];
  }
  for (int32_t ax3 = 0; ax3 < 96; ++ax3) {
    ((int32_t*)conv2d_nhwc_let)[0] = 0;
    for (int32_t rc = 0; rc < 24; ++rc) {
      ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[rc]) * ((int32_t)((int8_t*)fused_constant_37_let)[((rc * 96) + ax3)])));
    }
    int32_t v_ = ((int32_t)(((((int64_t)(((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_constant_28_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_3_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_5_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_5_let)[ax3] + 31)))) - 128;
    int32_t v__1 = (v_) < (127) ? (v_) : (127);
    int32_t v__2 = ((int32_t)(((((int64_t)(((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_constant_28_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_3_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_5_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_5_let)[ax3] + 31)))) - 128;
    int32_t v__3 = (v__2) < (127) ? (v__2) : (127);
    int32_t v__4 = ((int32_t)(((((0 != 0) ? (((int64_t)((((v__1) > (-128) ? (v__1) : (-128)) * 255) + 32640)) << ((int64_t)0)) : ((int64_t)((((v__3) > (-128) ? (v__3) : (-128)) * 255) + 32640))) * (int64_t)1077952511) + ((int64_t)1 << ((int64_t)((7 + 31) - 1)))) >> ((int64_t)(7 + 31)))) - 128;
    int32_t v__5 = (v__4) < (127) ? (v__4) : (127);
    T_subtract[ax3] = (((v__5) > (-128) ? (v__5) : (-128)) + 128);
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip(int8_t* p0, int32_t* compute, uint8_t* global_const_workspace_8_var, uint8_t* global_workspace_9_var) {
  void* fused_nn_conv2d_subtract_add_constant_5_let = (&(global_const_workspace_8_var[793568]));
  void* fused_nn_conv2d_subtract_add_constant_4_let = (&(global_const_workspace_8_var[793632]));
  void* fused_nn_conv2d_subtract_add_constant_3_let = (&(global_const_workspace_8_var[793696]));
  void* fused_nn_conv2d_subtract_constant_1_let = (&(global_const_workspace_8_var[793376]));
  void* fused_nn_conv2d_constant_1_let = (&(global_const_workspace_8_var[794912]));
  void* fused_constant_1_let = (&(global_const_workspace_8_var[786320]));
  void* PaddedInput_let = (&(global_workspace_9_var[17424]));
  void* DepthwiseConv2d_let = (&(global_workspace_9_var[34848]));
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
            ((int32_t*)DepthwiseConv2d_let)[cse_var_2] = (((int32_t*)DepthwiseConv2d_let)[cse_var_2] + (((int32_t)((int8_t*)PaddedInput_let)[(((((i * 1056) + (di * 528)) + (j * 32)) + cse_var_3) + c)]) * ((int32_t)((int8_t*)fused_constant_1_let)[(((di * 48) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 16; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 16; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 16; ++ax3) {
        int32_t cse_var_4 = (((ax1 * 256) + (ax2 * 16)) + ax3);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_4] = (((int32_t*)DepthwiseConv2d_let)[cse_var_4] - ((int32_t*)fused_nn_conv2d_constant_1_let)[ax3]);
      }
    }
  }
  for (int32_t ax1_1 = 0; ax1_1 < 16; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 16; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 16; ++ax3_1) {
        int32_t cse_var_5 = (((ax1_1 * 256) + (ax2_1 * 16)) + ax3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_5] = (((int32_t*)DepthwiseConv2d_let)[cse_var_5] + ((int32_t*)fused_nn_conv2d_subtract_constant_1_let)[ax3_1]);
      }
    }
  }
  for (int32_t i1_1 = 0; i1_1 < 16; ++i1_1) {
    for (int32_t i2_1 = 0; i2_1 < 16; ++i2_1) {
      for (int32_t i3_1 = 0; i3_1 < 16; ++i3_1) {
        int32_t cse_var_6 = (((i1_1 * 256) + (i2_1 * 16)) + i3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_6] = ((int32_t)(((((int64_t)((int32_t*)DepthwiseConv2d_let)[cse_var_6]) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_3_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_5_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_5_let)[i3_1] + 31))));
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
        compute[cse_var_8] = ((v__1) > (-128) ? (v__1) : (-128));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_1(int8_t* p0, int32_t* compute, uint8_t* global_const_workspace_32_var, uint8_t* global_workspace_33_var) {
  void* fused_nn_conv2d_subtract_add_constant_26_let = (&(global_const_workspace_32_var[788384]));
  void* fused_nn_conv2d_subtract_add_constant_25_let = (&(global_const_workspace_32_var[788512]));
  void* fused_nn_conv2d_subtract_add_constant_24_let = (&(global_const_workspace_32_var[788640]));
  void* fused_nn_conv2d_constant_8_let = (&(global_const_workspace_32_var[789536]));
  void* fused_nn_conv2d_subtract_constant_8_let = (&(global_const_workspace_32_var[786464]));
  void* fused_constant_9_let = (&(global_const_workspace_32_var[519648]));
  void* pad_temp_let = (&(global_workspace_33_var[8192]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 10; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 10; ++i2) {
      for (int32_t i3 = 0; i3 < 24; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 240) + (i2 * 24)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 64; ++i0_i1_fused_i2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_33_var[32864]));
    for (int32_t i3_1 = 0; i3_1 < 32; ++i3_1) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t ry = 0; ry < 3; ++ry) {
        for (int32_t rx = 0; rx < 3; ++rx) {
          for (int32_t rc = 0; rc < 24; ++rc) {
            ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((((((i0_i1_fused_i2_fused >> 3) * 240) + (ry * 240)) + (rx * 24)) + ((i0_i1_fused_i2_fused & 7) * 24)) + rc)]) * ((int32_t)((int8_t*)fused_constant_9_let)[((((ry * 2304) + (rx * 768)) + (rc * 32)) + i3_1)])));
          }
        }
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_8_let)[i3_1]) - ((int32_t*)fused_nn_conv2d_constant_8_let)[i3_1])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_24_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_26_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_26_let)[i3_1] + 31)))) - 128;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      compute[((i0_i1_fused_i2_fused * 32) + i3_1)] = ((v__1) > (-128) ? (v__1) : (-128));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_2(int8_t* p0, int32_t* compute, uint8_t* global_const_workspace_216_var, uint8_t* global_workspace_217_var) {
  void* fused_nn_conv2d_subtract_add_constant_143_let = (&(global_const_workspace_216_var[794016]));
  void* fused_nn_conv2d_subtract_add_constant_142_let = (&(global_const_workspace_216_var[794080]));
  void* fused_nn_conv2d_subtract_add_constant_141_let = (&(global_const_workspace_216_var[794144]));
  void* fused_nn_conv2d_constant_49_let = (&(global_const_workspace_216_var[794720]));
  void* fused_nn_conv2d_subtract_constant_47_let = (&(global_const_workspace_216_var[793184]));
  void* fused_constant_64_let = (&(global_const_workspace_216_var[580944]));
  void* pad_temp_let = (&(global_workspace_217_var[0]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 6; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 6; ++i2) {
      for (int32_t i3 = 0; i3 < 32; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 192) + (i2 * 32)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 16; ++i0_i1_fused_i2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_217_var[53888]));
    for (int32_t i3_1 = 0; i3_1 < 16; ++i3_1) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t ry = 0; ry < 3; ++ry) {
        for (int32_t rx = 0; rx < 3; ++rx) {
          for (int32_t rc = 0; rc < 32; ++rc) {
            ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((((((i0_i1_fused_i2_fused >> 2) * 192) + (ry * 192)) + (rx * 32)) + ((i0_i1_fused_i2_fused & 3) * 32)) + rc)]) * ((int32_t)((int8_t*)fused_constant_64_let)[((((ry * 1536) + (rx * 512)) + (rc * 16)) + i3_1)])));
          }
        }
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_47_let)[i3_1]) - ((int32_t*)fused_nn_conv2d_constant_49_let)[i3_1])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_141_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_143_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_143_let)[i3_1] + 31)))) - 128;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      compute[((i0_i1_fused_i2_fused * 16) + i3_1)] = ((v__1) > (-128) ? (v__1) : (-128));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_3(int8_t* p0, int32_t* compute, uint8_t* global_const_workspace_236_var, uint8_t* global_workspace_237_var) {
  void* fused_nn_conv2d_subtract_add_constant_149_let = (&(global_const_workspace_236_var[793824]));
  void* fused_nn_conv2d_subtract_add_constant_148_let = (&(global_const_workspace_236_var[793888]));
  void* fused_nn_conv2d_subtract_add_constant_147_let = (&(global_const_workspace_236_var[793952]));
  void* fused_nn_conv2d_constant_51_let = (&(global_const_workspace_236_var[794656]));
  void* fused_nn_conv2d_subtract_constant_49_let = (&(global_const_workspace_236_var[793120]));
  void* fused_constant_70_let = (&(global_const_workspace_236_var[576336]));
  void* pad_temp_let = (&(global_workspace_237_var[0]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 4; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 4; ++i2) {
      for (int32_t i3 = 0; i3 < 32; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 128) + (i2 * 32)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 4; ++i0_i1_fused_i2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_237_var[768]));
    for (int32_t i3_1 = 0; i3_1 < 16; ++i3_1) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t ry = 0; ry < 3; ++ry) {
        for (int32_t rx = 0; rx < 3; ++rx) {
          for (int32_t rc = 0; rc < 32; ++rc) {
            ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((((((i0_i1_fused_i2_fused >> 1) * 128) + (ry * 128)) + (rx * 32)) + ((i0_i1_fused_i2_fused & 1) * 32)) + rc)]) * ((int32_t)((int8_t*)fused_constant_70_let)[((((ry * 1536) + (rx * 512)) + (rc * 16)) + i3_1)])));
          }
        }
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_49_let)[i3_1]) - ((int32_t*)fused_nn_conv2d_constant_51_let)[i3_1])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_147_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_149_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_149_let)[i3_1] + 31)))) - 128;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      compute[((i0_i1_fused_i2_fused * 16) + i3_1)] = ((v__1) > (-128) ? (v__1) : (-128));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_14_var, uint8_t* global_workspace_15_var) {
  void* fused_nn_conv2d_subtract_add_constant_8_let = (&(global_const_workspace_14_var[795456]));
  void* fused_nn_conv2d_subtract_add_constant_7_let = (&(global_const_workspace_14_var[795488]));
  void* fused_nn_conv2d_subtract_add_constant_6_let = (&(global_const_workspace_14_var[795520]));
  void* fused_nn_conv2d_constant_2_let = (&(global_const_workspace_14_var[795552]));
  void* fused_nn_conv2d_subtract_constant_2_let = (&(global_const_workspace_14_var[795424]));
  void* fused_constant_3_let = (&(global_const_workspace_14_var[790432]));
  void* pad_temp_let = (&(global_workspace_15_var[16384]));
  void* conv2d_nhwc_let = (&(global_workspace_15_var[16408]));
  for (int32_t i3 = 0; i3 < 16; ++i3) {
    ((int8_t*)pad_temp_let)[i3] = p0[i3];
  }
  for (int32_t ax3 = 0; ax3 < 8; ++ax3) {
    ((int32_t*)conv2d_nhwc_let)[0] = 0;
    for (int32_t rc = 0; rc < 16; ++rc) {
      ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[rc]) * ((int32_t)((int8_t*)fused_constant_3_let)[((rc * 8) + ax3)])));
    }
    int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_2_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_2_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_6_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_8_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_8_let)[ax3] + 31)))) - 128;
    int32_t v__1 = (v_) < (127) ? (v_) : (127);
    T_cast[ax3] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_1(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_20_var, uint8_t* global_workspace_21_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED v8 HW-REQUANT] 1x1 conv: 16->16 channels, 256 spatial positions
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_20_var[794208]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_20_var[794336]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_20_var[794784]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_20_var[793248]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_20_var[782544]);

  // Safe copy: TVM may alias input/output workspace buffers
  static int8_t _inp[4096];
  for (int32_t _i = 0; _i < 4096; _i++) _inp[_i] = p0[_i];

  // Set per-layer zero-point once. The helper is provided by conv_accel.h.
  accel_set_output_zp(-7);

  for (int32_t tile = 0; tile < 1; tile++) {
    int32_t oc_base = tile * 16;
    int32_t oc_count = 16;
    if (oc_base + oc_count > 16) oc_count = 16 - oc_base;

    // Pack weights for this tile (relayout from [rc][oc] to [oc][rc])
    static int8_t rw[256];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      for (int32_t rc = 0; rc < 16; rc++)
        rw[oc * 16 + rc] = weights[rc * 16 + oc_base + oc];
    }
    accel_spad_write(0x010, rw, oc_count * 16);

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
    accel_spad_write(0x150, (int8_t*)params, oc_count * 16);

    for (int32_t sp = 0; sp < 256; sp++) {
      accel_spad_write(0x000, &_inp[sp * 16], 16);
      hw_multi_dot_requant(0x000, 0x010, 0x110,
                           0x150, 16, oc_count);
      accel_unpack_i8_outputs(&T_cast[(sp * 16) + oc_base],
                              0x110, oc_count);
    }
  }
  return 0;

#else

  void* fused_nn_conv2d_subtract_add_constant_14_let = (&(global_const_workspace_20_var[794208]));
  void* fused_nn_conv2d_subtract_add_constant_13_let = (&(global_const_workspace_20_var[794272]));
  void* fused_nn_conv2d_subtract_add_constant_12_let = (&(global_const_workspace_20_var[794336]));
  void* fused_nn_conv2d_constant_4_let = (&(global_const_workspace_20_var[794784]));
  void* fused_nn_conv2d_subtract_constant_4_let = (&(global_const_workspace_20_var[793248]));
  void* fused_constant_5_let = (&(global_const_workspace_20_var[782544]));
  void* pad_temp_let = (&(global_workspace_21_var[20480]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 16; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 16; ++i2) {
      for (int32_t i3 = 0; i3 < 16; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 256) + (i2 * 16)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 256; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_21_var[24576]));
    for (int32_t ax3 = 0; ax3 < 16; ++ax3) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 16; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 16) + rc)]) * ((int32_t)((int8_t*)fused_constant_5_let)[((rc * 16) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_4_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_4_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_12_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_14_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_14_let)[ax3] + 31)))) - 7;
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
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_10(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_88_var, uint8_t* global_workspace_89_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED v8 HW-REQUANT] 1x1 conv: 192->32 channels, 16 spatial positions
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_88_var[787616]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_88_var[787872]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_88_var[790048]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_88_var[786976]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_88_var[532704]);

  // Safe copy: TVM may alias input/output workspace buffers
  static int8_t _inp[3072];
  for (int32_t _i = 0; _i < 3072; _i++) _inp[_i] = p0[_i];

  // Set per-layer zero-point once. The helper is provided by conv_accel.h.
  accel_set_output_zp(7);

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

  void* fused_nn_conv2d_subtract_add_constant_62_let = (&(global_const_workspace_88_var[787616]));
  void* fused_nn_conv2d_subtract_add_constant_61_let = (&(global_const_workspace_88_var[787744]));
  void* fused_nn_conv2d_subtract_add_constant_60_let = (&(global_const_workspace_88_var[787872]));
  void* fused_nn_conv2d_constant_20_let = (&(global_const_workspace_88_var[790048]));
  void* fused_nn_conv2d_subtract_constant_20_let = (&(global_const_workspace_88_var[786976]));
  void* fused_constant_27_let = (&(global_const_workspace_88_var[532704]));
  void* pad_temp_let = (&(global_workspace_89_var[15360]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 4; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 4; ++i2) {
      for (int32_t i3 = 0; i3 < 192; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 768) + (i2 * 192)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 16; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_89_var[53248]));
    for (int32_t ax3 = 0; ax3 < 32; ++ax3) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 192; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 192) + rc)]) * ((int32_t)((int8_t*)fused_constant_27_let)[((rc * 32) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_20_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_20_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_60_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_62_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_62_let)[ax3] + 31)))) + 7;
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
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_11(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_102_var, uint8_t* global_workspace_103_var) {
  void* fused_nn_conv2d_subtract_add_constant_68_let = (&(global_const_workspace_102_var[783184]));
  void* fused_nn_conv2d_subtract_add_constant_67_let = (&(global_const_workspace_102_var[783376]));
  void* fused_nn_conv2d_subtract_add_constant_66_let = (&(global_const_workspace_102_var[783568]));
  void* fused_nn_conv2d_constant_23_let = (&(global_const_workspace_102_var[784336]));
  void* fused_nn_conv2d_subtract_constant_22_let = (&(global_const_workspace_102_var[782800]));
  void* fused_constant_31_let = (&(global_const_workspace_102_var[467424]));
  void* pad_temp_let = (&(global_workspace_103_var[53760]));
  void* conv2d_nhwc_let = (&(global_workspace_103_var[54000]));
  for (int32_t i3 = 0; i3 < 192; ++i3) {
    ((int8_t*)pad_temp_let)[i3] = p0[i3];
  }
  for (int32_t ax3 = 0; ax3 < 48; ++ax3) {
    ((int32_t*)conv2d_nhwc_let)[0] = 0;
    for (int32_t rc = 0; rc < 192; ++rc) {
      ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[rc]) * ((int32_t)((int8_t*)fused_constant_31_let)[((rc * 48) + ax3)])));
    }
    int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_22_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_23_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_66_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_68_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_68_let)[ax3] + 31)))) - 128;
    int32_t v__1 = (v_) < (127) ? (v_) : (127);
    T_cast[ax3] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_12(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_126_var, uint8_t* global_workspace_127_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED v8 HW-REQUANT] 1x1 conv: 96->40 channels, 16 spatial positions
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_126_var[784880]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_126_var[785200]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_126_var[785360]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_126_var[784720]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_126_var[601648]);

  // Safe copy: TVM may alias input/output workspace buffers
  static int8_t _inp[1536];
  for (int32_t _i = 0; _i < 1536; _i++) _inp[_i] = p0[_i];

  // Set per-layer zero-point once. The helper is provided by conv_accel.h.
  accel_set_output_zp(2);

  for (int32_t tile = 0; tile < 1; tile++) {
    int32_t oc_base = tile * 40;
    int32_t oc_count = 40;
    if (oc_base + oc_count > 40) oc_count = 40 - oc_base;

    // Pack weights for this tile (relayout from [rc][oc] to [oc][rc])
    static int8_t rw[3840];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      for (int32_t rc = 0; rc < 96; rc++)
        rw[oc * 96 + rc] = weights[rc * 40 + oc_base + oc];
    }
    accel_spad_write(0x060, rw, oc_count * 96);

    // Pack params for this tile: 16 bytes per OC.
    //   word 0: scale (high 32) and bias (low 32)
    //   word 1: zero  (high 32) and shift (low 32)
    static int32_t params[40 * 4];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      int32_t ax3 = oc_base + oc;
      params[oc*4 + 0] = (conv_sub[ax3] - conv_const[ax3]);         // bias
      params[oc*4 + 1] = quant_scale[ax3];      // scale
      params[oc*4 + 2] = quant_shift[ax3] + 31; // shift
      params[oc*4 + 3] = 0;                     // reserved
    }
    accel_spad_write(0x1000, (int8_t*)params, oc_count * 16);

    for (int32_t sp = 0; sp < 16; sp++) {
      accel_spad_write(0x000, &_inp[sp * 96], 96);
      hw_multi_dot_requant(0x000, 0x060, 0xF60,
                           0x1000, 96, oc_count);
      accel_unpack_i8_outputs(&T_cast[(sp * 40) + oc_base],
                              0xF60, oc_count);
    }
  }
  return 0;

#else

  void* fused_nn_conv2d_subtract_add_constant_83_let = (&(global_const_workspace_126_var[784880]));
  void* fused_nn_conv2d_subtract_add_constant_82_let = (&(global_const_workspace_126_var[785040]));
  void* fused_nn_conv2d_subtract_add_constant_81_let = (&(global_const_workspace_126_var[785200]));
  void* fused_nn_conv2d_constant_29_let = (&(global_const_workspace_126_var[785360]));
  void* fused_nn_conv2d_subtract_constant_27_let = (&(global_const_workspace_126_var[784720]));
  void* fused_constant_38_let = (&(global_const_workspace_126_var[601648]));
  void* pad_temp_let = (&(global_workspace_127_var[7680]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 4; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 4; ++i2) {
      for (int32_t i3 = 0; i3 < 96; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 384) + (i2 * 96)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 16; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_127_var[52736]));
    for (int32_t ax3 = 0; ax3 < 40; ++ax3) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 96; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 96) + rc)]) * ((int32_t)((int8_t*)fused_constant_38_let)[((rc * 40) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_27_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_29_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_81_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_83_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_83_let)[ax3] + 31)))) + 2;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_cast[((ax0_ax1_fused_ax2_fused * 40) + ax3)] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
    }
  }
  return 0;

#endif
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_13(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_138_var, uint8_t* global_workspace_139_var) {
  void* fused_nn_conv2d_subtract_add_constant_92_let = (&(global_const_workspace_138_var[787232]));
  void* fused_nn_conv2d_subtract_add_constant_91_let = (&(global_const_workspace_138_var[787360]));
  void* fused_nn_conv2d_subtract_add_constant_90_let = (&(global_const_workspace_138_var[787488]));
  void* fused_nn_conv2d_constant_32_let = (&(global_const_workspace_138_var[789920]));
  void* fused_nn_conv2d_subtract_constant_30_let = (&(global_const_workspace_138_var[786848]));
  void* fused_constant_42_let = (&(global_const_workspace_138_var[597808]));
  void* pad_temp_let = (&(global_workspace_139_var[52736]));
  void* conv2d_nhwc_let = (&(global_workspace_139_var[52888]));
  for (int32_t i3 = 0; i3 < 120; ++i3) {
    ((int8_t*)pad_temp_let)[i3] = p0[i3];
  }
  for (int32_t ax3 = 0; ax3 < 32; ++ax3) {
    ((int32_t*)conv2d_nhwc_let)[0] = 0;
    for (int32_t rc = 0; rc < 120; ++rc) {
      ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[rc]) * ((int32_t)((int8_t*)fused_constant_42_let)[((rc * 32) + ax3)])));
    }
    int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_30_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_32_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_90_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_92_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_92_let)[ax3] + 31)))) - 128;
    int32_t v__1 = (v_) < (127) ? (v_) : (127);
    T_cast[ax3] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_14(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_156_var, uint8_t* global_workspace_157_var) {
  void* fused_nn_conv2d_subtract_add_constant_104_let = (&(global_const_workspace_156_var[779984]));
  void* fused_nn_conv2d_subtract_add_constant_103_let = (&(global_const_workspace_156_var[780240]));
  void* fused_nn_conv2d_subtract_add_constant_102_let = (&(global_const_workspace_156_var[780496]));
  void* fused_nn_conv2d_constant_36_let = (&(global_const_workspace_156_var[780752]));
  void* fused_nn_conv2d_subtract_constant_34_let = (&(global_const_workspace_156_var[779728]));
  void* fused_constant_47_let = (&(global_const_workspace_156_var[402432]));
  void* pad_temp_let = (&(global_workspace_157_var[52992]));
  void* conv2d_nhwc_let = (&(global_workspace_157_var[52736]));
  for (int32_t i3 = 0; i3 < 240; ++i3) {
    ((int8_t*)pad_temp_let)[i3] = p0[i3];
  }
  for (int32_t ff = 0; ff < 64; ++ff) {
    ((int32_t*)conv2d_nhwc_let)[ff] = 0;
    for (int32_t rc = 0; rc < 240; ++rc) {
      ((int32_t*)conv2d_nhwc_let)[ff] = (((int32_t*)conv2d_nhwc_let)[ff] + (((int32_t)((int8_t*)pad_temp_let)[rc]) * ((int32_t)((int8_t*)fused_constant_47_let)[((rc * 64) + ff)])));
    }
  }
  for (int32_t ax3_inner = 0; ax3_inner < 64; ++ax3_inner) {
    int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[ax3_inner] + ((int32_t*)fused_nn_conv2d_subtract_constant_34_let)[ax3_inner]) - ((int32_t*)fused_nn_conv2d_constant_36_let)[ax3_inner])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_102_let)[ax3_inner])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_104_let)[ax3_inner] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_104_let)[ax3_inner] + 31)))) - 128;
    int32_t v__1 = (v_) < (127) ? (v_) : (127);
    T_cast[ax3_inner] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_15(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_162_var, uint8_t* global_workspace_163_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED v8 HW-REQUANT] 1x1 conv: 240->72 channels, 4 spatial positions
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_162_var[775120]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_162_var[775696]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_162_var[776560]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_162_var[773104]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_162_var[369792]);

  // Safe copy: TVM may alias input/output workspace buffers
  static int8_t _inp[960];
  for (int32_t _i = 0; _i < 960; _i++) _inp[_i] = p0[_i];

  // Set per-layer zero-point once. The helper is provided by conv_accel.h.
  accel_set_output_zp(-13);

  for (int32_t tile = 0; tile < 3; tile++) {
    int32_t oc_base = tile * 32;
    int32_t oc_count = 32;
    if (oc_base + oc_count > 72) oc_count = 72 - oc_base;

    // Pack weights for this tile (relayout from [rc][oc] to [oc][rc])
    static int8_t rw[7680];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      for (int32_t rc = 0; rc < 240; rc++)
        rw[oc * 240 + rc] = weights[rc * 72 + oc_base + oc];
    }
    accel_spad_write(0x0F0, rw, oc_count * 240);

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
    accel_spad_write(0x1F70, (int8_t*)params, oc_count * 16);

    for (int32_t sp = 0; sp < 4; sp++) {
      accel_spad_write(0x000, &_inp[sp * 240], 240);
      hw_multi_dot_requant(0x000, 0x0F0, 0x1EF0,
                           0x1F70, 240, oc_count);
      accel_unpack_i8_outputs(&T_cast[(sp * 72) + oc_base],
                              0x1EF0, oc_count);
    }
  }
  return 0;

#else

  void* fused_nn_conv2d_subtract_add_constant_110_let = (&(global_const_workspace_162_var[775120]));
  void* fused_nn_conv2d_subtract_add_constant_109_let = (&(global_const_workspace_162_var[775408]));
  void* fused_nn_conv2d_subtract_add_constant_108_let = (&(global_const_workspace_162_var[775696]));
  void* fused_nn_conv2d_constant_38_let = (&(global_const_workspace_162_var[776560]));
  void* fused_nn_conv2d_subtract_constant_36_let = (&(global_const_workspace_162_var[773104]));
  void* fused_constant_49_let = (&(global_const_workspace_162_var[369792]));
  void* pad_temp_let = (&(global_workspace_163_var[5760]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 2; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 2; ++i2) {
      for (int32_t i3 = 0; i3 < 240; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 480) + (i2 * 240)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 4; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_163_var[53888]));
    for (int32_t ax3 = 0; ax3 < 72; ++ax3) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 240; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 240) + rc)]) * ((int32_t)((int8_t*)fused_constant_49_let)[((rc * 72) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_36_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_38_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_108_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_110_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_110_let)[ax3] + 31)))) - 13;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_cast[((ax0_ax1_fused_ax2_fused * 72) + ax3)] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
    }
  }
  return 0;

#endif
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_16(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_174_var, uint8_t* global_workspace_175_var) {
  void* fused_nn_conv2d_subtract_add_constant_119_let = (&(global_const_workspace_174_var[755200]));
  void* fused_nn_conv2d_subtract_add_constant_118_let = (&(global_const_workspace_174_var[755648]));
  void* fused_nn_conv2d_subtract_add_constant_117_let = (&(global_const_workspace_174_var[756096]));
  void* fused_nn_conv2d_constant_41_let = (&(global_const_workspace_174_var[756992]));
  void* fused_nn_conv2d_subtract_constant_39_let = (&(global_const_workspace_174_var[753408]));
  void* fused_constant_53_let = (&(global_const_workspace_174_var[145152]));
  void* pad_temp_let = (&(global_workspace_175_var[52736]));
  void* conv2d_nhwc_let = (&(global_workspace_175_var[54000]));
  for (int32_t i3 = 0; i3 < 432; ++i3) {
    ((int8_t*)pad_temp_let)[i3] = p0[i3];
  }
  for (int32_t ax3 = 0; ax3 < 112; ++ax3) {
    ((int32_t*)conv2d_nhwc_let)[0] = 0;
    for (int32_t rc = 0; rc < 432; ++rc) {
      ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[rc]) * ((int32_t)((int8_t*)fused_constant_53_let)[((rc * 112) + ax3)])));
    }
    int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_39_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_41_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_117_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_119_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_119_let)[ax3] + 31)))) - 128;
    int32_t v__1 = (v_) < (127) ? (v_) : (127);
    T_cast[ax3] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_17(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_192_var, uint8_t* global_workspace_193_var) {
  void* fused_nn_conv2d_subtract_add_constant_131_let = (&(global_const_workspace_192_var[753856]));
  void* fused_nn_conv2d_subtract_add_constant_130_let = (&(global_const_workspace_192_var[754304]));
  void* fused_nn_conv2d_subtract_add_constant_129_let = (&(global_const_workspace_192_var[754752]));
  void* fused_nn_conv2d_constant_45_let = (&(global_const_workspace_192_var[756544]));
  void* fused_nn_conv2d_subtract_constant_43_let = (&(global_const_workspace_192_var[752960]));
  void* fused_constant_58_let = (&(global_const_workspace_192_var[48384]));
  void* pad_temp_let = (&(global_workspace_193_var[52736]));
  void* conv2d_nhwc_let = (&(global_workspace_193_var[54288]));
  for (int32_t i3 = 0; i3 < 432; ++i3) {
    ((int8_t*)pad_temp_let)[i3] = p0[i3];
  }
  for (int32_t ax3 = 0; ax3 < 112; ++ax3) {
    ((int32_t*)conv2d_nhwc_let)[0] = 0;
    for (int32_t rc = 0; rc < 432; ++rc) {
      ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[rc]) * ((int32_t)((int8_t*)fused_constant_58_let)[((rc * 112) + ax3)])));
    }
    int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_43_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_45_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_129_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_131_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_131_let)[ax3] + 31)))) - 128;
    int32_t v__1 = (v_) < (127) ? (v_) : (127);
    T_cast[ax3] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_18(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_212_var, uint8_t* global_workspace_213_var) {
  void* fused_nn_conv2d_subtract_add_constant_140_let = (&(global_const_workspace_212_var[789152]));
  void* fused_nn_conv2d_subtract_add_constant_139_let = (&(global_const_workspace_212_var[789280]));
  void* fused_nn_conv2d_subtract_add_constant_138_let = (&(global_const_workspace_212_var[789408]));
  void* fused_nn_conv2d_constant_48_let = (&(global_const_workspace_212_var[789792]));
  void* fused_nn_conv2d_subtract_constant_46_let = (&(global_const_workspace_212_var[786720]));
  void* fused_constant_63_let = (&(global_const_workspace_212_var[448992]));
  void* pad_temp_let = (&(global_workspace_213_var[0]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 6; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 6; ++i2) {
      for (int32_t i3 = 0; i3 < 32; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 192) + (i2 * 32)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 16; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_213_var[53888]));
    for (int32_t ax3 = 0; ax3 < 32; ++ax3) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t ry = 0; ry < 3; ++ry) {
        for (int32_t rx = 0; rx < 3; ++rx) {
          for (int32_t rc = 0; rc < 32; ++rc) {
            ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((((((ax0_ax1_fused_ax2_fused >> 2) * 192) + (ry * 192)) + (rx * 32)) + ((ax0_ax1_fused_ax2_fused & 3) * 32)) + rc)]) * ((int32_t)((int8_t*)fused_constant_63_let)[((((ry * 3072) + (rx * 1024)) + (rc * 32)) + ax3)])));
          }
        }
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_46_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_48_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_138_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_140_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_140_let)[ax3] + 31)))) - 128;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_cast[((ax0_ax1_fused_ax2_fused * 32) + ax3)] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_19(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_232_var, uint8_t* global_workspace_233_var) {
  void* fused_nn_conv2d_subtract_add_constant_146_let = (&(global_const_workspace_232_var[788768]));
  void* fused_nn_conv2d_subtract_add_constant_145_let = (&(global_const_workspace_232_var[788896]));
  void* fused_nn_conv2d_subtract_add_constant_144_let = (&(global_const_workspace_232_var[789024]));
  void* fused_nn_conv2d_constant_50_let = (&(global_const_workspace_232_var[789664]));
  void* fused_nn_conv2d_subtract_constant_48_let = (&(global_const_workspace_232_var[786592]));
  void* fused_constant_69_let = (&(global_const_workspace_232_var[349056]));
  void* pad_temp_let = (&(global_workspace_233_var[0]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 4; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 4; ++i2) {
      for (int32_t i3 = 0; i3 < 72; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 288) + (i2 * 72)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 4; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_233_var[1280]));
    for (int32_t ax3 = 0; ax3 < 32; ++ax3) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t ry = 0; ry < 3; ++ry) {
        for (int32_t rx = 0; rx < 3; ++rx) {
          for (int32_t rc = 0; rc < 72; ++rc) {
            ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((((((ax0_ax1_fused_ax2_fused >> 1) * 288) + (ry * 288)) + (rx * 72)) + ((ax0_ax1_fused_ax2_fused & 1) * 72)) + rc)]) * ((int32_t)((int8_t*)fused_constant_69_let)[((((ry * 6912) + (rx * 2304)) + (rc * 32)) + ax3)])));
          }
        }
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_48_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_50_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_144_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_146_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_146_let)[ax3] + 31)))) - 128;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_cast[((ax0_ax1_fused_ax2_fused * 32) + ax3)] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_2(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_22_var, uint8_t* global_workspace_23_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED v8 HW-REQUANT] 1x1 conv: 16->72 channels, 256 spatial positions
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_22_var[774256]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_22_var[774832]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_22_var[776272]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_22_var[772816]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_22_var[701488]);

  // Safe copy: TVM may alias input/output workspace buffers
  static int8_t _inp[4096];
  for (int32_t _i = 0; _i < 4096; _i++) _inp[_i] = p0[_i];

  // Set per-layer zero-point once. The helper is provided by conv_accel.h.
  accel_set_output_zp(-128);

  for (int32_t tile = 0; tile < 1; tile++) {
    int32_t oc_base = tile * 72;
    int32_t oc_count = 72;
    if (oc_base + oc_count > 72) oc_count = 72 - oc_base;

    // Pack weights for this tile (relayout from [rc][oc] to [oc][rc])
    static int8_t rw[1152];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      for (int32_t rc = 0; rc < 16; rc++)
        rw[oc * 16 + rc] = weights[rc * 72 + oc_base + oc];
    }
    accel_spad_write(0x010, rw, oc_count * 16);

    // Pack params for this tile: 16 bytes per OC.
    //   word 0: scale (high 32) and bias (low 32)
    //   word 1: zero  (high 32) and shift (low 32)
    static int32_t params[72 * 4];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      int32_t ax3 = oc_base + oc;
      params[oc*4 + 0] = (conv_sub[ax3] - conv_const[ax3]);         // bias
      params[oc*4 + 1] = quant_scale[ax3];      // scale
      params[oc*4 + 2] = quant_shift[ax3] + 31; // shift
      params[oc*4 + 3] = 0;                     // reserved
    }
    accel_spad_write(0x5B0, (int8_t*)params, oc_count * 16);

    for (int32_t sp = 0; sp < 256; sp++) {
      accel_spad_write(0x000, &_inp[sp * 16], 16);
      hw_multi_dot_requant(0x000, 0x010, 0x490,
                           0x5B0, 16, oc_count);
      accel_unpack_i8_outputs(&T_cast[(sp * 72) + oc_base],
                              0x490, oc_count);
    }
  }
  return 0;

#else

  void* fused_nn_conv2d_subtract_add_constant_17_let = (&(global_const_workspace_22_var[774256]));
  void* fused_nn_conv2d_subtract_add_constant_16_let = (&(global_const_workspace_22_var[774544]));
  void* fused_nn_conv2d_subtract_add_constant_15_let = (&(global_const_workspace_22_var[774832]));
  void* fused_nn_conv2d_constant_5_let = (&(global_const_workspace_22_var[776272]));
  void* fused_nn_conv2d_subtract_constant_5_let = (&(global_const_workspace_22_var[772816]));
  void* fused_constant_6_let = (&(global_const_workspace_22_var[701488]));
  void* pad_temp_let = (&(global_workspace_23_var[39240]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 16; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 16; ++i2) {
      for (int32_t i3 = 0; i3 < 16; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 256) + (i2 * 16)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 256; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_23_var[43336]));
    for (int32_t ax3 = 0; ax3 < 72; ++ax3) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 16; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 16) + rc)]) * ((int32_t)((int8_t*)fused_constant_6_let)[((rc * 72) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_5_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_5_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_15_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_17_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_17_let)[ax3] + 31)))) - 128;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_cast[((ax0_ax1_fused_ax2_fused * 72) + ax3)] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
    }
  }
  return 0;

#endif
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_3(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_26_var, uint8_t* global_workspace_27_var) {
  void* fused_nn_conv2d_subtract_add_constant_20_let = (&(global_const_workspace_26_var[773392]));
  void* fused_nn_conv2d_subtract_add_constant_19_let = (&(global_const_workspace_26_var[773680]));
  void* fused_nn_conv2d_subtract_add_constant_18_let = (&(global_const_workspace_26_var[773968]));
  void* fused_nn_conv2d_subtract_constant_6_let = (&(global_const_workspace_26_var[772528]));
  void* fused_nn_conv2d_constant_6_let = (&(global_const_workspace_26_var[775984]));
  void* fused_constant_7_let = (&(global_const_workspace_26_var[740112]));
  void* PaddedInput_let = (&(global_workspace_27_var[20808]));
  void* DepthwiseConv2d_let = (&(global_workspace_27_var[41616]));
  for (int32_t i1 = 0; i1 < 17; ++i1) {
    for (int32_t i2 = 0; i2 < 17; ++i2) {
      for (int32_t i3 = 0; i3 < 72; ++i3) {
        int32_t cse_var_1 = (((i1 * 1224) + (i2 * 72)) + i3);
        ((int8_t*)PaddedInput_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t i = 0; i < 8; ++i) {
    for (int32_t j = 0; j < 8; ++j) {
      for (int32_t c = 0; c < 72; ++c) {
        ((int32_t*)DepthwiseConv2d_let)[(((i * 576) + (j * 72)) + c)] = 0;
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            int32_t cse_var_3 = (dj * 72);
            int32_t cse_var_2 = (((i * 576) + (j * 72)) + c);
            ((int32_t*)DepthwiseConv2d_let)[cse_var_2] = (((int32_t*)DepthwiseConv2d_let)[cse_var_2] + (((int32_t)((int8_t*)PaddedInput_let)[(((((i * 2448) + (di * 1224)) + (j * 144)) + cse_var_3) + c)]) * ((int32_t)((int8_t*)fused_constant_7_let)[(((di * 216) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 8; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 8; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 72; ++ax3) {
        int32_t cse_var_4 = (((ax1 * 576) + (ax2 * 72)) + ax3);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_4] = (((int32_t*)DepthwiseConv2d_let)[cse_var_4] - ((int32_t*)fused_nn_conv2d_constant_6_let)[ax3]);
      }
    }
  }
  for (int32_t ax1_1 = 0; ax1_1 < 8; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 8; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 72; ++ax3_1) {
        int32_t cse_var_5 = (((ax1_1 * 576) + (ax2_1 * 72)) + ax3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_5] = (((int32_t*)DepthwiseConv2d_let)[cse_var_5] + ((int32_t*)fused_nn_conv2d_subtract_constant_6_let)[ax3_1]);
      }
    }
  }
  for (int32_t i1_1 = 0; i1_1 < 8; ++i1_1) {
    for (int32_t i2_1 = 0; i2_1 < 8; ++i2_1) {
      for (int32_t i3_1 = 0; i3_1 < 72; ++i3_1) {
        int32_t cse_var_6 = (((i1_1 * 576) + (i2_1 * 72)) + i3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_6] = ((int32_t)(((((int64_t)((int32_t*)DepthwiseConv2d_let)[cse_var_6]) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_18_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_20_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_20_let)[i3_1] + 31))));
      }
    }
  }
  for (int32_t ax1_2 = 0; ax1_2 < 8; ++ax1_2) {
    for (int32_t ax2_2 = 0; ax2_2 < 8; ++ax2_2) {
      for (int32_t ax3_2 = 0; ax3_2 < 72; ++ax3_2) {
        int32_t cse_var_7 = (((ax1_2 * 576) + (ax2_2 * 72)) + ax3_2);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_7] = (((int32_t*)DepthwiseConv2d_let)[cse_var_7] - 128);
      }
    }
  }
  for (int32_t i1_2 = 0; i1_2 < 8; ++i1_2) {
    for (int32_t i2_2 = 0; i2_2 < 8; ++i2_2) {
      for (int32_t i3_2 = 0; i3_2 < 72; ++i3_2) {
        int32_t cse_var_8 = (((i1_2 * 576) + (i2_2 * 72)) + i3_2);
        int32_t v_ = ((int32_t*)DepthwiseConv2d_let)[cse_var_8];
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_8] = ((v__1) > (-128) ? (v__1) : (-128));
      }
    }
  }
  for (int32_t ax1_3 = 0; ax1_3 < 8; ++ax1_3) {
    for (int32_t ax2_3 = 0; ax2_3 < 8; ++ax2_3) {
      for (int32_t ax3_3 = 0; ax3_3 < 72; ++ax3_3) {
        int32_t cse_var_9 = (((ax1_3 * 576) + (ax2_3 * 72)) + ax3_3);
        T_cast[cse_var_9] = ((int8_t)((int32_t*)DepthwiseConv2d_let)[cse_var_9]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_4(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_28_var, uint8_t* global_workspace_29_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED v8 HW-REQUANT] 1x1 conv: 72->24 channels, 64 spatial positions
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_28_var[792064]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_28_var[792256]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_28_var[792352]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_28_var[791200]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_28_var[699760]);

  // Safe copy: TVM may alias input/output workspace buffers
  static int8_t _inp[4608];
  for (int32_t _i = 0; _i < 4608; _i++) _inp[_i] = p0[_i];

  // Set per-layer zero-point once. The helper is provided by conv_accel.h.
  accel_set_output_zp(-4);

  for (int32_t tile = 0; tile < 1; tile++) {
    int32_t oc_base = tile * 24;
    int32_t oc_count = 24;
    if (oc_base + oc_count > 24) oc_count = 24 - oc_base;

    // Pack weights for this tile (relayout from [rc][oc] to [oc][rc])
    static int8_t rw[1728];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      for (int32_t rc = 0; rc < 72; rc++)
        rw[oc * 72 + rc] = weights[rc * 24 + oc_base + oc];
    }
    accel_spad_write(0x048, rw, oc_count * 72);

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
    accel_spad_write(0x768, (int8_t*)params, oc_count * 16);

    for (int32_t sp = 0; sp < 64; sp++) {
      accel_spad_write(0x000, &_inp[sp * 72], 72);
      hw_multi_dot_requant(0x000, 0x048, 0x708,
                           0x768, 72, oc_count);
      accel_unpack_i8_outputs(&T_cast[(sp * 24) + oc_base],
                              0x708, oc_count);
    }
  }
  return 0;

#else

  void* fused_nn_conv2d_subtract_add_constant_23_let = (&(global_const_workspace_28_var[792064]));
  void* fused_nn_conv2d_subtract_add_constant_22_let = (&(global_const_workspace_28_var[792160]));
  void* fused_nn_conv2d_subtract_add_constant_21_let = (&(global_const_workspace_28_var[792256]));
  void* fused_nn_conv2d_constant_7_let = (&(global_const_workspace_28_var[792352]));
  void* fused_nn_conv2d_subtract_constant_7_let = (&(global_const_workspace_28_var[791200]));
  void* fused_constant_8_let = (&(global_const_workspace_28_var[699760]));
  void* pad_temp_let = (&(global_workspace_29_var[0]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 8; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 8; ++i2) {
      for (int32_t i3 = 0; i3 < 72; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 576) + (i2 * 72)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 64; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_29_var[32864]));
    for (int32_t ax3 = 0; ax3 < 24; ++ax3) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 72; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 72) + rc)]) * ((int32_t)((int8_t*)fused_constant_8_let)[((rc * 24) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_7_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_7_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_21_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_23_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_23_let)[ax3] + 31)))) - 4;
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
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_5(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_46_var, uint8_t* global_workspace_47_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED v8 HW-REQUANT] 1x1 conv: 24->88 channels, 64 spatial positions
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_46_var[770768]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_46_var[771472]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_46_var[771824]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_46_var[769008]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_46_var[630960]);

  // Safe copy: TVM may alias input/output workspace buffers
  static int8_t _inp[1536];
  for (int32_t _i = 0; _i < 1536; _i++) _inp[_i] = p0[_i];

  // Set per-layer zero-point once. The helper is provided by conv_accel.h.
  accel_set_output_zp(-128);

  for (int32_t tile = 0; tile < 1; tile++) {
    int32_t oc_base = tile * 88;
    int32_t oc_count = 88;
    if (oc_base + oc_count > 88) oc_count = 88 - oc_base;

    // Pack weights for this tile (relayout from [rc][oc] to [oc][rc])
    static int8_t rw[2112];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      for (int32_t rc = 0; rc < 24; rc++)
        rw[oc * 24 + rc] = weights[rc * 88 + oc_base + oc];
    }
    accel_spad_write(0x018, rw, oc_count * 24);

    // Pack params for this tile: 16 bytes per OC.
    //   word 0: scale (high 32) and bias (low 32)
    //   word 1: zero  (high 32) and shift (low 32)
    static int32_t params[88 * 4];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      int32_t ax3 = oc_base + oc;
      params[oc*4 + 0] = (conv_sub[ax3] - conv_const[ax3]);         // bias
      params[oc*4 + 1] = quant_scale[ax3];      // scale
      params[oc*4 + 2] = quant_shift[ax3] + 31; // shift
      params[oc*4 + 3] = 0;                     // reserved
    }
    accel_spad_write(0x9B8, (int8_t*)params, oc_count * 16);

    for (int32_t sp = 0; sp < 64; sp++) {
      accel_spad_write(0x000, &_inp[sp * 24], 24);
      hw_multi_dot_requant(0x000, 0x018, 0x858,
                           0x9B8, 24, oc_count);
      accel_unpack_i8_outputs(&T_cast[(sp * 88) + oc_base],
                              0x858, oc_count);
    }
  }
  return 0;

#else

  void* fused_nn_conv2d_subtract_add_constant_29_let = (&(global_const_workspace_46_var[770768]));
  void* fused_nn_conv2d_subtract_add_constant_28_let = (&(global_const_workspace_46_var[771120]));
  void* fused_nn_conv2d_subtract_add_constant_27_let = (&(global_const_workspace_46_var[771472]));
  void* fused_nn_conv2d_constant_9_let = (&(global_const_workspace_46_var[771824]));
  void* fused_nn_conv2d_subtract_constant_9_let = (&(global_const_workspace_46_var[769008]));
  void* fused_constant_14_let = (&(global_const_workspace_46_var[630960]));
  void* pad_temp_let = (&(global_workspace_47_var[32864]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 8; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 8; ++i2) {
      for (int32_t i3 = 0; i3 < 24; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 192) + (i2 * 24)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 64; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_47_var[34400]));
    for (int32_t ax3 = 0; ax3 < 88; ++ax3) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 24; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 24) + rc)]) * ((int32_t)((int8_t*)fused_constant_14_let)[((rc * 88) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_9_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_9_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_27_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_29_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_29_let)[ax3] + 31)))) - 128;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_cast[((ax0_ax1_fused_ax2_fused * 88) + ax3)] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
    }
  }
  return 0;

#endif
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_6(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_50_var, uint8_t* global_workspace_51_var) {
  void* fused_nn_conv2d_subtract_add_constant_32_let = (&(global_const_workspace_50_var[769712]));
  void* fused_nn_conv2d_subtract_add_constant_31_let = (&(global_const_workspace_50_var[770064]));
  void* fused_nn_conv2d_subtract_add_constant_30_let = (&(global_const_workspace_50_var[770416]));
  void* fused_nn_conv2d_subtract_constant_10_let = (&(global_const_workspace_50_var[769360]));
  void* fused_nn_conv2d_constant_10_let = (&(global_const_workspace_50_var[772176]));
  void* fused_constant_15_let = (&(global_const_workspace_50_var[717040]));
  void* PaddedInput_let = (&(global_workspace_51_var[22528]));
  void* DepthwiseConv2d_let = (&(global_workspace_51_var[0]));
  for (int32_t i1 = 0; i1 < 10; ++i1) {
    for (int32_t i2 = 0; i2 < 10; ++i2) {
      for (int32_t i3 = 0; i3 < 88; ++i3) {
        int32_t cse_var_1 = (((i1 * 880) + (i2 * 88)) + i3);
        ((int8_t*)PaddedInput_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t i = 0; i < 8; ++i) {
    for (int32_t j = 0; j < 8; ++j) {
      for (int32_t c = 0; c < 88; ++c) {
        ((int32_t*)DepthwiseConv2d_let)[(((i * 704) + (j * 88)) + c)] = 0;
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            int32_t cse_var_4 = (j * 88);
            int32_t cse_var_3 = (dj * 88);
            int32_t cse_var_2 = (((i * 704) + cse_var_4) + c);
            ((int32_t*)DepthwiseConv2d_let)[cse_var_2] = (((int32_t*)DepthwiseConv2d_let)[cse_var_2] + (((int32_t)((int8_t*)PaddedInput_let)[(((((i * 880) + (di * 880)) + cse_var_4) + cse_var_3) + c)]) * ((int32_t)((int8_t*)fused_constant_15_let)[(((di * 264) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 8; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 8; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 88; ++ax3) {
        int32_t cse_var_5 = (((ax1 * 704) + (ax2 * 88)) + ax3);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_5] = (((int32_t*)DepthwiseConv2d_let)[cse_var_5] - ((int32_t*)fused_nn_conv2d_constant_10_let)[ax3]);
      }
    }
  }
  for (int32_t ax1_1 = 0; ax1_1 < 8; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 8; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 88; ++ax3_1) {
        int32_t cse_var_6 = (((ax1_1 * 704) + (ax2_1 * 88)) + ax3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_6] = (((int32_t*)DepthwiseConv2d_let)[cse_var_6] + ((int32_t*)fused_nn_conv2d_subtract_constant_10_let)[ax3_1]);
      }
    }
  }
  for (int32_t i1_1 = 0; i1_1 < 8; ++i1_1) {
    for (int32_t i2_1 = 0; i2_1 < 8; ++i2_1) {
      for (int32_t i3_1 = 0; i3_1 < 88; ++i3_1) {
        int32_t cse_var_7 = (((i1_1 * 704) + (i2_1 * 88)) + i3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_7] = ((int32_t)(((((int64_t)((int32_t*)DepthwiseConv2d_let)[cse_var_7]) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_30_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_32_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_32_let)[i3_1] + 31))));
      }
    }
  }
  for (int32_t ax1_2 = 0; ax1_2 < 8; ++ax1_2) {
    for (int32_t ax2_2 = 0; ax2_2 < 8; ++ax2_2) {
      for (int32_t ax3_2 = 0; ax3_2 < 88; ++ax3_2) {
        int32_t cse_var_8 = (((ax1_2 * 704) + (ax2_2 * 88)) + ax3_2);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_8] = (((int32_t*)DepthwiseConv2d_let)[cse_var_8] - 128);
      }
    }
  }
  for (int32_t i1_2 = 0; i1_2 < 8; ++i1_2) {
    for (int32_t i2_2 = 0; i2_2 < 8; ++i2_2) {
      for (int32_t i3_2 = 0; i3_2 < 88; ++i3_2) {
        int32_t cse_var_9 = (((i1_2 * 704) + (i2_2 * 88)) + i3_2);
        int32_t v_ = ((int32_t*)DepthwiseConv2d_let)[cse_var_9];
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_9] = ((v__1) > (-128) ? (v__1) : (-128));
      }
    }
  }
  for (int32_t ax1_3 = 0; ax1_3 < 8; ++ax1_3) {
    for (int32_t ax2_3 = 0; ax2_3 < 8; ++ax2_3) {
      for (int32_t ax3_3 = 0; ax3_3 < 88; ++ax3_3) {
        int32_t cse_var_10 = (((ax1_3 * 704) + (ax2_3 * 88)) + ax3_3);
        T_cast[cse_var_10] = ((int8_t)((int32_t*)DepthwiseConv2d_let)[cse_var_10]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_7(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_64_var, uint8_t* global_workspace_65_var) {
  void* fused_nn_conv2d_subtract_add_constant_41_let = (&(global_const_workspace_64_var[791776]));
  void* fused_nn_conv2d_subtract_add_constant_40_let = (&(global_const_workspace_64_var[791872]));
  void* fused_nn_conv2d_subtract_add_constant_39_let = (&(global_const_workspace_64_var[791968]));
  void* fused_nn_conv2d_constant_13_let = (&(global_const_workspace_64_var[792544]));
  void* fused_nn_conv2d_subtract_constant_13_let = (&(global_const_workspace_64_var[791392]));
  void* fused_constant_19_let = (&(global_const_workspace_64_var[626352]));
  void* pad_temp_let = (&(global_workspace_65_var[6144]));
  void* conv2d_nhwc_let = (&(global_workspace_65_var[6264]));
  for (int32_t i3 = 0; i3 < 96; ++i3) {
    ((int8_t*)pad_temp_let)[i3] = p0[i3];
  }
  for (int32_t ax3 = 0; ax3 < 24; ++ax3) {
    ((int32_t*)conv2d_nhwc_let)[0] = 0;
    for (int32_t rc = 0; rc < 96; ++rc) {
      ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[rc]) * ((int32_t)((int8_t*)fused_constant_19_let)[((rc * 24) + ax3)])));
    }
    int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_13_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_13_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_39_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_41_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_41_let)[ax3] + 31)))) - 128;
    int32_t v__1 = (v_) < (127) ? (v_) : (127);
    T_cast[ax3] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_8(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_70_var, uint8_t* global_workspace_71_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED v8 HW-REQUANT] 1x1 conv: 96->32 channels, 16 spatial positions
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_70_var[788000]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_70_var[788256]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_70_var[790176]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_70_var[787104]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_70_var[608560]);

  // Safe copy: TVM may alias input/output workspace buffers
  static int8_t _inp[1536];
  for (int32_t _i = 0; _i < 1536; _i++) _inp[_i] = p0[_i];

  // Set per-layer zero-point once. The helper is provided by conv_accel.h.
  accel_set_output_zp(-1);

  for (int32_t tile = 0; tile < 1; tile++) {
    int32_t oc_base = tile * 32;
    int32_t oc_count = 32;
    if (oc_base + oc_count > 32) oc_count = 32 - oc_base;

    // Pack weights for this tile (relayout from [rc][oc] to [oc][rc])
    static int8_t rw[3072];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      for (int32_t rc = 0; rc < 96; rc++)
        rw[oc * 96 + rc] = weights[rc * 32 + oc_base + oc];
    }
    accel_spad_write(0x060, rw, oc_count * 96);

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
    accel_spad_write(0xCE0, (int8_t*)params, oc_count * 16);

    for (int32_t sp = 0; sp < 16; sp++) {
      accel_spad_write(0x000, &_inp[sp * 96], 96);
      hw_multi_dot_requant(0x000, 0x060, 0xC60,
                           0xCE0, 96, oc_count);
      accel_unpack_i8_outputs(&T_cast[(sp * 32) + oc_base],
                              0xC60, oc_count);
    }
  }
  return 0;

#else

  void* fused_nn_conv2d_subtract_add_constant_47_let = (&(global_const_workspace_70_var[788000]));
  void* fused_nn_conv2d_subtract_add_constant_46_let = (&(global_const_workspace_70_var[788128]));
  void* fused_nn_conv2d_subtract_add_constant_45_let = (&(global_const_workspace_70_var[788256]));
  void* fused_nn_conv2d_constant_15_let = (&(global_const_workspace_70_var[790176]));
  void* fused_nn_conv2d_subtract_constant_15_let = (&(global_const_workspace_70_var[787104]));
  void* fused_constant_21_let = (&(global_const_workspace_70_var[608560]));
  void* pad_temp_let = (&(global_workspace_71_var[7680]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 4; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 4; ++i2) {
      for (int32_t i3 = 0; i3 < 96; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 384) + (i2 * 96)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 16; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_71_var[53248]));
    for (int32_t ax3 = 0; ax3 < 32; ++ax3) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 96; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 96) + rc)]) * ((int32_t)((int8_t*)fused_constant_21_let)[((rc * 32) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_15_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_15_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_45_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_47_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_47_let)[ax3] + 31)))) - 1;
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
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_9(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_82_var, uint8_t* global_workspace_83_var) {
  void* fused_nn_conv2d_subtract_add_constant_56_let = (&(global_const_workspace_82_var[783760]));
  void* fused_nn_conv2d_subtract_add_constant_55_let = (&(global_const_workspace_82_var[783952]));
  void* fused_nn_conv2d_subtract_add_constant_54_let = (&(global_const_workspace_82_var[784144]));
  void* fused_nn_conv2d_constant_18_let = (&(global_const_workspace_82_var[784528]));
  void* fused_nn_conv2d_subtract_constant_18_let = (&(global_const_workspace_82_var[782992]));
  void* fused_constant_25_let = (&(global_const_workspace_82_var[485856]));
  void* pad_temp_let = (&(global_workspace_83_var[53248]));
  void* conv2d_nhwc_let = (&(global_workspace_83_var[53488]));
  for (int32_t i3 = 0; i3 < 192; ++i3) {
    ((int8_t*)pad_temp_let)[i3] = p0[i3];
  }
  for (int32_t ax3 = 0; ax3 < 48; ++ax3) {
    ((int32_t*)conv2d_nhwc_let)[0] = 0;
    for (int32_t rc = 0; rc < 192; ++rc) {
      ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[rc]) * ((int32_t)((int8_t*)fused_constant_25_let)[((rc * 48) + ax3)])));
    }
    int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_18_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_18_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_54_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_56_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_56_let)[ax3] + 31)))) - 128;
    int32_t v__1 = (v_) < (127) ? (v_) : (127);
    T_cast[ax3] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_subtract_cas_c93f40e30d1c190e_(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_4_var, uint8_t* global_workspace_5_var) {
  void* fused_nn_conv2d_subtract_add_constant_2_let = (&(global_const_workspace_4_var[793760]));
  void* fused_nn_conv2d_subtract_add_constant_1_let = (&(global_const_workspace_4_var[794528]));
  void* fused_nn_conv2d_subtract_add_constant_let = (&(global_const_workspace_4_var[794592]));
  void* fused_nn_conv2d_constant_let = (&(global_const_workspace_4_var[794976]));
  void* fused_nn_conv2d_subtract_constant_let = (&(global_const_workspace_4_var[793440]));
  void* fused_constant_let = (&(global_const_workspace_4_var[757440]));
  void* pad_temp_let = (&(global_workspace_5_var[33808]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 65; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 65; ++i2) {
      for (int32_t i3 = 0; i3 < 3; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 195) + (i2 * 3)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 1024; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_5_var[46488]));
    for (int32_t ax3 = 0; ax3 < 16; ++ax3) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t ry = 0; ry < 3; ++ry) {
        for (int32_t rx = 0; rx < 3; ++rx) {
          for (int32_t rc = 0; rc < 3; ++rc) {
            ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((((((ax0_ax1_fused_ax2_fused >> 5) * 390) + (ry * 195)) + ((ax0_ax1_fused_ax2_fused & 31) * 6)) + (rx * 3)) + rc)]) * ((int32_t)((int8_t*)fused_constant_let)[((((ry * 144) + (rx * 48)) + (rc * 16)) + ax3)])));
          }
        }
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_2_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_2_let)[ax3] + 31)))) - 43;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      int32_t v__2 = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_2_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_2_let)[ax3] + 31)))) - 43;
      int32_t v__3 = (v__2) < (127) ? (v__2) : (127);
      float v__4 = (((float)(((v__3) > (-128) ? (v__3) : (-128)) + 43)) * 1.609988e-01f) + 3.000000e+00f;
      float v__5 = (v__4) < (6.000000e+00f) ? (v__4) : (6.000000e+00f);
      float v__6 = roundf(((((((float)(((v__1) > (-128) ? (v__1) : (-128)) + 43)) * 1.609988e-01f) * ((v__5) > (0.000000e+00f) ? (v__5) : (0.000000e+00f))) * 1.666667e-01f) * 9.190380e+00f)) + -1.250000e+02f;
      float v__7 = (v__6) < (1.270000e+02f) ? (v__6) : (1.270000e+02f);
      T_cast[((ax0_ax1_fused_ax2_fused * 16) + ax3)] = ((int8_t)((v__7) > (-1.280000e+02f) ? (v__7) : (-1.280000e+02f)));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_subtract_cas_c93f40e30d1c190e__1(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_54_var, uint8_t* global_workspace_55_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED] 1x1 conv: 24->96 channels, 64 spatial positions [with fused h-swish]
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_54_var[764400]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_54_var[765168]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_54_var[767472]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_54_var[759408]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_54_var[628656]);

  // Safe copy: TVM may alias input/output workspace buffers
  static int8_t _inp[1536];
  for (int32_t _i = 0; _i < 1536; _i++) _inp[_i] = p0[_i];

  for (int32_t tile = 0; tile < 1; tile++) {
    int32_t oc_base = tile * 96;
    int32_t oc_count = 96;
    if (oc_base + oc_count > 96) oc_count = 96 - oc_base;
    static int8_t rw[2304];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      for (int32_t rc = 0; rc < 24; rc++)
        rw[oc * 24 + rc] = weights[rc * 96 + oc_base + oc];
    }
    accel_spad_write(0x018, rw, oc_count * 24);
    for (int32_t sp = 0; sp < 64; sp++) {
      accel_spad_write(0x000, &_inp[sp * 24], 24);
      hw_multi_dot(0x000, 0x018, 0x918, 24, oc_count);
      for (int32_t oc = 0; oc < oc_count; oc++) {
        int32_t ax3 = oc_base + oc;
        int32_t dot = (int32_t)accel_spad_read32(0x918 + oc * 4);
        int32_t v_ = ((int32_t)(((((int64_t)((dot + conv_sub[ax3]) - conv_const[ax3]))
          * ((int64_t)quant_scale[ax3]))
          + ((int64_t)1 << ((int64_t)((quant_shift[ax3] + 31) - 1))))
          >> ((int64_t)(quant_shift[ax3] + 31)))) + 1;
        int32_t v1 = (v_) < (127) ? (v_) : (127);
        float _dq = (float)(((v1) > (-128) ? (v1) : (-128)) - 1) * 3.307024e-01f;
        float _hs_in = (_dq + 3.0f) < (6.0f) ? (_dq + 3.0f) : (6.0f);
        float _hs = roundf((_dq * ((_hs_in) > (0.0f) ? (_hs_in) : (0.0f)) * 1.666667e-01f) * 6.051700e+00f) + -1.260000e+02f;
        float _hc = (_hs) < (1.270000e+02f) ? (_hs) : (1.270000e+02f);
        T_cast[(sp * 96) + ax3] = (int8_t)((_hc) > (-1.280000e+02f) ? (_hc) : (-1.280000e+02f));
      }
    }
  }
  return 0;

#else

  void* fused_nn_conv2d_subtract_add_constant_35_let = (&(global_const_workspace_54_var[764400]));
  void* fused_nn_conv2d_subtract_add_constant_34_let = (&(global_const_workspace_54_var[764784]));
  void* fused_nn_conv2d_subtract_add_constant_33_let = (&(global_const_workspace_54_var[765168]));
  void* fused_nn_conv2d_constant_11_let = (&(global_const_workspace_54_var[767472]));
  void* fused_nn_conv2d_subtract_constant_11_let = (&(global_const_workspace_54_var[759408]));
  void* fused_constant_16_let = (&(global_const_workspace_54_var[628656]));
  void* pad_temp_let = (&(global_workspace_55_var[34400]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 8; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 8; ++i2) {
      for (int32_t i3 = 0; i3 < 24; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 192) + (i2 * 24)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 64; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_55_var[35936]));
    for (int32_t ax3 = 0; ax3 < 96; ++ax3) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 24; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 24) + rc)]) * ((int32_t)((int8_t*)fused_constant_16_let)[((rc * 96) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_11_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_11_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_33_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_35_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_35_let)[ax3] + 31)))) + 1;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      int32_t v__2 = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_11_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_11_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_33_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_35_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_35_let)[ax3] + 31)))) + 1;
      int32_t v__3 = (v__2) < (127) ? (v__2) : (127);
      float v__4 = (((float)(((v__3) > (-128) ? (v__3) : (-128)) - 1)) * 3.307024e-01f) + 3.000000e+00f;
      float v__5 = (v__4) < (6.000000e+00f) ? (v__4) : (6.000000e+00f);
      float v__6 = roundf(((((((float)(((v__1) > (-128) ? (v__1) : (-128)) - 1)) * 3.307024e-01f) * ((v__5) > (0.000000e+00f) ? (v__5) : (0.000000e+00f))) * 1.666667e-01f) * 6.051700e+00f)) + -1.260000e+02f;
      float v__7 = (v__6) < (1.270000e+02f) ? (v__6) : (1.270000e+02f);
      T_cast[((ax0_ax1_fused_ax2_fused * 96) + ax3)] = ((int8_t)((v__7) > (-1.280000e+02f) ? (v__7) : (-1.280000e+02f)));
    }
  }
  return 0;

#endif
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_subtract_cas_c93f40e30d1c190e__10(int8_t* p0, int32_t* T_cast, uint8_t* global_const_workspace_150_var, uint8_t* global_workspace_151_var) {
  void* fused_nn_conv2d_subtract_add_constant_101_let = (&(global_const_workspace_150_var[712240]));
  void* fused_nn_conv2d_subtract_add_constant_100_let = (&(global_const_workspace_150_var[713200]));
  void* fused_nn_conv2d_subtract_add_constant_99_let = (&(global_const_workspace_150_var[705520]));
  void* fused_nn_conv2d_subtract_constant_33_let = (&(global_const_workspace_150_var[703600]));
  void* fused_nn_conv2d_constant_35_let = (&(global_const_workspace_150_var[715120]));
  void* fused_constant_45_let = (&(global_const_workspace_150_var[551136]));
  void* PaddedInput_let = (&(global_workspace_151_var[0]));
  void* DepthwiseConv2d_let = (&(global_workspace_151_var[15600]));
  void* compute_let = (&(global_workspace_151_var[11760]));
  for (int32_t i1 = 0; i1 < 7; ++i1) {
    for (int32_t i2 = 0; i2 < 7; ++i2) {
      for (int32_t i3 = 0; i3 < 240; ++i3) {
        int32_t cse_var_1 = (((i1 * 1680) + (i2 * 240)) + i3);
        ((int8_t*)PaddedInput_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t i = 0; i < 2; ++i) {
    for (int32_t j = 0; j < 2; ++j) {
      for (int32_t c = 0; c < 240; ++c) {
        ((int32_t*)DepthwiseConv2d_let)[(((i * 480) + (j * 240)) + c)] = 0;
        for (int32_t di = 0; di < 5; ++di) {
          for (int32_t dj = 0; dj < 5; ++dj) {
            int32_t cse_var_3 = (dj * 240);
            int32_t cse_var_2 = (((i * 480) + (j * 240)) + c);
            ((int32_t*)DepthwiseConv2d_let)[cse_var_2] = (((int32_t*)DepthwiseConv2d_let)[cse_var_2] + (((int32_t)((int8_t*)PaddedInput_let)[(((((i * 3360) + (di * 1680)) + (j * 480)) + cse_var_3) + c)]) * ((int32_t)((int8_t*)fused_constant_45_let)[(((di * 1200) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 2; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 2; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 240; ++ax3) {
        int32_t cse_var_4 = (((ax1 * 480) + (ax2 * 240)) + ax3);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_4] = (((int32_t*)DepthwiseConv2d_let)[cse_var_4] - ((int32_t*)fused_nn_conv2d_constant_35_let)[ax3]);
      }
    }
  }
  for (int32_t ax1_1 = 0; ax1_1 < 2; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 2; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 240; ++ax3_1) {
        int32_t cse_var_5 = (((ax1_1 * 480) + (ax2_1 * 240)) + ax3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_5] = (((int32_t*)DepthwiseConv2d_let)[cse_var_5] + ((int32_t*)fused_nn_conv2d_subtract_constant_33_let)[ax3_1]);
      }
    }
  }
  for (int32_t i1_1 = 0; i1_1 < 2; ++i1_1) {
    for (int32_t i2_1 = 0; i2_1 < 2; ++i2_1) {
      for (int32_t i3_1 = 0; i3_1 < 240; ++i3_1) {
        int32_t cse_var_6 = (((i1_1 * 480) + (i2_1 * 240)) + i3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_6] = ((int32_t)(((((int64_t)((int32_t*)DepthwiseConv2d_let)[cse_var_6]) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_99_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_101_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_101_let)[i3_1] + 31))));
      }
    }
  }
  for (int32_t ax1_2 = 0; ax1_2 < 2; ++ax1_2) {
    for (int32_t ax2_2 = 0; ax2_2 < 2; ++ax2_2) {
      for (int32_t ax3_2 = 0; ax3_2 < 240; ++ax3_2) {
        int32_t cse_var_7 = (((ax1_2 * 480) + (ax2_2 * 240)) + ax3_2);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_7] = (((int32_t*)DepthwiseConv2d_let)[cse_var_7] - 15);
      }
    }
  }
  for (int32_t i1_2 = 0; i1_2 < 2; ++i1_2) {
    for (int32_t i2_2 = 0; i2_2 < 2; ++i2_2) {
      for (int32_t i3_2 = 0; i3_2 < 240; ++i3_2) {
        int32_t cse_var_8 = (((i1_2 * 480) + (i2_2 * 240)) + i3_2);
        int32_t v_ = ((int32_t*)DepthwiseConv2d_let)[cse_var_8];
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_8] = ((v__1) > (-128) ? (v__1) : (-128));
      }
    }
  }
  for (int32_t ax1_3 = 0; ax1_3 < 2; ++ax1_3) {
    for (int32_t ax2_3 = 0; ax2_3 < 2; ++ax2_3) {
      for (int32_t ax3_3 = 0; ax3_3 < 240; ++ax3_3) {
        int32_t cse_var_9 = (((ax1_3 * 480) + (ax2_3 * 240)) + ax3_3);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_9] = (((int32_t*)DepthwiseConv2d_let)[cse_var_9] + 15);
      }
    }
  }
  for (int32_t ax1_4 = 0; ax1_4 < 2; ++ax1_4) {
    for (int32_t ax2_4 = 0; ax2_4 < 2; ++ax2_4) {
      for (int32_t ax3_4 = 0; ax3_4 < 240; ++ax3_4) {
        int32_t cse_var_10 = (((ax1_4 * 480) + (ax2_4 * 240)) + ax3_4);
        ((float*)PaddedInput_let)[cse_var_10] = ((float)((int32_t*)DepthwiseConv2d_let)[cse_var_10]);
      }
    }
  }
  for (int32_t ax1_5 = 0; ax1_5 < 2; ++ax1_5) {
    for (int32_t ax2_5 = 0; ax2_5 < 2; ++ax2_5) {
      for (int32_t ax3_5 = 0; ax3_5 < 240; ++ax3_5) {
        int32_t cse_var_11 = (((ax1_5 * 480) + (ax2_5 * 240)) + ax3_5);
        ((float*)DepthwiseConv2d_let)[cse_var_11] = (((float*)PaddedInput_let)[cse_var_11] * 1.250458e-01f);
      }
    }
  }
  for (int32_t ax1_6 = 0; ax1_6 < 2; ++ax1_6) {
    for (int32_t ax2_6 = 0; ax2_6 < 2; ++ax2_6) {
      for (int32_t ax3_6 = 0; ax3_6 < 240; ++ax3_6) {
        int32_t cse_var_12 = (((ax1_6 * 480) + (ax2_6 * 240)) + ax3_6);
        ((float*)PaddedInput_let)[cse_var_12] = (((float*)DepthwiseConv2d_let)[cse_var_12] + 3.000000e+00f);
      }
    }
  }
  for (int32_t i1_3 = 0; i1_3 < 2; ++i1_3) {
    for (int32_t i2_3 = 0; i2_3 < 2; ++i2_3) {
      for (int32_t i3_3 = 0; i3_3 < 240; ++i3_3) {
        int32_t cse_var_13 = (((i1_3 * 480) + (i2_3 * 240)) + i3_3);
        float v__2 = ((float*)PaddedInput_let)[cse_var_13];
        float v__3 = (v__2) < (6.000000e+00f) ? (v__2) : (6.000000e+00f);
        ((float*)compute_let)[cse_var_13] = ((v__3) > (0.000000e+00f) ? (v__3) : (0.000000e+00f));
      }
    }
  }
  for (int32_t ax1_7 = 0; ax1_7 < 2; ++ax1_7) {
    for (int32_t ax2_7 = 0; ax2_7 < 2; ++ax2_7) {
      for (int32_t ax3_7 = 0; ax3_7 < 240; ++ax3_7) {
        int32_t cse_var_14 = (((ax1_7 * 480) + (ax2_7 * 240)) + ax3_7);
        ((float*)compute_let)[cse_var_14] = (((float*)DepthwiseConv2d_let)[cse_var_14] * ((float*)compute_let)[cse_var_14]);
      }
    }
  }
  for (int32_t ax1_8 = 0; ax1_8 < 2; ++ax1_8) {
    for (int32_t ax2_8 = 0; ax2_8 < 2; ++ax2_8) {
      for (int32_t ax3_8 = 0; ax3_8 < 240; ++ax3_8) {
        int32_t cse_var_15 = (((ax1_8 * 480) + (ax2_8 * 240)) + ax3_8);
        ((float*)compute_let)[cse_var_15] = (((float*)compute_let)[cse_var_15] * 1.666667e-01f);
      }
    }
  }
  for (int32_t ax1_9 = 0; ax1_9 < 2; ++ax1_9) {
    for (int32_t ax2_9 = 0; ax2_9 < 2; ++ax2_9) {
      for (int32_t ax3_9 = 0; ax3_9 < 240; ++ax3_9) {
        int32_t cse_var_16 = (((ax1_9 * 480) + (ax2_9 * 240)) + ax3_9);
        ((float*)compute_let)[cse_var_16] = (((float*)compute_let)[cse_var_16] * 1.408553e+01f);
      }
    }
  }
  for (int32_t ax1_10 = 0; ax1_10 < 2; ++ax1_10) {
    for (int32_t ax2_10 = 0; ax2_10 < 2; ++ax2_10) {
      for (int32_t ax3_10 = 0; ax3_10 < 240; ++ax3_10) {
        int32_t cse_var_17 = (((ax1_10 * 480) + (ax2_10 * 240)) + ax3_10);
        ((float*)compute_let)[cse_var_17] = roundf(((float*)compute_let)[cse_var_17]);
      }
    }
  }
  for (int32_t ax1_11 = 0; ax1_11 < 2; ++ax1_11) {
    for (int32_t ax2_11 = 0; ax2_11 < 2; ++ax2_11) {
      for (int32_t ax3_11 = 0; ax3_11 < 240; ++ax3_11) {
        int32_t cse_var_18 = (((ax1_11 * 480) + (ax2_11 * 240)) + ax3_11);
        ((float*)compute_let)[cse_var_18] = (((float*)compute_let)[cse_var_18] + -1.230000e+02f);
      }
    }
  }
  for (int32_t i1_4 = 0; i1_4 < 2; ++i1_4) {
    for (int32_t i2_4 = 0; i2_4 < 2; ++i2_4) {
      for (int32_t i3_4 = 0; i3_4 < 240; ++i3_4) {
        int32_t cse_var_19 = (((i1_4 * 480) + (i2_4 * 240)) + i3_4);
        float v__4 = ((float*)compute_let)[cse_var_19];
        float v__5 = (v__4) < (1.270000e+02f) ? (v__4) : (1.270000e+02f);
        ((float*)compute_let)[cse_var_19] = ((v__5) > (-1.280000e+02f) ? (v__5) : (-1.280000e+02f));
      }
    }
  }
  for (int32_t ax1_12 = 0; ax1_12 < 2; ++ax1_12) {
    for (int32_t ax2_12 = 0; ax2_12 < 2; ++ax2_12) {
      for (int32_t ax3_12 = 0; ax3_12 < 240; ++ax3_12) {
        int32_t cse_var_20 = (((ax1_12 * 480) + (ax2_12 * 240)) + ax3_12);
        T_cast[cse_var_20] = ((int32_t)((float*)compute_let)[cse_var_20]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_subtract_cas_c93f40e30d1c190e__11(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_164_var, uint8_t* global_workspace_165_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED] 1x1 conv: 72->432 channels, 4 spatial positions [with fused h-swish]
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_164_var[682480]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_164_var[685936]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_164_var[698032]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_164_var[649648]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_164_var[255744]);

  // Safe copy: TVM may alias input/output workspace buffers
  static int8_t _inp[288];
  for (int32_t _i = 0; _i < 288; _i++) _inp[_i] = p0[_i];

  for (int32_t tile = 0; tile < 4; tile++) {
    int32_t oc_base = tile * 128;
    int32_t oc_count = 128;
    if (oc_base + oc_count > 432) oc_count = 432 - oc_base;
    static int8_t rw[9216];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      for (int32_t rc = 0; rc < 72; rc++)
        rw[oc * 72 + rc] = weights[rc * 432 + oc_base + oc];
    }
    accel_spad_write(0x048, rw, oc_count * 72);
    for (int32_t sp = 0; sp < 4; sp++) {
      accel_spad_write(0x000, &_inp[sp * 72], 72);
      hw_multi_dot(0x000, 0x048, 0x2448, 72, oc_count);
      for (int32_t oc = 0; oc < oc_count; oc++) {
        int32_t ax3 = oc_base + oc;
        int32_t dot = (int32_t)accel_spad_read32(0x2448 + oc * 4);
        int32_t v_ = ((int32_t)(((((int64_t)((dot + conv_sub[ax3]) - conv_const[ax3]))
          * ((int64_t)quant_scale[ax3]))
          + ((int64_t)1 << ((int64_t)((quant_shift[ax3] + 31) - 1))))
          >> ((int64_t)(quant_shift[ax3] + 31)))) - 18;
        int32_t v1 = (v_) < (127) ? (v_) : (127);
        float _dq = (float)(((v1) > (-128) ? (v1) : (-128)) + 18) * 1.290745e-01f;
        float _hs_in = (_dq + 3.0f) < (6.0f) ? (_dq + 3.0f) : (6.0f);
        float _hs = roundf((_dq * ((_hs_in) > (0.0f) ? (_hs_in) : (0.0f)) * 1.666667e-01f) * 1.336400e+01f) + -1.230000e+02f;
        float _hc = (_hs) < (1.270000e+02f) ? (_hs) : (1.270000e+02f);
        T_cast[(sp * 432) + ax3] = (int8_t)((_hc) > (-1.280000e+02f) ? (_hc) : (-1.280000e+02f));
      }
    }
  }
  return 0;

#else

  void* fused_nn_conv2d_subtract_add_constant_113_let = (&(global_const_workspace_164_var[682480]));
  void* fused_nn_conv2d_subtract_add_constant_112_let = (&(global_const_workspace_164_var[684208]));
  void* fused_nn_conv2d_subtract_add_constant_111_let = (&(global_const_workspace_164_var[685936]));
  void* fused_nn_conv2d_constant_39_let = (&(global_const_workspace_164_var[698032]));
  void* fused_nn_conv2d_subtract_constant_37_let = (&(global_const_workspace_164_var[649648]));
  void* fused_constant_50_let = (&(global_const_workspace_164_var[255744]));
  void* pad_temp_let = (&(global_workspace_165_var[53888]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 2; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 2; ++i2) {
      for (int32_t i3 = 0; i3 < 72; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 144) + (i2 * 72)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 4; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_165_var[54176]));
    for (int32_t ax3 = 0; ax3 < 432; ++ax3) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 72; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 72) + rc)]) * ((int32_t)((int8_t*)fused_constant_50_let)[((rc * 432) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_37_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_39_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_111_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_113_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_113_let)[ax3] + 31)))) - 18;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      int32_t v__2 = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_37_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_39_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_111_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_113_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_113_let)[ax3] + 31)))) - 18;
      int32_t v__3 = (v__2) < (127) ? (v__2) : (127);
      float v__4 = (((float)(((v__3) > (-128) ? (v__3) : (-128)) + 18)) * 1.290745e-01f) + 3.000000e+00f;
      float v__5 = (v__4) < (6.000000e+00f) ? (v__4) : (6.000000e+00f);
      float v__6 = roundf(((((((float)(((v__1) > (-128) ? (v__1) : (-128)) + 18)) * 1.290745e-01f) * ((v__5) > (0.000000e+00f) ? (v__5) : (0.000000e+00f))) * 1.666667e-01f) * 1.336400e+01f)) + -1.230000e+02f;
      float v__7 = (v__6) < (1.270000e+02f) ? (v__6) : (1.270000e+02f);
      T_cast[((ax0_ax1_fused_ax2_fused * 432) + ax3)] = ((int8_t)((v__7) > (-1.280000e+02f) ? (v__7) : (-1.280000e+02f)));
    }
  }
  return 0;

#endif
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_subtract_cas_c93f40e30d1c190e__12(int8_t* p0, int32_t* T_cast, uint8_t* global_const_workspace_168_var, uint8_t* global_workspace_169_var) {
  void* fused_nn_conv2d_subtract_add_constant_116_let = (&(global_const_workspace_168_var[677296]));
  void* fused_nn_conv2d_subtract_add_constant_115_let = (&(global_const_workspace_168_var[679024]));
  void* fused_nn_conv2d_subtract_add_constant_114_let = (&(global_const_workspace_168_var[680752]));
  void* fused_nn_conv2d_subtract_constant_38_let = (&(global_const_workspace_168_var[647920]));
  void* fused_nn_conv2d_constant_40_let = (&(global_const_workspace_168_var[696304]));
  void* fused_constant_51_let = (&(global_const_workspace_168_var[428592]));
  void* PaddedInput_let = (&(global_workspace_169_var[0]));
  void* DepthwiseConv2d_let = (&(global_workspace_169_var[22464]));
  void* compute_let = (&(global_workspace_169_var[15552]));
  for (int32_t i1 = 0; i1 < 6; ++i1) {
    for (int32_t i2 = 0; i2 < 6; ++i2) {
      for (int32_t i3 = 0; i3 < 432; ++i3) {
        int32_t cse_var_1 = (((i1 * 2592) + (i2 * 432)) + i3);
        ((int8_t*)PaddedInput_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t i = 0; i < 2; ++i) {
    for (int32_t j = 0; j < 2; ++j) {
      for (int32_t c = 0; c < 432; ++c) {
        ((int32_t*)DepthwiseConv2d_let)[(((i * 864) + (j * 432)) + c)] = 0;
        for (int32_t di = 0; di < 5; ++di) {
          for (int32_t dj = 0; dj < 5; ++dj) {
            int32_t cse_var_4 = (j * 432);
            int32_t cse_var_3 = (dj * 432);
            int32_t cse_var_2 = (((i * 864) + cse_var_4) + c);
            ((int32_t*)DepthwiseConv2d_let)[cse_var_2] = (((int32_t*)DepthwiseConv2d_let)[cse_var_2] + (((int32_t)((int8_t*)PaddedInput_let)[(((((i * 2592) + (di * 2592)) + cse_var_4) + cse_var_3) + c)]) * ((int32_t)((int8_t*)fused_constant_51_let)[(((di * 2160) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 2; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 2; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 432; ++ax3) {
        int32_t cse_var_5 = (((ax1 * 864) + (ax2 * 432)) + ax3);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_5] = (((int32_t*)DepthwiseConv2d_let)[cse_var_5] - ((int32_t*)fused_nn_conv2d_constant_40_let)[ax3]);
      }
    }
  }
  for (int32_t ax1_1 = 0; ax1_1 < 2; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 2; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 432; ++ax3_1) {
        int32_t cse_var_6 = (((ax1_1 * 864) + (ax2_1 * 432)) + ax3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_6] = (((int32_t*)DepthwiseConv2d_let)[cse_var_6] + ((int32_t*)fused_nn_conv2d_subtract_constant_38_let)[ax3_1]);
      }
    }
  }
  for (int32_t i1_1 = 0; i1_1 < 2; ++i1_1) {
    for (int32_t i2_1 = 0; i2_1 < 2; ++i2_1) {
      for (int32_t i3_1 = 0; i3_1 < 432; ++i3_1) {
        int32_t cse_var_7 = (((i1_1 * 864) + (i2_1 * 432)) + i3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_7] = ((int32_t)(((((int64_t)((int32_t*)DepthwiseConv2d_let)[cse_var_7]) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_114_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_116_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_116_let)[i3_1] + 31))));
      }
    }
  }
  for (int32_t ax1_2 = 0; ax1_2 < 2; ++ax1_2) {
    for (int32_t ax2_2 = 0; ax2_2 < 2; ++ax2_2) {
      for (int32_t ax3_2 = 0; ax3_2 < 432; ++ax3_2) {
        int32_t cse_var_8 = (((ax1_2 * 864) + (ax2_2 * 432)) + ax3_2);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_8] = (((int32_t*)DepthwiseConv2d_let)[cse_var_8] - 19);
      }
    }
  }
  for (int32_t i1_2 = 0; i1_2 < 2; ++i1_2) {
    for (int32_t i2_2 = 0; i2_2 < 2; ++i2_2) {
      for (int32_t i3_2 = 0; i3_2 < 432; ++i3_2) {
        int32_t cse_var_9 = (((i1_2 * 864) + (i2_2 * 432)) + i3_2);
        int32_t v_ = ((int32_t*)DepthwiseConv2d_let)[cse_var_9];
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_9] = ((v__1) > (-128) ? (v__1) : (-128));
      }
    }
  }
  for (int32_t ax1_3 = 0; ax1_3 < 2; ++ax1_3) {
    for (int32_t ax2_3 = 0; ax2_3 < 2; ++ax2_3) {
      for (int32_t ax3_3 = 0; ax3_3 < 432; ++ax3_3) {
        int32_t cse_var_10 = (((ax1_3 * 864) + (ax2_3 * 432)) + ax3_3);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_10] = (((int32_t*)DepthwiseConv2d_let)[cse_var_10] + 19);
      }
    }
  }
  for (int32_t ax1_4 = 0; ax1_4 < 2; ++ax1_4) {
    for (int32_t ax2_4 = 0; ax2_4 < 2; ++ax2_4) {
      for (int32_t ax3_4 = 0; ax3_4 < 432; ++ax3_4) {
        int32_t cse_var_11 = (((ax1_4 * 864) + (ax2_4 * 432)) + ax3_4);
        ((float*)PaddedInput_let)[cse_var_11] = ((float)((int32_t*)DepthwiseConv2d_let)[cse_var_11]);
      }
    }
  }
  for (int32_t ax1_5 = 0; ax1_5 < 2; ++ax1_5) {
    for (int32_t ax2_5 = 0; ax2_5 < 2; ++ax2_5) {
      for (int32_t ax3_5 = 0; ax3_5 < 432; ++ax3_5) {
        int32_t cse_var_12 = (((ax1_5 * 864) + (ax2_5 * 432)) + ax3_5);
        ((float*)DepthwiseConv2d_let)[cse_var_12] = (((float*)PaddedInput_let)[cse_var_12] * 1.924749e-01f);
      }
    }
  }
  for (int32_t ax1_6 = 0; ax1_6 < 2; ++ax1_6) {
    for (int32_t ax2_6 = 0; ax2_6 < 2; ++ax2_6) {
      for (int32_t ax3_6 = 0; ax3_6 < 432; ++ax3_6) {
        int32_t cse_var_13 = (((ax1_6 * 864) + (ax2_6 * 432)) + ax3_6);
        ((float*)PaddedInput_let)[cse_var_13] = (((float*)DepthwiseConv2d_let)[cse_var_13] + 3.000000e+00f);
      }
    }
  }
  for (int32_t i1_3 = 0; i1_3 < 2; ++i1_3) {
    for (int32_t i2_3 = 0; i2_3 < 2; ++i2_3) {
      for (int32_t i3_3 = 0; i3_3 < 432; ++i3_3) {
        int32_t cse_var_14 = (((i1_3 * 864) + (i2_3 * 432)) + i3_3);
        float v__2 = ((float*)PaddedInput_let)[cse_var_14];
        float v__3 = (v__2) < (6.000000e+00f) ? (v__2) : (6.000000e+00f);
        ((float*)compute_let)[cse_var_14] = ((v__3) > (0.000000e+00f) ? (v__3) : (0.000000e+00f));
      }
    }
  }
  for (int32_t ax1_7 = 0; ax1_7 < 2; ++ax1_7) {
    for (int32_t ax2_7 = 0; ax2_7 < 2; ++ax2_7) {
      for (int32_t ax3_7 = 0; ax3_7 < 432; ++ax3_7) {
        int32_t cse_var_15 = (((ax1_7 * 864) + (ax2_7 * 432)) + ax3_7);
        ((float*)compute_let)[cse_var_15] = (((float*)DepthwiseConv2d_let)[cse_var_15] * ((float*)compute_let)[cse_var_15]);
      }
    }
  }
  for (int32_t ax1_8 = 0; ax1_8 < 2; ++ax1_8) {
    for (int32_t ax2_8 = 0; ax2_8 < 2; ++ax2_8) {
      for (int32_t ax3_8 = 0; ax3_8 < 432; ++ax3_8) {
        int32_t cse_var_16 = (((ax1_8 * 864) + (ax2_8 * 432)) + ax3_8);
        ((float*)compute_let)[cse_var_16] = (((float*)compute_let)[cse_var_16] * 1.666667e-01f);
      }
    }
  }
  for (int32_t ax1_9 = 0; ax1_9 < 2; ++ax1_9) {
    for (int32_t ax2_9 = 0; ax2_9 < 2; ++ax2_9) {
      for (int32_t ax3_9 = 0; ax3_9 < 432; ++ax3_9) {
        int32_t cse_var_17 = (((ax1_9 * 864) + (ax2_9 * 432)) + ax3_9);
        ((float*)compute_let)[cse_var_17] = (((float*)compute_let)[cse_var_17] * 8.947480e+00f);
      }
    }
  }
  for (int32_t ax1_10 = 0; ax1_10 < 2; ++ax1_10) {
    for (int32_t ax2_10 = 0; ax2_10 < 2; ++ax2_10) {
      for (int32_t ax3_10 = 0; ax3_10 < 432; ++ax3_10) {
        int32_t cse_var_18 = (((ax1_10 * 864) + (ax2_10 * 432)) + ax3_10);
        ((float*)compute_let)[cse_var_18] = roundf(((float*)compute_let)[cse_var_18]);
      }
    }
  }
  for (int32_t ax1_11 = 0; ax1_11 < 2; ++ax1_11) {
    for (int32_t ax2_11 = 0; ax2_11 < 2; ++ax2_11) {
      for (int32_t ax3_11 = 0; ax3_11 < 432; ++ax3_11) {
        int32_t cse_var_19 = (((ax1_11 * 864) + (ax2_11 * 432)) + ax3_11);
        ((float*)compute_let)[cse_var_19] = (((float*)compute_let)[cse_var_19] + -1.250000e+02f);
      }
    }
  }
  for (int32_t i1_4 = 0; i1_4 < 2; ++i1_4) {
    for (int32_t i2_4 = 0; i2_4 < 2; ++i2_4) {
      for (int32_t i3_4 = 0; i3_4 < 432; ++i3_4) {
        int32_t cse_var_20 = (((i1_4 * 864) + (i2_4 * 432)) + i3_4);
        float v__4 = ((float*)compute_let)[cse_var_20];
        float v__5 = (v__4) < (1.270000e+02f) ? (v__4) : (1.270000e+02f);
        ((float*)compute_let)[cse_var_20] = ((v__5) > (-1.280000e+02f) ? (v__5) : (-1.280000e+02f));
      }
    }
  }
  for (int32_t ax1_12 = 0; ax1_12 < 2; ++ax1_12) {
    for (int32_t ax2_12 = 0; ax2_12 < 2; ++ax2_12) {
      for (int32_t ax3_12 = 0; ax3_12 < 432; ++ax3_12) {
        int32_t cse_var_21 = (((ax1_12 * 864) + (ax2_12 * 432)) + ax3_12);
        T_cast[cse_var_21] = ((int32_t)((float*)compute_let)[cse_var_21]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_subtract_cas_c93f40e30d1c190e__13(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_182_var, uint8_t* global_workspace_183_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED] 1x1 conv: 72->432 channels, 4 spatial positions [with fused h-swish]
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_182_var[666928]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_182_var[670384]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_182_var[692848]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_182_var[644464]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_182_var[224640]);

  // Safe copy: TVM may alias input/output workspace buffers
  static int8_t _inp[288];
  for (int32_t _i = 0; _i < 288; _i++) _inp[_i] = p0[_i];

  for (int32_t tile = 0; tile < 4; tile++) {
    int32_t oc_base = tile * 128;
    int32_t oc_count = 128;
    if (oc_base + oc_count > 432) oc_count = 432 - oc_base;
    static int8_t rw[9216];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      for (int32_t rc = 0; rc < 72; rc++)
        rw[oc * 72 + rc] = weights[rc * 432 + oc_base + oc];
    }
    accel_spad_write(0x048, rw, oc_count * 72);
    for (int32_t sp = 0; sp < 4; sp++) {
      accel_spad_write(0x000, &_inp[sp * 72], 72);
      hw_multi_dot(0x000, 0x048, 0x2448, 72, oc_count);
      for (int32_t oc = 0; oc < oc_count; oc++) {
        int32_t ax3 = oc_base + oc;
        int32_t dot = (int32_t)accel_spad_read32(0x2448 + oc * 4);
        int32_t v_ = ((int32_t)(((((int64_t)((dot + conv_sub[ax3]) - conv_const[ax3]))
          * ((int64_t)quant_scale[ax3]))
          + ((int64_t)1 << ((int64_t)((quant_shift[ax3] + 31) - 1))))
          >> ((int64_t)(quant_shift[ax3] + 31)))) - 35;
        int32_t v1 = (v_) < (127) ? (v_) : (127);
        float _dq = (float)(((v1) > (-128) ? (v1) : (-128)) + 35) * 5.545549e-01f;
        float _hs_in = (_dq + 3.0f) < (6.0f) ? (_dq + 3.0f) : (6.0f);
        float _hs = roundf((_dq * ((_hs_in) > (0.0f) ? (_hs_in) : (0.0f)) * 1.666667e-01f) * 2.824722e+00f) + -1.270000e+02f;
        float _hc = (_hs) < (1.270000e+02f) ? (_hs) : (1.270000e+02f);
        T_cast[(sp * 432) + ax3] = (int8_t)((_hc) > (-1.280000e+02f) ? (_hc) : (-1.280000e+02f));
      }
    }
  }
  return 0;

#else

  void* fused_nn_conv2d_subtract_add_constant_125_let = (&(global_const_workspace_182_var[666928]));
  void* fused_nn_conv2d_subtract_add_constant_124_let = (&(global_const_workspace_182_var[668656]));
  void* fused_nn_conv2d_subtract_add_constant_123_let = (&(global_const_workspace_182_var[670384]));
  void* fused_nn_conv2d_constant_43_let = (&(global_const_workspace_182_var[692848]));
  void* fused_nn_conv2d_subtract_constant_41_let = (&(global_const_workspace_182_var[644464]));
  void* fused_constant_55_let = (&(global_const_workspace_182_var[224640]));
  void* pad_temp_let = (&(global_workspace_183_var[54176]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 2; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 2; ++i2) {
      for (int32_t i3 = 0; i3 < 72; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 144) + (i2 * 72)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 4; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_183_var[54464]));
    for (int32_t ax3 = 0; ax3 < 432; ++ax3) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 72; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 72) + rc)]) * ((int32_t)((int8_t*)fused_constant_55_let)[((rc * 432) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_41_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_43_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_123_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_125_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_125_let)[ax3] + 31)))) - 35;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      int32_t v__2 = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_41_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_43_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_123_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_125_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_125_let)[ax3] + 31)))) - 35;
      int32_t v__3 = (v__2) < (127) ? (v__2) : (127);
      float v__4 = (((float)(((v__3) > (-128) ? (v__3) : (-128)) + 35)) * 5.545549e-01f) + 3.000000e+00f;
      float v__5 = (v__4) < (6.000000e+00f) ? (v__4) : (6.000000e+00f);
      float v__6 = roundf(((((((float)(((v__1) > (-128) ? (v__1) : (-128)) + 35)) * 5.545549e-01f) * ((v__5) > (0.000000e+00f) ? (v__5) : (0.000000e+00f))) * 1.666667e-01f) * 2.824722e+00f)) + -1.270000e+02f;
      float v__7 = (v__6) < (1.270000e+02f) ? (v__6) : (1.270000e+02f);
      T_cast[((ax0_ax1_fused_ax2_fused * 432) + ax3)] = ((int8_t)((v__7) > (-1.280000e+02f) ? (v__7) : (-1.280000e+02f)));
    }
  }
  return 0;

#endif
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_subtract_cas_c93f40e30d1c190e__14(int8_t* p0, int32_t* T_cast, uint8_t* global_const_workspace_186_var, uint8_t* global_workspace_187_var) {
  void* fused_nn_conv2d_subtract_add_constant_128_let = (&(global_const_workspace_186_var[661744]));
  void* fused_nn_conv2d_subtract_add_constant_127_let = (&(global_const_workspace_186_var[663472]));
  void* fused_nn_conv2d_subtract_add_constant_126_let = (&(global_const_workspace_186_var[665200]));
  void* fused_nn_conv2d_subtract_constant_42_let = (&(global_const_workspace_186_var[642736]));
  void* fused_nn_conv2d_constant_44_let = (&(global_const_workspace_186_var[691120]));
  void* fused_constant_56_let = (&(global_const_workspace_186_var[417792]));
  void* PaddedInput_let = (&(global_workspace_187_var[0]));
  void* DepthwiseConv2d_let = (&(global_workspace_187_var[22464]));
  void* compute_let = (&(global_workspace_187_var[15552]));
  for (int32_t i1 = 0; i1 < 6; ++i1) {
    for (int32_t i2 = 0; i2 < 6; ++i2) {
      for (int32_t i3 = 0; i3 < 432; ++i3) {
        int32_t cse_var_1 = (((i1 * 2592) + (i2 * 432)) + i3);
        ((int8_t*)PaddedInput_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t i = 0; i < 2; ++i) {
    for (int32_t j = 0; j < 2; ++j) {
      for (int32_t c = 0; c < 432; ++c) {
        ((int32_t*)DepthwiseConv2d_let)[(((i * 864) + (j * 432)) + c)] = 0;
        for (int32_t di = 0; di < 5; ++di) {
          for (int32_t dj = 0; dj < 5; ++dj) {
            int32_t cse_var_4 = (j * 432);
            int32_t cse_var_3 = (dj * 432);
            int32_t cse_var_2 = (((i * 864) + cse_var_4) + c);
            ((int32_t*)DepthwiseConv2d_let)[cse_var_2] = (((int32_t*)DepthwiseConv2d_let)[cse_var_2] + (((int32_t)((int8_t*)PaddedInput_let)[(((((i * 2592) + (di * 2592)) + cse_var_4) + cse_var_3) + c)]) * ((int32_t)((int8_t*)fused_constant_56_let)[(((di * 2160) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 2; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 2; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 432; ++ax3) {
        int32_t cse_var_5 = (((ax1 * 864) + (ax2 * 432)) + ax3);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_5] = (((int32_t*)DepthwiseConv2d_let)[cse_var_5] - ((int32_t*)fused_nn_conv2d_constant_44_let)[ax3]);
      }
    }
  }
  for (int32_t ax1_1 = 0; ax1_1 < 2; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 2; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 432; ++ax3_1) {
        int32_t cse_var_6 = (((ax1_1 * 864) + (ax2_1 * 432)) + ax3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_6] = (((int32_t*)DepthwiseConv2d_let)[cse_var_6] + ((int32_t*)fused_nn_conv2d_subtract_constant_42_let)[ax3_1]);
      }
    }
  }
  for (int32_t i1_1 = 0; i1_1 < 2; ++i1_1) {
    for (int32_t i2_1 = 0; i2_1 < 2; ++i2_1) {
      for (int32_t i3_1 = 0; i3_1 < 432; ++i3_1) {
        int32_t cse_var_7 = (((i1_1 * 864) + (i2_1 * 432)) + i3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_7] = ((int32_t)((((((int64_t)((int32_t*)DepthwiseConv2d_let)[cse_var_7]) << ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_127_let)[i3_1])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_126_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_128_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_128_let)[i3_1] + 31))));
      }
    }
  }
  for (int32_t ax1_2 = 0; ax1_2 < 2; ++ax1_2) {
    for (int32_t ax2_2 = 0; ax2_2 < 2; ++ax2_2) {
      for (int32_t ax3_2 = 0; ax3_2 < 432; ++ax3_2) {
        int32_t cse_var_8 = (((ax1_2 * 864) + (ax2_2 * 432)) + ax3_2);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_8] = (((int32_t*)DepthwiseConv2d_let)[cse_var_8] - 31);
      }
    }
  }
  for (int32_t i1_2 = 0; i1_2 < 2; ++i1_2) {
    for (int32_t i2_2 = 0; i2_2 < 2; ++i2_2) {
      for (int32_t i3_2 = 0; i3_2 < 432; ++i3_2) {
        int32_t cse_var_9 = (((i1_2 * 864) + (i2_2 * 432)) + i3_2);
        int32_t v_ = ((int32_t*)DepthwiseConv2d_let)[cse_var_9];
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_9] = ((v__1) > (-128) ? (v__1) : (-128));
      }
    }
  }
  for (int32_t ax1_3 = 0; ax1_3 < 2; ++ax1_3) {
    for (int32_t ax2_3 = 0; ax2_3 < 2; ++ax2_3) {
      for (int32_t ax3_3 = 0; ax3_3 < 432; ++ax3_3) {
        int32_t cse_var_10 = (((ax1_3 * 864) + (ax2_3 * 432)) + ax3_3);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_10] = (((int32_t*)DepthwiseConv2d_let)[cse_var_10] + 31);
      }
    }
  }
  for (int32_t ax1_4 = 0; ax1_4 < 2; ++ax1_4) {
    for (int32_t ax2_4 = 0; ax2_4 < 2; ++ax2_4) {
      for (int32_t ax3_4 = 0; ax3_4 < 432; ++ax3_4) {
        int32_t cse_var_11 = (((ax1_4 * 864) + (ax2_4 * 432)) + ax3_4);
        ((float*)PaddedInput_let)[cse_var_11] = ((float)((int32_t*)DepthwiseConv2d_let)[cse_var_11]);
      }
    }
  }
  for (int32_t ax1_5 = 0; ax1_5 < 2; ++ax1_5) {
    for (int32_t ax2_5 = 0; ax2_5 < 2; ++ax2_5) {
      for (int32_t ax3_5 = 0; ax3_5 < 432; ++ax3_5) {
        int32_t cse_var_12 = (((ax1_5 * 864) + (ax2_5 * 432)) + ax3_5);
        ((float*)DepthwiseConv2d_let)[cse_var_12] = (((float*)PaddedInput_let)[cse_var_12] * 3.832174e-01f);
      }
    }
  }
  for (int32_t ax1_6 = 0; ax1_6 < 2; ++ax1_6) {
    for (int32_t ax2_6 = 0; ax2_6 < 2; ++ax2_6) {
      for (int32_t ax3_6 = 0; ax3_6 < 432; ++ax3_6) {
        int32_t cse_var_13 = (((ax1_6 * 864) + (ax2_6 * 432)) + ax3_6);
        ((float*)PaddedInput_let)[cse_var_13] = (((float*)DepthwiseConv2d_let)[cse_var_13] + 3.000000e+00f);
      }
    }
  }
  for (int32_t i1_3 = 0; i1_3 < 2; ++i1_3) {
    for (int32_t i2_3 = 0; i2_3 < 2; ++i2_3) {
      for (int32_t i3_3 = 0; i3_3 < 432; ++i3_3) {
        int32_t cse_var_14 = (((i1_3 * 864) + (i2_3 * 432)) + i3_3);
        float v__2 = ((float*)PaddedInput_let)[cse_var_14];
        float v__3 = (v__2) < (6.000000e+00f) ? (v__2) : (6.000000e+00f);
        ((float*)compute_let)[cse_var_14] = ((v__3) > (0.000000e+00f) ? (v__3) : (0.000000e+00f));
      }
    }
  }
  for (int32_t ax1_7 = 0; ax1_7 < 2; ++ax1_7) {
    for (int32_t ax2_7 = 0; ax2_7 < 2; ++ax2_7) {
      for (int32_t ax3_7 = 0; ax3_7 < 432; ++ax3_7) {
        int32_t cse_var_15 = (((ax1_7 * 864) + (ax2_7 * 432)) + ax3_7);
        ((float*)compute_let)[cse_var_15] = (((float*)DepthwiseConv2d_let)[cse_var_15] * ((float*)compute_let)[cse_var_15]);
      }
    }
  }
  for (int32_t ax1_8 = 0; ax1_8 < 2; ++ax1_8) {
    for (int32_t ax2_8 = 0; ax2_8 < 2; ++ax2_8) {
      for (int32_t ax3_8 = 0; ax3_8 < 432; ++ax3_8) {
        int32_t cse_var_16 = (((ax1_8 * 864) + (ax2_8 * 432)) + ax3_8);
        ((float*)compute_let)[cse_var_16] = (((float*)compute_let)[cse_var_16] * 1.666667e-01f);
      }
    }
  }
  for (int32_t ax1_9 = 0; ax1_9 < 2; ++ax1_9) {
    for (int32_t ax2_9 = 0; ax2_9 < 2; ++ax2_9) {
      for (int32_t ax3_9 = 0; ax3_9 < 432; ++ax3_9) {
        int32_t cse_var_17 = (((ax1_9 * 864) + (ax2_9 * 432)) + ax3_9);
        ((float*)compute_let)[cse_var_17] = (((float*)compute_let)[cse_var_17] * 4.185743e+00f);
      }
    }
  }
  for (int32_t ax1_10 = 0; ax1_10 < 2; ++ax1_10) {
    for (int32_t ax2_10 = 0; ax2_10 < 2; ++ax2_10) {
      for (int32_t ax3_10 = 0; ax3_10 < 432; ++ax3_10) {
        int32_t cse_var_18 = (((ax1_10 * 864) + (ax2_10 * 432)) + ax3_10);
        ((float*)compute_let)[cse_var_18] = roundf(((float*)compute_let)[cse_var_18]);
      }
    }
  }
  for (int32_t ax1_11 = 0; ax1_11 < 2; ++ax1_11) {
    for (int32_t ax2_11 = 0; ax2_11 < 2; ++ax2_11) {
      for (int32_t ax3_11 = 0; ax3_11 < 432; ++ax3_11) {
        int32_t cse_var_19 = (((ax1_11 * 864) + (ax2_11 * 432)) + ax3_11);
        ((float*)compute_let)[cse_var_19] = (((float*)compute_let)[cse_var_19] + -1.260000e+02f);
      }
    }
  }
  for (int32_t i1_4 = 0; i1_4 < 2; ++i1_4) {
    for (int32_t i2_4 = 0; i2_4 < 2; ++i2_4) {
      for (int32_t i3_4 = 0; i3_4 < 432; ++i3_4) {
        int32_t cse_var_20 = (((i1_4 * 864) + (i2_4 * 432)) + i3_4);
        float v__4 = ((float*)compute_let)[cse_var_20];
        float v__5 = (v__4) < (1.270000e+02f) ? (v__4) : (1.270000e+02f);
        ((float*)compute_let)[cse_var_20] = ((v__5) > (-1.280000e+02f) ? (v__5) : (-1.280000e+02f));
      }
    }
  }
  for (int32_t ax1_12 = 0; ax1_12 < 2; ++ax1_12) {
    for (int32_t ax2_12 = 0; ax2_12 < 2; ++ax2_12) {
      for (int32_t ax3_12 = 0; ax3_12 < 432; ++ax3_12) {
        int32_t cse_var_21 = (((ax1_12 * 864) + (ax2_12 * 432)) + ax3_12);
        T_cast[cse_var_21] = ((int32_t)((float*)compute_let)[cse_var_21]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_subtract_cas_c93f40e30d1c190e__15(int8_t* p0, int32_t* T_cast, uint8_t* global_const_workspace_200_var, uint8_t* global_workspace_201_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED] 1x1 conv: 72->432 channels, 4 spatial positions [with fused h-swish]
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_200_var[651376]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_200_var[654832]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_200_var[687664]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_200_var[639280]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_200_var[193536]);

  // Safe copy: TVM may alias input/output workspace buffers
  static int8_t _inp[288];
  for (int32_t _i = 0; _i < 288; _i++) _inp[_i] = p0[_i];

  for (int32_t tile = 0; tile < 4; tile++) {
    int32_t oc_base = tile * 128;
    int32_t oc_count = 128;
    if (oc_base + oc_count > 432) oc_count = 432 - oc_base;
    static int8_t rw[9216];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      for (int32_t rc = 0; rc < 72; rc++)
        rw[oc * 72 + rc] = weights[rc * 432 + oc_base + oc];
    }
    accel_spad_write(0x048, rw, oc_count * 72);
    for (int32_t sp = 0; sp < 4; sp++) {
      accel_spad_write(0x000, &_inp[sp * 72], 72);
      hw_multi_dot(0x000, 0x048, 0x2448, 72, oc_count);
      for (int32_t oc = 0; oc < oc_count; oc++) {
        int32_t ax3 = oc_base + oc;
        int32_t dot = (int32_t)accel_spad_read32(0x2448 + oc * 4);
        int32_t v_ = ((int32_t)(((((int64_t)((dot + conv_sub[ax3]) - conv_const[ax3]))
          * ((int64_t)quant_scale[ax3]))
          + ((int64_t)1 << ((int64_t)((quant_shift[ax3] + 31) - 1))))
          >> ((int64_t)(quant_shift[ax3] + 31)))) + 95;
        int32_t v1 = (v_) < (127) ? (v_) : (127);
        float _dq = (float)(((v1) > (-128) ? (v1) : (-128)) - 95) * 2.704321e+00f;
        float _hs_in = (_dq + 3.0f) < (6.0f) ? (_dq + 3.0f) : (6.0f);
        float _hs = roundf((_dq * ((_hs_in) > (0.0f) ? (_hs_in) : (0.0f)) * 1.666667e-01f) * 2.976470e+00f) + -1.270000e+02f;
        float _hc = (_hs) < (1.270000e+02f) ? (_hs) : (1.270000e+02f);
        T_cast[(sp * 432) + ax3] = (int32_t)((_hc) > (-1.280000e+02f) ? (_hc) : (-1.280000e+02f));
      }
    }
  }
  return 0;

#else

  void* fused_nn_conv2d_subtract_add_constant_137_let = (&(global_const_workspace_200_var[651376]));
  void* fused_nn_conv2d_subtract_add_constant_136_let = (&(global_const_workspace_200_var[653104]));
  void* fused_nn_conv2d_subtract_add_constant_135_let = (&(global_const_workspace_200_var[654832]));
  void* fused_nn_conv2d_constant_47_let = (&(global_const_workspace_200_var[687664]));
  void* fused_nn_conv2d_subtract_constant_45_let = (&(global_const_workspace_200_var[639280]));
  void* fused_constant_60_let = (&(global_const_workspace_200_var[193536]));
  void* pad_temp_let = (&(global_workspace_201_var[54464]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 2; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 2; ++i2) {
      for (int32_t i3 = 0; i3 < 72; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 144) + (i2 * 72)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 4; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_201_var[54752]));
    for (int32_t ax3 = 0; ax3 < 432; ++ax3) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 72; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 72) + rc)]) * ((int32_t)((int8_t*)fused_constant_60_let)[((rc * 432) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_45_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_47_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_135_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_137_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_137_let)[ax3] + 31)))) + 95;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      int32_t v__2 = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_45_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_47_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_135_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_137_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_137_let)[ax3] + 31)))) + 95;
      int32_t v__3 = (v__2) < (127) ? (v__2) : (127);
      float v__4 = (((float)(((v__3) > (-128) ? (v__3) : (-128)) - 95)) * 2.704321e+00f) + 3.000000e+00f;
      float v__5 = (v__4) < (6.000000e+00f) ? (v__4) : (6.000000e+00f);
      float v__6 = roundf(((((((float)(((v__1) > (-128) ? (v__1) : (-128)) - 95)) * 2.704321e+00f) * ((v__5) > (0.000000e+00f) ? (v__5) : (0.000000e+00f))) * 1.666667e-01f) * 2.976470e+00f)) + -1.270000e+02f;
      float v__7 = (v__6) < (1.270000e+02f) ? (v__6) : (1.270000e+02f);
      T_cast[((ax0_ax1_fused_ax2_fused * 432) + ax3)] = ((int32_t)((v__7) > (-1.280000e+02f) ? (v__7) : (-1.280000e+02f)));
    }
  }
  return 0;

#endif
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_subtract_cas_c93f40e30d1c190e__2(int8_t* p0, int32_t* T_cast, uint8_t* global_const_workspace_58_var, uint8_t* global_workspace_59_var) {
  void* fused_nn_conv2d_subtract_add_constant_38_let = (&(global_const_workspace_58_var[763248]));
  void* fused_nn_conv2d_subtract_add_constant_37_let = (&(global_const_workspace_58_var[763632]));
  void* fused_nn_conv2d_subtract_add_constant_36_let = (&(global_const_workspace_58_var[764016]));
  void* fused_nn_conv2d_subtract_constant_12_let = (&(global_const_workspace_58_var[759024]));
  void* fused_nn_conv2d_constant_12_let = (&(global_const_workspace_58_var[767088]));
  void* fused_constant_17_let = (&(global_const_workspace_58_var[617040]));
  void* PaddedInput_let = (&(global_workspace_59_var[0]));
  void* DepthwiseConv2d_let = (&(global_workspace_59_var[17760]));
  void* compute_let = (&(global_workspace_59_var[11616]));
  for (int32_t i1 = 0; i1 < 11; ++i1) {
    for (int32_t i2 = 0; i2 < 11; ++i2) {
      for (int32_t i3 = 0; i3 < 96; ++i3) {
        int32_t cse_var_1 = (((i1 * 1056) + (i2 * 96)) + i3);
        ((int8_t*)PaddedInput_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t i = 0; i < 4; ++i) {
    for (int32_t j = 0; j < 4; ++j) {
      for (int32_t c = 0; c < 96; ++c) {
        ((int32_t*)DepthwiseConv2d_let)[(((i * 384) + (j * 96)) + c)] = 0;
        for (int32_t di = 0; di < 5; ++di) {
          for (int32_t dj = 0; dj < 5; ++dj) {
            int32_t cse_var_3 = (dj * 96);
            int32_t cse_var_2 = (((i * 384) + (j * 96)) + c);
            ((int32_t*)DepthwiseConv2d_let)[cse_var_2] = (((int32_t*)DepthwiseConv2d_let)[cse_var_2] + (((int32_t)((int8_t*)PaddedInput_let)[(((((i * 2112) + (di * 1056)) + (j * 192)) + cse_var_3) + c)]) * ((int32_t)((int8_t*)fused_constant_17_let)[(((di * 480) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 4; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 4; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 96; ++ax3) {
        int32_t cse_var_4 = (((ax1 * 384) + (ax2 * 96)) + ax3);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_4] = (((int32_t*)DepthwiseConv2d_let)[cse_var_4] - ((int32_t*)fused_nn_conv2d_constant_12_let)[ax3]);
      }
    }
  }
  for (int32_t ax1_1 = 0; ax1_1 < 4; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 4; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 96; ++ax3_1) {
        int32_t cse_var_5 = (((ax1_1 * 384) + (ax2_1 * 96)) + ax3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_5] = (((int32_t*)DepthwiseConv2d_let)[cse_var_5] + ((int32_t*)fused_nn_conv2d_subtract_constant_12_let)[ax3_1]);
      }
    }
  }
  for (int32_t i1_1 = 0; i1_1 < 4; ++i1_1) {
    for (int32_t i2_1 = 0; i2_1 < 4; ++i2_1) {
      for (int32_t i3_1 = 0; i3_1 < 96; ++i3_1) {
        int32_t cse_var_6 = (((i1_1 * 384) + (i2_1 * 96)) + i3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_6] = ((int32_t)(((((int64_t)((int32_t*)DepthwiseConv2d_let)[cse_var_6]) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_36_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_38_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_38_let)[i3_1] + 31))));
      }
    }
  }
  for (int32_t ax1_2 = 0; ax1_2 < 4; ++ax1_2) {
    for (int32_t ax2_2 = 0; ax2_2 < 4; ++ax2_2) {
      for (int32_t ax3_2 = 0; ax3_2 < 96; ++ax3_2) {
        int32_t cse_var_7 = (((ax1_2 * 384) + (ax2_2 * 96)) + ax3_2);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_7] = (((int32_t*)DepthwiseConv2d_let)[cse_var_7] + 3);
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
        ((int32_t*)DepthwiseConv2d_let)[cse_var_9] = (((int32_t*)DepthwiseConv2d_let)[cse_var_9] - 3);
      }
    }
  }
  for (int32_t ax1_4 = 0; ax1_4 < 4; ++ax1_4) {
    for (int32_t ax2_4 = 0; ax2_4 < 4; ++ax2_4) {
      for (int32_t ax3_4 = 0; ax3_4 < 96; ++ax3_4) {
        int32_t cse_var_10 = (((ax1_4 * 384) + (ax2_4 * 96)) + ax3_4);
        ((float*)PaddedInput_let)[cse_var_10] = ((float)((int32_t*)DepthwiseConv2d_let)[cse_var_10]);
      }
    }
  }
  for (int32_t ax1_5 = 0; ax1_5 < 4; ++ax1_5) {
    for (int32_t ax2_5 = 0; ax2_5 < 4; ++ax2_5) {
      for (int32_t ax3_5 = 0; ax3_5 < 96; ++ax3_5) {
        int32_t cse_var_11 = (((ax1_5 * 384) + (ax2_5 * 96)) + ax3_5);
        ((float*)DepthwiseConv2d_let)[cse_var_11] = (((float*)PaddedInput_let)[cse_var_11] * 2.172156e-01f);
      }
    }
  }
  for (int32_t ax1_6 = 0; ax1_6 < 4; ++ax1_6) {
    for (int32_t ax2_6 = 0; ax2_6 < 4; ++ax2_6) {
      for (int32_t ax3_6 = 0; ax3_6 < 96; ++ax3_6) {
        int32_t cse_var_12 = (((ax1_6 * 384) + (ax2_6 * 96)) + ax3_6);
        ((float*)PaddedInput_let)[cse_var_12] = (((float*)DepthwiseConv2d_let)[cse_var_12] + 3.000000e+00f);
      }
    }
  }
  for (int32_t i1_3 = 0; i1_3 < 4; ++i1_3) {
    for (int32_t i2_3 = 0; i2_3 < 4; ++i2_3) {
      for (int32_t i3_3 = 0; i3_3 < 96; ++i3_3) {
        int32_t cse_var_13 = (((i1_3 * 384) + (i2_3 * 96)) + i3_3);
        float v__2 = ((float*)PaddedInput_let)[cse_var_13];
        float v__3 = (v__2) < (6.000000e+00f) ? (v__2) : (6.000000e+00f);
        ((float*)compute_let)[cse_var_13] = ((v__3) > (0.000000e+00f) ? (v__3) : (0.000000e+00f));
      }
    }
  }
  for (int32_t ax1_7 = 0; ax1_7 < 4; ++ax1_7) {
    for (int32_t ax2_7 = 0; ax2_7 < 4; ++ax2_7) {
      for (int32_t ax3_7 = 0; ax3_7 < 96; ++ax3_7) {
        int32_t cse_var_14 = (((ax1_7 * 384) + (ax2_7 * 96)) + ax3_7);
        ((float*)compute_let)[cse_var_14] = (((float*)DepthwiseConv2d_let)[cse_var_14] * ((float*)compute_let)[cse_var_14]);
      }
    }
  }
  for (int32_t ax1_8 = 0; ax1_8 < 4; ++ax1_8) {
    for (int32_t ax2_8 = 0; ax2_8 < 4; ++ax2_8) {
      for (int32_t ax3_8 = 0; ax3_8 < 96; ++ax3_8) {
        int32_t cse_var_15 = (((ax1_8 * 384) + (ax2_8 * 96)) + ax3_8);
        ((float*)compute_let)[cse_var_15] = (((float*)compute_let)[cse_var_15] * 1.666667e-01f);
      }
    }
  }
  for (int32_t ax1_9 = 0; ax1_9 < 4; ++ax1_9) {
    for (int32_t ax2_9 = 0; ax2_9 < 4; ++ax2_9) {
      for (int32_t ax3_9 = 0; ax3_9 < 96; ++ax3_9) {
        int32_t cse_var_16 = (((ax1_9 * 384) + (ax2_9 * 96)) + ax3_9);
        ((float*)compute_let)[cse_var_16] = (((float*)compute_let)[cse_var_16] * 9.332091e+00f);
      }
    }
  }
  for (int32_t ax1_10 = 0; ax1_10 < 4; ++ax1_10) {
    for (int32_t ax2_10 = 0; ax2_10 < 4; ++ax2_10) {
      for (int32_t ax3_10 = 0; ax3_10 < 96; ++ax3_10) {
        int32_t cse_var_17 = (((ax1_10 * 384) + (ax2_10 * 96)) + ax3_10);
        ((float*)compute_let)[cse_var_17] = roundf(((float*)compute_let)[cse_var_17]);
      }
    }
  }
  for (int32_t ax1_11 = 0; ax1_11 < 4; ++ax1_11) {
    for (int32_t ax2_11 = 0; ax2_11 < 4; ++ax2_11) {
      for (int32_t ax3_11 = 0; ax3_11 < 96; ++ax3_11) {
        int32_t cse_var_18 = (((ax1_11 * 384) + (ax2_11 * 96)) + ax3_11);
        ((float*)compute_let)[cse_var_18] = (((float*)compute_let)[cse_var_18] + -1.250000e+02f);
      }
    }
  }
  for (int32_t i1_4 = 0; i1_4 < 4; ++i1_4) {
    for (int32_t i2_4 = 0; i2_4 < 4; ++i2_4) {
      for (int32_t i3_4 = 0; i3_4 < 96; ++i3_4) {
        int32_t cse_var_19 = (((i1_4 * 384) + (i2_4 * 96)) + i3_4);
        float v__4 = ((float*)compute_let)[cse_var_19];
        float v__5 = (v__4) < (1.270000e+02f) ? (v__4) : (1.270000e+02f);
        ((float*)compute_let)[cse_var_19] = ((v__5) > (-1.280000e+02f) ? (v__5) : (-1.280000e+02f));
      }
    }
  }
  for (int32_t ax1_12 = 0; ax1_12 < 4; ++ax1_12) {
    for (int32_t ax2_12 = 0; ax2_12 < 4; ++ax2_12) {
      for (int32_t ax3_12 = 0; ax3_12 < 96; ++ax3_12) {
        int32_t cse_var_20 = (((ax1_12 * 384) + (ax2_12 * 96)) + ax3_12);
        T_cast[cse_var_20] = ((int32_t)((float*)compute_let)[cse_var_20]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_subtract_cas_c93f40e30d1c190e__3(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_72_var, uint8_t* global_workspace_73_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED] 1x1 conv: 32->192 channels, 16 spatial positions [with fused h-swish]
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_72_var[730896]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_72_var[732432]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_72_var[737040]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_72_var[720912]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_72_var[538848]);

  // Safe copy: TVM may alias input/output workspace buffers
  static int8_t _inp[512];
  for (int32_t _i = 0; _i < 512; _i++) _inp[_i] = p0[_i];

  for (int32_t tile = 0; tile < 1; tile++) {
    int32_t oc_base = tile * 192;
    int32_t oc_count = 192;
    if (oc_base + oc_count > 192) oc_count = 192 - oc_base;
    static int8_t rw[6144];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      for (int32_t rc = 0; rc < 32; rc++)
        rw[oc * 32 + rc] = weights[rc * 192 + oc_base + oc];
    }
    accel_spad_write(0x020, rw, oc_count * 32);
    for (int32_t sp = 0; sp < 16; sp++) {
      accel_spad_write(0x000, &_inp[sp * 32], 32);
      hw_multi_dot(0x000, 0x020, 0x1820, 32, oc_count);
      for (int32_t oc = 0; oc < oc_count; oc++) {
        int32_t ax3 = oc_base + oc;
        int32_t dot = (int32_t)accel_spad_read32(0x1820 + oc * 4);
        int32_t v_ = ((int32_t)(((((int64_t)((dot + conv_sub[ax3]) - conv_const[ax3]))
          * ((int64_t)quant_scale[ax3]))
          + ((int64_t)1 << ((int64_t)((quant_shift[ax3] + 31) - 1))))
          >> ((int64_t)(quant_shift[ax3] + 31)))) - 24;
        int32_t v1 = (v_) < (127) ? (v_) : (127);
        float _dq = (float)(((v1) > (-128) ? (v1) : (-128)) + 24) * 1.867823e-01f;
        float _hs_in = (_dq + 3.0f) < (6.0f) ? (_dq + 3.0f) : (6.0f);
        float _hs = roundf((_dq * ((_hs_in) > (0.0f) ? (_hs_in) : (0.0f)) * 1.666667e-01f) * 8.951831e+00f) + -1.250000e+02f;
        float _hc = (_hs) < (1.270000e+02f) ? (_hs) : (1.270000e+02f);
        T_cast[(sp * 192) + ax3] = (int8_t)((_hc) > (-1.280000e+02f) ? (_hc) : (-1.280000e+02f));
      }
    }
  }
  return 0;

#else

  void* fused_nn_conv2d_subtract_add_constant_50_let = (&(global_const_workspace_72_var[730896]));
  void* fused_nn_conv2d_subtract_add_constant_49_let = (&(global_const_workspace_72_var[731664]));
  void* fused_nn_conv2d_subtract_add_constant_48_let = (&(global_const_workspace_72_var[732432]));
  void* fused_nn_conv2d_constant_16_let = (&(global_const_workspace_72_var[737040]));
  void* fused_nn_conv2d_subtract_constant_16_let = (&(global_const_workspace_72_var[720912]));
  void* fused_constant_22_let = (&(global_const_workspace_72_var[538848]));
  void* pad_temp_let = (&(global_workspace_73_var[53248]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 4; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 4; ++i2) {
      for (int32_t i3 = 0; i3 < 32; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 128) + (i2 * 32)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 16; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_73_var[53760]));
    for (int32_t ax3_outer = 0; ax3_outer < 3; ++ax3_outer) {
      for (int32_t ff = 0; ff < 64; ++ff) {
        ((int32_t*)conv2d_nhwc_let)[ff] = 0;
        for (int32_t rc = 0; rc < 32; ++rc) {
          ((int32_t*)conv2d_nhwc_let)[ff] = (((int32_t*)conv2d_nhwc_let)[ff] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 32) + rc)]) * ((int32_t)((int8_t*)fused_constant_22_let)[(((rc * 192) + (ax3_outer * 64)) + ff)])));
        }
      }
      for (int32_t ax3_inner = 0; ax3_inner < 64; ++ax3_inner) {
        int32_t cse_var_3 = (ax3_outer * 64);
        int32_t cse_var_2 = (cse_var_3 + ax3_inner);
        int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[ax3_inner] + ((int32_t*)fused_nn_conv2d_subtract_constant_16_let)[cse_var_2]) - ((int32_t*)fused_nn_conv2d_constant_16_let)[cse_var_2])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_48_let)[cse_var_2])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_50_let)[cse_var_2] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_50_let)[cse_var_2] + 31)))) - 24;
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        float v__2 = (((float)(((v__1) > (-128) ? (v__1) : (-128)) + 24)) * 1.867823e-01f) + 3.000000e+00f;
        float v__3 = (v__2) < (6.000000e+00f) ? (v__2) : (6.000000e+00f);
        float v__4 = roundf(((((((float)(((v__1) > (-128) ? (v__1) : (-128)) + 24)) * 1.867823e-01f) * ((v__3) > (0.000000e+00f) ? (v__3) : (0.000000e+00f))) * 1.666667e-01f) * 8.951831e+00f)) + -1.250000e+02f;
        float v__5 = (v__4) < (1.270000e+02f) ? (v__4) : (1.270000e+02f);
        T_cast[(((ax0_ax1_fused_ax2_fused * 192) + cse_var_3) + ax3_inner)] = ((int8_t)((v__5) > (-1.280000e+02f) ? (v__5) : (-1.280000e+02f)));
      }
    }
  }
  return 0;

#endif
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_subtract_cas_c93f40e30d1c190e__4(int8_t* p0, int32_t* T_cast, uint8_t* global_const_workspace_76_var, uint8_t* global_workspace_77_var) {
  void* fused_nn_conv2d_subtract_add_constant_53_let = (&(global_const_workspace_76_var[728592]));
  void* fused_nn_conv2d_subtract_add_constant_52_let = (&(global_const_workspace_76_var[729360]));
  void* fused_nn_conv2d_subtract_add_constant_51_let = (&(global_const_workspace_76_var[730128]));
  void* fused_nn_conv2d_subtract_constant_17_let = (&(global_const_workspace_76_var[720144]));
  void* fused_nn_conv2d_constant_17_let = (&(global_const_workspace_76_var[736272]));
  void* fused_constant_23_let = (&(global_const_workspace_76_var[566736]));
  void* PaddedInput_let = (&(global_workspace_77_var[24576]));
  void* DepthwiseConv2d_let = (&(global_workspace_77_var[36864]));
  void* compute_let = (&(global_workspace_77_var[12288]));
  for (int32_t i1 = 0; i1 < 8; ++i1) {
    for (int32_t i2 = 0; i2 < 8; ++i2) {
      for (int32_t i3 = 0; i3 < 192; ++i3) {
        int32_t cse_var_1 = (((i1 * 1536) + (i2 * 192)) + i3);
        ((int8_t*)PaddedInput_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t i = 0; i < 4; ++i) {
    for (int32_t j = 0; j < 4; ++j) {
      for (int32_t c = 0; c < 192; ++c) {
        ((int32_t*)DepthwiseConv2d_let)[(((i * 768) + (j * 192)) + c)] = 0;
        for (int32_t di = 0; di < 5; ++di) {
          for (int32_t dj = 0; dj < 5; ++dj) {
            int32_t cse_var_4 = (j * 192);
            int32_t cse_var_3 = (dj * 192);
            int32_t cse_var_2 = (((i * 768) + cse_var_4) + c);
            ((int32_t*)DepthwiseConv2d_let)[cse_var_2] = (((int32_t*)DepthwiseConv2d_let)[cse_var_2] + (((int32_t)((int8_t*)PaddedInput_let)[(((((i * 1536) + (di * 1536)) + cse_var_4) + cse_var_3) + c)]) * ((int32_t)((int8_t*)fused_constant_23_let)[(((di * 960) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 4; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 4; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 192; ++ax3) {
        int32_t cse_var_5 = (((ax1 * 768) + (ax2 * 192)) + ax3);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_5] = (((int32_t*)DepthwiseConv2d_let)[cse_var_5] - ((int32_t*)fused_nn_conv2d_constant_17_let)[ax3]);
      }
    }
  }
  for (int32_t ax1_1 = 0; ax1_1 < 4; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 4; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 192; ++ax3_1) {
        int32_t cse_var_6 = (((ax1_1 * 768) + (ax2_1 * 192)) + ax3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_6] = (((int32_t*)DepthwiseConv2d_let)[cse_var_6] + ((int32_t*)fused_nn_conv2d_subtract_constant_17_let)[ax3_1]);
      }
    }
  }
  for (int32_t i1_1 = 0; i1_1 < 4; ++i1_1) {
    for (int32_t i2_1 = 0; i2_1 < 4; ++i2_1) {
      for (int32_t i3_1 = 0; i3_1 < 192; ++i3_1) {
        int32_t cse_var_7 = (((i1_1 * 768) + (i2_1 * 192)) + i3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_7] = ((int32_t)(((((int64_t)((int32_t*)DepthwiseConv2d_let)[cse_var_7]) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_51_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_53_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_53_let)[i3_1] + 31))));
      }
    }
  }
  for (int32_t ax1_2 = 0; ax1_2 < 4; ++ax1_2) {
    for (int32_t ax2_2 = 0; ax2_2 < 4; ++ax2_2) {
      for (int32_t ax3_2 = 0; ax3_2 < 192; ++ax3_2) {
        int32_t cse_var_8 = (((ax1_2 * 768) + (ax2_2 * 192)) + ax3_2);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_8] = (((int32_t*)DepthwiseConv2d_let)[cse_var_8] + 6);
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
        ((int32_t*)DepthwiseConv2d_let)[cse_var_10] = (((int32_t*)DepthwiseConv2d_let)[cse_var_10] - 6);
      }
    }
  }
  for (int32_t ax1_4 = 0; ax1_4 < 4; ++ax1_4) {
    for (int32_t ax2_4 = 0; ax2_4 < 4; ++ax2_4) {
      for (int32_t ax3_4 = 0; ax3_4 < 192; ++ax3_4) {
        int32_t cse_var_11 = (((ax1_4 * 768) + (ax2_4 * 192)) + ax3_4);
        ((float*)PaddedInput_let)[cse_var_11] = ((float)((int32_t*)DepthwiseConv2d_let)[cse_var_11]);
      }
    }
  }
  for (int32_t ax1_5 = 0; ax1_5 < 4; ++ax1_5) {
    for (int32_t ax2_5 = 0; ax2_5 < 4; ++ax2_5) {
      for (int32_t ax3_5 = 0; ax3_5 < 192; ++ax3_5) {
        int32_t cse_var_12 = (((ax1_5 * 768) + (ax2_5 * 192)) + ax3_5);
        ((float*)DepthwiseConv2d_let)[cse_var_12] = (((float*)PaddedInput_let)[cse_var_12] * 2.768524e-01f);
      }
    }
  }
  for (int32_t ax1_6 = 0; ax1_6 < 4; ++ax1_6) {
    for (int32_t ax2_6 = 0; ax2_6 < 4; ++ax2_6) {
      for (int32_t ax3_6 = 0; ax3_6 < 192; ++ax3_6) {
        int32_t cse_var_13 = (((ax1_6 * 768) + (ax2_6 * 192)) + ax3_6);
        ((float*)PaddedInput_let)[cse_var_13] = (((float*)DepthwiseConv2d_let)[cse_var_13] + 3.000000e+00f);
      }
    }
  }
  for (int32_t i1_3 = 0; i1_3 < 4; ++i1_3) {
    for (int32_t i2_3 = 0; i2_3 < 4; ++i2_3) {
      for (int32_t i3_3 = 0; i3_3 < 192; ++i3_3) {
        int32_t cse_var_14 = (((i1_3 * 768) + (i2_3 * 192)) + i3_3);
        float v__2 = ((float*)PaddedInput_let)[cse_var_14];
        float v__3 = (v__2) < (6.000000e+00f) ? (v__2) : (6.000000e+00f);
        ((float*)compute_let)[cse_var_14] = ((v__3) > (0.000000e+00f) ? (v__3) : (0.000000e+00f));
      }
    }
  }
  for (int32_t ax1_7 = 0; ax1_7 < 4; ++ax1_7) {
    for (int32_t ax2_7 = 0; ax2_7 < 4; ++ax2_7) {
      for (int32_t ax3_7 = 0; ax3_7 < 192; ++ax3_7) {
        int32_t cse_var_15 = (((ax1_7 * 768) + (ax2_7 * 192)) + ax3_7);
        ((float*)compute_let)[cse_var_15] = (((float*)DepthwiseConv2d_let)[cse_var_15] * ((float*)compute_let)[cse_var_15]);
      }
    }
  }
  for (int32_t ax1_8 = 0; ax1_8 < 4; ++ax1_8) {
    for (int32_t ax2_8 = 0; ax2_8 < 4; ++ax2_8) {
      for (int32_t ax3_8 = 0; ax3_8 < 192; ++ax3_8) {
        int32_t cse_var_16 = (((ax1_8 * 768) + (ax2_8 * 192)) + ax3_8);
        ((float*)compute_let)[cse_var_16] = (((float*)compute_let)[cse_var_16] * 1.666667e-01f);
      }
    }
  }
  for (int32_t ax1_9 = 0; ax1_9 < 4; ++ax1_9) {
    for (int32_t ax2_9 = 0; ax2_9 < 4; ++ax2_9) {
      for (int32_t ax3_9 = 0; ax3_9 < 192; ++ax3_9) {
        int32_t cse_var_17 = (((ax1_9 * 768) + (ax2_9 * 192)) + ax3_9);
        ((float*)compute_let)[cse_var_17] = (((float*)compute_let)[cse_var_17] * 7.542913e+00f);
      }
    }
  }
  for (int32_t ax1_10 = 0; ax1_10 < 4; ++ax1_10) {
    for (int32_t ax2_10 = 0; ax2_10 < 4; ++ax2_10) {
      for (int32_t ax3_10 = 0; ax3_10 < 192; ++ax3_10) {
        int32_t cse_var_18 = (((ax1_10 * 768) + (ax2_10 * 192)) + ax3_10);
        ((float*)compute_let)[cse_var_18] = roundf(((float*)compute_let)[cse_var_18]);
      }
    }
  }
  for (int32_t ax1_11 = 0; ax1_11 < 4; ++ax1_11) {
    for (int32_t ax2_11 = 0; ax2_11 < 4; ++ax2_11) {
      for (int32_t ax3_11 = 0; ax3_11 < 192; ++ax3_11) {
        int32_t cse_var_19 = (((ax1_11 * 768) + (ax2_11 * 192)) + ax3_11);
        ((float*)compute_let)[cse_var_19] = (((float*)compute_let)[cse_var_19] + -1.250000e+02f);
      }
    }
  }
  for (int32_t i1_4 = 0; i1_4 < 4; ++i1_4) {
    for (int32_t i2_4 = 0; i2_4 < 4; ++i2_4) {
      for (int32_t i3_4 = 0; i3_4 < 192; ++i3_4) {
        int32_t cse_var_20 = (((i1_4 * 768) + (i2_4 * 192)) + i3_4);
        float v__4 = ((float*)compute_let)[cse_var_20];
        float v__5 = (v__4) < (1.270000e+02f) ? (v__4) : (1.270000e+02f);
        ((float*)compute_let)[cse_var_20] = ((v__5) > (-1.280000e+02f) ? (v__5) : (-1.280000e+02f));
      }
    }
  }
  for (int32_t ax1_12 = 0; ax1_12 < 4; ++ax1_12) {
    for (int32_t ax2_12 = 0; ax2_12 < 4; ++ax2_12) {
      for (int32_t ax3_12 = 0; ax3_12 < 192; ++ax3_12) {
        int32_t cse_var_21 = (((ax1_12 * 768) + (ax2_12 * 192)) + ax3_12);
        T_cast[cse_var_21] = ((int32_t)((float*)compute_let)[cse_var_21]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_subtract_cas_c93f40e30d1c190e__5(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_110_var, uint8_t* global_workspace_111_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED] 1x1 conv: 32->96 channels, 16 spatial positions [with fused h-swish]
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_110_var[760944]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_110_var[761712]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_110_var[766320]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_110_var[758256]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_110_var[605488]);

  // Safe copy: TVM may alias input/output workspace buffers
  static int8_t _inp[512];
  for (int32_t _i = 0; _i < 512; _i++) _inp[_i] = p0[_i];

  for (int32_t tile = 0; tile < 1; tile++) {
    int32_t oc_base = tile * 96;
    int32_t oc_count = 96;
    if (oc_base + oc_count > 96) oc_count = 96 - oc_base;
    static int8_t rw[3072];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      for (int32_t rc = 0; rc < 32; rc++)
        rw[oc * 32 + rc] = weights[rc * 96 + oc_base + oc];
    }
    accel_spad_write(0x020, rw, oc_count * 32);
    for (int32_t sp = 0; sp < 16; sp++) {
      accel_spad_write(0x000, &_inp[sp * 32], 32);
      hw_multi_dot(0x000, 0x020, 0xC20, 32, oc_count);
      for (int32_t oc = 0; oc < oc_count; oc++) {
        int32_t ax3 = oc_base + oc;
        int32_t dot = (int32_t)accel_spad_read32(0xC20 + oc * 4);
        int32_t v_ = ((int32_t)(((((int64_t)((dot + conv_sub[ax3]) - conv_const[ax3]))
          * ((int64_t)quant_scale[ax3]))
          + ((int64_t)1 << ((int64_t)((quant_shift[ax3] + 31) - 1))))
          >> ((int64_t)(quant_shift[ax3] + 31)))) - 3;
        int32_t v1 = (v_) < (127) ? (v_) : (127);
        float _dq = (float)(((v1) > (-128) ? (v1) : (-128)) + 3) * 1.259628e-01f;
        float _hs_in = (_dq + 3.0f) < (6.0f) ? (_dq + 3.0f) : (6.0f);
        float _hs = roundf((_dq * ((_hs_in) > (0.0f) ? (_hs_in) : (0.0f)) * 1.666667e-01f) * 1.520980e+01f) + -1.220000e+02f;
        float _hc = (_hs) < (1.270000e+02f) ? (_hs) : (1.270000e+02f);
        T_cast[(sp * 96) + ax3] = (int8_t)((_hc) > (-1.280000e+02f) ? (_hc) : (-1.280000e+02f));
      }
    }
  }
  return 0;

#else

  void* fused_nn_conv2d_subtract_add_constant_74_let = (&(global_const_workspace_110_var[760944]));
  void* fused_nn_conv2d_subtract_add_constant_73_let = (&(global_const_workspace_110_var[761328]));
  void* fused_nn_conv2d_subtract_add_constant_72_let = (&(global_const_workspace_110_var[761712]));
  void* fused_nn_conv2d_constant_25_let = (&(global_const_workspace_110_var[766320]));
  void* fused_nn_conv2d_subtract_constant_24_let = (&(global_const_workspace_110_var[758256]));
  void* fused_constant_33_let = (&(global_const_workspace_110_var[605488]));
  void* pad_temp_let = (&(global_workspace_111_var[54272]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 4; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 4; ++i2) {
      for (int32_t i3 = 0; i3 < 32; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 128) + (i2 * 32)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 16; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_111_var[54784]));
    for (int32_t ax3 = 0; ax3 < 96; ++ax3) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 32; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 32) + rc)]) * ((int32_t)((int8_t*)fused_constant_33_let)[((rc * 96) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_24_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_25_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_72_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_74_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_74_let)[ax3] + 31)))) - 3;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      int32_t v__2 = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_24_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_25_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_72_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_74_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_74_let)[ax3] + 31)))) - 3;
      int32_t v__3 = (v__2) < (127) ? (v__2) : (127);
      float v__4 = (((float)(((v__3) > (-128) ? (v__3) : (-128)) + 3)) * 1.259628e-01f) + 3.000000e+00f;
      float v__5 = (v__4) < (6.000000e+00f) ? (v__4) : (6.000000e+00f);
      float v__6 = roundf(((((((float)(((v__1) > (-128) ? (v__1) : (-128)) + 3)) * 1.259628e-01f) * ((v__5) > (0.000000e+00f) ? (v__5) : (0.000000e+00f))) * 1.666667e-01f) * 1.520980e+01f)) + -1.220000e+02f;
      float v__7 = (v__6) < (1.270000e+02f) ? (v__6) : (1.270000e+02f);
      T_cast[((ax0_ax1_fused_ax2_fused * 96) + ax3)] = ((int8_t)((v__7) > (-1.280000e+02f) ? (v__7) : (-1.280000e+02f)));
    }
  }
  return 0;

#endif
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_subtract_cas_c93f40e30d1c190e__6(int8_t* p0, int32_t* T_cast, uint8_t* global_const_workspace_114_var, uint8_t* global_workspace_115_var) {
  void* fused_nn_conv2d_subtract_add_constant_77_let = (&(global_const_workspace_114_var[759792]));
  void* fused_nn_conv2d_subtract_add_constant_76_let = (&(global_const_workspace_114_var[760176]));
  void* fused_nn_conv2d_subtract_add_constant_75_let = (&(global_const_workspace_114_var[760560]));
  void* fused_nn_conv2d_subtract_constant_25_let = (&(global_const_workspace_114_var[757872]));
  void* fused_nn_conv2d_constant_26_let = (&(global_const_workspace_114_var[765936]));
  void* fused_constant_34_let = (&(global_const_workspace_114_var[614640]));
  void* PaddedInput_let = (&(global_workspace_115_var[12288]));
  void* DepthwiseConv2d_let = (&(global_workspace_115_var[18432]));
  void* compute_let = (&(global_workspace_115_var[6144]));
  for (int32_t i1 = 0; i1 < 8; ++i1) {
    for (int32_t i2 = 0; i2 < 8; ++i2) {
      for (int32_t i3 = 0; i3 < 96; ++i3) {
        int32_t cse_var_1 = (((i1 * 768) + (i2 * 96)) + i3);
        ((int8_t*)PaddedInput_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t i = 0; i < 4; ++i) {
    for (int32_t j = 0; j < 4; ++j) {
      for (int32_t c = 0; c < 96; ++c) {
        ((int32_t*)DepthwiseConv2d_let)[(((i * 384) + (j * 96)) + c)] = 0;
        for (int32_t di = 0; di < 5; ++di) {
          for (int32_t dj = 0; dj < 5; ++dj) {
            int32_t cse_var_4 = (j * 96);
            int32_t cse_var_3 = (dj * 96);
            int32_t cse_var_2 = (((i * 384) + cse_var_4) + c);
            ((int32_t*)DepthwiseConv2d_let)[cse_var_2] = (((int32_t*)DepthwiseConv2d_let)[cse_var_2] + (((int32_t)((int8_t*)PaddedInput_let)[(((((i * 768) + (di * 768)) + cse_var_4) + cse_var_3) + c)]) * ((int32_t)((int8_t*)fused_constant_34_let)[(((di * 480) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 4; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 4; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 96; ++ax3) {
        int32_t cse_var_5 = (((ax1 * 384) + (ax2 * 96)) + ax3);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_5] = (((int32_t*)DepthwiseConv2d_let)[cse_var_5] - ((int32_t*)fused_nn_conv2d_constant_26_let)[ax3]);
      }
    }
  }
  for (int32_t ax1_1 = 0; ax1_1 < 4; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 4; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 96; ++ax3_1) {
        int32_t cse_var_6 = (((ax1_1 * 384) + (ax2_1 * 96)) + ax3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_6] = (((int32_t*)DepthwiseConv2d_let)[cse_var_6] + ((int32_t*)fused_nn_conv2d_subtract_constant_25_let)[ax3_1]);
      }
    }
  }
  for (int32_t i1_1 = 0; i1_1 < 4; ++i1_1) {
    for (int32_t i2_1 = 0; i2_1 < 4; ++i2_1) {
      for (int32_t i3_1 = 0; i3_1 < 96; ++i3_1) {
        int32_t cse_var_7 = (((i1_1 * 384) + (i2_1 * 96)) + i3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_7] = ((int32_t)(((((int64_t)((int32_t*)DepthwiseConv2d_let)[cse_var_7]) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_75_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_77_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_77_let)[i3_1] + 31))));
      }
    }
  }
  for (int32_t ax1_2 = 0; ax1_2 < 4; ++ax1_2) {
    for (int32_t ax2_2 = 0; ax2_2 < 4; ++ax2_2) {
      for (int32_t ax3_2 = 0; ax3_2 < 96; ++ax3_2) {
        int32_t cse_var_8 = (((ax1_2 * 384) + (ax2_2 * 96)) + ax3_2);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_8] = (((int32_t*)DepthwiseConv2d_let)[cse_var_8] - 17);
      }
    }
  }
  for (int32_t i1_2 = 0; i1_2 < 4; ++i1_2) {
    for (int32_t i2_2 = 0; i2_2 < 4; ++i2_2) {
      for (int32_t i3_2 = 0; i3_2 < 96; ++i3_2) {
        int32_t cse_var_9 = (((i1_2 * 384) + (i2_2 * 96)) + i3_2);
        int32_t v_ = ((int32_t*)DepthwiseConv2d_let)[cse_var_9];
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_9] = ((v__1) > (-128) ? (v__1) : (-128));
      }
    }
  }
  for (int32_t ax1_3 = 0; ax1_3 < 4; ++ax1_3) {
    for (int32_t ax2_3 = 0; ax2_3 < 4; ++ax2_3) {
      for (int32_t ax3_3 = 0; ax3_3 < 96; ++ax3_3) {
        int32_t cse_var_10 = (((ax1_3 * 384) + (ax2_3 * 96)) + ax3_3);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_10] = (((int32_t*)DepthwiseConv2d_let)[cse_var_10] + 17);
      }
    }
  }
  for (int32_t ax1_4 = 0; ax1_4 < 4; ++ax1_4) {
    for (int32_t ax2_4 = 0; ax2_4 < 4; ++ax2_4) {
      for (int32_t ax3_4 = 0; ax3_4 < 96; ++ax3_4) {
        int32_t cse_var_11 = (((ax1_4 * 384) + (ax2_4 * 96)) + ax3_4);
        ((float*)PaddedInput_let)[cse_var_11] = ((float)((int32_t*)DepthwiseConv2d_let)[cse_var_11]);
      }
    }
  }
  for (int32_t ax1_5 = 0; ax1_5 < 4; ++ax1_5) {
    for (int32_t ax2_5 = 0; ax2_5 < 4; ++ax2_5) {
      for (int32_t ax3_5 = 0; ax3_5 < 96; ++ax3_5) {
        int32_t cse_var_12 = (((ax1_5 * 384) + (ax2_5 * 96)) + ax3_5);
        ((float*)DepthwiseConv2d_let)[cse_var_12] = (((float*)PaddedInput_let)[cse_var_12] * 1.831288e-01f);
      }
    }
  }
  for (int32_t ax1_6 = 0; ax1_6 < 4; ++ax1_6) {
    for (int32_t ax2_6 = 0; ax2_6 < 4; ++ax2_6) {
      for (int32_t ax3_6 = 0; ax3_6 < 96; ++ax3_6) {
        int32_t cse_var_13 = (((ax1_6 * 384) + (ax2_6 * 96)) + ax3_6);
        ((float*)PaddedInput_let)[cse_var_13] = (((float*)DepthwiseConv2d_let)[cse_var_13] + 3.000000e+00f);
      }
    }
  }
  for (int32_t i1_3 = 0; i1_3 < 4; ++i1_3) {
    for (int32_t i2_3 = 0; i2_3 < 4; ++i2_3) {
      for (int32_t i3_3 = 0; i3_3 < 96; ++i3_3) {
        int32_t cse_var_14 = (((i1_3 * 384) + (i2_3 * 96)) + i3_3);
        float v__2 = ((float*)PaddedInput_let)[cse_var_14];
        float v__3 = (v__2) < (6.000000e+00f) ? (v__2) : (6.000000e+00f);
        ((float*)compute_let)[cse_var_14] = ((v__3) > (0.000000e+00f) ? (v__3) : (0.000000e+00f));
      }
    }
  }
  for (int32_t ax1_7 = 0; ax1_7 < 4; ++ax1_7) {
    for (int32_t ax2_7 = 0; ax2_7 < 4; ++ax2_7) {
      for (int32_t ax3_7 = 0; ax3_7 < 96; ++ax3_7) {
        int32_t cse_var_15 = (((ax1_7 * 384) + (ax2_7 * 96)) + ax3_7);
        ((float*)compute_let)[cse_var_15] = (((float*)DepthwiseConv2d_let)[cse_var_15] * ((float*)compute_let)[cse_var_15]);
      }
    }
  }
  for (int32_t ax1_8 = 0; ax1_8 < 4; ++ax1_8) {
    for (int32_t ax2_8 = 0; ax2_8 < 4; ++ax2_8) {
      for (int32_t ax3_8 = 0; ax3_8 < 96; ++ax3_8) {
        int32_t cse_var_16 = (((ax1_8 * 384) + (ax2_8 * 96)) + ax3_8);
        ((float*)compute_let)[cse_var_16] = (((float*)compute_let)[cse_var_16] * 1.666667e-01f);
      }
    }
  }
  for (int32_t ax1_9 = 0; ax1_9 < 4; ++ax1_9) {
    for (int32_t ax2_9 = 0; ax2_9 < 4; ++ax2_9) {
      for (int32_t ax3_9 = 0; ax3_9 < 96; ++ax3_9) {
        int32_t cse_var_17 = (((ax1_9 * 384) + (ax2_9 * 96)) + ax3_9);
        ((float*)compute_let)[cse_var_17] = (((float*)compute_let)[cse_var_17] * 9.556944e+00f);
      }
    }
  }
  for (int32_t ax1_10 = 0; ax1_10 < 4; ++ax1_10) {
    for (int32_t ax2_10 = 0; ax2_10 < 4; ++ax2_10) {
      for (int32_t ax3_10 = 0; ax3_10 < 96; ++ax3_10) {
        int32_t cse_var_18 = (((ax1_10 * 384) + (ax2_10 * 96)) + ax3_10);
        ((float*)compute_let)[cse_var_18] = roundf(((float*)compute_let)[cse_var_18]);
      }
    }
  }
  for (int32_t ax1_11 = 0; ax1_11 < 4; ++ax1_11) {
    for (int32_t ax2_11 = 0; ax2_11 < 4; ++ax2_11) {
      for (int32_t ax3_11 = 0; ax3_11 < 96; ++ax3_11) {
        int32_t cse_var_19 = (((ax1_11 * 384) + (ax2_11 * 96)) + ax3_11);
        ((float*)compute_let)[cse_var_19] = (((float*)compute_let)[cse_var_19] + -1.240000e+02f);
      }
    }
  }
  for (int32_t i1_4 = 0; i1_4 < 4; ++i1_4) {
    for (int32_t i2_4 = 0; i2_4 < 4; ++i2_4) {
      for (int32_t i3_4 = 0; i3_4 < 96; ++i3_4) {
        int32_t cse_var_20 = (((i1_4 * 384) + (i2_4 * 96)) + i3_4);
        float v__4 = ((float*)compute_let)[cse_var_20];
        float v__5 = (v__4) < (1.270000e+02f) ? (v__4) : (1.270000e+02f);
        ((float*)compute_let)[cse_var_20] = ((v__5) > (-1.280000e+02f) ? (v__5) : (-1.280000e+02f));
      }
    }
  }
  for (int32_t ax1_12 = 0; ax1_12 < 4; ++ax1_12) {
    for (int32_t ax2_12 = 0; ax2_12 < 4; ++ax2_12) {
      for (int32_t ax3_12 = 0; ax3_12 < 96; ++ax3_12) {
        int32_t cse_var_21 = (((ax1_12 * 384) + (ax2_12 * 96)) + ax3_12);
        T_cast[cse_var_21] = ((int32_t)((float*)compute_let)[cse_var_21]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_subtract_cas_c93f40e30d1c190e__7(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_128_var, uint8_t* global_workspace_129_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED] 1x1 conv: 40->120 channels, 16 spatial positions [with fused h-swish]
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_128_var[750080]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_128_var[751040]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_128_var[752480]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_128_var[746720]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_128_var[557136]);

  // Safe copy: TVM may alias input/output workspace buffers
  static int8_t _inp[640];
  for (int32_t _i = 0; _i < 640; _i++) _inp[_i] = p0[_i];

  for (int32_t tile = 0; tile < 1; tile++) {
    int32_t oc_base = tile * 120;
    int32_t oc_count = 120;
    if (oc_base + oc_count > 120) oc_count = 120 - oc_base;
    static int8_t rw[4800];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      for (int32_t rc = 0; rc < 40; rc++)
        rw[oc * 40 + rc] = weights[rc * 120 + oc_base + oc];
    }
    accel_spad_write(0x028, rw, oc_count * 40);
    for (int32_t sp = 0; sp < 16; sp++) {
      accel_spad_write(0x000, &_inp[sp * 40], 40);
      hw_multi_dot(0x000, 0x028, 0x12E8, 40, oc_count);
      for (int32_t oc = 0; oc < oc_count; oc++) {
        int32_t ax3 = oc_base + oc;
        int32_t dot = (int32_t)accel_spad_read32(0x12E8 + oc * 4);
        int32_t v_ = ((int32_t)(((((int64_t)((dot + conv_sub[ax3]) - conv_const[ax3]))
          * ((int64_t)quant_scale[ax3]))
          + ((int64_t)1 << ((int64_t)((quant_shift[ax3] + 31) - 1))))
          >> ((int64_t)(quant_shift[ax3] + 31)))) - 2;
        int32_t v1 = (v_) < (127) ? (v_) : (127);
        float _dq = (float)(((v1) > (-128) ? (v1) : (-128)) + 2) * 1.223695e-01f;
        float _hs_in = (_dq + 3.0f) < (6.0f) ? (_dq + 3.0f) : (6.0f);
        float _hs = roundf((_dq * ((_hs_in) > (0.0f) ? (_hs_in) : (0.0f)) * 1.666667e-01f) * 1.574001e+01f) + -1.220000e+02f;
        float _hc = (_hs) < (1.270000e+02f) ? (_hs) : (1.270000e+02f);
        T_cast[(sp * 120) + ax3] = (int8_t)((_hc) > (-1.280000e+02f) ? (_hc) : (-1.280000e+02f));
      }
    }
  }
  return 0;

#else

  void* fused_nn_conv2d_subtract_add_constant_86_let = (&(global_const_workspace_128_var[750080]));
  void* fused_nn_conv2d_subtract_add_constant_85_let = (&(global_const_workspace_128_var[750560]));
  void* fused_nn_conv2d_subtract_add_constant_84_let = (&(global_const_workspace_128_var[751040]));
  void* fused_nn_conv2d_constant_30_let = (&(global_const_workspace_128_var[752480]));
  void* fused_nn_conv2d_subtract_constant_28_let = (&(global_const_workspace_128_var[746720]));
  void* fused_constant_39_let = (&(global_const_workspace_128_var[557136]));
  void* pad_temp_let = (&(global_workspace_129_var[33280]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 4; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 4; ++i2) {
      for (int32_t i3 = 0; i3 < 40; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 160) + (i2 * 40)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 16; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_129_var[52736]));
    for (int32_t ax3 = 0; ax3 < 120; ++ax3) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 40; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 40) + rc)]) * ((int32_t)((int8_t*)fused_constant_39_let)[((rc * 120) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_28_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_30_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_84_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_86_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_86_let)[ax3] + 31)))) - 2;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      int32_t v__2 = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_28_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_30_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_84_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_86_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_86_let)[ax3] + 31)))) - 2;
      int32_t v__3 = (v__2) < (127) ? (v__2) : (127);
      float v__4 = (((float)(((v__3) > (-128) ? (v__3) : (-128)) + 2)) * 1.223695e-01f) + 3.000000e+00f;
      float v__5 = (v__4) < (6.000000e+00f) ? (v__4) : (6.000000e+00f);
      float v__6 = roundf(((((((float)(((v__1) > (-128) ? (v__1) : (-128)) + 2)) * 1.223695e-01f) * ((v__5) > (0.000000e+00f) ? (v__5) : (0.000000e+00f))) * 1.666667e-01f) * 1.574001e+01f)) + -1.220000e+02f;
      float v__7 = (v__6) < (1.270000e+02f) ? (v__6) : (1.270000e+02f);
      T_cast[((ax0_ax1_fused_ax2_fused * 120) + ax3)] = ((int8_t)((v__7) > (-1.280000e+02f) ? (v__7) : (-1.280000e+02f)));
    }
  }
  return 0;

#endif
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_subtract_cas_c93f40e30d1c190e__8(int8_t* p0, int32_t* T_cast, uint8_t* global_const_workspace_132_var, uint8_t* global_workspace_133_var) {
  void* fused_nn_conv2d_subtract_add_constant_89_let = (&(global_const_workspace_132_var[748640]));
  void* fused_nn_conv2d_subtract_add_constant_88_let = (&(global_const_workspace_132_var[749120]));
  void* fused_nn_conv2d_subtract_add_constant_87_let = (&(global_const_workspace_132_var[749600]));
  void* fused_nn_conv2d_subtract_constant_29_let = (&(global_const_workspace_132_var[746240]));
  void* fused_nn_conv2d_constant_31_let = (&(global_const_workspace_132_var[752000]));
  void* fused_constant_40_let = (&(global_const_workspace_132_var[611632]));
  void* PaddedInput_let = (&(global_workspace_133_var[15360]));
  void* DepthwiseConv2d_let = (&(global_workspace_133_var[23040]));
  void* compute_let = (&(global_workspace_133_var[7680]));
  for (int32_t i1 = 0; i1 < 8; ++i1) {
    for (int32_t i2 = 0; i2 < 8; ++i2) {
      for (int32_t i3 = 0; i3 < 120; ++i3) {
        int32_t cse_var_1 = (((i1 * 960) + (i2 * 120)) + i3);
        ((int8_t*)PaddedInput_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t i = 0; i < 4; ++i) {
    for (int32_t j = 0; j < 4; ++j) {
      for (int32_t c = 0; c < 120; ++c) {
        ((int32_t*)DepthwiseConv2d_let)[(((i * 480) + (j * 120)) + c)] = 0;
        for (int32_t di = 0; di < 5; ++di) {
          for (int32_t dj = 0; dj < 5; ++dj) {
            int32_t cse_var_4 = (j * 120);
            int32_t cse_var_3 = (dj * 120);
            int32_t cse_var_2 = (((i * 480) + cse_var_4) + c);
            ((int32_t*)DepthwiseConv2d_let)[cse_var_2] = (((int32_t*)DepthwiseConv2d_let)[cse_var_2] + (((int32_t)((int8_t*)PaddedInput_let)[(((((i * 960) + (di * 960)) + cse_var_4) + cse_var_3) + c)]) * ((int32_t)((int8_t*)fused_constant_40_let)[(((di * 600) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 4; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 4; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 120; ++ax3) {
        int32_t cse_var_5 = (((ax1 * 480) + (ax2 * 120)) + ax3);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_5] = (((int32_t*)DepthwiseConv2d_let)[cse_var_5] - ((int32_t*)fused_nn_conv2d_constant_31_let)[ax3]);
      }
    }
  }
  for (int32_t ax1_1 = 0; ax1_1 < 4; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 4; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 120; ++ax3_1) {
        int32_t cse_var_6 = (((ax1_1 * 480) + (ax2_1 * 120)) + ax3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_6] = (((int32_t*)DepthwiseConv2d_let)[cse_var_6] + ((int32_t*)fused_nn_conv2d_subtract_constant_29_let)[ax3_1]);
      }
    }
  }
  for (int32_t i1_1 = 0; i1_1 < 4; ++i1_1) {
    for (int32_t i2_1 = 0; i2_1 < 4; ++i2_1) {
      for (int32_t i3_1 = 0; i3_1 < 120; ++i3_1) {
        int32_t cse_var_7 = (((i1_1 * 480) + (i2_1 * 120)) + i3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_7] = ((int32_t)(((((int64_t)((int32_t*)DepthwiseConv2d_let)[cse_var_7]) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_87_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_89_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_89_let)[i3_1] + 31))));
      }
    }
  }
  for (int32_t ax1_2 = 0; ax1_2 < 4; ++ax1_2) {
    for (int32_t ax2_2 = 0; ax2_2 < 4; ++ax2_2) {
      for (int32_t ax3_2 = 0; ax3_2 < 120; ++ax3_2) {
        int32_t cse_var_8 = (((ax1_2 * 480) + (ax2_2 * 120)) + ax3_2);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_8] = (((int32_t*)DepthwiseConv2d_let)[cse_var_8] - 57);
      }
    }
  }
  for (int32_t i1_2 = 0; i1_2 < 4; ++i1_2) {
    for (int32_t i2_2 = 0; i2_2 < 4; ++i2_2) {
      for (int32_t i3_2 = 0; i3_2 < 120; ++i3_2) {
        int32_t cse_var_9 = (((i1_2 * 480) + (i2_2 * 120)) + i3_2);
        int32_t v_ = ((int32_t*)DepthwiseConv2d_let)[cse_var_9];
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_9] = ((v__1) > (-128) ? (v__1) : (-128));
      }
    }
  }
  for (int32_t ax1_3 = 0; ax1_3 < 4; ++ax1_3) {
    for (int32_t ax2_3 = 0; ax2_3 < 4; ++ax2_3) {
      for (int32_t ax3_3 = 0; ax3_3 < 120; ++ax3_3) {
        int32_t cse_var_10 = (((ax1_3 * 480) + (ax2_3 * 120)) + ax3_3);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_10] = (((int32_t*)DepthwiseConv2d_let)[cse_var_10] + 57);
      }
    }
  }
  for (int32_t ax1_4 = 0; ax1_4 < 4; ++ax1_4) {
    for (int32_t ax2_4 = 0; ax2_4 < 4; ++ax2_4) {
      for (int32_t ax3_4 = 0; ax3_4 < 120; ++ax3_4) {
        int32_t cse_var_11 = (((ax1_4 * 480) + (ax2_4 * 120)) + ax3_4);
        ((float*)PaddedInput_let)[cse_var_11] = ((float)((int32_t*)DepthwiseConv2d_let)[cse_var_11]);
      }
    }
  }
  for (int32_t ax1_5 = 0; ax1_5 < 4; ++ax1_5) {
    for (int32_t ax2_5 = 0; ax2_5 < 4; ++ax2_5) {
      for (int32_t ax3_5 = 0; ax3_5 < 120; ++ax3_5) {
        int32_t cse_var_12 = (((ax1_5 * 480) + (ax2_5 * 120)) + ax3_5);
        ((float*)DepthwiseConv2d_let)[cse_var_12] = (((float*)PaddedInput_let)[cse_var_12] * 3.359595e-01f);
      }
    }
  }
  for (int32_t ax1_6 = 0; ax1_6 < 4; ++ax1_6) {
    for (int32_t ax2_6 = 0; ax2_6 < 4; ++ax2_6) {
      for (int32_t ax3_6 = 0; ax3_6 < 120; ++ax3_6) {
        int32_t cse_var_13 = (((ax1_6 * 480) + (ax2_6 * 120)) + ax3_6);
        ((float*)PaddedInput_let)[cse_var_13] = (((float*)DepthwiseConv2d_let)[cse_var_13] + 3.000000e+00f);
      }
    }
  }
  for (int32_t i1_3 = 0; i1_3 < 4; ++i1_3) {
    for (int32_t i2_3 = 0; i2_3 < 4; ++i2_3) {
      for (int32_t i3_3 = 0; i3_3 < 120; ++i3_3) {
        int32_t cse_var_14 = (((i1_3 * 480) + (i2_3 * 120)) + i3_3);
        float v__2 = ((float*)PaddedInput_let)[cse_var_14];
        float v__3 = (v__2) < (6.000000e+00f) ? (v__2) : (6.000000e+00f);
        ((float*)compute_let)[cse_var_14] = ((v__3) > (0.000000e+00f) ? (v__3) : (0.000000e+00f));
      }
    }
  }
  for (int32_t ax1_7 = 0; ax1_7 < 4; ++ax1_7) {
    for (int32_t ax2_7 = 0; ax2_7 < 4; ++ax2_7) {
      for (int32_t ax3_7 = 0; ax3_7 < 120; ++ax3_7) {
        int32_t cse_var_15 = (((ax1_7 * 480) + (ax2_7 * 120)) + ax3_7);
        ((float*)compute_let)[cse_var_15] = (((float*)DepthwiseConv2d_let)[cse_var_15] * ((float*)compute_let)[cse_var_15]);
      }
    }
  }
  for (int32_t ax1_8 = 0; ax1_8 < 4; ++ax1_8) {
    for (int32_t ax2_8 = 0; ax2_8 < 4; ++ax2_8) {
      for (int32_t ax3_8 = 0; ax3_8 < 120; ++ax3_8) {
        int32_t cse_var_16 = (((ax1_8 * 480) + (ax2_8 * 120)) + ax3_8);
        ((float*)compute_let)[cse_var_16] = (((float*)compute_let)[cse_var_16] * 1.666667e-01f);
      }
    }
  }
  for (int32_t ax1_9 = 0; ax1_9 < 4; ++ax1_9) {
    for (int32_t ax2_9 = 0; ax2_9 < 4; ++ax2_9) {
      for (int32_t ax3_9 = 0; ax3_9 < 120; ++ax3_9) {
        int32_t cse_var_17 = (((ax1_9 * 480) + (ax2_9 * 120)) + ax3_9);
        ((float*)compute_let)[cse_var_17] = (((float*)compute_let)[cse_var_17] * 4.090191e+00f);
      }
    }
  }
  for (int32_t ax1_10 = 0; ax1_10 < 4; ++ax1_10) {
    for (int32_t ax2_10 = 0; ax2_10 < 4; ++ax2_10) {
      for (int32_t ax3_10 = 0; ax3_10 < 120; ++ax3_10) {
        int32_t cse_var_18 = (((ax1_10 * 480) + (ax2_10 * 120)) + ax3_10);
        ((float*)compute_let)[cse_var_18] = roundf(((float*)compute_let)[cse_var_18]);
      }
    }
  }
  for (int32_t ax1_11 = 0; ax1_11 < 4; ++ax1_11) {
    for (int32_t ax2_11 = 0; ax2_11 < 4; ++ax2_11) {
      for (int32_t ax3_11 = 0; ax3_11 < 120; ++ax3_11) {
        int32_t cse_var_19 = (((ax1_11 * 480) + (ax2_11 * 120)) + ax3_11);
        ((float*)compute_let)[cse_var_19] = (((float*)compute_let)[cse_var_19] + -1.260000e+02f);
      }
    }
  }
  for (int32_t i1_4 = 0; i1_4 < 4; ++i1_4) {
    for (int32_t i2_4 = 0; i2_4 < 4; ++i2_4) {
      for (int32_t i3_4 = 0; i3_4 < 120; ++i3_4) {
        int32_t cse_var_20 = (((i1_4 * 480) + (i2_4 * 120)) + i3_4);
        float v__4 = ((float*)compute_let)[cse_var_20];
        float v__5 = (v__4) < (1.270000e+02f) ? (v__4) : (1.270000e+02f);
        ((float*)compute_let)[cse_var_20] = ((v__5) > (-1.280000e+02f) ? (v__5) : (-1.280000e+02f));
      }
    }
  }
  for (int32_t ax1_12 = 0; ax1_12 < 4; ++ax1_12) {
    for (int32_t ax2_12 = 0; ax2_12 < 4; ++ax2_12) {
      for (int32_t ax3_12 = 0; ax3_12 < 120; ++ax3_12) {
        int32_t cse_var_21 = (((ax1_12 * 480) + (ax2_12 * 120)) + ax3_12);
        T_cast[cse_var_21] = ((int32_t)((float*)compute_let)[cse_var_21]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_subtract_cas_c93f40e30d1c190e__9(int8_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_146_var, uint8_t* global_workspace_147_var) {
#ifdef INCLUDE_ACCEL
  // [ACCELERATED] 1x1 conv: 40->240 channels, 16 spatial positions [with fused h-swish]
  int32_t* quant_shift = (int32_t*)(&global_const_workspace_146_var[706480]);
  int32_t* quant_scale = (int32_t*)(&global_const_workspace_146_var[708400]);
  int32_t* conv_const  = (int32_t*)(&global_const_workspace_146_var[716080]);
  int32_t* conv_sub    = (int32_t*)(&global_const_workspace_146_var[704560]);
  int8_t*  weights     = (int8_t*) (&global_const_workspace_146_var[439392]);

  // Safe copy: TVM may alias input/output workspace buffers
  static int8_t _inp[640];
  for (int32_t _i = 0; _i < 640; _i++) _inp[_i] = p0[_i];

  for (int32_t tile = 0; tile < 1; tile++) {
    int32_t oc_base = tile * 240;
    int32_t oc_count = 240;
    if (oc_base + oc_count > 240) oc_count = 240 - oc_base;
    static int8_t rw[9600];
    for (int32_t oc = 0; oc < oc_count; oc++) {
      for (int32_t rc = 0; rc < 40; rc++)
        rw[oc * 40 + rc] = weights[rc * 240 + oc_base + oc];
    }
    accel_spad_write(0x028, rw, oc_count * 40);
    for (int32_t sp = 0; sp < 16; sp++) {
      accel_spad_write(0x000, &_inp[sp * 40], 40);
      hw_multi_dot(0x000, 0x028, 0x25A8, 40, oc_count);
      for (int32_t oc = 0; oc < oc_count; oc++) {
        int32_t ax3 = oc_base + oc;
        int32_t dot = (int32_t)accel_spad_read32(0x25A8 + oc * 4);
        int32_t v_ = ((int32_t)(((((int64_t)((dot + conv_sub[ax3]) - conv_const[ax3]))
          * ((int64_t)quant_scale[ax3]))
          + ((int64_t)1 << ((int64_t)((quant_shift[ax3] + 31) - 1))))
          >> ((int64_t)(quant_shift[ax3] + 31)))) + 11;
        int32_t v1 = (v_) < (127) ? (v_) : (127);
        float _dq = (float)(((v1) > (-128) ? (v1) : (-128)) - 11) * 1.429008e-01f;
        float _hs_in = (_dq + 3.0f) < (6.0f) ? (_dq + 3.0f) : (6.0f);
        float _hs = roundf((_dq * ((_hs_in) > (0.0f) ? (_hs_in) : (0.0f)) * 1.666667e-01f) * 1.506020e+01f) + -1.220000e+02f;
        float _hc = (_hs) < (1.270000e+02f) ? (_hs) : (1.270000e+02f);
        T_cast[(sp * 240) + ax3] = (int8_t)((_hc) > (-1.280000e+02f) ? (_hc) : (-1.280000e+02f));
      }
    }
  }
  return 0;

#else

  void* fused_nn_conv2d_subtract_add_constant_98_let = (&(global_const_workspace_146_var[706480]));
  void* fused_nn_conv2d_subtract_add_constant_97_let = (&(global_const_workspace_146_var[707440]));
  void* fused_nn_conv2d_subtract_add_constant_96_let = (&(global_const_workspace_146_var[708400]));
  void* fused_nn_conv2d_constant_34_let = (&(global_const_workspace_146_var[716080]));
  void* fused_nn_conv2d_subtract_constant_32_let = (&(global_const_workspace_146_var[704560]));
  void* fused_constant_44_let = (&(global_const_workspace_146_var[439392]));
  void* pad_temp_let = (&(global_workspace_147_var[33920]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 4; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 4; ++i2) {
      for (int32_t i3 = 0; i3 < 40; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 160) + (i2 * 40)) + i3);
        ((int8_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 16; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_nhwc_let = (&(global_workspace_147_var[52736]));
    for (int32_t ax3 = 0; ax3 < 240; ++ax3) {
      ((int32_t*)conv2d_nhwc_let)[0] = 0;
      for (int32_t rc = 0; rc < 40; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 40) + rc)]) * ((int32_t)((int8_t*)fused_constant_44_let)[((rc * 240) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_32_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_34_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_96_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_98_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_98_let)[ax3] + 31)))) + 11;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      int32_t v__2 = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_32_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_34_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_96_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_98_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_98_let)[ax3] + 31)))) + 11;
      int32_t v__3 = (v__2) < (127) ? (v__2) : (127);
      float v__4 = (((float)(((v__3) > (-128) ? (v__3) : (-128)) - 11)) * 1.429008e-01f) + 3.000000e+00f;
      float v__5 = (v__4) < (6.000000e+00f) ? (v__4) : (6.000000e+00f);
      float v__6 = roundf(((((((float)(((v__1) > (-128) ? (v__1) : (-128)) - 11)) * 1.429008e-01f) * ((v__5) > (0.000000e+00f) ? (v__5) : (0.000000e+00f))) * 1.666667e-01f) * 1.506020e+01f)) + -1.220000e+02f;
      float v__7 = (v__6) < (1.270000e+02f) ? (v__6) : (1.270000e+02f);
      T_cast[((ax0_ax1_fused_ax2_fused * 240) + ax3)] = ((int8_t)((v__7) > (-1.280000e+02f) ? (v__7) : (-1.280000e+02f)));
    }
  }
  return 0;

#endif
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_subtract_mul_add8c47b972ae6c2_(int8_t* p0, int32_t* T_subtract, uint8_t* global_const_workspace_16_var, uint8_t* global_workspace_17_var) {
  void* fused_nn_conv2d_subtract_add_constant_11_let = (&(global_const_workspace_16_var[794400]));
  void* fused_nn_conv2d_subtract_add_constant_10_let = (&(global_const_workspace_16_var[794464]));
  void* fused_nn_conv2d_subtract_add_constant_9_let = (&(global_const_workspace_16_var[793504]));
  void* fused_nn_conv2d_constant_3_let = (&(global_const_workspace_16_var[794848]));
  void* fused_nn_conv2d_subtract_constant_3_let = (&(global_const_workspace_16_var[793312]));
  void* fused_constant_4_let = (&(global_const_workspace_16_var[790304]));
  void* pad_temp_let = (&(global_workspace_17_var[20544]));
  void* conv2d_nhwc_let = (&(global_workspace_17_var[20552]));
  for (int32_t i3 = 0; i3 < 8; ++i3) {
    ((int8_t*)pad_temp_let)[i3] = p0[i3];
  }
  for (int32_t ax3 = 0; ax3 < 16; ++ax3) {
    ((int32_t*)conv2d_nhwc_let)[0] = 0;
    for (int32_t rc = 0; rc < 8; ++rc) {
      ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[rc]) * ((int32_t)((int8_t*)fused_constant_4_let)[((rc * 16) + ax3)])));
    }
    int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_3_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_3_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_9_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_11_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_11_let)[ax3] + 31)))) - 128;
    int32_t v__1 = (v_) < (127) ? (v_) : (127);
    int32_t v__2 = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_3_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_3_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_9_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_11_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_11_let)[ax3] + 31)))) - 128;
    int32_t v__3 = (v__2) < (127) ? (v__2) : (127);
    int32_t v__4 = ((int32_t)(((((0 != 0) ? (((int64_t)((((v__1) > (-128) ? (v__1) : (-128)) * 255) + 32640)) << ((int64_t)0)) : ((int64_t)((((v__3) > (-128) ? (v__3) : (-128)) * 255) + 32640))) * (int64_t)1077952511) + ((int64_t)1 << ((int64_t)((7 + 31) - 1)))) >> ((int64_t)(7 + 31)))) - 128;
    int32_t v__5 = (v__4) < (127) ? (v__4) : (127);
    T_subtract[ax3] = (((v__5) > (-128) ? (v__5) : (-128)) + 128);
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_subtract_mul_add8c47b972ae6c2__1(int8_t* p0, int32_t* T_subtract, uint8_t* global_const_workspace_66_var, uint8_t* global_workspace_67_var) {
  void* fused_nn_conv2d_subtract_add_constant_44_let = (&(global_const_workspace_66_var[762096]));
  void* fused_nn_conv2d_subtract_add_constant_43_let = (&(global_const_workspace_66_var[762480]));
  void* fused_nn_conv2d_subtract_add_constant_42_let = (&(global_const_workspace_66_var[762864]));
  void* fused_nn_conv2d_constant_14_let = (&(global_const_workspace_66_var[766704]));
  void* fused_nn_conv2d_subtract_constant_14_let = (&(global_const_workspace_66_var[758640]));
  void* fused_constant_20_let = (&(global_const_workspace_66_var[624048]));
  void* pad_temp_let = (&(global_workspace_67_var[8064]));
  void* conv2d_nhwc_let = (&(global_workspace_67_var[8088]));
  for (int32_t i3 = 0; i3 < 24; ++i3) {
    ((int8_t*)pad_temp_let)[i3] = p0[i3];
  }
  for (int32_t ax3 = 0; ax3 < 96; ++ax3) {
    ((int32_t*)conv2d_nhwc_let)[0] = 0;
    for (int32_t rc = 0; rc < 24; ++rc) {
      ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[rc]) * ((int32_t)((int8_t*)fused_constant_20_let)[((rc * 96) + ax3)])));
    }
    int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_14_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_14_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_42_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_44_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_44_let)[ax3] + 31)))) - 128;
    int32_t v__1 = (v_) < (127) ? (v_) : (127);
    int32_t v__2 = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_14_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_14_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_42_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_44_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_44_let)[ax3] + 31)))) - 128;
    int32_t v__3 = (v__2) < (127) ? (v__2) : (127);
    int32_t v__4 = ((int32_t)(((((0 != 0) ? (((int64_t)((((v__1) > (-128) ? (v__1) : (-128)) * 255) + 32640)) << ((int64_t)0)) : ((int64_t)((((v__3) > (-128) ? (v__3) : (-128)) * 255) + 32640))) * (int64_t)1077952511) + ((int64_t)1 << ((int64_t)((7 + 31) - 1)))) >> ((int64_t)(7 + 31)))) - 128;
    int32_t v__5 = (v__4) < (127) ? (v__4) : (127);
    T_subtract[ax3] = (((v__5) > (-128) ? (v__5) : (-128)) + 128);
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_subtract_mul_add8c47b972ae6c2__2(int8_t* p0, int32_t* T_subtract, uint8_t* global_const_workspace_84_var, uint8_t* global_workspace_85_var) {
  void* fused_nn_conv2d_subtract_add_constant_59_let = (&(global_const_workspace_84_var[726288]));
  void* fused_nn_conv2d_subtract_add_constant_58_let = (&(global_const_workspace_84_var[727056]));
  void* fused_nn_conv2d_subtract_add_constant_57_let = (&(global_const_workspace_84_var[727824]));
  void* fused_nn_conv2d_constant_19_let = (&(global_const_workspace_84_var[735504]));
  void* fused_nn_conv2d_subtract_constant_19_let = (&(global_const_workspace_84_var[719376]));
  void* fused_constant_26_let = (&(global_const_workspace_84_var[476640]));
  void* pad_temp_let = (&(global_workspace_85_var[53504]));
  void* conv2d_nhwc_let = (&(global_workspace_85_var[53248]));
  for (int32_t i3 = 0; i3 < 48; ++i3) {
    ((int8_t*)pad_temp_let)[i3] = p0[i3];
  }
  for (int32_t ax3_outer = 0; ax3_outer < 3; ++ax3_outer) {
    for (int32_t ff = 0; ff < 64; ++ff) {
      ((int32_t*)conv2d_nhwc_let)[ff] = 0;
      for (int32_t rc = 0; rc < 48; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[ff] = (((int32_t*)conv2d_nhwc_let)[ff] + (((int32_t)((int8_t*)pad_temp_let)[rc]) * ((int32_t)((int8_t*)fused_constant_26_let)[(((rc * 192) + (ax3_outer * 64)) + ff)])));
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 64; ++ax3_inner) {
      int32_t cse_var_1 = ((ax3_outer * 64) + ax3_inner);
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[ax3_inner] + ((int32_t*)fused_nn_conv2d_subtract_constant_19_let)[cse_var_1]) - ((int32_t*)fused_nn_conv2d_constant_19_let)[cse_var_1])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_57_let)[cse_var_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_59_let)[cse_var_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_59_let)[cse_var_1] + 31)))) - 128;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      int32_t v__2 = ((int32_t)(((((0 != 0) ? (((int64_t)((((v__1) > (-128) ? (v__1) : (-128)) * 255) + 32640)) << ((int64_t)0)) : ((int64_t)((((v__1) > (-128) ? (v__1) : (-128)) * 255) + 32640))) * (int64_t)1077952511) + ((int64_t)1 << ((int64_t)((7 + 31) - 1)))) >> ((int64_t)(7 + 31)))) - 128;
      int32_t v__3 = (v__2) < (127) ? (v__2) : (127);
      T_subtract[cse_var_1] = (((v__3) > (-128) ? (v__3) : (-128)) + 128);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_subtract_mul_add8c47b972ae6c2__3(int8_t* p0, int32_t* T_subtract, uint8_t* global_const_workspace_104_var, uint8_t* global_workspace_105_var) {
  void* fused_nn_conv2d_subtract_add_constant_71_let = (&(global_const_workspace_104_var[721680]));
  void* fused_nn_conv2d_subtract_add_constant_70_let = (&(global_const_workspace_104_var[722448]));
  void* fused_nn_conv2d_subtract_add_constant_69_let = (&(global_const_workspace_104_var[723216]));
  void* fused_nn_conv2d_constant_24_let = (&(global_const_workspace_104_var[733200]));
  void* fused_nn_conv2d_subtract_constant_23_let = (&(global_const_workspace_104_var[717840]));
  void* fused_constant_32_let = (&(global_const_workspace_104_var[458208]));
  void* pad_temp_let = (&(global_workspace_105_var[54016]));
  void* conv2d_nhwc_let = (&(global_workspace_105_var[53760]));
  for (int32_t i3 = 0; i3 < 48; ++i3) {
    ((int8_t*)pad_temp_let)[i3] = p0[i3];
  }
  for (int32_t ax3_outer = 0; ax3_outer < 3; ++ax3_outer) {
    for (int32_t ff = 0; ff < 64; ++ff) {
      ((int32_t*)conv2d_nhwc_let)[ff] = 0;
      for (int32_t rc = 0; rc < 48; ++rc) {
        ((int32_t*)conv2d_nhwc_let)[ff] = (((int32_t*)conv2d_nhwc_let)[ff] + (((int32_t)((int8_t*)pad_temp_let)[rc]) * ((int32_t)((int8_t*)fused_constant_32_let)[(((rc * 192) + (ax3_outer * 64)) + ff)])));
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 64; ++ax3_inner) {
      int32_t cse_var_1 = ((ax3_outer * 64) + ax3_inner);
      int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[ax3_inner] + ((int32_t*)fused_nn_conv2d_subtract_constant_23_let)[cse_var_1]) - ((int32_t*)fused_nn_conv2d_constant_24_let)[cse_var_1])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_69_let)[cse_var_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_71_let)[cse_var_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_71_let)[cse_var_1] + 31)))) - 128;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      int32_t v__2 = ((int32_t)(((((0 != 0) ? (((int64_t)((((v__1) > (-128) ? (v__1) : (-128)) * 255) + 32640)) << ((int64_t)0)) : ((int64_t)((((v__1) > (-128) ? (v__1) : (-128)) * 255) + 32640))) * (int64_t)1077952511) + ((int64_t)1 << ((int64_t)((7 + 31) - 1)))) >> ((int64_t)(7 + 31)))) - 128;
      int32_t v__3 = (v__2) < (127) ? (v__2) : (127);
      T_subtract[cse_var_1] = (((v__3) > (-128) ? (v__3) : (-128)) + 128);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_subtract_mul_add8c47b972ae6c2__4(int8_t* p0, int32_t* T_subtract, uint8_t* global_const_workspace_140_var, uint8_t* global_workspace_141_var) {
  void* fused_nn_conv2d_subtract_add_constant_95_let = (&(global_const_workspace_140_var[747200]));
  void* fused_nn_conv2d_subtract_add_constant_94_let = (&(global_const_workspace_140_var[747680]));
  void* fused_nn_conv2d_subtract_add_constant_93_let = (&(global_const_workspace_140_var[748160]));
  void* fused_nn_conv2d_constant_33_let = (&(global_const_workspace_140_var[751520]));
  void* fused_nn_conv2d_subtract_constant_31_let = (&(global_const_workspace_140_var[745760]));
  void* fused_constant_43_let = (&(global_const_workspace_140_var[593968]));
  void* pad_temp_let = (&(global_workspace_141_var[53216]));
  void* conv2d_nhwc_let = (&(global_workspace_141_var[53248]));
  for (int32_t i3 = 0; i3 < 32; ++i3) {
    ((int8_t*)pad_temp_let)[i3] = p0[i3];
  }
  for (int32_t ax3 = 0; ax3 < 120; ++ax3) {
    ((int32_t*)conv2d_nhwc_let)[0] = 0;
    for (int32_t rc = 0; rc < 32; ++rc) {
      ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[rc]) * ((int32_t)((int8_t*)fused_constant_43_let)[((rc * 120) + ax3)])));
    }
    int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_31_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_33_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_93_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_95_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_95_let)[ax3] + 31)))) - 128;
    int32_t v__1 = (v_) < (127) ? (v_) : (127);
    int32_t v__2 = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_31_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_33_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_93_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_95_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_95_let)[ax3] + 31)))) - 128;
    int32_t v__3 = (v__2) < (127) ? (v__2) : (127);
    int32_t v__4 = ((int32_t)(((((0 != 0) ? (((int64_t)((((v__1) > (-128) ? (v__1) : (-128)) * 255) + 32640)) << ((int64_t)0)) : ((int64_t)((((v__3) > (-128) ? (v__3) : (-128)) * 255) + 32640))) * (int64_t)1077952511) + ((int64_t)1 << ((int64_t)((7 + 31) - 1)))) >> ((int64_t)(7 + 31)))) - 128;
    int32_t v__5 = (v__4) < (127) ? (v__4) : (127);
    T_subtract[ax3] = (((v__5) > (-128) ? (v__5) : (-128)) + 128);
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_subtract_mul_add8c47b972ae6c2__5(int8_t* p0, int32_t* T_subtract, uint8_t* global_const_workspace_158_var, uint8_t* global_workspace_159_var) {
  void* fused_nn_conv2d_subtract_add_constant_107_let = (&(global_const_workspace_158_var[709360]));
  void* fused_nn_conv2d_subtract_add_constant_106_let = (&(global_const_workspace_158_var[710320]));
  void* fused_nn_conv2d_subtract_add_constant_105_let = (&(global_const_workspace_158_var[711280]));
  void* fused_nn_conv2d_constant_37_let = (&(global_const_workspace_158_var[714160]));
  void* fused_nn_conv2d_subtract_constant_35_let = (&(global_const_workspace_158_var[702640]));
  void* fused_constant_48_let = (&(global_const_workspace_158_var[387072]));
  void* pad_temp_let = (&(global_workspace_159_var[52736]));
  void* conv2d_nhwc_let = (&(global_workspace_159_var[52800]));
  for (int32_t i3 = 0; i3 < 64; ++i3) {
    ((int8_t*)pad_temp_let)[i3] = p0[i3];
  }
  for (int32_t ax3 = 0; ax3 < 240; ++ax3) {
    ((int32_t*)conv2d_nhwc_let)[0] = 0;
    for (int32_t rc = 0; rc < 64; ++rc) {
      ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[rc]) * ((int32_t)((int8_t*)fused_constant_48_let)[((rc * 240) + ax3)])));
    }
    int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_35_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_37_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_105_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_107_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_107_let)[ax3] + 31)))) - 128;
    int32_t v__1 = (v_) < (127) ? (v_) : (127);
    int32_t v__2 = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_35_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_37_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_105_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_107_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_107_let)[ax3] + 31)))) - 128;
    int32_t v__3 = (v__2) < (127) ? (v__2) : (127);
    int32_t v__4 = ((int32_t)(((((0 != 0) ? (((int64_t)((((v__1) > (-128) ? (v__1) : (-128)) * 255) + 32640)) << ((int64_t)0)) : ((int64_t)((((v__3) > (-128) ? (v__3) : (-128)) * 255) + 32640))) * (int64_t)1077952511) + ((int64_t)1 << ((int64_t)((7 + 31) - 1)))) >> ((int64_t)(7 + 31)))) - 128;
    int32_t v__5 = (v__4) < (127) ? (v__4) : (127);
    T_subtract[ax3] = (((v__5) > (-128) ? (v__5) : (-128)) + 128);
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_subtract_mul_add8c47b972ae6c2__6(int8_t* p0, int32_t* T_subtract, uint8_t* global_const_workspace_176_var, uint8_t* global_workspace_177_var) {
  void* fused_nn_conv2d_subtract_add_constant_122_let = (&(global_const_workspace_176_var[672112]));
  void* fused_nn_conv2d_subtract_add_constant_121_let = (&(global_const_workspace_176_var[673840]));
  void* fused_nn_conv2d_subtract_add_constant_120_let = (&(global_const_workspace_176_var[675568]));
  void* fused_nn_conv2d_constant_42_let = (&(global_const_workspace_176_var[694576]));
  void* fused_nn_conv2d_subtract_constant_40_let = (&(global_const_workspace_176_var[646192]));
  void* fused_constant_54_let = (&(global_const_workspace_176_var[96768]));
  void* pad_temp_let = (&(global_workspace_177_var[54000]));
  void* conv2d_nhwc_let = (&(global_workspace_177_var[54112]));
  for (int32_t i3 = 0; i3 < 112; ++i3) {
    ((int8_t*)pad_temp_let)[i3] = p0[i3];
  }
  for (int32_t ax3 = 0; ax3 < 432; ++ax3) {
    ((int32_t*)conv2d_nhwc_let)[0] = 0;
    for (int32_t rc = 0; rc < 112; ++rc) {
      ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[rc]) * ((int32_t)((int8_t*)fused_constant_54_let)[((rc * 432) + ax3)])));
    }
    int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_40_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_42_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_120_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_122_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_122_let)[ax3] + 31)))) - 128;
    int32_t v__1 = (v_) < (127) ? (v_) : (127);
    int32_t v__2 = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_40_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_42_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_120_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_122_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_122_let)[ax3] + 31)))) - 128;
    int32_t v__3 = (v__2) < (127) ? (v__2) : (127);
    int32_t v__4 = ((int32_t)(((((0 != 0) ? (((int64_t)((((v__1) > (-128) ? (v__1) : (-128)) * 255) + 32640)) << ((int64_t)0)) : ((int64_t)((((v__3) > (-128) ? (v__3) : (-128)) * 255) + 32640))) * (int64_t)1077952511) + ((int64_t)1 << ((int64_t)((7 + 31) - 1)))) >> ((int64_t)(7 + 31)))) - 128;
    int32_t v__5 = (v__4) < (127) ? (v__4) : (127);
    T_subtract[ax3] = (((v__5) > (-128) ? (v__5) : (-128)) + 128);
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_subtract_mul_add8c47b972ae6c2__7(int8_t* p0, int32_t* T_subtract, uint8_t* global_const_workspace_194_var, uint8_t* global_workspace_195_var) {
  void* fused_nn_conv2d_subtract_add_constant_134_let = (&(global_const_workspace_194_var[656560]));
  void* fused_nn_conv2d_subtract_add_constant_133_let = (&(global_const_workspace_194_var[658288]));
  void* fused_nn_conv2d_subtract_add_constant_132_let = (&(global_const_workspace_194_var[660016]));
  void* fused_nn_conv2d_constant_46_let = (&(global_const_workspace_194_var[689392]));
  void* fused_nn_conv2d_subtract_constant_44_let = (&(global_const_workspace_194_var[641008]));
  void* fused_constant_59_let = (&(global_const_workspace_194_var[0]));
  void* pad_temp_let = (&(global_workspace_195_var[54288]));
  void* conv2d_nhwc_let = (&(global_workspace_195_var[54400]));
  for (int32_t i3 = 0; i3 < 112; ++i3) {
    ((int8_t*)pad_temp_let)[i3] = p0[i3];
  }
  for (int32_t ax3 = 0; ax3 < 432; ++ax3) {
    ((int32_t*)conv2d_nhwc_let)[0] = 0;
    for (int32_t rc = 0; rc < 112; ++rc) {
      ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[rc]) * ((int32_t)((int8_t*)fused_constant_59_let)[((rc * 432) + ax3)])));
    }
    int32_t v_ = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_44_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_46_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_132_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_134_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_134_let)[ax3] + 31)))) - 128;
    int32_t v__1 = (v_) < (127) ? (v_) : (127);
    int32_t v__2 = ((int32_t)(((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_44_let)[ax3]) - ((int32_t*)fused_nn_conv2d_constant_46_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_132_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_134_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_134_let)[ax3] + 31)))) - 128;
    int32_t v__3 = (v__2) < (127) ? (v__2) : (127);
    int32_t v__4 = ((int32_t)(((((0 != 0) ? (((int64_t)((((v__1) > (-128) ? (v__1) : (-128)) * 255) + 32640)) << ((int64_t)0)) : ((int64_t)((((v__3) > (-128) ? (v__3) : (-128)) * 255) + 32640))) * (int64_t)1077952511) + ((int64_t)1 << ((int64_t)((7 + 31) - 1)))) >> ((int64_t)(7 + 31)))) - 128;
    int32_t v__5 = (v__4) < (127) ? (v__4) : (127);
    T_subtract[ax3] = (((v__5) > (-128) ? (v__5) : (-128)) + 128);
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_clip_cast_clip(int8_t* p0, int8_t* compute, uint8_t* global_const_workspace_120_var, uint8_t* global_workspace_121_var) {
  void* fused_nn_conv2d_subtract_add_constant_80_let = (&(global_const_workspace_120_var[791488]));
  void* fused_nn_conv2d_subtract_add_constant_79_let = (&(global_const_workspace_120_var[791584]));
  void* fused_nn_conv2d_subtract_add_constant_78_let = (&(global_const_workspace_120_var[791680]));
  void* fused_nn_conv2d_constant_27_let = (&(global_const_workspace_120_var[792448]));
  void* fused_nn_conv2d_subtract_constant_26_let = (&(global_const_workspace_120_var[791296]));
  void* fused_constant_36_let = (&(global_const_workspace_120_var[621744]));
  void* pad_temp_let = (&(global_workspace_121_var[52736]));
  void* conv2d_nhwc_let = (&(global_workspace_121_var[52856]));
  for (int32_t i3 = 0; i3 < 96; ++i3) {
    ((int8_t*)pad_temp_let)[i3] = p0[i3];
  }
  for (int32_t i3_1 = 0; i3_1 < 24; ++i3_1) {
    ((int32_t*)conv2d_nhwc_let)[0] = 0;
    for (int32_t rc = 0; rc < 96; ++rc) {
      ((int32_t*)conv2d_nhwc_let)[0] = (((int32_t*)conv2d_nhwc_let)[0] + (((int32_t)((int8_t*)pad_temp_let)[rc]) * ((int32_t)((int8_t*)fused_constant_36_let)[((rc * 24) + i3_1)])));
    }
    int32_t v_ = (int32_t)((((((int64_t)((((int32_t*)conv2d_nhwc_let)[0] + ((int32_t*)fused_nn_conv2d_subtract_constant_26_let)[i3_1]) - ((int32_t*)fused_nn_conv2d_constant_27_let)[i3_1])) << ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_79_let)[i3_1])) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_78_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_80_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_80_let)[i3_1] + 31)));
    int32_t v__1 = (v_) < (127) ? (v_) : (127);
    int8_t v__2 = (int8_t)((v__1) > (-128) ? (v__1) : (-128));
    int8_t v__3 = (int8_t)127;
    int8_t v__4 = (v__2) < (v__3) ? (v__2) : (v__3);
    int8_t v__5 = (int8_t)0;
    compute[i3_1] = ((v__4) > (v__5) ? (v__4) : (v__5));
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_clip_cast_multiply_ad_b57e37aeb09540e8_(int8_t* p0, int32_t* T_cast, uint8_t* global_const_workspace_96_var, uint8_t* global_workspace_97_var) {
  void* fused_nn_conv2d_subtract_add_constant_65_let = (&(global_const_workspace_96_var[723984]));
  void* fused_nn_conv2d_subtract_add_constant_64_let = (&(global_const_workspace_96_var[724752]));
  void* fused_nn_conv2d_subtract_add_constant_63_let = (&(global_const_workspace_96_var[725520]));
  void* fused_nn_conv2d_subtract_constant_21_let = (&(global_const_workspace_96_var[718608]));
  void* fused_nn_conv2d_constant_22_let = (&(global_const_workspace_96_var[733968]));
  void* fused_constant_29_let = (&(global_const_workspace_96_var[561936]));
  void* PaddedInput_let = (&(global_workspace_97_var[24576]));
  void* DepthwiseConv2d_let = (&(global_workspace_97_var[36864]));
  void* compute_let = (&(global_workspace_97_var[12288]));
  for (int32_t i1 = 0; i1 < 8; ++i1) {
    for (int32_t i2 = 0; i2 < 8; ++i2) {
      for (int32_t i3 = 0; i3 < 192; ++i3) {
        int32_t cse_var_1 = (((i1 * 1536) + (i2 * 192)) + i3);
        ((int8_t*)PaddedInput_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t i = 0; i < 4; ++i) {
    for (int32_t j = 0; j < 4; ++j) {
      for (int32_t c = 0; c < 192; ++c) {
        ((int32_t*)DepthwiseConv2d_let)[(((i * 768) + (j * 192)) + c)] = 0;
        for (int32_t di = 0; di < 5; ++di) {
          for (int32_t dj = 0; dj < 5; ++dj) {
            int32_t cse_var_4 = (j * 192);
            int32_t cse_var_3 = (dj * 192);
            int32_t cse_var_2 = (((i * 768) + cse_var_4) + c);
            ((int32_t*)DepthwiseConv2d_let)[cse_var_2] = (((int32_t*)DepthwiseConv2d_let)[cse_var_2] + (((int32_t)((int8_t*)PaddedInput_let)[(((((i * 1536) + (di * 1536)) + cse_var_4) + cse_var_3) + c)]) * ((int32_t)((int8_t*)fused_constant_29_let)[(((di * 960) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 4; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 4; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 192; ++ax3) {
        int32_t cse_var_5 = (((ax1 * 768) + (ax2 * 192)) + ax3);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_5] = (((int32_t*)DepthwiseConv2d_let)[cse_var_5] - ((int32_t*)fused_nn_conv2d_constant_22_let)[ax3]);
      }
    }
  }
  for (int32_t ax1_1 = 0; ax1_1 < 4; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 4; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 192; ++ax3_1) {
        int32_t cse_var_6 = (((ax1_1 * 768) + (ax2_1 * 192)) + ax3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_6] = (((int32_t*)DepthwiseConv2d_let)[cse_var_6] + ((int32_t*)fused_nn_conv2d_subtract_constant_21_let)[ax3_1]);
      }
    }
  }
  for (int32_t i1_1 = 0; i1_1 < 4; ++i1_1) {
    for (int32_t i2_1 = 0; i2_1 < 4; ++i2_1) {
      for (int32_t i3_1 = 0; i3_1 < 192; ++i3_1) {
        int32_t cse_var_7 = (((i1_1 * 768) + (i2_1 * 192)) + i3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_7] = ((int32_t)(((((int64_t)((int32_t*)DepthwiseConv2d_let)[cse_var_7]) * ((int64_t)((int32_t*)fused_nn_conv2d_subtract_add_constant_63_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_subtract_add_constant_65_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_subtract_add_constant_65_let)[i3_1] + 31))));
      }
    }
  }
  for (int32_t i1_2 = 0; i1_2 < 4; ++i1_2) {
    for (int32_t i2_2 = 0; i2_2 < 4; ++i2_2) {
      for (int32_t i3_2 = 0; i3_2 < 192; ++i3_2) {
        int32_t cse_var_8 = (((i1_2 * 768) + (i2_2 * 192)) + i3_2);
        int32_t v_ = ((int32_t*)DepthwiseConv2d_let)[cse_var_8];
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_8] = ((v__1) > (-128) ? (v__1) : (-128));
      }
    }
  }
  for (int32_t ax1_2 = 0; ax1_2 < 4; ++ax1_2) {
    for (int32_t ax2_2 = 0; ax2_2 < 4; ++ax2_2) {
      for (int32_t ax3_2 = 0; ax3_2 < 192; ++ax3_2) {
        int32_t cse_var_9 = (((ax1_2 * 768) + (ax2_2 * 192)) + ax3_2);
        ((float*)PaddedInput_let)[cse_var_9] = ((float)((int32_t*)DepthwiseConv2d_let)[cse_var_9]);
      }
    }
  }
  for (int32_t ax1_3 = 0; ax1_3 < 4; ++ax1_3) {
    for (int32_t ax2_3 = 0; ax2_3 < 4; ++ax2_3) {
      for (int32_t ax3_3 = 0; ax3_3 < 192; ++ax3_3) {
        int32_t cse_var_10 = (((ax1_3 * 768) + (ax2_3 * 192)) + ax3_3);
        ((float*)DepthwiseConv2d_let)[cse_var_10] = (((float*)PaddedInput_let)[cse_var_10] * 2.720976e-01f);
      }
    }
  }
  for (int32_t ax1_4 = 0; ax1_4 < 4; ++ax1_4) {
    for (int32_t ax2_4 = 0; ax2_4 < 4; ++ax2_4) {
      for (int32_t ax3_4 = 0; ax3_4 < 192; ++ax3_4) {
        int32_t cse_var_11 = (((ax1_4 * 768) + (ax2_4 * 192)) + ax3_4);
        ((float*)PaddedInput_let)[cse_var_11] = (((float*)DepthwiseConv2d_let)[cse_var_11] + 3.000000e+00f);
      }
    }
  }
  for (int32_t i1_3 = 0; i1_3 < 4; ++i1_3) {
    for (int32_t i2_3 = 0; i2_3 < 4; ++i2_3) {
      for (int32_t i3_3 = 0; i3_3 < 192; ++i3_3) {
        int32_t cse_var_12 = (((i1_3 * 768) + (i2_3 * 192)) + i3_3);
        float v__2 = ((float*)PaddedInput_let)[cse_var_12];
        float v__3 = (v__2) < (6.000000e+00f) ? (v__2) : (6.000000e+00f);
        ((float*)compute_let)[cse_var_12] = ((v__3) > (0.000000e+00f) ? (v__3) : (0.000000e+00f));
      }
    }
  }
  for (int32_t ax1_5 = 0; ax1_5 < 4; ++ax1_5) {
    for (int32_t ax2_5 = 0; ax2_5 < 4; ++ax2_5) {
      for (int32_t ax3_5 = 0; ax3_5 < 192; ++ax3_5) {
        int32_t cse_var_13 = (((ax1_5 * 768) + (ax2_5 * 192)) + ax3_5);
        ((float*)compute_let)[cse_var_13] = (((float*)DepthwiseConv2d_let)[cse_var_13] * ((float*)compute_let)[cse_var_13]);
      }
    }
  }
  for (int32_t ax1_6 = 0; ax1_6 < 4; ++ax1_6) {
    for (int32_t ax2_6 = 0; ax2_6 < 4; ++ax2_6) {
      for (int32_t ax3_6 = 0; ax3_6 < 192; ++ax3_6) {
        int32_t cse_var_14 = (((ax1_6 * 768) + (ax2_6 * 192)) + ax3_6);
        ((float*)compute_let)[cse_var_14] = (((float*)compute_let)[cse_var_14] * 1.666667e-01f);
      }
    }
  }
  for (int32_t ax1_7 = 0; ax1_7 < 4; ++ax1_7) {
    for (int32_t ax2_7 = 0; ax2_7 < 4; ++ax2_7) {
      for (int32_t ax3_7 = 0; ax3_7 < 192; ++ax3_7) {
        int32_t cse_var_15 = (((ax1_7 * 768) + (ax2_7 * 192)) + ax3_7);
        ((float*)compute_let)[cse_var_15] = (((float*)compute_let)[cse_var_15] * 7.312656e+00f);
      }
    }
  }
  for (int32_t ax1_8 = 0; ax1_8 < 4; ++ax1_8) {
    for (int32_t ax2_8 = 0; ax2_8 < 4; ++ax2_8) {
      for (int32_t ax3_8 = 0; ax3_8 < 192; ++ax3_8) {
        int32_t cse_var_16 = (((ax1_8 * 768) + (ax2_8 * 192)) + ax3_8);
        ((float*)compute_let)[cse_var_16] = roundf(((float*)compute_let)[cse_var_16]);
      }
    }
  }
  for (int32_t ax1_9 = 0; ax1_9 < 4; ++ax1_9) {
    for (int32_t ax2_9 = 0; ax2_9 < 4; ++ax2_9) {
      for (int32_t ax3_9 = 0; ax3_9 < 192; ++ax3_9) {
        int32_t cse_var_17 = (((ax1_9 * 768) + (ax2_9 * 192)) + ax3_9);
        ((float*)compute_let)[cse_var_17] = (((float*)compute_let)[cse_var_17] + -1.250000e+02f);
      }
    }
  }
  for (int32_t i1_4 = 0; i1_4 < 4; ++i1_4) {
    for (int32_t i2_4 = 0; i2_4 < 4; ++i2_4) {
      for (int32_t i3_4 = 0; i3_4 < 192; ++i3_4) {
        int32_t cse_var_18 = (((i1_4 * 768) + (i2_4 * 192)) + i3_4);
        float v__4 = ((float*)compute_let)[cse_var_18];
        float v__5 = (v__4) < (1.270000e+02f) ? (v__4) : (1.270000e+02f);
        ((float*)compute_let)[cse_var_18] = ((v__5) > (-1.280000e+02f) ? (v__5) : (-1.280000e+02f));
      }
    }
  }
  for (int32_t ax1_10 = 0; ax1_10 < 4; ++ax1_10) {
    for (int32_t ax2_10 = 0; ax2_10 < 4; ++ax2_10) {
      for (int32_t ax3_10 = 0; ax3_10 < 192; ++ax3_10) {
        int32_t cse_var_19 = (((ax1_10 * 768) + (ax2_10 * 192)) + ax3_10);
        T_cast[cse_var_19] = ((int32_t)((float*)compute_let)[cse_var_19]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_6_var, uint8_t* global_workspace_7_var) {
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 33; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 33; ++ax2) {
      for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
        int32_t cse_var_1 = (ax2 * 16);
        T_pad[(((ax0_ax1_fused * 528) + cse_var_1) + ax3_inner)] = (((ax0_ax1_fused < 32) && (ax2 < 32)) ? p0[(((ax0_ax1_fused * 512) + cse_var_1) + ax3_inner)] : (int8_t)-125);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_1(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_24_var, uint8_t* global_workspace_25_var) {
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 17; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 17; ++ax2) {
      for (int32_t ax3_outer = 0; ax3_outer < 5; ++ax3_outer) {
        for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
          if (((ax3_outer * 2) + (ax3_inner >> 3)) < 9) {
            int32_t cse_var_2 = (ax2 * 72);
            int32_t cse_var_1 = (ax3_outer * 16);
            T_pad[((((ax0_ax1_fused * 1224) + cse_var_2) + cse_var_1) + ax3_inner)] = (((ax0_ax1_fused < 16) && (ax2 < 16)) ? p0[((((ax0_ax1_fused * 1152) + cse_var_2) + cse_var_1) + ax3_inner)] : (int8_t)-128);
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
TVM_DLL int32_t tvmgen_default_fused_nn_pad_10(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_166_var, uint8_t* global_workspace_167_var) {
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 6; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 6; ++ax2) {
      for (int32_t ax3_outer = 0; ax3_outer < 27; ++ax3_outer) {
        for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
          int32_t cse_var_2 = (ax2 * 432);
          int32_t cse_var_1 = (ax3_outer * 16);
          T_pad[((((ax0_ax1_fused * 2592) + cse_var_2) + cse_var_1) + ax3_inner)] = (((((2 <= ax0_ax1_fused) && (ax0_ax1_fused < 4)) && (2 <= ax2)) && (ax2 < 4)) ? p0[(((((ax0_ax1_fused * 864) + cse_var_2) + cse_var_1) + ax3_inner) - 2592)] : (int8_t)-123);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_11(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_184_var, uint8_t* global_workspace_185_var) {
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 6; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 6; ++ax2) {
      for (int32_t ax3_outer = 0; ax3_outer < 27; ++ax3_outer) {
        for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
          int32_t cse_var_2 = (ax2 * 432);
          int32_t cse_var_1 = (ax3_outer * 16);
          T_pad[((((ax0_ax1_fused * 2592) + cse_var_2) + cse_var_1) + ax3_inner)] = (((((2 <= ax0_ax1_fused) && (ax0_ax1_fused < 4)) && (2 <= ax2)) && (ax2 < 4)) ? p0[(((((ax0_ax1_fused * 864) + cse_var_2) + cse_var_1) + ax3_inner) - 2592)] : (int8_t)-127);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_12(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_210_var, uint8_t* global_workspace_211_var) {
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 6; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 6; ++ax2) {
      for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
        for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
          int32_t cse_var_2 = (ax2 * 32);
          int32_t cse_var_1 = (ax3_outer * 16);
          T_pad[((((ax0_ax1_fused * 192) + cse_var_2) + cse_var_1) + ax3_inner)] = (((((1 <= ax0_ax1_fused) && (ax0_ax1_fused < 5)) && (1 <= ax2)) && (ax2 < 5)) ? p0[(((((ax0_ax1_fused * 128) + cse_var_2) + cse_var_1) + ax3_inner) - 160)] : (int8_t)7);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_13(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_214_var, uint8_t* global_workspace_215_var) {
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
TVM_DLL int32_t tvmgen_default_fused_nn_pad_14(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_230_var, uint8_t* global_workspace_231_var) {
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 4; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 4; ++ax2) {
      for (int32_t ax3_outer = 0; ax3_outer < 5; ++ax3_outer) {
        for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
          if (((ax3_outer * 2) + (ax3_inner >> 3)) < 9) {
            int32_t cse_var_2 = (ax2 * 72);
            int32_t cse_var_1 = (ax3_outer * 16);
            T_pad[((((ax0_ax1_fused * 288) + cse_var_2) + cse_var_1) + ax3_inner)] = (((((1 <= ax0_ax1_fused) && (ax0_ax1_fused < 3)) && (1 <= ax2)) && (ax2 < 3)) ? p0[(((((ax0_ax1_fused * 144) + cse_var_2) + cse_var_1) + ax3_inner) - 216)] : (int8_t)-13);
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
TVM_DLL int32_t tvmgen_default_fused_nn_pad_15(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_234_var, uint8_t* global_workspace_235_var) {
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
TVM_DLL int32_t tvmgen_default_fused_nn_pad_2(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_30_var, uint8_t* global_workspace_31_var) {
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 10; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 10; ++ax2) {
      for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
        for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
          if (((ax3_outer * 2) + (ax3_inner >> 3)) < 3) {
            int32_t cse_var_2 = (ax2 * 24);
            int32_t cse_var_1 = (ax3_outer * 16);
            T_pad[((((ax0_ax1_fused * 240) + cse_var_2) + cse_var_1) + ax3_inner)] = (((((1 <= ax0_ax1_fused) && (ax0_ax1_fused < 9)) && (1 <= ax2)) && (ax2 < 9)) ? p0[(((((ax0_ax1_fused * 192) + cse_var_2) + cse_var_1) + ax3_inner) - 216)] : (int8_t)-4);
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
TVM_DLL int32_t tvmgen_default_fused_nn_pad_3(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_48_var, uint8_t* global_workspace_49_var) {
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 10; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 10; ++ax2) {
      for (int32_t ax3_outer = 0; ax3_outer < 6; ++ax3_outer) {
        for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
          if (((ax3_outer * 2) + (ax3_inner >> 3)) < 11) {
            int32_t cse_var_2 = (ax2 * 88);
            int32_t cse_var_1 = (ax3_outer * 16);
            T_pad[((((ax0_ax1_fused * 880) + cse_var_2) + cse_var_1) + ax3_inner)] = (((((1 <= ax0_ax1_fused) && (ax0_ax1_fused < 9)) && (1 <= ax2)) && (ax2 < 9)) ? p0[(((((ax0_ax1_fused * 704) + cse_var_2) + cse_var_1) + ax3_inner) - 792)] : (int8_t)-128);
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
TVM_DLL int32_t tvmgen_default_fused_nn_pad_4(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_56_var, uint8_t* global_workspace_57_var) {
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 11; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 11; ++ax2) {
      for (int32_t ax3_outer = 0; ax3_outer < 6; ++ax3_outer) {
        for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
          int32_t cse_var_2 = (ax2 * 96);
          int32_t cse_var_1 = (ax3_outer * 16);
          T_pad[((((ax0_ax1_fused * 1056) + cse_var_2) + cse_var_1) + ax3_inner)] = (((((1 <= ax0_ax1_fused) && (ax0_ax1_fused < 9)) && (1 <= ax2)) && (ax2 < 9)) ? p0[(((((ax0_ax1_fused * 768) + cse_var_2) + cse_var_1) + ax3_inner) - 864)] : (int8_t)-126);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_5(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_74_var, uint8_t* global_workspace_75_var) {
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 8; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 8; ++ax2) {
      for (int32_t ax3_outer = 0; ax3_outer < 12; ++ax3_outer) {
        for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
          int32_t cse_var_2 = (ax2 * 192);
          int32_t cse_var_1 = (ax3_outer * 16);
          T_pad[((((ax0_ax1_fused * 1536) + cse_var_2) + cse_var_1) + ax3_inner)] = (((((2 <= ax0_ax1_fused) && (ax0_ax1_fused < 6)) && (2 <= ax2)) && (ax2 < 6)) ? p0[(((((ax0_ax1_fused * 768) + cse_var_2) + cse_var_1) + ax3_inner) - 1920)] : (int8_t)-125);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_6(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_94_var, uint8_t* global_workspace_95_var) {
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 8; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 8; ++ax2) {
      for (int32_t ax3_outer = 0; ax3_outer < 12; ++ax3_outer) {
        for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
          int32_t cse_var_2 = (ax2 * 192);
          int32_t cse_var_1 = (ax3_outer * 16);
          T_pad[((((ax0_ax1_fused * 1536) + cse_var_2) + cse_var_1) + ax3_inner)] = (((((2 <= ax0_ax1_fused) && (ax0_ax1_fused < 6)) && (2 <= ax2)) && (ax2 < 6)) ? p0[(((((ax0_ax1_fused * 768) + cse_var_2) + cse_var_1) + ax3_inner) - 1920)] : (int8_t)-122);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_7(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_112_var, uint8_t* global_workspace_113_var) {
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 8; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 8; ++ax2) {
      for (int32_t ax3_outer = 0; ax3_outer < 6; ++ax3_outer) {
        for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
          int32_t cse_var_2 = (ax2 * 96);
          int32_t cse_var_1 = (ax3_outer * 16);
          T_pad[((((ax0_ax1_fused * 768) + cse_var_2) + cse_var_1) + ax3_inner)] = (((((2 <= ax0_ax1_fused) && (ax0_ax1_fused < 6)) && (2 <= ax2)) && (ax2 < 6)) ? p0[(((((ax0_ax1_fused * 384) + cse_var_2) + cse_var_1) + ax3_inner) - 960)] : (int8_t)-122);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_pad_8(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_130_var, uint8_t* global_workspace_131_var) {
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 8; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 8; ++ax2) {
      for (int32_t ax3_outer = 0; ax3_outer < 8; ++ax3_outer) {
        for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
          if (((ax3_outer * 2) + (ax3_inner >> 3)) < 15) {
            int32_t cse_var_2 = (ax2 * 120);
            int32_t cse_var_1 = (ax3_outer * 16);
            T_pad[((((ax0_ax1_fused * 960) + cse_var_2) + cse_var_1) + ax3_inner)] = (((((2 <= ax0_ax1_fused) && (ax0_ax1_fused < 6)) && (2 <= ax2)) && (ax2 < 6)) ? p0[(((((ax0_ax1_fused * 480) + cse_var_2) + cse_var_1) + ax3_inner) - 1200)] : (int8_t)-122);
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
TVM_DLL int32_t tvmgen_default_fused_nn_pad_9(int8_t* p0, int8_t* T_pad, uint8_t* global_const_workspace_148_var, uint8_t* global_workspace_149_var) {
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 7; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 7; ++ax2) {
      for (int32_t ax3_outer = 0; ax3_outer < 15; ++ax3_outer) {
        for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
          int32_t cse_var_2 = (ax2 * 240);
          int32_t cse_var_1 = (ax3_outer * 16);
          T_pad[((((ax0_ax1_fused * 1680) + cse_var_2) + cse_var_1) + ax3_inner)] = (((((1 <= ax0_ax1_fused) && (ax0_ax1_fused < 5)) && (1 <= ax2)) && (ax2 < 5)) ? p0[(((((ax0_ax1_fused * 960) + cse_var_2) + cse_var_1) + ax3_inner) - 1200)] : (int8_t)-122);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_softmax_divide_round_add_clip_cast_subtract_cast_multiply(float* p0, float* T_multiply, uint8_t* global_const_workspace_44_var, uint8_t* global_workspace_45_var) {
  void* T_softmax_maxelem_let = (&(global_workspace_45_var[33136]));
  void* T_softmax_exp_let = (&(global_workspace_45_var[33096]));
  void* T_softmax_expsum_let = (&(global_workspace_45_var[33136]));
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
TVM_DLL int32_t tvmgen_default_fused_nn_softmax_divide_round_add_clip_cast_subtract_cast_multiply_1(float* p0, float* T_multiply, uint8_t* global_const_workspace_208_var, uint8_t* global_workspace_209_var) {
  void* T_softmax_maxelem_let = (&(global_workspace_209_var[53968]));
  void* T_softmax_exp_let = (&(global_workspace_209_var[53928]));
  void* T_softmax_expsum_let = (&(global_workspace_209_var[53968]));
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
TVM_DLL int32_t tvmgen_default_fused_nn_softmax_divide_round_add_clip_cast_subtract_cast_multiply_2(float* p0, float* T_multiply, uint8_t* global_const_workspace_228_var, uint8_t* global_workspace_229_var) {
  void* T_softmax_maxelem_let = (&(global_workspace_229_var[54160]));
  void* T_softmax_exp_let = (&(global_workspace_229_var[54120]));
  void* T_softmax_expsum_let = (&(global_workspace_229_var[54160]));
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
TVM_DLL int32_t tvmgen_default_fused_nn_softmax_divide_round_add_clip_cast_subtract_cast_multiply_3(float* p0, float* T_multiply, uint8_t* global_const_workspace_248_var, uint8_t* global_workspace_249_var) {
  void* T_softmax_maxelem_let = (&(global_workspace_249_var[272]));
  void* T_softmax_exp_let = (&(global_workspace_249_var[232]));
  void* T_softmax_expsum_let = (&(global_workspace_249_var[272]));
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
TVM_DLL int32_t tvmgen_default_fused_subtract_fixed_point_multiply_add_clip_cast(int32_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_12_var, uint8_t* global_workspace_13_var) {
  void* fused_constant_2_let = (&(global_const_workspace_12_var[795744]));
  for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
    int32_t v_ = ((int32_t)(((((3 != 0) ? (((int64_t)(p0[ax3_inner] - ((int32_t*)fused_constant_2_let)[0])) << ((int64_t)3)) : ((int64_t)(p0[ax3_inner] - ((int32_t*)fused_constant_2_let)[0]))) * (int64_t)1669148971) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31)))) - 128;
    int32_t v__1 = (v_) < (127) ? (v_) : (127);
    T_cast[ax3_inner] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_fixed_point_multiply_add_clip_cast_1(int32_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_62_var, uint8_t* global_workspace_63_var) {
  void* fused_constant_18_let = (&(global_const_workspace_62_var[795760]));
  for (int32_t ax3_outer = 0; ax3_outer < 6; ++ax3_outer) {
    for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
      int32_t cse_var_1 = ((ax3_outer * 16) + ax3_inner);
      int32_t v_ = ((int32_t)(((((2 != 0) ? (((int64_t)(p0[cse_var_1] - ((int32_t*)fused_constant_18_let)[0])) << ((int64_t)2)) : ((int64_t)(p0[cse_var_1] - ((int32_t*)fused_constant_18_let)[0]))) * (int64_t)1075121010) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31)))) - 121;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_cast[cse_var_1] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_fixed_point_multiply_add_clip_cast_2(int32_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_80_var, uint8_t* global_workspace_81_var) {
  void* fused_constant_24_let = (&(global_const_workspace_80_var[795728]));
  for (int32_t ax3_outer = 0; ax3_outer < 12; ++ax3_outer) {
    for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
      int32_t cse_var_1 = ((ax3_outer * 16) + ax3_inner);
      int32_t v_ = ((int32_t)(((((3 != 0) ? (((int64_t)(p0[cse_var_1] - ((int32_t*)fused_constant_24_let)[0])) << ((int64_t)3)) : ((int64_t)(p0[cse_var_1] - ((int32_t*)fused_constant_24_let)[0]))) * (int64_t)1300295728) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31)))) - 114;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_cast[cse_var_1] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_fixed_point_multiply_add_clip_cast_3(int32_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_100_var, uint8_t* global_workspace_101_var) {
  void* fused_constant_30_let = (&(global_const_workspace_100_var[795712]));
  for (int32_t ax3_outer = 0; ax3_outer < 12; ++ax3_outer) {
    for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
      int32_t cse_var_1 = ((ax3_outer * 16) + ax3_inner);
      int32_t v_ = ((int32_t)(((((3 != 0) ? (((int64_t)(p0[cse_var_1] - ((int32_t*)fused_constant_30_let)[0])) << ((int64_t)3)) : ((int64_t)(p0[cse_var_1] - ((int32_t*)fused_constant_30_let)[0]))) * (int64_t)1109891016) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31)))) - 117;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_cast[cse_var_1] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_fixed_point_multiply_add_clip_cast_4(int32_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_118_var, uint8_t* global_workspace_119_var) {
  void* fused_constant_35_let = (&(global_const_workspace_118_var[795696]));
  for (int32_t ax3_outer = 0; ax3_outer < 6; ++ax3_outer) {
    for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
      int32_t cse_var_1 = ((ax3_outer * 16) + ax3_inner);
      int32_t v_ = ((int32_t)(((((2 != 0) ? (((int64_t)(p0[cse_var_1] - ((int32_t*)fused_constant_35_let)[0])) << ((int64_t)2)) : ((int64_t)(p0[cse_var_1] - ((int32_t*)fused_constant_35_let)[0]))) * (int64_t)1235411175) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31)))) - 120;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_cast[cse_var_1] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_fixed_point_multiply_add_clip_cast_5(int32_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_136_var, uint8_t* global_workspace_137_var) {
  void* fused_constant_41_let = (&(global_const_workspace_136_var[795680]));
  for (int32_t ax3_outer = 0; ax3_outer < 8; ++ax3_outer) {
    for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
      if (((ax3_outer * 2) + (ax3_inner >> 3)) < 15) {
        int32_t cse_var_1 = ((ax3_outer * 16) + ax3_inner);
        int32_t v_ = ((int32_t)(((((3 != 0) ? (((int64_t)(p0[cse_var_1] - ((int32_t*)fused_constant_41_let)[0])) << ((int64_t)3)) : ((int64_t)(p0[cse_var_1] - ((int32_t*)fused_constant_41_let)[0]))) * (int64_t)1801125321) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31)))) - 118;
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
TVM_DLL int32_t tvmgen_default_fused_subtract_fixed_point_multiply_add_clip_cast_6(int32_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_154_var, uint8_t* global_workspace_155_var) {
  void* fused_constant_46_let = (&(global_const_workspace_154_var[795664]));
  for (int32_t ax3_outer = 0; ax3_outer < 15; ++ax3_outer) {
    for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
      int32_t cse_var_1 = ((ax3_outer * 16) + ax3_inner);
      int32_t v_ = ((int32_t)(((((1 != 0) ? (((int64_t)(p0[cse_var_1] - ((int32_t*)fused_constant_46_let)[0])) << ((int64_t)1)) : ((int64_t)(p0[cse_var_1] - ((int32_t*)fused_constant_46_let)[0]))) * (int64_t)1688293339) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31)))) - 120;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_cast[cse_var_1] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_fixed_point_multiply_add_clip_cast_7(int32_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_172_var, uint8_t* global_workspace_173_var) {
  void* fused_constant_52_let = (&(global_const_workspace_172_var[795648]));
  for (int32_t ax3_outer = 0; ax3_outer < 27; ++ax3_outer) {
    for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
      int32_t cse_var_1 = ((ax3_outer * 16) + ax3_inner);
      int32_t v_ = ((int32_t)(((((1 != 0) ? (((int64_t)(p0[cse_var_1] - ((int32_t*)fused_constant_52_let)[0])) << ((int64_t)1)) : ((int64_t)(p0[cse_var_1] - ((int32_t*)fused_constant_52_let)[0]))) * (int64_t)2084386315) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31)))) - 121;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_cast[cse_var_1] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_fixed_point_multiply_add_clip_cast_8(int32_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_190_var, uint8_t* global_workspace_191_var) {
  void* fused_constant_57_let = (&(global_const_workspace_190_var[795632]));
  for (int32_t ax3_outer = 0; ax3_outer < 27; ++ax3_outer) {
    for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
      int32_t cse_var_1 = ((ax3_outer * 16) + ax3_inner);
      int32_t v_ = ((int32_t)(((((1 != 0) ? (((int64_t)(p0[cse_var_1] - ((int32_t*)fused_constant_57_let)[0])) << ((int64_t)1)) : ((int64_t)(p0[cse_var_1] - ((int32_t*)fused_constant_57_let)[0]))) * (int64_t)1888425996) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31)))) - 125;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_cast[cse_var_1] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_fixed_point_multiply_add_clip_cast_reshape(int32_t* p0, int8_t* T_reshape, uint8_t* global_const_workspace_36_var, uint8_t* global_workspace_37_var) {
  void* fused_constant_10_let = (&(global_const_workspace_36_var[795776]));
  for (int32_t ax1_outer = 0; ax1_outer < 2; ++ax1_outer) {
    for (int32_t ax1_inner = 0; ax1_inner < 16; ++ax1_inner) {
      int32_t cse_var_1 = ((ax1_outer * 16) + ax1_inner);
      int32_t v_ = ((int32_t)(((((2 != 0) ? (((int64_t)(p0[cse_var_1] - ((int32_t*)fused_constant_10_let)[0])) << ((int64_t)2)) : ((int64_t)(p0[cse_var_1] - ((int32_t*)fused_constant_10_let)[0]))) * (int64_t)2131980949) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31)))) - 128;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_reshape[cse_var_1] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_fixed_point_multiply_add_clip_cast_reshape_1(int32_t* p0, int8_t* T_reshape, uint8_t* global_const_workspace_204_var, uint8_t* global_workspace_205_var) {
  void* fused_constant_61_let = (&(global_const_workspace_204_var[795616]));
  for (int32_t ax1_outer = 0; ax1_outer < 27; ++ax1_outer) {
    for (int32_t ax1_inner = 0; ax1_inner < 16; ++ax1_inner) {
      int32_t cse_var_1 = ((ax1_outer * 16) + ax1_inner);
      int32_t v_ = ((int32_t)(((((2 != 0) ? (((int64_t)(p0[cse_var_1] - ((int32_t*)fused_constant_61_let)[0])) << ((int64_t)2)) : ((int64_t)(p0[cse_var_1] - ((int32_t*)fused_constant_61_let)[0]))) * (int64_t)1280805107) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31)))) - 125;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_reshape[cse_var_1] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_fixed_point_multiply_add_clip_cast_reshape_2(int32_t* p0, int8_t* T_reshape, uint8_t* global_const_workspace_220_var, uint8_t* global_workspace_221_var) {
  void* fused_constant_65_let = (&(global_const_workspace_220_var[795600]));
  for (int32_t ax1_inner = 0; ax1_inner < 16; ++ax1_inner) {
    int32_t v_ = ((int32_t)(((((2 != 0) ? (((int64_t)(p0[ax1_inner] - ((int32_t*)fused_constant_65_let)[0])) << ((int64_t)2)) : ((int64_t)(p0[ax1_inner] - ((int32_t*)fused_constant_65_let)[0]))) * (int64_t)1588440499) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31)))) - 128;
    int32_t v__1 = (v_) < (127) ? (v_) : (127);
    T_reshape[ax1_inner] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_fixed_point_multiply_add_clip_cast_reshape_3(int32_t* p0, int8_t* T_reshape, uint8_t* global_const_workspace_240_var, uint8_t* global_workspace_241_var) {
  void* fused_constant_71_let = (&(global_const_workspace_240_var[795584]));
  for (int32_t ax1_inner = 0; ax1_inner < 16; ++ax1_inner) {
    int32_t v_ = ((int32_t)(((((1 != 0) ? (((int64_t)(p0[ax1_inner] - ((int32_t*)fused_constant_71_let)[0])) << ((int64_t)1)) : ((int64_t)(p0[ax1_inner] - ((int32_t*)fused_constant_71_let)[0]))) * (int64_t)1299210647) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31)))) - 128;
    int32_t v__1 = (v_) < (127) ? (v_) : (127);
    T_reshape[ax1_inner] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_multiply_fixed_point_multiply_add_clip_cast(int32_t* p0, int32_t* p1, int8_t* T_cast, uint8_t* global_const_workspace_18_var, uint8_t* global_workspace_19_var) {
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 16; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 16; ++ax2) {
      for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
        int32_t cse_var_1 = (((ax0_ax1_fused * 256) + (ax2 * 16)) + ax3_inner);
        int32_t v_ = ((int32_t)(((((0 != 0) ? (((int64_t)((p0[cse_var_1] + 128) * p1[ax3_inner])) << ((int64_t)0)) : ((int64_t)((p0[cse_var_1] + 128) * p1[ax3_inner]))) * (int64_t)1077952621) + ((int64_t)1 << ((int64_t)((7 + 31) - 1)))) >> ((int64_t)(7 + 31)))) - 128;
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
TVM_DLL int32_t tvmgen_default_fused_subtract_multiply_fixed_point_multiply_add_clip_cast_1(int32_t* p0, int32_t* p1, int8_t* T_cast, uint8_t* global_const_workspace_68_var, uint8_t* global_workspace_69_var) {
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 4; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 4; ++ax2) {
      for (int32_t ax3_outer = 0; ax3_outer < 6; ++ax3_outer) {
        for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
          int32_t cse_var_2 = (ax3_outer * 16);
          int32_t cse_var_1 = ((((ax0_ax1_fused * 384) + (ax2 * 96)) + cse_var_2) + ax3_inner);
          int32_t v_ = ((int32_t)(((((0 != 0) ? (((int64_t)((p0[cse_var_1] + 125) * p1[(cse_var_2 + ax3_inner)])) << ((int64_t)0)) : ((int64_t)((p0[cse_var_1] + 125) * p1[(cse_var_2 + ax3_inner)]))) * (int64_t)1121647417) + ((int64_t)1 << ((int64_t)((6 + 31) - 1)))) >> ((int64_t)(6 + 31)))) - 121;
          int32_t v__1 = (v_) < (127) ? (v_) : (127);
          T_cast[cse_var_1] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_multiply_fixed_point_multiply_add_clip_cast_2(int32_t* p0, int32_t* p1, int8_t* T_cast, uint8_t* global_const_workspace_86_var, uint8_t* global_workspace_87_var) {
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 4; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 4; ++ax2) {
      for (int32_t ax3_outer = 0; ax3_outer < 12; ++ax3_outer) {
        for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
          int32_t cse_var_2 = (ax3_outer * 16);
          int32_t cse_var_1 = ((((ax0_ax1_fused * 768) + (ax2 * 192)) + cse_var_2) + ax3_inner);
          int32_t v_ = ((int32_t)(((((0 != 0) ? (((int64_t)((p0[cse_var_1] + 125) * p1[(cse_var_2 + ax3_inner)])) << ((int64_t)0)) : ((int64_t)((p0[cse_var_1] + 125) * p1[(cse_var_2 + ax3_inner)]))) * (int64_t)1528818567) + ((int64_t)1 << ((int64_t)((5 + 31) - 1)))) >> ((int64_t)(5 + 31)))) - 112;
          int32_t v__1 = (v_) < (127) ? (v_) : (127);
          T_cast[cse_var_1] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_multiply_fixed_point_multiply_add_clip_cast_3(int32_t* p0, int32_t* p1, int8_t* T_cast, uint8_t* global_const_workspace_106_var, uint8_t* global_workspace_107_var) {
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 4; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 4; ++ax2) {
      for (int32_t ax3_outer = 0; ax3_outer < 12; ++ax3_outer) {
        for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
          int32_t cse_var_2 = (ax3_outer * 16);
          int32_t cse_var_1 = ((((ax0_ax1_fused * 768) + (ax2 * 192)) + cse_var_2) + ax3_inner);
          int32_t v_ = ((int32_t)(((((0 != 0) ? (((int64_t)((p0[cse_var_1] + 125) * p1[(cse_var_2 + ax3_inner)])) << ((int64_t)0)) : ((int64_t)((p0[cse_var_1] + 125) * p1[(cse_var_2 + ax3_inner)]))) * (int64_t)2037754974) + ((int64_t)1 << ((int64_t)((5 + 31) - 1)))) >> ((int64_t)(5 + 31)))) - 107;
          int32_t v__1 = (v_) < (127) ? (v_) : (127);
          T_cast[cse_var_1] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_multiply_fixed_point_multiply_add_clip_cast_4(int32_t* p0, int32_t* p1, int8_t* T_cast, uint8_t* global_const_workspace_124_var, uint8_t* global_workspace_125_var) {
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 4; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 4; ++ax2) {
      for (int32_t ax3_outer = 0; ax3_outer < 6; ++ax3_outer) {
        for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
          int32_t cse_var_2 = (ax3_outer * 16);
          int32_t cse_var_1 = ((((ax0_ax1_fused * 384) + (ax2 * 96)) + cse_var_2) + ax3_inner);
          int32_t v_ = ((int32_t)(((((0 != 0) ? (((int64_t)((p0[cse_var_1] + 124) * p1[(cse_var_2 + ax3_inner)])) << ((int64_t)0)) : ((int64_t)((p0[cse_var_1] + 124) * p1[(cse_var_2 + ax3_inner)]))) * (int64_t)1195609191) + ((int64_t)1 << ((int64_t)((6 + 31) - 1)))) >> ((int64_t)(6 + 31)))) - 120;
          int32_t v__1 = (v_) < (127) ? (v_) : (127);
          T_cast[cse_var_1] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_multiply_fixed_point_multiply_add_clip_cast_5(int32_t* p0, int32_t* p1, int8_t* T_cast, uint8_t* global_const_workspace_142_var, uint8_t* global_workspace_143_var) {
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 4; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 4; ++ax2) {
      for (int32_t ax3_outer = 0; ax3_outer < 8; ++ax3_outer) {
        for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
          if (((ax3_outer * 2) + (ax3_inner >> 3)) < 15) {
            int32_t cse_var_2 = (ax3_outer * 16);
            int32_t cse_var_1 = ((((ax0_ax1_fused * 480) + (ax2 * 120)) + cse_var_2) + ax3_inner);
            int32_t v_ = ((int32_t)(((((0 != 0) ? (((int64_t)((p0[cse_var_1] + 126) * p1[(cse_var_2 + ax3_inner)])) << ((int64_t)0)) : ((int64_t)((p0[cse_var_1] + 126) * p1[(cse_var_2 + ax3_inner)]))) * (int64_t)1201673225) + ((int64_t)1 << ((int64_t)((4 + 31) - 1)))) >> ((int64_t)(4 + 31)))) - 114;
            int32_t v__1 = (v_) < (127) ? (v_) : (127);
            T_cast[cse_var_1] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
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
TVM_DLL int32_t tvmgen_default_fused_subtract_multiply_fixed_point_multiply_add_clip_cast_6(int32_t* p0, int32_t* p1, int8_t* T_cast, uint8_t* global_const_workspace_160_var, uint8_t* global_workspace_161_var) {
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 2; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 2; ++ax2) {
      for (int32_t ax3_outer = 0; ax3_outer < 15; ++ax3_outer) {
        for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
          int32_t cse_var_2 = (ax3_outer * 16);
          int32_t cse_var_1 = ((((ax0_ax1_fused * 480) + (ax2 * 240)) + cse_var_2) + ax3_inner);
          int32_t v_ = ((int32_t)(((((0 != 0) ? (((int64_t)((p0[cse_var_1] + 123) * p1[(cse_var_2 + ax3_inner)])) << ((int64_t)0)) : ((int64_t)((p0[cse_var_1] + 123) * p1[(cse_var_2 + ax3_inner)]))) * (int64_t)2059315547) + ((int64_t)1 << ((int64_t)((7 + 31) - 1)))) >> ((int64_t)(7 + 31)))) - 118;
          int32_t v__1 = (v_) < (127) ? (v_) : (127);
          T_cast[cse_var_1] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_multiply_fixed_point_multiply_add_clip_cast_7(int32_t* p0, int32_t* p1, int8_t* T_cast, uint8_t* global_const_workspace_178_var, uint8_t* global_workspace_179_var) {
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 2; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 2; ++ax2) {
      for (int32_t ax3_outer = 0; ax3_outer < 27; ++ax3_outer) {
        for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
          int32_t cse_var_2 = (ax3_outer * 16);
          int32_t cse_var_1 = ((((ax0_ax1_fused * 864) + (ax2 * 432)) + cse_var_2) + ax3_inner);
          int32_t v_ = ((int32_t)(((((0 != 0) ? (((int64_t)((p0[cse_var_1] + 125) * p1[(cse_var_2 + ax3_inner)])) << ((int64_t)0)) : ((int64_t)((p0[cse_var_1] + 125) * p1[(cse_var_2 + ax3_inner)]))) * (int64_t)1523045038) + ((int64_t)1 << ((int64_t)((7 + 31) - 1)))) >> ((int64_t)(7 + 31)))) - 123;
          int32_t v__1 = (v_) < (127) ? (v_) : (127);
          T_cast[cse_var_1] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_multiply_fixed_point_multiply_add_clip_cast_8(int32_t* p0, int32_t* p1, int8_t* T_cast, uint8_t* global_const_workspace_196_var, uint8_t* global_workspace_197_var) {
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 2; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 2; ++ax2) {
      for (int32_t ax3_outer = 0; ax3_outer < 27; ++ax3_outer) {
        for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
          int32_t cse_var_2 = (ax3_outer * 16);
          int32_t cse_var_1 = ((((ax0_ax1_fused * 864) + (ax2 * 432)) + cse_var_2) + ax3_inner);
          int32_t v_ = ((int32_t)(((((0 != 0) ? (((int64_t)((p0[cse_var_1] + 126) * p1[(cse_var_2 + ax3_inner)])) << ((int64_t)0)) : ((int64_t)((p0[cse_var_1] + 126) * p1[(cse_var_2 + ax3_inner)]))) * (int64_t)1125964115) + ((int64_t)1 << ((int64_t)((7 + 31) - 1)))) >> ((int64_t)(7 + 31)))) - 126;
          int32_t v__1 = (v_) < (127) ? (v_) : (127);
          T_cast[cse_var_1] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default___tvm_main__(float* serving_default_input_243_0_buffer_var, float* StatefulPartitionedCall_1_buffer_var, float* StatefulPartitionedCall_0_buffer_var, float* StatefulPartitionedCall_2_buffer_var, float* StatefulPartitionedCall_3_buffer_var, uint8_t* global_const_workspace_0_var, uint8_t* global_workspace_1_var) {
  void* sid_57_let = (&(global_workspace_1_var[0]));
  void* sid_54_let = (&(global_workspace_1_var[53760]));
  void* sid_53_let = (&(global_workspace_1_var[12288]));
  void* sid_52_let = (&(global_workspace_1_var[15360]));
  void* sid_51_let = (&(global_workspace_1_var[53952]));
  void* sid_49_let = (&(global_workspace_1_var[12288]));
  void* sid_45_let = (&(global_workspace_1_var[53248]));
  void* sid_61_let = (&(global_workspace_1_var[52736]));
  void* sid_60_let = (&(global_workspace_1_var[52832]));
  void* sid_37_let = (&(global_workspace_1_var[36864]));
  void* sid_38_let = (&(global_workspace_1_var[0]));
  void* sid_46_let = (&(global_workspace_1_var[49152]));
  void* sid_40_let = (&(global_workspace_1_var[53440]));
  void* sid_30_let = (&(global_workspace_1_var[6144]));
  void* sid_29_let = (&(global_workspace_1_var[0]));
  void* sid_56_let = (&(global_workspace_1_var[18432]));
  void* sid_31_let = (&(global_workspace_1_var[6528]));
  void* sid_58_let = (&(global_workspace_1_var[52736]));
  void* sid_96_let = (&(global_workspace_1_var[54176]));
  void* sid_39_let = (&(global_workspace_1_var[12288]));
  void* sid_14_let = (&(global_workspace_1_var[31328]));
  void* sid_55_let = (&(global_workspace_1_var[24576]));
  void* sid_65_let = (&(global_workspace_1_var[23040]));
  void* sid_32_let = (&(global_workspace_1_var[6240]));
  void* sid_34_let = (&(global_workspace_1_var[6144]));
  void* sid_12_let = (&(global_workspace_1_var[0]));
  void* sid_9_let = (&(global_workspace_1_var[16384]));
  void* sid_8_let = (&(global_workspace_1_var[20480]));
  void* sid_24_let = (&(global_workspace_1_var[0]));
  void* sid_20_let = (&(global_workspace_1_var[32992]));
  void* sid_11_let = (&(global_workspace_1_var[20808]));
  void* sid_23_let = (&(global_workspace_1_var[8800]));
  void* sid_76_let = (&(global_workspace_1_var[3840]));
  void* sid_47_let = (&(global_workspace_1_var[36864]));
  void* sid_7_let = (&(global_workspace_1_var[16400]));
  void* sid_28_let = (&(global_workspace_1_var[11616]));
  void* sid_21_let = (&(global_workspace_1_var[33056]));
  void* sid_5_let = (&(global_workspace_1_var[16384]));
  void* sid_50_let = (&(global_workspace_1_var[53952]));
  void* sid_44_let = (&(global_workspace_1_var[52224]));
  void* sid_33_let = (&(global_workspace_1_var[7680]));
  void* sid_79_let = (&(global_workspace_1_var[3840]));
  void* sid_2_let = (&(global_workspace_1_var[17424]));
  void* sid_59_let = (&(global_workspace_1_var[53120]));
  void* sid_1_let = (&(global_workspace_1_var[46488]));
  void* sid_41_let = (&(global_workspace_1_var[53440]));
  void* sid_10_let = (&(global_workspace_1_var[0]));
  void* sid_35_let = (&(global_workspace_1_var[52736]));
  void* sid_13_let = (&(global_workspace_1_var[60048]));
  void* sid_48_let = (&(global_workspace_1_var[0]));
  void* sid_42_let = (&(global_workspace_1_var[15360]));
  void* sid_3_let = (&(global_workspace_1_var[0]));
  void* sid_4_let = (&(global_workspace_1_var[0]));
  void* sid_6_let = (&(global_workspace_1_var[16448]));
  void* sid_36_let = (&(global_workspace_1_var[49152]));
  void* sid_62_let = (&(global_workspace_1_var[6144]));
  void* sid_16_let = (&(global_workspace_1_var[0]));
  void* sid_17_let = (&(global_workspace_1_var[32864]));
  void* sid_110_let = (&(global_workspace_1_var[54176]));
  void* sid_18_let = (&(global_workspace_1_var[33120]));
  void* sid_94_let = (&(global_workspace_1_var[6912]));
  void* sid_15_let = (&(global_workspace_1_var[10592]));
  void* sid_111_let = (&(global_workspace_1_var[53888]));
  void* sid_43_let = (&(global_workspace_1_var[12288]));
  void* sid_19_let = (&(global_workspace_1_var[32864]));
  void* sid_25_let = (&(global_workspace_1_var[22528]));
  void* sid_27_let = (&(global_workspace_1_var[23232]));
  void* sid_82_let = (&(global_workspace_1_var[31104]));
  void* sid_26_let = (&(global_workspace_1_var[32864]));
  void* sid_63_let = (&(global_workspace_1_var[32640]));
  void* sid_64_let = (&(global_workspace_1_var[30720]));
  void* sid_66_let = (&(global_workspace_1_var[0]));
  void* sid_97_let = (&(global_workspace_1_var[6912]));
  void* sid_67_let = (&(global_workspace_1_var[52736]));
  void* sid_68_let = (&(global_workspace_1_var[53216]));
  void* sid_99_let = (&(global_workspace_1_var[54176]));
  void* sid_69_let = (&(global_workspace_1_var[52856]));
  void* sid_101_let = (&(global_workspace_1_var[0]));
  void* sid_70_let = (&(global_workspace_1_var[52736]));
  void* sid_71_let = (&(global_workspace_1_var[7680]));
  void* sid_72_let = (&(global_workspace_1_var[33280]));
  void* sid_112_let = (&(global_workspace_1_var[54016]));
  void* sid_73_let = (&(global_workspace_1_var[23520]));
  void* sid_87_let = (&(global_workspace_1_var[53888]));
  void* sid_74_let = (&(global_workspace_1_var[11760]));
  void* sid_75_let = (&(global_workspace_1_var[0]));
  void* sid_92_let = (&(global_workspace_1_var[15552]));
  void* sid_77_let = (&(global_workspace_1_var[52736]));
  void* sid_106_let = (&(global_workspace_1_var[2304]));
  void* sid_78_let = (&(global_workspace_1_var[52992]));
  void* sid_86_let = (&(global_workspace_1_var[53168]));
  void* sid_98_let = (&(global_workspace_1_var[8640]));
  void* sid_80_let = (&(global_workspace_1_var[4800]));
  void* sid_81_let = (&(global_workspace_1_var[53600]));
  void* sid_83_let = (&(global_workspace_1_var[15552]));
  void* sid_85_let = (&(global_workspace_1_var[6912]));
  void* sid_84_let = (&(global_workspace_1_var[0]));
  void* sid_88_let = (&(global_workspace_1_var[6912]));
  void* sid_89_let = (&(global_workspace_1_var[8640]));
  void* sid_90_let = (&(global_workspace_1_var[53888]));
  void* sid_91_let = (&(global_workspace_1_var[31104]));
  void* sid_93_let = (&(global_workspace_1_var[0]));
  void* sid_95_let = (&(global_workspace_1_var[53168]));
  void* sid_100_let = (&(global_workspace_1_var[0]));
  void* sid_102_let = (&(global_workspace_1_var[52736]));
  void* sid_103_let = (&(global_workspace_1_var[53888]));
  void* sid_105_let = (&(global_workspace_1_var[1152]));
  void* sid_107_let = (&(global_workspace_1_var[1152]));
  void* sid_116_let = (&(global_workspace_1_var[1152]));
  void* sid_108_let = (&(global_workspace_1_var[1152]));
  void* sid_109_let = (&(global_workspace_1_var[53888]));
  void* sid_113_let = (&(global_workspace_1_var[54080]));
  void* sid_115_let = (&(global_workspace_1_var[1152]));
  void* sid_117_let = (&(global_workspace_1_var[512]));
  void* sid_118_let = (&(global_workspace_1_var[512]));
  void* sid_119_let = (&(global_workspace_1_var[0]));
  void* sid_120_let = (&(global_workspace_1_var[288]));
  void* sid_121_let = (&(global_workspace_1_var[0]));
  void* sid_122_let = (&(global_workspace_1_var[128]));
  void* sid_123_let = (&(global_workspace_1_var[192]));
  if (tvmgen_default_fused_divide_round_add_clip_cast_nn_pad(serving_default_input_243_0_buffer_var, sid_1_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_subtract_cas_c93f40e30d1c190e_(sid_1_let, sid_2_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_pad(sid_2_let, sid_3_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip(sid_3_let, sid_4_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_mean(sid_4_let, sid_5_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_subtract_fixed_point_multiply_add_clip_cast(sid_5_let, sid_6_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast(sid_6_let, sid_7_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_subtract_mul_add8c47b972ae6c2_(sid_7_let, sid_8_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_subtract_multiply_fixed_point_multiply_add_clip_cast(sid_4_let, sid_8_let, sid_9_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_1(sid_9_let, sid_10_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_2(sid_10_let, sid_11_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_pad_1(sid_11_let, sid_12_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_3(sid_12_let, sid_13_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_4(sid_13_let, sid_14_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;

  while(*HANDSHAKE != 0xC0);
  clock_ungate_signal();
  while(*HANDSHAKE != 0xCF);

  // if (tvmgen_default_fused_nn_pad_2(sid_14_let, sid_15_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_1(sid_15_let, sid_16_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_mean_1(sid_16_let, sid_17_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_subtract_fixed_point_multiply_add_clip_cast_reshape(sid_17_let, sid_18_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast(sid_18_let, sid_19_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast_1(sid_19_let, sid_20_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_subtract__fa059688879ad8de_(sid_20_let, sid_21_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_softmax_divide_round_add_clip_cast_subtract_cast_multiply(sid_21_let, StatefulPartitionedCall_1_buffer_var, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_5(sid_14_let, sid_23_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_pad_3(sid_23_let, sid_24_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_6(sid_24_let, sid_25_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point__7462b0c1d1f4a4f5_(sid_14_let, sid_25_let, sid_26_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_subtract_cas_c93f40e30d1c190e__1(sid_26_let, sid_27_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_pad_4(sid_27_let, sid_28_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_subtract_cas_c93f40e30d1c190e__2(sid_28_let, sid_29_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_mean_2(sid_29_let, sid_30_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_subtract_fixed_point_multiply_add_clip_cast_1(sid_30_let, sid_31_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_7(sid_31_let, sid_32_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_subtract_mul_add8c47b972ae6c2__1(sid_32_let, sid_33_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_subtract_multiply_fixed_point_multiply_add_clip_cast_1(sid_29_let, sid_33_let, sid_34_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_8(sid_34_let, sid_35_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_subtract_cas_c93f40e30d1c190e__3(sid_35_let, sid_36_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_pad_5(sid_36_let, sid_37_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_subtract_cas_c93f40e30d1c190e__4(sid_37_let, sid_38_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_mean_3(sid_38_let, sid_39_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_subtract_fixed_point_multiply_add_clip_cast_2(sid_39_let, sid_40_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_9(sid_40_let, sid_41_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_subtract_mul_add8c47b972ae6c2__2(sid_41_let, sid_42_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_subtract_multiply_fixed_point_multiply_add_clip_cast_2(sid_38_let, sid_42_let, sid_43_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_10(sid_43_let, sid_44_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;

  while(*HANDSHAKE != 0xC0);
  clock_ungate_signal();
  while(*HANDSHAKE != 0xCF);

  if (tvmgen_default_fused_cast_subtract_fixed_point_multiply_cast_subtract_fixed_point_multiply_add__5d3ea50422bc822a_(sid_35_let, sid_44_let, sid_45_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_subtract_cast_multipl_a0b6f984222e477_(sid_45_let, sid_46_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_pad_6(sid_46_let, sid_47_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_clip_cast_multiply_ad_b57e37aeb09540e8_(sid_47_let, sid_48_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_mean_4(sid_48_let, sid_49_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_subtract_fixed_point_multiply_add_clip_cast_3(sid_49_let, sid_50_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_11(sid_50_let, sid_51_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_subtract_mul_add8c47b972ae6c2__3(sid_51_let, sid_52_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_subtract_multiply_fixed_point_multiply_add_clip_cast_3(sid_48_let, sid_52_let, sid_53_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_cast_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point_multiply__ad3cbdcd07b87e28_(sid_45_let, sid_53_let, sid_54_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_subtract_cas_c93f40e30d1c190e__5(sid_54_let, sid_55_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_pad_7(sid_55_let, sid_56_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_subtract_cas_c93f40e30d1c190e__6(sid_56_let, sid_57_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_mean_5(sid_57_let, sid_58_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_subtract_fixed_point_multiply_add_clip_cast_4(sid_58_let, sid_59_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_clip_cast_clip(sid_59_let, sid_60_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_subtract_multiply_fix_52d6a4719dd81c1d_(sid_60_let, sid_61_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_subtract_multiply_fixed_point_multiply_add_clip_cast_4(sid_57_let, sid_61_let, sid_62_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_12(sid_62_let, sid_63_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_subtract_cas_c93f40e30d1c190e__7(sid_63_let, sid_64_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_pad_8(sid_64_let, sid_65_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_subtract_cas_c93f40e30d1c190e__8(sid_65_let, sid_66_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_mean_6(sid_66_let, sid_67_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_subtract_fixed_point_multiply_add_clip_cast_5(sid_67_let, sid_68_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_13(sid_68_let, sid_69_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_subtract_mul_add8c47b972ae6c2__4(sid_69_let, sid_70_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_subtract_multiply_fixed_point_multiply_add_clip_cast_5(sid_66_let, sid_70_let, sid_71_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point__7462b0c1d1f4a4f5__1(sid_63_let, sid_71_let, sid_72_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_subtract_cas_c93f40e30d1c190e__9(sid_72_let, sid_73_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_pad_9(sid_73_let, sid_74_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_subtract_cas_c93f40e30d1c190e__10(sid_74_let, sid_75_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_mean_7(sid_75_let, sid_76_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_subtract_fixed_point_multiply_add_clip_cast_6(sid_76_let, sid_77_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_14(sid_77_let, sid_78_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_subtract_mul_add8c47b972ae6c2__5(sid_78_let, sid_79_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_subtract_multiply_fixed_point_multiply_add_clip_cast_6(sid_75_let, sid_79_let, sid_80_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_15(sid_80_let, sid_81_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;

  while(*HANDSHAKE != 0xC0);
  clock_ungate_signal();
  while(*HANDSHAKE != 0xCF);

  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_subtract_cas_c93f40e30d1c190e__11(sid_81_let, sid_82_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_pad_10(sid_82_let, sid_83_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_subtract_cas_c93f40e30d1c190e__12(sid_83_let, sid_84_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_mean_8(sid_84_let, sid_85_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_subtract_fixed_point_multiply_add_clip_cast_7(sid_85_let, sid_86_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_16(sid_86_let, sid_87_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_subtract_mul_add8c47b972ae6c2__6(sid_87_let, sid_88_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_subtract_multiply_fixed_point_multiply_add_clip_cast_7(sid_84_let, sid_88_let, sid_89_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point__7462b0c1d1f4a4f5__2(sid_81_let, sid_89_let, sid_90_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_subtract_cas_c93f40e30d1c190e__13(sid_90_let, sid_91_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_pad_11(sid_91_let, sid_92_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_subtract_cas_c93f40e30d1c190e__14(sid_92_let, sid_93_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_mean_9(sid_93_let, sid_94_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_subtract_fixed_point_multiply_add_clip_cast_8(sid_94_let, sid_95_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_17(sid_95_let, sid_96_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_subtract_mul_add8c47b972ae6c2__7(sid_96_let, sid_97_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_subtract_multiply_fixed_point_multiply_add_clip_cast_8(sid_93_let, sid_97_let, sid_98_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_subtract_add_fixed_point__7462b0c1d1f4a4f5__3(sid_90_let, sid_98_let, sid_99_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_subtract_cas_c93f40e30d1c190e__15(sid_99_let, sid_100_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_mean_10(sid_100_let, sid_101_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_subtract_fixed_point_multiply_add_clip_cast_reshape_1(sid_101_let, sid_102_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_subtract__fa059688879ad8de__1(sid_102_let, sid_103_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_softmax_divide_round_add_clip_cast_subtract_cast_multiply_1(sid_103_let, StatefulPartitionedCall_0_buffer_var, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_pad_12(sid_44_let, sid_105_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_18(sid_105_let, sid_106_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_pad_13(sid_106_let, sid_107_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_2(sid_107_let, sid_108_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_mean_11(sid_108_let, sid_109_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_subtract_fixed_point_multiply_add_clip_cast_reshape_2(sid_109_let, sid_110_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast_2(sid_110_let, sid_111_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast_3(sid_111_let, sid_112_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_subtract__fa059688879ad8de__2(sid_112_let, sid_113_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_softmax_divide_round_add_clip_cast_subtract_cast_multiply_2(sid_113_let, StatefulPartitionedCall_2_buffer_var, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_pad_14(sid_81_let, sid_115_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_cast_19(sid_115_let, sid_116_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_pad_15(sid_116_let, sid_117_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_conv2d_subtract_add_fixed_point_multiply_per_axis_add_clip_3(sid_117_let, sid_118_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_mean_12(sid_118_let, sid_119_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_subtract_fixed_point_multiply_add_clip_cast_reshape_3(sid_119_let, sid_120_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast_4(sid_120_let, sid_121_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_cast_5(sid_121_let, sid_122_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_contrib_dense_pack_subtract_add_fixed_point_multiply_add_clip_subtract__fa059688879ad8de__3(sid_122_let, sid_123_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  // if (tvmgen_default_fused_nn_softmax_divide_round_add_clip_cast_subtract_cast_multiply_3(sid_123_let, StatefulPartitionedCall_3_buffer_var, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  return 0;
}

