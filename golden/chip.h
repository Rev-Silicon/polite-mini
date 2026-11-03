#ifndef CHIP_H
#define CHIP_H
#include <stdint.h>

typedef struct {
    /* Config (op_place obsolete under buffer+bus; kept for API compat, ignored). */
    int has_outbuf, op_place;

    /* LOAD buffer; last pin samples for debug. RUN's other operand is live ui_in. */
    uint8_t buf, last_in, last_instr;

    /* PE state. psum is 24b wrap; index is dump order: 0=(2,2) 1=(2,1) 2=(1,2) 3=(1,1). */
    int32_t psum[4];
    int16_t mul[4];
    int ovf, illegal, run_busy, dump_busy, debug_busy, dump_paused;

    /* Output buffer stream. dump_idx is nibble index 0..23. */
    int32_t outbuf[4];
    int dump_idx;

    /* Legacy freeze markers (frozen_val mirrors low byte of fz_val). */
    int frozen;
    uint8_t frozen_val;

    /*
     * Nibble freeze window:
     *   fz_n nibbles over 2*fz_n core edges (8-bit n=2, 24-bit n=6), LS first.
     *   out_tick = phase (resets 0).
     *   fz_prev  = this edge started a freeze.
     *   ofz      = core output is inside the freeze window this edge.
     *   fz_left>0 at entry means ticks k+1..k+2n-1 of an open window.
     */
    int phase, fz_prev, ofz, fz_n, fz_left, fz_k;
    uint32_t fz_val;

    /* Pad pipeline: input flops + registered uo_out. */
    uint8_t in_d_q, in_i_q, uo_q, uo_pad;
    int otick_q;

    /* Registered ena; resets to 1. Hold (0) freezes every state bit, including phase. */
    int ena_q;
} chip_t;

void chip_reset(chip_t *c, int has_outbuf, int op_place);
uint8_t chip_step(chip_t *c, uint8_t ui_in, uint8_t uio_in);           /* pin level, ena=1 */
uint8_t chip_step_ena(chip_t *c, uint8_t ui_in, uint8_t uio_in, int ena); /* ena pad; effect one edge later */
uint8_t chip_core_step(chip_t *c, uint8_t d, uint8_t ins);             /* core only (no pad regs) */

#endif
