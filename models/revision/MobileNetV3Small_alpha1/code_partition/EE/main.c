#define NO_HOSTEDIO

#ifdef NO_HOSTEDIO
#define PRINTF(...)
#else
#define PRINTF(...) { printf(__VA_ARGS__); }
#endif

#include <stdio.h>
#include "tvmgen_default.h"
#include "config.h"

#define NUM_CLASSES 10
static const char* class_names[NUM_CLASSES] = {
    "AIRPLANE", "AUTOMOBILE", "BIRD", "CAT", "DEER",
    "DOG", "FROG", "HORSE", "SHIP", "TRUCK"
};

float output_EE[3][10];

void abort_signal()
{   
    asm volatile ("lui x19, 0xDEAD");
    asm volatile ( "li x20, 0xA5");
    asm volatile ( "or x19, x19, x20");
}

void clock_gate_signal()
{
    asm volatile ("lui x19, 0xDEAD");
    asm volatile ( "li x20, 0xBE");
    asm volatile ( "or x19, x19, x20");
    asm volatile ( "nop");
    asm volatile ( "nop");
    asm volatile ( "li x19, 0x0");
    asm volatile ( "nop");
    asm volatile ( "nop");
    asm volatile ( "nop");
    asm volatile ( "nop");
    asm volatile ( "nop");
    asm volatile ( "nop");
    asm volatile ( "nop");
    asm volatile ( "nop");
}

int exit_count;

void eval(float* output_EE)
{
    int i;
    for (i = 0; i < NUM_CLASSES; i++)
        EE_CLASSIFICATION_PROBS[i] = output_EE[i];
    exit_count = exit_count + 1;
    volatile uint32_t *TH = THRESHOLD_ADDR;

    // Find argmax
    int best = 0;
    for (i = 1; i < NUM_CLASSES; i++) {
        if (output_EE[i] > output_EE[best])
            best = i;
    }
    float best_score = output_EE[best] * 100;

    #ifdef ENABLE_DEBUG
    // Debug: write TH, best class index, and whether threshold was met
    // Bits [7:0] = TH value, Bits [11:8] = best class index, Bit 12 = (best_score >= TH)
    uint32_t dbg = (TH & 0xFF);
    dbg |= ((best & 0xF) << 8);
    if (best_score >= TH) dbg |= (1 << 12);
    *EE_DEBUG_ADDR = dbg;
    #endif

    if (best_score >= TH[exit_count-1]) { // Confident classification
        asm volatile ("lui x25, 0xBA55");
        asm volatile ( "li x26, 0xBA");
        asm volatile ( "or x25, x25, x26");
        *EE_FLAG_ADDR = (0xC00 | best) | (exit_count << 12);
        abort_signal();
    } else { // Uncertain
        asm volatile ("lui x25, 0xDEAD");
        asm volatile ( "li x26, 0xBE");
        asm volatile ( "or x25, x25, x26");
    }   
}


int main(void){    

/* INPUT IMAGE DOES NOT MATTER FOR BRANCHES AS THEY DEPEND ON INTERMEDIATE OUTPUTS OF BACKBONE NETWORK, NOT INPUT TO THE MODEL
    struct tvmgen_default_inputs inputs = {
            .serving_default_input_1_0 = (void*)&CAR_IMAGE,
    };
*/ 

    // while(1)
     //{     
        struct tvmgen_default_outputs outputs = {
            .StatefulPartitionedCall_1 = (void*)&output_EE[0],
            .StatefulPartitionedCall_2 = (void*)&output_EE[1],
            .StatefulPartitionedCall_3 = (void*)&output_EE[2],
        };
    
        PRINTF("Evaluating MobileNetV2 model with 3 EE using microTVM:\n");
    
        *HANDSHAKE= 0xC0;
        clock_gate_signal();
        exit_count = 0;
        tvmgen_default_run(0, &outputs);
    //    printf("Car Result (EE): %d,  %d\n", output_EE[0], output_EE[1]);
     //}
    return 0;
}
