/* POLITE V(-1) golden model. Follows docs/OPCODE_PROPOSAL.md and docs/LOCKS.md.
 * One chip_step call = one rising edge. TBD from RTL: how RUN splits its work across the 2 internal cycles
 * (this model does multiply on cycle 1 and accumulate on cycle 2). */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "chip.h"
static int s4(int v){ v&=0xF; return v&8 ? v-16 : v; }
static int lane(uint8_t b,int i){ return s4(i? b>>4 : b); }
static int32_t wrap24(int64_t v,int *ovf){ int64_t w=((v&0xFFFFFF)^0x800000)-0x800000; if(w!=v)*ovf=1; return (int32_t)w; }
/* dump-order index -> (row,col) 1-based */
static const int PR[4]={2,2,1,1}, PC[4]={2,1,2,1};
void chip_reset(chip_t *c,int a,int p){ memset(c,0,sizeof *c); c->has_outbuf=a; c->op_place=p; }
static uint8_t flags8(chip_t *c){ return c->ovf|c->illegal<<1|c->dump_busy<<2|c->debug_busy<<3|c->run_busy<<4|c->dump_paused<<5|c->op_place<<6|c->has_outbuf<<7; }
static void freeze(chip_t *c,uint8_t v){ c->frozen=1; c->frozen_val=v; c->debug_busy=1; }
uint8_t chip_core_step(chip_t *c,uint8_t d,uint8_t ins){
  int op=ins>>4, a=ins&0xF, had_freeze=c->frozen;
  c->frozen=0; c->debug_busy=0; c->dump_paused=0;
  c->last_in=d; c->last_instr=ins;
  /* RUN cycle 2: accumulate is deferred until after the opcode switch (R3-F15) so phase-2 opcodes still see the RUN in flight */
  int run_phase2=c->run_busy;
  if(op==0x2 && run_phase2){ c->illegal=1; op=0x0; } /* RUN while busy: ignore + sticky illegal */
  /* dump stream advances one nibble per cycle */
  uint8_t dnib=0; int dump_adv=c->dump_busy; /* busy-at-start: true on final-nibble cycle (R2-F8) */
  if(c->dump_busy){ int pe=c->dump_idx/6, sh=(c->dump_idx%6)*4; dnib=(c->outbuf[pe]>>sh)&0xF; if(++c->dump_idx==24) c->dump_busy=0; }
  switch(op){
  case 0x0: break;
  case 0x1: if(!c->op_place){ c->top=c->left; c->left=d; } else { c->left=c->top; c->top=d; } break;
  case 0x2:
    if(!c->has_outbuf && had_freeze){ c->illegal=1; break; } /* cfg B: no RUN during a debug read */
    for(int k=0;k<4;k++) c->mul[k]=lane(c->left,PR[k]-1)*lane(c->top,PC[k]-1);
    c->run_busy=1; break;
  case 0x3: if(!c->has_outbuf||dump_adv){ /* busy at cycle start, incl. final nibble (R3-F12) */ c->illegal=1; break; }
    if(run_phase2){ for(int k=0;k<4;k++){ int o2=0; c->outbuf[k]=wrap24((int64_t)c->psum[k]+c->mul[k],&o2); } } else memcpy(c->outbuf,c->psum,sizeof c->psum); /* R5-F22: phase-2 captures pending post-acc psum; OVF commits via deferred acc only */ c->dump_idx=0; c->dump_busy=1; break;
  case 0x4: if(!c->has_outbuf){ c->illegal=1; break; } c->dump_busy=0; c->dump_paused=0; break;
  case 0x5: {
    int coll=((a&8)&&(c->run_busy||run_phase2)) /* RUN still in flight on phase 2 */ || ((a&4)&&(dump_adv||!c->has_outbuf)) /* dump busy at cycle start, incl. final nibble */;
    if(coll){ c->illegal=1; break; }
    if(a&1){ c->ovf=0; c->illegal=0; } /* clears prior OVF; deferred phase-2 acc below may raise a new one (R2-F11) */
    if(a&2){ c->left=c->top=0; }
    if(a&4) memset(c->outbuf,0,sizeof c->outbuf);
    if(a&8) memset(c->psum,0,sizeof c->psum);
    break; }
  case 0x6: if(a!=0){ c->illegal=1; break; } c->debug_busy=1; if(dump_adv) c->dump_paused=1;
    { int db=c->dump_busy, po=0; if(run_phase2) for(int k=0;k<4;k++) wrap24((int64_t)c->psum[k]+c->mul[k],&po); c->dump_busy=dump_adv; freeze(c,flags8(c)|(po?1:0)); c->dump_busy=db; } /* R4-F16: OR pending phase-2 OVF into bit0; commit still deferred */ break; /* busy-at-start for dump (R3-F13); run_busy=1 on phase 2 (R3-F14) */ /* bit3 reads 1 while frozen */
  case 0x7: freeze(c,(a&1)?c->top:c->left); break;
  case 0x8: if((a>>2)==3){ c->illegal=1; break; } freeze(c,(uint8_t)(c->psum[a&3]>>(8*(a>>2)))); break;
  case 0x9: freeze(c,(uint8_t)c->mul[a&3]); break;
  case 0xA: { int o2=0; int64_t v=c->psum[a&3]+(c->run_busy?c->mul[a&3]:0); freeze(c,(uint8_t)wrap24(v,&o2)); break; } /* phase 2: pending next-acc wrap24(psum+mul) before commit (R3-F15); else low(psum); no OVF side effect */
  case 0xB: freeze(c,d); break;
  default: c->illegal=1;
  }
  /* deferred RUN phase-2 accumulate; mul consumed (R2-F9) */
  if(run_phase2){ int o=0; for(int k=0;k<4;k++){ c->psum[k]=wrap24((int64_t)c->psum[k]+c->mul[k],&o); c->mul[k]=0; } if(o) c->ovf=1; c->run_busy=0; }
  /* DBG during dump pauses the stream: undo this cycle's advance, resume next cycle */
  if(c->frozen && dump_adv){ c->dump_idx--; c->dump_busy=1; c->dump_paused=1; }
  if(c->frozen) return c->frozen_val; /* the freeze is visible after this edge */
  uint8_t fl=c->ovf|c->illegal<<1|c->dump_busy<<2|c->debug_busy<<3;
  return (uint8_t)(fl<<4|(dnib&0xF));
}
/* Pad pipeline (V(-1) timing rev): ui_in/uio_in are registered at the top (sampled on edge k, executed on
 * edge k+1), and the full 8b uo_out is a register loaded every edge from the core's post-edge output.
 * Pin-level latency: inputs applied before edge k -> core acts on edge k+1 -> visible on uo_out after edge k+2.
 * Reset: in_q = 0 (NOP), uo_q = 0. */
uint8_t chip_step(chip_t *c,uint8_t d,uint8_t ins){
  uint8_t o=c->uo_q;
  c->uo_q=chip_core_step(c,c->in_d_q,c->in_i_q);
  c->in_d_q=d; c->in_i_q=ins;
  return o;
}
#ifndef CHIP_NO_MAIN
static int fails=0;
#define CHECK(x) do{ if(!(x)){printf("FAIL %s:%d %s\n",__FILE__,__LINE__,#x);fails++;} }while(0)
static void test(int A,int P){
  chip_t c; chip_reset(&c,A,P); uint8_t o;
#define chip_step chip_core_step
  printf("== cfg %s place%d\n",A?"A":"B",P);
  CHECK(chip_step(&c,0,0x00)==0);
  chip_step(&c,0x21,0x10); chip_step(&c,0x3F,0x10); /* lanes: {2,1} then {3,-1} */
  for(int i=0;i<3;i++){ chip_step(&c,0,0x20); chip_step(&c,0,0x00); }
  o=chip_step(&c,0,0x20); o=chip_step(&c,0,0x20); CHECK(o&0x20); /* RUN while busy -> illegal */
  chip_step(&c,0,0x00);
  int L= P? 0x21:0x3F, T= P? 0x3F:0x21;
  for(int k=0;k<4;k++){ int e=4*lane(L,PR[k]-1)*lane(T,PC[k]-1); CHECK(c.psum[k]==e); printf("PE(%d,%d)=%d\n",PR[k],PC[k],c.psum[k]); }
  o=chip_step(&c,0,0x60); CHECK(o==(0x0A|P<<6|A<<7));  printf("DBG_FLAGS=0x%02X\n",o);
  chip_step(&c,0,0x51); CHECK(!c.illegal);
  o=chip_step(&c,0,0x60); CHECK(o==(0x08|P<<6|A<<7));
  if(A){
    chip_step(&c,0,0x30); int32_t got[4]={0};
    for(int n=0;n<24;n++){ o=chip_step(&c,0,0x00); got[n/6]|=(o&0xF)<<(4*(n%6)); }
    for(int k=0;k<4;k++){ int32_t v=((got[k]&0xFFFFFF)^0x800000)-0x800000; CHECK(v==c.psum[k]); }
    printf("DUMP ok\n");
    chip_step(&c,0,0x30); chip_step(&c,0,0x54); CHECK(c.illegal); chip_step(&c,0,0x40); CHECK(!c.dump_busy);
  } else { chip_step(&c,0,0x30); CHECK(c.illegal); }
  chip_step(&c,0,A?0x5F:0x59); CHECK(c.psum[0]==0 && !c.illegal);
#undef chip_step
}
/* pad pipeline == core delayed by 2 edges (input flop + uo_out flop), random stream */
static void test_pipe(int A,int P){
  chip_t p,q; chip_reset(&p,A,P); chip_reset(&q,A,P); uint8_t hist[2]={0,0}; srand(A*2+P+7);
  for(int n=0;n<200000;n++){ uint8_t d=rand(), i=rand(); uint8_t o=chip_step(&p,d,i);
    if(n>=2) CHECK(o==hist[n&1]); else CHECK(o==0);
    hist[n&1]=chip_core_step(&q,d,i); if(fails>5) return; }
  printf("PIPE cfg %s place%d ok\n",A?"A":"B",P);
}
int main(void){ for(int a=1;a>=0;a--) for(int p=0;p<2;p++) { test(a,p); test_pipe(a,p); } printf(fails?"FAILED %d\n":"ALL PASS\n",fails); return fails!=0; }
#endif
