/* POLITE V(-1) golden model. Canon: docs/SPEC.md and docs/LOCKS.md (docs/OPCODE_PROPOSAL.md is superseded).
 * One chip_core_step call = one core tick; one chip_step call = one rising edge at the pins (adds the pad pipeline).
 * RUN is a 2-stage pipeline: phase 1 (multiply, latch products) on the RUN's core tick, phase 2 (accumulate) on the
 * next core tick; phase 1 of RUN N overlaps phase 2 of RUN N-1. */
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
/* Bank 0 status byte. [7:4] base = live uo[7:4] order (debug busy, dump busy-at-start, illegal, OVF);
 * [3:0] bank data = {outbuf present, out_tick phase, dump paused, run busy}. Only bank 0 is legal. */
static uint8_t flags_bank0(chip_t *c,int tick,int dump_adv,int run_phase2,int pend_ovf){
  int base=((c->ovf|pend_ovf)&1)<<4 | (c->illegal&1)<<5 | (dump_adv&1)<<6 | 1<<7;
  int data=(run_phase2&1) | (dump_adv&1)<<1 | (tick&1)<<2 | (c->has_outbuf&1)<<3;
  return (uint8_t)(base|data);
}
/* Start a freeze of `nibs` nibbles (2 or 6), LS nibble first. A call while one is already open is illegal and does not restart. */
static int begin_freeze(chip_t *c,uint32_t v,int nibs,int mid){
  if(mid){ c->illegal=1; return 0; }
  c->frozen=1; c->debug_busy=1; c->frozen_val=(uint8_t)v;
  c->fz_val = nibs>2 ? (v&0xFFFFFFu) : (v&0xFFu); c->fz_n=nibs; return 1;
}
uint8_t chip_core_step(chip_t *c,uint8_t d,uint8_t ins){
  int op=ins>>4, a=ins&0xF, tick=c->phase, ld=0, run_now=0; int16_t nm[4]={0};
  /* Freeze window already open at entry: core ticks k+1..k+2n-1 after a freezing DBG on tick k.
   * Tick k itself sees fz_left==0 and may start the freeze. RUN and a second freezing DBG are illegal here. */
  int mid=c->fz_left>0;
  c->frozen=0; c->debug_busy=0; c->dump_paused=0;
  c->last_in=d; c->last_instr=ins;
  /* RUN cycle 2: accumulate is deferred until after the opcode switch (R3-F15) so phase-2 opcodes still see the RUN in flight */
  int run_phase2=c->run_busy;
  /* RUN is a 2-stage pipeline: a RUN on a phase-2 edge is legal (phase 1 of RUN N overlaps phase 2 of RUN N-1),
   * except a RUN issued inside an open freeze window, which is ignored. */
  /* dump stream: shows nibble dump_idx; advances only on out_tick edges (applied after the opcode switch) */
  uint8_t dnib=0; int dump_adv=c->dump_busy; /* busy-at-start: true on final-nibble cycle (R2-F8) */
  if(c->dump_busy){ int pe=c->dump_idx/6, sh=(c->dump_idx%6)*4; dnib=(c->outbuf[pe]>>sh)&0xF; }
  switch(op){
  case 0x0: break;
  case 0x1: c->buf=d; break; /* LOAD writes the one input buffer (no shift) */
  case 0x2:
    if(mid){ c->illegal=1; break; } /* whole freeze window: no multiply, no product latch, no phase 2 */
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
  case 0x6: /* bank != 0: sticky illegal, no freeze (and no restart if one is already open) */
    if(a!=0){ c->illegal=1; break; }
    { int po=0; if(run_phase2) for(int k=0;k<4;k++) wrap24((int64_t)c->psum[k]+c->mul[k],&po);
      begin_freeze(c,flags_bank0(c,tick,dump_adv,run_phase2,po),2,mid); } /* bit4 ORs in-flight phase-2 OVF; commit still deferred. bit7=1 while this read freezes. bit6=busy-at-start, bit1=paused (=busy-at-start). */ break;
  case 0x7: begin_freeze(c,c->buf,2,mid); break;
  case 0x8: begin_freeze(c,(uint32_t)c->psum[a&3],6,mid); break; /* 6 nibbles, LS first; [3:2] reserved/ignored */
  case 0x9: begin_freeze(c,(uint8_t)c->mul[a&3],2,mid); break;
  case 0xA: { int o2=0; int64_t v=c->psum[a&3]+(c->run_busy?c->mul[a&3]:0); begin_freeze(c,(uint32_t)wrap24(v,&o2),6,mid); break; } /* phase 2: pending next-acc wrap24(psum+mul) before commit (R3-F15); else psum; no OVF side effect */
  case 0xB: begin_freeze(c,d,2,mid); break;
  default: c->illegal=1;
  }
  /* deferred RUN phase-2 accumulate. Products are sticky (no zeroing); the next phase 1 overwrites them.
   * A RUN issued on the tick before the DBG still completes here (existing capture rules). */
  if(run_phase2){ int o=0; for(int k=0;k<4;k++) c->psum[k]=wrap24((int64_t)c->psum[k]+c->mul[k],&o); if(o) c->ovf=1; }
  if(run_now) memcpy(c->mul,nm,sizeof nm);
  c->run_busy=run_now; /* run_busy(t+1) = RUN executed on t */
  /* 33 MHz pad-out: a freeze of n nibbles holds for 2n core edges (this one + 2n-1), so exactly n output ticks
   * show a debug nibble. Nibble k is on the k-th out_tick, LS first. A second freezing DBG does not reload this window.
   * Dump advances only on an out_tick and is held on every frozen out_tick (no nibble lost). */
  if(c->frozen){ c->fz_left=2*c->fz_n; c->fz_k=0; }
  c->ofz = c->fz_left>0; c->fz_prev = c->frozen;
  int fk=tick?c->fz_k:(c->fz_k?c->fz_k-1:0); if(fk>5) fk=5;
  uint8_t dbg_nib=(uint8_t)((c->fz_val>>(4*fk))&0xF);
  int dbg_tick=c->ofz && tick; /* debug-nibble output tick: uo[7]=1, uo[6] forced 0 */
  if(c->ofz){ c->debug_busy=1; if(tick) c->fz_k++; c->fz_left--; }
  if(dump_adv && c->ofz && c->dump_busy) c->dump_paused=1; /* R7-F4: an abort on the held edge leaves paused=0 */
  if(dump_adv && tick && !c->ofz && !ld){ if(++c->dump_idx==24) c->dump_busy=0; }
  c->phase ^= 1;
  /* uo[7:4] stay live on every edge. uo[7] marks a debug nibble; uo[6] marks a dump nibble and is 0 on a debug nibble. */
  uint8_t nib=dbg_tick?dbg_nib:dnib;
  uint8_t uo6=dbg_tick?0:dump_adv;
  uint8_t uo7=dbg_tick?1:0;
  return (uint8_t)((uo7<<7)|(uo6<<6)|((c->illegal&1)<<5)|((c->ovf&1)<<4)|(nib&0xF));
}
/* Pad pipeline: ui_in/uio_in are registered at the top (sampled on edge k, executed on edge k+1). The 8b uo_out
 * register loads the core's output once per output tick (33 MHz pad-out): only on the edge after an out_tick.
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
  chip_core_step(&c,0x3F,0x10); chip_core_step(&c,0,0x00); /* NOP keeps output-tick phase; LOAD buffer {3,-1}; RUN bus byte 0x21 = {2,1} */
  for(int i=0;i<3;i++){ chip_core_step(&c,0x21,0x20); chip_core_step(&c,0,0x00); }
  o=chip_core_step(&c,0x21,0x20); o=chip_core_step(&c,0x21,0x20); CHECK(!(o&0x20)); /* back-to-back RUN legal (pipelined) */
  chip_core_step(&c,0,0x00);
  int L=0x3F, T=0x21;
  for(int k=0;k<4;k++){ int e=5*lane(L,PR[k]-1)*lane(T,PC[k]-1); CHECK(c.psum[k]==e); printf("PE(%d,%d)=%d\n",PR[k],PC[k],c.psum[k]); }
  o=chip_core_step(&c,0,0x60); CHECK(c.fz_val==(uint32_t)(0x80|(A<<3))); printf("DBG_FLAGS=0x%02X phase0\n",c.fz_val); /* not an out_tick: 0x80 or 0x88 */
  for(int i=0;i<4;i++) chip_core_step(&c,0,0); /* leave the 8-bit window (k+1..k+3) before the next DBG */
  chip_core_step(&c,0,0x51); CHECK(!c.illegal);
  o=chip_core_step(&c,0,0x60); CHECK(!c.illegal && (c.fz_val&~4u)==(uint32_t)(0x80|(A<<3))); (void)o;
  for(int i=0;i<4;i++) chip_core_step(&c,0,0); /* finish this freeze before DUMP_LOAD so the stream is not paused */
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
/* pin-level checks through chip_step (pad pipeline + 33 MHz pad-out).
 * dump nibbles = output ticks with uo[6]=1; debug nibbles = output ticks with uo[7]=1. */
static void test_pin(int A,int P){
  for(int al=0;al<2;al++){ chip_t c; chip_reset(&c,A,P); for(int i=0;i<al;i++) chip_step(&c,0,0);
    chip_step(&c,0x3F,0x10);
    for(int i=0;i<4;i++){ chip_step(&c,0x21,0x20); chip_step(&c,0,0x00); }
    /* 8-bit DEBUG_FLAGS: two uo[7] beats, LS nibble first. Base [7:4] has debug busy and no OVF/illegal. */
    { uint8_t seq[16]; int ns=0; seq[ns++]=chip_step(&c,0,0x60); while(ns<14) seq[ns++]=chip_step(&c,0,0);
      int s0=-1; for(int i=0;i<ns;i++) if(seq[i]&0x80){ s0=i; break; }
      uint8_t f=0; int okf=s0>=0; for(int b=0;b<2;b++){ int i=s0+2*b; if(s0<0||i>=ns||!(seq[i]&0x80)||(seq[i]&0x40)) okf=0; else f|=(seq[i]&0xF)<<(4*b); }
      CHECK(okf && (f&0xF0)==0x80 && ((f>>3)&1)==A); }
    int L=0x3F, T=0x21; int32_t want[4];
    for(int k=0;k<4;k++) want[k]=4*lane(L,PR[k]-1)*lane(T,PC[k]-1);
    int32_t got[4]={0};
    if(A){ chip_step(&c,0,0x30); int n=0,st=0; uint8_t prev=0xFF; int lastload=0;
      for(int e=0;e<120 && n<24;e++){ int ld=c.otick_q; uint8_t o=chip_step(&c,0,0); (void)prev;
        if(ld && (o&0x40)){ got[n/6]|=(o&0xF)<<(4*(n%6)); n++; st=1; } else if(ld && st) break; lastload=ld; }
      (void)lastload; CHECK(n==24);
    } else for(int k=0;k<4;k++){ /* one DEBUG_PARTIAL_SUM -> 6 nibbles, LS first, marked by uo[7] */
      uint8_t seq[32]; int ns=0; seq[ns++]=chip_step(&c,0,0x80|k); while(ns<28) seq[ns++]=chip_step(&c,0,0);
      int s0=-1; for(int i=0;i<ns;i++) if(seq[i]&0x80){ s0=i; break; }
      got[k]=0; int okb=s0>=0; for(int b=0;b<6;b++){ int i=s0+2*b; if(s0<0||i>=ns||!(seq[i]&0x80)) okb=0; else got[k]|=(seq[i]&0xF)<<(4*b); }
      CHECK(okb); }
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
  CHECK(chip_core_step(&c,0,0x70)==0 && c.fz_val==0x34); /* phase 0: not a debug-nibble tick; value is captured */ for(int i=0;i<3;i++) chip_core_step(&c,0,0);
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
  o=chip_core_step(&c,0,0x60); CHECK(c.fz_val&1); /* run_busy is bank0 bit0 on the tick after the last RUN */
  for(int k=0;k<4;k++) CHECK(c.psum[k]==6);
  CHECK(!c.run_busy); for(int k=0;k<4;k++) CHECK(c.mul[k]==3); /* products sticky, no zero after lonely phase 2 */
  for(int i=0;i<4;i++) chip_core_step(&c,0,0); /* 8-bit window must end before the next freezing DBG */
  chip_core_step(&c,0,0x90); CHECK(c.fz_val==3); /* DEBUG_MULTIPLY = last latched */
  for(int i=0;i<4;i++) chip_core_step(&c,0,0);
  chip_core_step(&c,0,0xA0); CHECK(c.fz_val==6); /* DEBUG_ADD with run_busy=0 = psum (sticky mul ignored); 6 nibbles */
  for(int i=0;i<12;i++) chip_core_step(&c,0,0);
  chip_core_step(&c,0x11,0x20); chip_core_step(&c,0,0x58); CHECK(c.illegal); /* CLEAR bit3 vs run_busy */
  chip_core_step(&c,0,0x51); chip_core_step(&c,0,0x58); CHECK(!c.illegal && c.psum[0]==0);
  /* 6 nibbles from one DEBUG_PARTIAL_SUM, LS first; [3:2] ignored. uo[7] on each out_tick, uo[6]=0. */
  for(int al=0;al<2;al++){ chip_reset(&c,1,0); for(int i=0;i<al;i++) chip_core_step(&c,0,0);
    c.psum[1]=0x123456; uint8_t got[6]; int nt=0;
    for(int e=0;e<12;e++){ int t=c.phase; uint8_t b=chip_core_step(&c,0,e?0:0x8D); CHECK(c.debug_busy);
      if(t){ CHECK((b&0xC0)==0x80); if(nt<6) got[nt++]=b&0xF; } else CHECK(!(b&0x80)); }
    CHECK(nt==6 && got[0]==0x6 && got[1]==0x5 && got[2]==0x4 && got[3]==0x3 && got[4]==0x2 && got[5]==0x1 && !c.illegal);
    o=chip_core_step(&c,0,0); CHECK(!c.debug_busy && !(o&0x80)); }
  printf("PIPELINE ok\n"); }
/* Nibble DEBUG, 8-flag bank 0, RUN-in-window illegal, nested DBG does not restart. */
static void test_freeze_rules(void){ chip_t c;
  chip_reset(&c,1,0); chip_core_step(&c,0,0x60); CHECK(c.fz_val==0x88 && !c.illegal); /* phase 0 */
  chip_reset(&c,1,0); chip_core_step(&c,0,0); chip_core_step(&c,0,0x60); CHECK(c.fz_val==0x8C && !c.illegal); /* phase 1 = out_tick */
  /* 8-bit window: RUN on k+1..k+3 illegal and ignored; k+4 legal. Prior RUN's phase 2 still commits on the DBG tick. */
  chip_reset(&c,1,0); chip_core_step(&c,0x11,0x10); chip_core_step(&c,0x11,0x20); /* RUN on the tick before DBG */
  chip_core_step(&c,0x5A,0xB0); CHECK(c.fz_val==0x5A && c.psum[0]==1); /* phase 2 completed on the DBG tick */
  int32_t ps=c.psum[0]; int16_t mul=c.mul[0]; uint32_t cap=c.fz_val;
  for(int i=0;i<3;i++){ chip_core_step(&c,0x22,0x20); CHECK(c.illegal && c.psum[0]==ps && c.mul[0]==mul && !c.run_busy && c.fz_val==cap); }
  chip_core_step(&c,0x11,0x20); chip_core_step(&c,0,0); /* k+4 is the first legal RUN; sticky illegal stays set */
  CHECK(c.illegal && c.psum[0]==ps+1);
  chip_core_step(&c,0,0x51); CHECK(!c.illegal);
  /* nested freezing DBG: sticky illegal, stream unchanged, no restart */
  chip_reset(&c,1,0); c.buf=0xAB; chip_core_step(&c,0,0x70); cap=c.fz_val; CHECK(cap==0xAB);
  chip_core_step(&c,0xFF,0xB0); CHECK(c.illegal && c.fz_val==cap && c.fz_n==2);
  { int seen0=0,seen1=0; chip_reset(&c,1,0); c.buf=0xAB;
    for(int e=0;e<4;e++){ int t=c.phase; uint8_t b=chip_core_step(&c,0,e? (e==1?0xB0:0) :0x70);
      if(t && (b&0x80)){ if((b&0xF)==0xB) seen0++; else if((b&0xF)==0xA) seen1++; else seen0=-9; CHECK((b&0x40)==0); } }
    CHECK(c.illegal && c.fz_val==0xAB && seen0==1 && seen1==1); }
  /* 24-bit window: RUN on k+1..k+11 illegal; first legal RUN is k+12. Nested DEBUG_PARTIAL_SUM does not replace the sum. */
  chip_reset(&c,1,0); c.buf=0x11; c.psum[0]=0x123456; chip_core_step(&c,0,0x80); CHECK(c.fz_val==0x123456 && c.fz_n==6);
  for(int i=1;i<=11;i++){ chip_core_step(&c,0x11,i==1?0x80:0x20); CHECK(c.illegal && c.fz_val==0x123456 && c.mul[0]==0 && c.psum[0]==0x123456); }
  CHECK(c.fz_left==0);
  chip_core_step(&c,0,0x51); chip_core_step(&c,0x11,0x20); chip_core_step(&c,0,0); CHECK(c.psum[0]==0x123456+1 && !c.illegal);
  /* bank != 0 during a freeze: illegal, no restart */
  chip_reset(&c,1,0); c.buf=0x10; chip_core_step(&c,0,0x70); chip_core_step(&c,0,0x61);
  CHECK(c.illegal && c.fz_val==0x10 && c.fz_n==2);
  /* dump pauses for both debug-nibble ticks; uo[6] framing still yields 24 nibbles */
  chip_reset(&c,1,0); c.psum[0]=0x654321; chip_core_step(&c,0,0x30);
  int n=0,e=0; uint8_t gotn[24]; while(n<24 && e<80){ int t=c.phase; uint8_t b=chip_core_step(&c,0,e==3?0x70:0); e++;
    if(t && (b&0x40)) gotn[n++]=b&0xF; }
  CHECK(n==24 && gotn[0]==1 && gotn[1]==2 && gotn[2]==3 && gotn[5]==6 && c.illegal==0);
  printf("FREEZE ok\n"); }
int main(void){ test_bufbus(); test_pipeline(); test_freeze_rules(); for(int a=1;a>=0;a--) for(int p=0;p<2;p++) { test_core(a,p); test_pin(a,p); test_pipe(a,p); } printf(fails?"FAILED %d\n":"ALL PASS\n",fails); return fails!=0; }
#endif
