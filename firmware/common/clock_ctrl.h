#ifndef CLOCK_CTRL_H
#define CLOCK_CTRL_H

#ifdef __cplusplus
extern "C" {
#endif

void clock_gate_signal(void);
void clock_ungate_signal(void);
void abort_signal(void);
void eval(float*);

#ifdef __cplusplus
}
#endif

#endif
