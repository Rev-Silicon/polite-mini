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
static uint8_t flags8(chip_t *c){ return c->ovf|c->illegal<<1|c->dump_busy<<2|c->debug_busy<<3|c->run_busy<<4|c->dump_paused<<5|/* bit6 reserved=0 */c->has_outbuf<<7; }
static void freeze(chip_t *c,uint8_t v){ c->frozen=1; c->frozen_val=v; c->fz_val=v; c->fz_n=1; c->debug_busy=1; }
static void freeze24(chip_t *c,uint32_t v){ freeze(c,(uint8_t)v); c->fz_val=v&0xFFFFFF; c->fz_n=3; }
uint8_t chip_core_step(chip_t *c,uint8_t d,uint8_t ins){
  int op=ins>>4, a=ins&0xF, had_freeze=c->frozen, tick=c->phase, ld=0, run_now=0; int16_t nm[4]={0};
  c->frozen=0; c->debug_busy=0; c->dump_paused=0;
  c->last_in=d; c->last_instr=ins;
  /* RUN cycle 2: accumulate is deferred until after the opcode switch (R3-F15) so phase-2 opcodes still see the RUN in flight */
  int run_phase2=c->run_busy;
  /* RUN is a 2-stage pipeline: a RUN on a phase-2 edge is legal (phase 1 of RUN N overlaps phase 2 of RUN N-1) */
  /* dump stream: shows nibble dump_idx; advances only on out_tick edges (applied after the opcode switch) */
  uint8_t dnib=0; int dump_adv=c->dump_busy; /* busy-at-start: true on final-nibble cycle (R2-F8) */
  if(c->dump_busy){ int pe=c->dump_idx/6, sh=(c->dump_idx%6)*4; dnib=(c->outbuf[pe]>>sh)&0xF; }
  switch(op){
  case 0x0: break;
  case 0x1: c->buf=d; break; /* LOAD writes the one input buffer (no shift) */
  case 0x2:
    if(!c->has_outbuf && had_freeze){ c->illegal=1; break; } /* cfg B: no RUN during a debug read */
    for(int k=0;k<4;k++) nm[k]=lane(c->buf,PR[k]-1)*lane(d,PC[k]-1); /* buf[i] x bus[j], bus = ui_in with RUN; latched after phase-2 read */
    run_now=1; break;
  case 0x3: if(!c->has_outbuf||dump_adv){ /* busy at cycle start, incl. final nibble (R3-F12) */ c->illegal=1; break; }
    if(run_phase2){ for(int k=0;k<4;k++){ int o2=0; c->outbuf[k]=wrap24((int64_t)c->psum[k]+c->mul[k],&o2); } } else memcpy(c->outbuf,c->psum,sizeof c->psum); /* R5-F22: phase-2 captures pending post-acc psum; OVF commits via deferred acc only */ c->dump_idx=0; c->dump_busy=1; ld=1; break;
  case 0x4: if(!c->has_outbuf){ c->illegal=1; break; } c->dump_busy=0; c->dump_paused=0; break;
  case 0x5: {
    int coll=((a&8)&&(c->run_busy||run_phase2)) /* RUN still in flight on phase 2 */ || ((a&4)&&(dump_adv||!c->has_outbuf)) /* dump busy at cycle start, incl. final nibble */;
    if(coll){ c->illegal=1; break; }
    if(a&1){ c->ovf=0; c->illegal=0; } /* clears prior OVF; deferred phase-2 acc below may raise a new one (R2-F11) */
    if(a&2){ c->buf=0; }
    if(a&4) memset(c->outbuf,0,sizeof c->outbuf);
    if(a&8) memset(c->psum,0,sizeof c->psum);
    break; }
  case 0x6: if(a!=0){ c->illegal=1; break; } c->debug_busy=1; if(dump_adv) c->dump_paused=1;
    { int db=c->dump_busy, po=0; if(run_phase2) for(int k=0;k<4;k++) wrap24((int64_t)c->psum[k]+c->mul[k],&po); c->dump_busy=dump_adv; freeze(c,flags8(c)|(po?1:0)); c->dump_busy=db; } /* R4-F16: OR pending phase-2 OVF into bit0; commit still deferred */ break; /* busy-at-start for dump (R3-F13); run_busy=1 on phase 2 (R3-F14) */ /* bit3 reads 1 while frozen */
  case 0x7: freeze(c,c->buf); break;
  case 0x8: freeze24(c,(uint32_t)c->psum[a&3]); break; /* 3 output ticks, LSB first; [3:2] reserved/ignored */
  case 0x9: freeze(c,(uint8_t)c->mul[a&3]); break;
  case 0xA: { int o2=0; int64_t v=c->psum[a&3]+(c->run_busy?c->mul[a&3]:0); freeze24(c,(uint32_t)wrap24(v,&o2)); break; } /* phase 2: pending next-acc wrap24(psum+mul) before commit (R3-F15); else low(psum); no OVF side effect */
  case 0xB: freeze(c,d); break;
  default: c->illegal=1;
  }
  /* deferred RUN phase-2 accumulate; mul consumed (R2-F9) */
  /* deferred RUN phase-2 accumulate. Products are sticky (no zeroing); the next phase 1 overwrites them. */
  if(run_phase2){ int o=0; for(int k=0;k<4;k++) c->psum[k]=wrap24((int64_t)c->psum[k]+c->mul[k],&o); if(o) c->ovf=1; }
  if(run_now) memcpy(c->mul,nm,sizeof nm);
  c->run_busy=run_now; /* run_busy(t+1) = RUN executed on t */
  /* 33 MHz pad-out: a freeze of n bytes holds the core output for 2n edges (this one + 2n-1), so exactly n out_ticks
   * see it; byte k is shown on the k-th out_tick. Dump advances only on out_tick and is held while frozen (no nibble lost). */
  if(c->frozen){ c->fz_left=2*c->fz_n; c->fz_k=0; }
  c->ofz = c->fz_left>0; c->fz_prev = c->frozen;
  int fk=tick?c->fz_k:(c->fz_k?c->fz_k-1:0); uint8_t fzout=(uint8_t)(c->fz_val>>(8*fk)); /* held non-tick edge repeats the byte last shown */
  if(c->ofz){ c->debug_busy=1; if(tick) c->fz_k++; c->fz_left--; }
  if(dump_adv && c->ofz && c->dump_busy) c->dump_paused=1; /* R7-F4: an abort on the held edge leaves paused=0 */
  if(dump_adv && tick && !c->ofz && !ld){ if(++c->dump_idx==24) c->dump_busy=0; }
  c->phase ^= 1;
  if(c->ofz) return fzout; /* latest freeze; byte for this out tick */
  /* R7-D0/B4b: live uo[6] = dump busy at the start of this edge = "uo[3:0] is a real nibble". The DUMP_LOAD edge shows 0 and the final
   * nibble shows 1, so pin framing does not depend on the beat phase: the nibbles are exactly the unfrozen beats with uo[6]=1. */
  uint8_t fl=c->ovf|c->illegal<<1|dump_adv<<2|c->debug_busy<<3;
  return (uint8_t)(fl<<4|(dnib&0xF));
}
/* Pad pipeline: ui_in/uio_in are registered at the top (sampled on edge k, executed on edge k+1). The 8b uo_out
 * register loads the core's output once per beat (33 MHz pad-out): only on the edge after an out_tick.
 * Pin-level latency: inputs applied before edge k -> core acts on edge k+1 -> on uo_out after edge k+2 (k+1 is an
 * out_tick) or k+3 (otherwise).
 * Reset: in_q = 0 (NOP), uo_q = 0. */
uint8_t chip_step(chip_t *c,uint8_t d,uint8_t ins){
  int t=c->phase;
  if(c->otick_q) c->uo_pad=c->uo_q;   /* pad register loads only on the edge after an out_tick: <=33 MHz toggles */
  uint8_t o=c->uo_pad;
  c->uo_q=chip_core_step(c,c->in_d_q,c->in_i_q); c->otick_q=t;
  c->in_d_q=d; c->in_i_q=ins;
  return o;
}
#ifndef CHIP_NO_MAIN
static int fails=0;
#define CHECK(x) do{ if(!(x)){printf("FAIL %s:%d %s\n",__FILE__,__LINE__,#x);fails++;} }while(0)
/* core-level checks (one call = one core edge, no pad regs) */
static void test_core(int A,int P){
  chip_t c; chip_reset(&c,A,P); uint8_t o;
  printf("== cfg %s place%d\n",A?"A":"B",P);
  CHECK(chip_core_step(&c,0,0x00)==0);
  chip_core_step(&c,0x3F,0x10); chip_core_step(&c,0,0x00); /* NOP keeps beat phase; LOAD buffer {3,-1}; RUN bus byte 0x21 = {2,1} */
  for(int i=0;i<3;i++){ chip_core_step(&c,0x21,0x20); chip_core_step(&c,0,0x00); }
  o=chip_core_step(&c,0x21,0x20); o=chip_core_step(&c,0x21,0x20); CHECK(!(o&0x20)); /* back-to-back RUN legal (pipelined) */
  chip_core_step(&c,0,0x00);
  int L=0x3F, T=0x21;
  for(int k=0;k<4;k++){ int e=5*lane(L,PR[k]-1)*lane(T,PC[k]-1); CHECK(c.psum[k]==e); printf("PE(%d,%d)=%d\n",PR[k],PC[k],c.psum[k]); }
  o=chip_core_step(&c,0,0x60); CHECK(o==(0x08|A<<7));  printf("DBG_FLAGS=0x%02X\n",o);
  chip_core_step(&c,0,0x51); CHECK(!c.illegal);
  o=chip_core_step(&c,0,0x60); CHECK(o==(0x08|A<<7));
  if(A){
    chip_core_step(&c,0,0x30); int32_t got[4]={0};
    int n=0,e=0; while(c.dump_busy && e<100){ int t=c.phase; o=chip_core_step(&c,0,0x00); e++; if(t){ got[n/6]|=(o&0xF)<<(4*(n%6)); n++; } }
    CHECK(n==24); CHECK(e==48); /* 24 nibbles x 2 core edges */
    for(int k=0;k<4;k++){ int32_t v=((got[k]&0xFFFFFF)^0x800000)-0x800000; CHECK(v==c.psum[k]); }
    printf("DUMP ok\n");
    chip_core_step(&c,0,0x30); chip_core_step(&c,0,0x54); CHECK(c.illegal); chip_core_step(&c,0,0x40); CHECK(!c.dump_busy);
  } else { chip_core_step(&c,0,0x30); CHECK(c.illegal); }
  chip_core_step(&c,0,A?0x5F:0x59); CHECK(c.psum[0]==0 && !c.illegal);
}
/* pin-level checks through chip_step (pad pipeline + 33 MHz pad-out). Read uo_out 3 edges after an op (always valid);
 * dump nibbles = unfrozen beats with uo[6]=1. */
static uint8_t pin_op(chip_t *c,uint8_t d,uint8_t ins){ chip_step(c,d,ins); chip_step(c,0,0); chip_step(c,0,0); return chip_step(c,0,0); }
static void test_pin(int A,int P){
  for(int al=0;al<2;al++){ chip_t c; chip_reset(&c,A,P); for(int i=0;i<al;i++) chip_step(&c,0,0);
    chip_step(&c,0x3F,0x10);
    for(int i=0;i<4;i++){ chip_step(&c,0x21,0x20); chip_step(&c,0,0x00); }
    uint8_t f=pin_op(&c,0,0x60); CHECK(f==(0x08|A<<7));
    int L=0x3F, T=0x21; int32_t want[4];
    for(int k=0;k<4;k++) want[k]=4*lane(L,PR[k]-1)*lane(T,PC[k]-1);
    int32_t got[4]={0};
    if(A){ chip_step(&c,0,0x30); int n=0,st=0; uint8_t prev=0xFF; int lastload=0;
      for(int e=0;e<120 && n<24;e++){ int ld=c.otick_q; uint8_t o=chip_step(&c,0,0); (void)prev;
        if(ld && (o&0x40)){ got[n/6]|=(o&0xF)<<(4*(n%6)); n++; st=1; } else if(ld && st) break; lastload=ld; }
      (void)lastload; CHECK(n==24);
    } else for(int k=0;k<4;k++){ /* one DEBUG_PARTIAL_SUM opcode -> 3 output ticks, read after k+3, k+5, k+7 */
      chip_step(&c,0,0x80|k); chip_step(&c,0,0); chip_step(&c,0,0); got[k]|=chip_step(&c,0,0);
      chip_step(&c,0,0); got[k]|=chip_step(&c,0,0)<<8; chip_step(&c,0,0); got[k]|=chip_step(&c,0,0)<<16;
      for(int i=0;i<4;i++) chip_step(&c,0,0); }
    for(int k=0;k<4;k++) CHECK((((got[k]&0xFFFFFF)^0x800000)-0x800000)==want[k]);
  }
  printf("PIN cfg %s place%d ok\n",A?"A":"B",P);
}
/* pad pipeline == core delayed by 2 edges (input flop + uo_out flop), random stream */
static void test_pipe(int A,int P){
  /* pin core edge m executes the command applied at pin step m-1 with out_tick=m&1; q is pre-stepped one NOP to match.
   * Pad after pin step n = core output of the latest odd (out_tick) edge m<=n-1, else 0; pad changes only every 2 edges. */
  chip_t p,q; chip_reset(&p,A,P); chip_reset(&q,A,P); srand(A*2+P+7);
  uint8_t last_tick_out=0, prev=0; int have=0; uint8_t outm=0, outn=chip_core_step(&q,0,0); /* outm=edge n-1, outn=edge n */
  for(int n=0;n<200000;n++){ uint8_t d=rand(), i=rand(); uint8_t o=chip_step(&p,d,i);
    /* after pin step n, latest core edge visible is m=n-1 */
    if(n>=1 && ((n-1)&1)) { last_tick_out=outm; have=1; }
    CHECK(o==(have?last_tick_out:0));
    if(n&1) CHECK(o==prev); /* no change on odd pin edges -> <= clk/2 */
    prev=o; outm=outn; outn=chip_core_step(&q,d,i); if(fails>5) return; }
  printf("PIPE cfg %s place%d ok\n",A?"A":"B",P);
}
static void test_bufbus(void){ chip_t c; chip_reset(&c,1,0);
  chip_core_step(&c,0x12,0x10); CHECK(c.buf==0x12); chip_core_step(&c,0x34,0x10); CHECK(c.buf==0x34); /* overwrite, no shift */
  CHECK(chip_core_step(&c,0,0x70)==0x34); chip_core_step(&c,0,0);
  chip_core_step(&c,0x21,0x20); chip_core_step(&c,0x77,0x00); /* bus only sampled on phase 1 */
  for(int k=0;k<4;k++) CHECK(c.psum[k]==lane(0x34,PR[k]-1)*lane(0x21,PC[k]-1));
  chip_core_step(&c,0x7F,0x20); chip_core_step(&c,0x55,0x10); /* LOAD on phase 2: in-flight uses old buf */
  for(int k=0;k<4;k++) CHECK(c.psum[k]==lane(0x34,PR[k]-1)*(lane(0x21,PC[k]-1)+lane(0x7F,PC[k]-1)));
  CHECK(c.buf==0x55); chip_core_step(&c,0,0x52); CHECK(c.buf==0 && !c.illegal);
  printf("BUFBUS ok\n"); }
static void test_pipeline(void){ chip_t c; chip_reset(&c,1,0); uint8_t o;
  chip_core_step(&c,0x11,0x10); /* buf {1,1} */
  chip_core_step(&c,0x11,0x20); chip_core_step(&c,0x22,0x20); chip_core_step(&c,0x33,0x20); /* back-to-back RUNs */
  CHECK(!c.illegal && c.run_busy);
  o=chip_core_step(&c,0,0x60); CHECK(o&0x10); /* run_busy=1 on tick after last RUN */
  for(int k=0;k<4;k++) CHECK(c.psum[k]==6);
  CHECK(!c.run_busy); for(int k=0;k<4;k++) CHECK(c.mul[k]==3); /* products sticky, no zero after lonely phase 2 */
  CHECK(chip_core_step(&c,0,0x90)==3); chip_core_step(&c,0,0); /* DEBUG_MULTIPLY = last latched */
  CHECK(chip_core_step(&c,0,0xA0)==6); /* DEBUG_ADD with run_busy=0 = psum (sticky mul ignored) */
  for(int i=0;i<5;i++) chip_core_step(&c,0,0);
  chip_core_step(&c,0x11,0x20); chip_core_step(&c,0,0x58); CHECK(c.illegal); /* CLEAR bit3 vs run_busy */
  chip_core_step(&c,0,0x51); chip_core_step(&c,0,0x58); CHECK(!c.illegal && c.psum[0]==0);
  /* 3 output ticks from one DEBUG_PARTIAL_SUM, LSB first; [3:2] ignored */
  for(int al=0;al<2;al++){ chip_reset(&c,1,0); for(int i=0;i<al;i++) chip_core_step(&c,0,0);
    c.psum[1]=0x123456; uint8_t b[6]; int nt=0; uint8_t got[3];
    for(int e=0;e<6;e++){ int t=c.phase; b[e]=chip_core_step(&c,0,e?0:0x8D); if(t) got[nt++]=b[e]; CHECK(c.debug_busy); }
    CHECK(nt==3 && got[0]==0x56 && got[1]==0x34 && got[2]==0x12 && !c.illegal);
    o=chip_core_step(&c,0,0); CHECK(!c.debug_busy && o==0); }
  printf("PIPELINE ok\n"); }
int main(void){ test_bufbus(); test_pipeline(); for(int a=1;a>=0;a--) for(int p=0;p<2;p++) { test_core(a,p); test_pin(a,p); test_pipe(a,p); } printf(fails?"FAILED %d\n":"ALL PASS\n",fails); return fails!=0; }
#endif
