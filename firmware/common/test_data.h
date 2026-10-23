#ifdef __cplusplus
extern "C" {
#endif

#ifndef MOBILENET_DATA_H
#define MOBILENET_DATA_H
#define INPUT_SIZE 49152    //12288x4 for float32 // number of bytes in an input image
#define INPUT_ELEMENTS  12288   //64x64x3 image

extern float test_image[INPUT_ELEMENTS];

#endif

#ifdef __cplusplus
}
#endif
