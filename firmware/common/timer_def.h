/*
 * timer_def.h - Memory-mapped timer with control
 * For use with AHBtimer_with_control.v at 0x40001000
 */

#ifndef TIMER_DEF_H
#define TIMER_DEF_H

#include "typedef.h"

// Timer register structure
typedef struct {
    volatile uint32 count_low;   // +0x0: Counter[31:0] (Read-Only)
    volatile uint32 count_high;  // +0x4: Counter[63:32] (Read-Only)
    volatile uint32 control;     // +0x8: Control register (Read/Write)
} TIMER_block;

// Timer base address
#define pt2TIMER ((TIMER_block *)0x40001000)

// Register access macros
#define TIMER_LOW   (pt2TIMER->count_low)
#define TIMER_HIGH  (pt2TIMER->count_high)
#define TIMER_CTRL  (pt2TIMER->control)

// Control register bit definitions
#define TIMER_ENABLE_BIT    0   // bit 0: Enable counting
#define TIMER_RESET_BIT     1   // bit 1: Reset counter (write-only)

#define TIMER_ENABLE    (1 << TIMER_ENABLE_BIT)  // 0x1
#define TIMER_RESET     (1 << TIMER_RESET_BIT)   // 0x2

#endif /* TIMER_DEF_H */
