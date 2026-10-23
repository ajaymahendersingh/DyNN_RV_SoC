// ============================================================================
// CONSTANTS
// ============================================================================

#define CLOCK_MHZ                   100
#define EE_FLAG_ADDR                ((volatile uint32_t *)0x4)
#define EE_CLASSIFICATION_PROBS     ((volatile float *)0x8)
#define HANDSHAKE                   ((volatile uint32_t *)0x40)
#define THRESHOLD_ADDR              ((volatile uint32_t *)0x44)
#define BB_GLOBAL_WS_ADDR           ((volatile uint32_t *)0x60)
#define BB_GLOBAL_CONST_WS_ADDR     ((volatile uint32_t *)0x64)
#define EE_DEBUG_ADDR               ((volatile uint32_t *)0x68)
#define STARTUP_DELAY               100000

