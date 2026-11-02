#ifndef CHIP_H
#define CHIP_H
#include <stdint.h>
typedef struct {
  int has_outbuf, op_place; /* op_place obsolete (buffer+bus); kept for API compat, ignored */
  uint8_t buf, last_in, last_instr; /* buf = single 8b input buffer (LOAD); RUN's other operand = live ui_in (bus) */
  int32_t psum[4];   /* 24b wrap, index in dump order: 0=(2,2) 1=(2,1) 2=(1,2) 3=(1,1) */
  int16_t mul[4];
  int ovf, illegal, run_busy, dump_busy, debug_busy, dump_paused;
  int32_t outbuf[4]; int dump_idx; /* nibble index 0..23 */
  int frozen; uint8_t frozen_val;
  int phase, fz_prev, ofz, fz_n, fz_left, fz_k; uint32_t fz_val; /* nibble freeze: fz_n nibbles over 2*fz_n edges (8-bit n=2, 24-bit n=6); LS nibble first. out_tick=phase (resets 0); fz_prev=this edge started a freeze; ofz=core output inside the freeze window this edge; fz_left>0 at entry means ticks k+1..k+2n-1 */
  uint8_t in_d_q, in_i_q, uo_q, uo_pad; int otick_q; /* pad pipeline regs (input flops + registered uo_out) */
} chip_t;
void chip_reset(chip_t *c, int has_outbuf, int op_place);
uint8_t chip_step(chip_t *c, uint8_t ui_in, uint8_t uio_in); /* pin level: returns uo_out after this edge (2-edge latency) */
uint8_t chip_core_step(chip_t *c, uint8_t d, uint8_t ins); /* core semantics, no pad regs (adversarial R1-R6 target) */
#endif
