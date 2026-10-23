#include "timer_def.h"

// Control functions

// Start timer from 0
static inline void timer_start(void) {
    TIMER_CTRL = TIMER_RESET | TIMER_ENABLE;  // Reset and enable (0x3)
}

// Stop timer (holds current value)
static inline void timer_stop(void) {
    TIMER_CTRL = 0x0;  // Disable
}

// Resume timer (continue from current value)
static inline void timer_resume(void) {
    TIMER_CTRL = TIMER_ENABLE;  // Enable without reset (0x1)
}

// Reset timer to 0 (but don't start)
static inline void timer_reset(void) {
    TIMER_CTRL = TIMER_RESET;  // Reset only (0x2)
    TIMER_CTRL = 0x0;          // Clear enable
}

// Read 64-bit timer value (handles overflow correctly)
static inline uint64 timer_read(void) {
    uint32 hi, lo;
    
    // Read high, then low, then high again to detect overflow
    do {
        hi = TIMER_HIGH;
        lo = TIMER_LOW;
    } while (hi != TIMER_HIGH);
    
    return ((uint64)hi << 32) | lo;
}

// Check if timer is running
static inline uint32 timer_is_running(void) {
    return (TIMER_CTRL & TIMER_ENABLE);
}
