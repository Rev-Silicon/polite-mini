#ifndef CHIP_H
#define CHIP_H
#include <stdint.h>
typedef struct {
  int has_outbuf, op_place;
  uint8_t left, top, last_in, last_instr;
  int32_t psum[4];   /* 24b wrap, index in dump order: 0=(2,2) 1=(2,1) 2=(1,2) 3=(1,1) */
  int16_t mul[4];
  int ovf, illegal, run_busy, dump_busy, debug_busy, dump_paused;
  int32_t outbuf[4]; int dump_idx; /* nibble index 0..23 */
  int frozen; uint8_t frozen_val;
  uint8_t in_d_q, in_i_q, uo_q; /* pad pipeline regs (input flops + registered uo_out) */
} chip_t;
void chip_reset(chip_t *c, int has_outbuf, int op_place);
uint8_t chip_step(chip_t *c, uint8_t ui_in, uint8_t uio_in); /* pin level: returns uo_out after this edge (2-edge latency) */
uint8_t chip_core_step(chip_t *c, uint8_t d, uint8_t ins); /* core semantics, no pad regs (adversarial R1-R6 target) */
#endif
