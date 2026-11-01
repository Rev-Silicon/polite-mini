/* 33 MHz pad-out helpers for R1-R7 (core level, chip_core_step). A nibble is "on the pad" only on an
 * out_tick edge (c->phase==1 before the edge) whose core output is not frozen. Dump advance = those edges. */
#ifndef HALFRATE_H
#define HALFRATE_H
static inline int hr_vis(chip_t*c,uint8_t d,uint8_t i,uint8_t*o){ int t=c->phase; *o=chip_step(c,d,i); return t && !c->ofz; }
/* idle-collect n visible nibbles (low nibble of each visible beat) */
static inline int hr_idle_nibs(chip_t*c,uint8_t*nib,int n){ int k=0,e=0; uint8_t o;
  while(k<n && e<400){ if(hr_vis(c,0,0,&o)) nib[k++]=o&0xF; e++; } return e; }
/* idle until the next edge is the final-nibble out_tick (dump_idx==23, phase==1) */
static inline void hr_to_final(chip_t*c){ int e=0; while(!(c->dump_idx==23 && c->phase==1) && e<400){ chip_step(c,0,0); e++; } }
/* idle until the next edge is an out_tick */
static inline void hr_align_tick(chip_t*c){ if(!c->phase) chip_step(c,0,0); }
#endif
