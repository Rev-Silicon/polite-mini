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
} chip_t;
void chip_reset(chip_t *c, int has_outbuf, int op_place);
uint8_t chip_step(chip_t *c, uint8_t ui_in, uint8_t uio_in); /* returns uo_out */
#endif
