// conv_accel.h
// Software driver for AHBconv

#ifndef CONV_ACCEL_H
#define CONV_ACCEL_H

#include <stdint.h>

// ============================================================
//  Register map
// ============================================================
#define ACCEL_BASE        0x40004000

#define ACCEL_INPUT_OFF   (*(volatile uint32_t*)(ACCEL_BASE + 0x00))
#define ACCEL_WEIGHT_OFF  (*(volatile uint32_t*)(ACCEL_BASE + 0x04))
#define ACCEL_OUTPUT_OFF  (*(volatile uint32_t*)(ACCEL_BASE + 0x08))
#define ACCEL_LENGTH      (*(volatile uint32_t*)(ACCEL_BASE + 0x0C))
#define ACCEL_CTRL        (*(volatile uint32_t*)(ACCEL_BASE + 0x10))
#define ACCEL_STATUS      (*(volatile uint32_t*)(ACCEL_BASE + 0x14))
#define ACCEL_NUM_PROD    (*(volatile uint32_t*)(ACCEL_BASE + 0x18))
#define ACCEL_PARAM_OFF   (*(volatile uint32_t*)(ACCEL_BASE + 0x1C))
#define ACCEL_OUTPUT_ZP   (*(volatile int32_t*) (ACCEL_BASE + 0x20))

#define ACCEL_CTRL_START       0x1u
#define ACCEL_CTRL_REQUANT_EN  0x2u

// Scratchpad
#define ACCEL_SPAD_BASE   0x40004800
#define ACCEL_SPAD_SIZE   12288

// ============================================================
//  Helpers
// ============================================================

// Write words to scratchpad
// dst_offset: byte offset (must be word-aligned)
// src: source in main memory (must be word-aligned)
// len: bytes to copy (must be multiple of 4)

static inline void accel_spad_write(uint32_t dst_offset,
                                     const void* src,
                                     uint32_t len)
{
    volatile uint32_t* dst = (volatile uint32_t*)(ACCEL_SPAD_BASE + dst_offset);
    const uint8_t* s = (const uint8_t*)src;
    for (uint32_t i = 0; i < len / 4; i++) {
        uint32_t w = (uint32_t)s[0]
                   | ((uint32_t)s[1] << 8)
                   | ((uint32_t)s[2] << 16)
                   | ((uint32_t)s[3] << 24);
        dst[i] = w;
        s += 4;
    }
}

// Read a word from scratchpad
static inline uint32_t accel_spad_read32(uint32_t offset)
{
    return *(volatile uint32_t*)(ACCEL_SPAD_BASE + offset);
}

// ============================================================
//  Single dot product
// ============================================================
static inline int32_t hw_dot_product(const int8_t* input,
                                      const int8_t* weight,
                                      uint32_t length)
{
    accel_spad_write(0x000, input,  length);
    accel_spad_write(0x400, weight, length);

    ACCEL_INPUT_OFF  = 0x000;
    ACCEL_WEIGHT_OFF = 0x400;
    ACCEL_OUTPUT_OFF = 0x7FC;
    ACCEL_LENGTH     = length;
    ACCEL_NUM_PROD   = 1;
    ACCEL_CTRL       = 1;
    
    // Dummy reads    
    volatile uint32_t x = ACCEL_CTRL;
    volatile uint32_t y = ACCEL_CTRL;
    volatile uint32_t z = ACCEL_CTRL;
    
    while (!(ACCEL_STATUS & 1));

    return (int32_t)accel_spad_read32(0x7FC);
}

// ============================================================
//  Multi-product kick
//
//    input_off:  input vector (length bytes)
//    weight_off: N consecutive weight vectors (N * length bytes)
//    output_off: space for N int32 results (N * 4 bytes)
// ============================================================
static inline void hw_multi_dot(uint32_t input_off,
                                 uint32_t weight_off,
                                 uint32_t output_off,
                                 uint32_t length,
                                 uint32_t num_products)
{
    ACCEL_INPUT_OFF  = input_off;
    ACCEL_WEIGHT_OFF = weight_off;
    ACCEL_OUTPUT_OFF = output_off;
    ACCEL_LENGTH     = length;
    ACCEL_NUM_PROD   = num_products;
    ACCEL_CTRL       = 1;
 
    volatile uint32_t x = ACCEL_CTRL;
    volatile uint32_t y = ACCEL_CTRL;
    volatile uint32_t z = ACCEL_CTRL;   

    while (!(ACCEL_STATUS & 1));
}

// ============================================================
//  AHBconv HW-requant helpers
// ============================================================

static inline void accel_set_output_zp(int32_t output_zp)
{
    ACCEL_OUTPUT_ZP = output_zp;
}

static inline void hw_multi_dot_requant(uint32_t input_off,
                                        uint32_t weight_off,
                                        uint32_t output_off,
                                        uint32_t param_off,
                                        uint32_t length,
                                        uint32_t num_products)
{
    ACCEL_INPUT_OFF  = input_off;
    ACCEL_WEIGHT_OFF = weight_off;
    ACCEL_OUTPUT_OFF = output_off;
    ACCEL_PARAM_OFF  = param_off;
    ACCEL_LENGTH     = length;
    ACCEL_NUM_PROD   = num_products;
    ACCEL_CTRL       = (ACCEL_CTRL_START | ACCEL_CTRL_REQUANT_EN);

    volatile uint32_t x = ACCEL_CTRL;
    volatile uint32_t y = ACCEL_CTRL;
    volatile uint32_t z = ACCEL_CTRL;

    while (!(ACCEL_STATUS & 1)) { }
}

static inline void accel_unpack_i8_outputs(int8_t* dst,
                                           uint32_t output_off,
                                           uint32_t count)
{
    uint32_t n_words = (count + 3u) >> 2;
    for (uint32_t w = 0; w < n_words; w++) {
        uint32_t pack = accel_spad_read32(output_off + (w * 4u));
        uint32_t base = w * 4u;
        if (base + 0u < count) dst[base + 0u] = (int8_t)((pack >>  0) & 0xFFu);
        if (base + 1u < count) dst[base + 1u] = (int8_t)((pack >>  8) & 0xFFu);
        if (base + 2u < count) dst[base + 2u] = (int8_t)((pack >> 16) & 0xFFu);
        if (base + 3u < count) dst[base + 3u] = (int8_t)((pack >> 24) & 0xFFu);
    }
}

#endif // CONV_ACCEL_H
