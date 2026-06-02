#define USE_UART
#define USE_TIMER
#define NO_HOSTEDIO

#ifdef NO_HOSTEDIO
#define PRINTF(...)
#else
#define PRINTF(...) { printf(__VA_ARGS__); }
#endif

#include <stdio.h>
#include <string.h>
#include "tvmgen_default.h"
#include "typedef.h"
#include "test_data.c"
#include "libuart.c"
#include "libtimer.c"
#include "config.h"
#ifndef USE_UART
#include "../../../../samples/airplane.c"
#include "../../../../samples/automobile.c"
#include "../../../../samples/bird.c"
#include "../../../../samples/cat.c"
#include "../../../../samples/deer.c"
#include "../../../../samples/dog.c"
#include "../../../../samples/frog.c"
#include "../../../../samples/horse.c"
#include "../../../../samples/ship.c"
#include "../../../../samples/truck.c"
#endif

// ============================================================================
// FORWARD DECLARATIONS
// ============================================================================

void abort_signal(void);
void clock_ungate_signal(void);

#ifdef USE_UART
static void     uart_tx_dec64(uint64 val);
static void     print_timing(uint64 cycles, uint32 clock_mhz);
static void     rx_model(void);
static uint8_t  rx_threshold(void);
static void     uart_tx_float(float val);
static void     print_banner(void);
static void     print_thresholds(void);
#endif

static void eval_with_timing(float scores[10], uint64 cycles);

#define NUM_CLASSES 10
#define NUM_EXITS   2

static const char* class_names[NUM_CLASSES] = {
    "AIRPLANE", "AUTOMOBILE", "BIRD", "CAT", "DEER",
    "DOG", "FROG", "HORSE", "SHIP", "TRUCK"
};

#if NUM_EXITS == 1
static const char* exit_names[NUM_EXITS] = { "EE1" };
static uint8_t ee_thresholds[NUM_EXITS] = { 95 };
#elif NUM_EXITS == 2
static const char* exit_names[NUM_EXITS] = { "EE1", "EE2" };
static uint8_t ee_thresholds[NUM_EXITS] = { 95, 90 };
#else
static const char* exit_names[NUM_EXITS] = { "EE1", "EE2", "EE3" };

/* Per-exit thresholds:
   Written to THRESHOLD_ADDR[0..2] for the EE core to read. */
static uint8_t ee_thresholds[NUM_EXITS] = { 95, 90, 80 };
#endif

static float output_BB[10];

void abort_signal(void)
{
    asm volatile("lui x19, 0xDEAD");
    asm volatile("li  x20, 0xA5");
    asm volatile("or  x19, x19, x20");
}

void clock_ungate_signal(void)
{
    asm volatile("lui x19, 0xCCCC");
    asm volatile("li  x20, 0xBE");
    asm volatile("or  x19, x19, x20");
    asm volatile("nop");
    asm volatile("nop");
    asm volatile("li  x19, 0x0");
    asm volatile("nop");
    asm volatile("nop");
    asm volatile("nop");
    asm volatile("nop");
}

static void write_thresholds(void)
{
    /* Write per-exit thresholds to consecutive memory-mapped addresses.
       The EE core reads THRESHOLD_ADDR[0..2] for EE1/EE2/EE3. */
    volatile uint32_t *th = THRESHOLD_ADDR;
    for (int i = 0; i < NUM_EXITS; i++)
        th[i] = ee_thresholds[i];
}

#ifdef USE_UART

static void uart_tx_dec64(uint64 val)
{
    char buffer[24];
    int i = 0;

    if (val == 0) {
        uart_tx_char('0');
        return;
    }

    while (val > 0 && i < 24) {
        buffer[i++] = '0' + (val % 10);
        val /= 10;
    }

    while (i > 0)
        uart_tx_char(buffer[--i]);
}

static void uart_tx_float(float val)
{
    if (val < 0.0f) {
        uart_tx_char('-');
        val = -val;
    }

    uint32_t integer_part = (uint32_t)val;
    uart_tx_dec64(integer_part);
    uart_tx_char('.');

    float frac = val - (float)integer_part;
    for (int i = 0; i < 6; i++) {
        frac *= 10.0f;
        uint8_t digit = (uint8_t)frac;
        uart_tx_char('0' + digit);
        frac -= (float)digit;
    }
}

static void print_timing(uint64 cycles, uint32 clock_mhz)
{
    uint64 us = cycles / clock_mhz;
    uint64 ms = us / 1000;
    uint32 us_rem = us % 1000;

    uart_tx_str("Cycles: ");
    uart_tx_dec64(cycles);
    uart_tx_str("\n");

    uart_tx_str("Time: ");
    if (ms > 0) {
        uart_tx_dec64(ms);
        uart_tx_str(".");
        if (us_rem < 100) uart_tx_char('0');
        if (us_rem <  10) uart_tx_char('0');
        uart_tx_dec64(us_rem);
        uart_tx_str(" ms\n");
    } else {
        uart_tx_dec64(us);
        uart_tx_str(" us\n");
    }
}

static void rx_model(void)
{
    for (uint16 i = 0; i < BUF_SIZE; i++)
        RxBuf[i] = 0;

    counter = 0;
    clr_rx_fifo();

    while (counter < INPUT_SIZE)
        uart_rx();

    memcpy(test_image, (void *)RxBuf, INPUT_SIZE);
}

static uint8_t rx_threshold(void)
{
    volatile uint8 status, avail;
    char buf[4];
    uint8_t idx = 0;

    while (idx < 3) {
        status = UART_STS;
        avail  = (status & (1 << UART_RX_FIFO_NOTEMPTY_BIT_POS));
        while (avail == 0) {
            status = UART_STS;
            avail  = (status & (1 << UART_RX_FIFO_NOTEMPTY_BIT_POS));
        }
        char c = UART_RXD;

        if (c == '\r' || c == '\n') break;

        if (c >= '0' && c <= '9') {
            buf[idx++] = c;
            uart_tx_char(c);
        }
    }
    uart_tx_str("\n");

    uint8_t val = 0;
    for (uint8_t i = 0; i < idx; i++)
        val = val * 10 + (buf[i] - '0');

    if (val > 100) val = 100;
    return val;
}

static void print_banner(void)
{
    uart_tx_str("\n");
    uart_tx_str("****************************************\n");
    uart_tx_str("  Image Classification System\n");
    uart_tx_str("****************************************\n");
    uart_tx_str("Processor: Synopsys TRV32P3 with EE\n");
    uart_tx_str("Model: MobileNetV1 - 10 classes (CIFAR-10)\n");
    uart_tx_str("Input: 49152 bytes (12288 float32)\n");
    uart_tx_str("Per-exit thresholds: EE1/EE2/EE3\n");
    uart_tx_str("****************************************\n\n");
}

static void print_thresholds(void)
{
    uart_tx_str("Thresholds: ");
    for (int i = 0; i < NUM_EXITS; i++) {
        if (i > 0) uart_tx_str(" / ");
        uart_tx_str(exit_names[i]);
        uart_tx_str("=");
        if (ee_thresholds[i] >= 100) {
            uart_tx_str("100");
        } else {
            if (ee_thresholds[i] >= 10) uart_tx_char('0' + ee_thresholds[i] / 10);
            uart_tx_char('0' + ee_thresholds[i] % 10);
        }
        uart_tx_str("%");
    }
    uart_tx_str("\n");
}

#endif /* USE_UART */

// ============================================================================
// CLASSIFICATION RESULT
// ============================================================================

static void eval_with_timing(float scores[10], uint64 cycles)
{
    int best = 0;
    for (int i = 1; i < NUM_CLASSES; i++) {
        if (scores[i] > scores[best])
            best = i;
    }

    #ifdef USE_UART
    uart_tx_str("\n");
    uart_tx_str("****************************************\n");
    uart_tx_str("      CLASSIFICATION RESULT (BB)\n");
    uart_tx_str("****************************************\n");
    #endif

    asm volatile("lui x25, 0xBA55");
    asm volatile("li  x26, 0xBA");
    asm volatile("or x25, x25, x26");
    uart_tx_str("Result: ");
    uart_tx_str(class_names[best]);
    uart_tx_str(" DETECTED\n");

    #ifdef USE_UART
    uart_tx_str("\nScores: [");
    for (int i = 0; i < NUM_CLASSES; i++) {
        if (i > 0) uart_tx_str(", ");
        uart_tx_float(scores[i]);
    }
    uart_tx_str("]\n");

    uart_tx_str("\n--- Performance ---\n");
    print_timing(cycles, CLOCK_MHZ);
    uart_tx_str("****************************************\n\n");
    #endif
}

// ============================================================================
// EARLY EXIT HANDLER (called after processor reset from EE)
// ============================================================================

#ifdef USE_UART
static int handle_early_exit(void)
{
    uint32_t flag = *EE_FLAG_ADDR;
    uint32_t flag_m = flag & 0xFFF;
    
    #ifndef ENABLE_DEBUG
    if (flag_m < 0xC00 || flag_m > 0xC09)
        return 0;
    #endif

    timer_stop();
    clr_tx_fifo();
    for (volatile int d = 0; d < STARTUP_DELAY; d++);

    uart_tx_char('\0');
    uart_tx_char('\0');
    uart_tx_char('\0');
    uart_tx_char('\0');
    uart_tx_char('\n');

    uint64 elapsed_cycles = timer_read();
    *EE_FLAG_ADDR = 0x0;

    if (flag_m >= 0xC00 && flag_m <= 0xC09) {
        int cls = flag_m & 0xF;
        uart_tx_str("\nThe image you sent is: ");
        uart_tx_str(class_names[cls]);
        uart_tx_str(" (EE: ");
    } else {
        uart_tx_str("\nUNCERTAIN classification (EE: ");
    }

    uart_tx_dec64((flag>>12)&0xF);
    uart_tx_str(")\n");
    
    uart_tx_str("\nScores: [");
    for (int i = 0; i < NUM_CLASSES; i++) {
        if (i > 0) uart_tx_str(", ");
        uart_tx_float(EE_CLASSIFICATION_PROBS[i]);
    }
    uart_tx_str("]\n");
    
    #ifdef ENABLE_DEBUG
    uart_tx_str("\nflag_m= ");
    uart_tx_hex32(flag_m);
    uart_tx_str("\n");

    // Debug: decode EE comparison results
    uint32_t dbg = *EE_DEBUG_ADDR;
    uart_tx_str("\n--- EE Debug ---\n");
    uart_tx_str("TH seen by EE: ");
    uart_tx_dec64(dbg & 0xFF);
    uart_tx_str("\n");
    uart_tx_str("Best class: ");
    uart_tx_dec64((dbg >> 8) & 0xF);
    uart_tx_str("  met_TH: ");
    uart_tx_char((dbg & (1<<12)) ? '1' : '0');
    uart_tx_str("\n");

    #endif
    
    print_timing(elapsed_cycles, CLOCK_MHZ);
    return 1;
}

#endif

// ============================================================================
// MAIN
// ============================================================================

int main(void)
{
    #ifdef USE_UART
    handle_early_exit();
    #endif

    /* Setup inputs/outputs */
    struct tvmgen_default_inputs inputs = {
        .serving_default_input_1_0 = NULL
    };
    struct tvmgen_default_outputs outputs = {
        .StatefulPartitionedCall_0 = (void *)&output_BB
    };

    #ifdef USE_UART
    print_banner();
    uart_tx_str("Send image file for classification:\n");
    uart_tx_str("(Exactly 49152 bytes)\n");

    rx_model();
    uart_tx_str("\nImage received!\n");

    /* Receive per-exit thresholds.
       The host automation always sends three values (EE1/EE2/EE3) regardless
       of the model's actual exit count. Drain all three from the UART to
       keep the wire protocol identical across models, but only honor the
       first NUM_EXITS values. Surplus thresholds are read and discarded. */
    for (int e = 0; e < 3; e++) {
        uart_tx_str("\nConfidence threshold for ");
        if (e < NUM_EXITS) {
            uart_tx_str(exit_names[e]);
        } else {
            uart_tx_str("unused EE");
            uart_tx_char('1' + e);
        }
        uart_tx_str(" (0-100): ");
        clr_rx_fifo();
        uint8_t v = rx_threshold();
        if (e < NUM_EXITS) ee_thresholds[e] = v;
    }
    write_thresholds();
    print_thresholds();

    inputs.serving_default_input_1_0 = (void *)&test_image;
    #else
    for (int e = 0; e < NUM_EXITS; e++) ee_thresholds[e] = 100;
    write_thresholds();
    inputs.serving_default_input_1_0 = (void *)&AIRPLANE_000;
    #endif

    /* Run inference */
    #ifdef USE_TIMER
    uart_tx_str("\nProcessing...\n");
    timer_start();
    #endif

    tvmgen_default_run(&inputs, &outputs);

    #ifdef USE_TIMER
    timer_stop();
    uint64 elapsed_cycles = timer_read();
    #else
    uint64 elapsed_cycles = 0;
    #endif

    PRINTF("Result (BB): %f, %f, %f, %f, %f, %f, %f, %f, %f, %f\n",
           output_BB[0], output_BB[1], output_BB[2], output_BB[3], output_BB[4],
           output_BB[5], output_BB[6], output_BB[7], output_BB[8], output_BB[9]);
    eval_with_timing(output_BB, elapsed_cycles);
    abort_signal();

    return 0;
}
