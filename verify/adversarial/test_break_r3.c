/* Adversarial round 3 vs fixed golden (b51e376). Link with chip.o built -DCHIP_NO_MAIN. */
#include <stdio.h>
#include <string.h>
#include "../../golden/chip.h"
static int fails=0, passes=0, gaps=0;
#define CHECK(id,x) do{ if(!(x)){printf("FAIL [%s] %s:%d %s\n",id,__FILE__,__LINE__,#x);fails++;} else {printf("pass [%s]\n",id);passes++;} }while(0)
#define GAP(id,x,msg) do{ if(!(x)){printf("GAP  [%s] %s\n",id,msg);gaps++;} else {printf("pass [%s]\n",id);passes++;} }while(0)
/* Buffer+bus retarget (Alex 2026-11-01): LOAD writes the one input buffer; RUN multiplies it by the live ui_in byte.
 * Legacy vector adapter: these R1-R6 vectors were written for the old 2-LOAD shift (first byte = "top"). S() keeps that
 * byte in g_bus and, for a RUN driven with d=0, presents it on the bus, so legacy expectations still hold. New
 * buffer+bus semantics are tested directly in golden test_bufbus and test_break.c t_bufbus. */
static uint8_t g_bus;
static uint8_t S(chip_t*c,uint8_t d,uint8_t i){ if((i>>4)==1) g_bus=c->buf; if((i>>4)==2 && d==0) d=g_bus; return chip_step(c,d,i); }
#include "halfrate.h"
static void load2(chip_t*c){ S(c,0x21,0x10); S(c,0x3F,0x10); }
static void mac(chip_t*c){ S(c,0,0x20); S(c,0,0x00); }
/* DUMP_LOAD then 23 idle cycles: next cycle is the final-nibble cycle (dump_idx==23) */
static void to_final(chip_t*c){ S(c,0,0x30); hr_to_final(c); }

static void f12(void){ chip_t c; chip_reset(&c,1,0); load2(&c); mac(&c); to_final(&c);
  CHECK("R3-F12-precond", c.dump_busy && c.dump_idx==23);
  S(&c,0,0x30);
  CHECK("R3-F12-dump-load-final-nibble-illegal", c.illegal);
  CHECK("R3-F12-dump-load-final-nibble-no-restart", !c.dump_busy); }
static void f13(void){ chip_t c; chip_reset(&c,1,0); load2(&c); mac(&c); to_final(&c);
  S(&c,0,0x60);
  CHECK("R3-F13-dbgflags-final-nibble-paused-bit1", c.fz_val&0x02);
  CHECK("R3-F13-dbgflags-final-nibble-busy-bit6-consistent", ((c.fz_val>>6)&1)==((c.fz_val>>1)&1)); }
static void f14(void){ chip_t c; chip_reset(&c,1,0); load2(&c); S(&c,0,0x20); S(&c,0,0x60);
  CHECK("R3-F14-dbgflags-phase2-run_busy", c.fz_val&1); /* bit0 = run busy; phase 2 is in flight */ }
static void f15(void){ /* DBG_ADD preview of the in-flight add, captured in fz_val */
  chip_t c; chip_reset(&c,1,0); S(&c,0x77,0x10); S(&c,0x77,0x10); S(&c,0,0x20);
  int32_t pre=c.psum[0]; S(&c,0,0xA0); /* only cycle after RUN */
  CHECK("R3-F15-precond-post-acc", c.psum[0]==pre+49);
  CHECK("R3-F15-dbg-add-phase2-pending-preview", c.fz_val==(uint32_t)(pre+49) && !c.ovf); }
static void dbgmul(void){ chip_t c; chip_reset(&c,1,0); load2(&c); S(&c,0,0x20); S(&c,0,0);
  int16_t m0=c.mul[0], m3=c.mul[3]; S(&c,0,0x90);
  CHECK("R3-S1-dbg-mul-after-phase2-sticky", m0!=0 && c.fz_val==(uint8_t)m0);
  for(int i=0;i<3;i++) S(&c,0,0); /* drain the 8-bit window before the next read */
  S(&c,0,0x93); CHECK("R3-S1b-dbg-mul-pe3", c.fz_val==(uint8_t)m3 && !c.illegal); }
static void ovf_bounds(void){ /* +: 7*7=49 all PEs; push each to wrap */
  chip_t c; chip_reset(&c,1,0); S(&c,0x77,0x10); S(&c,0x77,0x10);
  for(int k=0;k<4;k++) c.psum[k]=0x7FFFFF-49;
  S(&c,0,0x20); S(&c,0,0);
  CHECK("R3-S2-exact-max-no-ovf", !c.ovf && c.psum[0]==0x7FFFFF && c.psum[3]==0x7FFFFF);
  S(&c,0,0x20); S(&c,0,0);
  CHECK("R3-S2-pos-wrap-all-pes", c.ovf && c.psum[0]==-0x800000+48 && c.psum[1]==c.psum[0] && c.psum[2]==c.psum[0] && c.psum[3]==c.psum[0]);
  chip_t d; chip_reset(&d,1,0); S(&d,0x88,0x10); S(&d,0x77,0x10); /* -8*7=-56 */
  for(int k=0;k<4;k++) d.psum[k]=-0x800000+56;
  S(&d,0,0x20); S(&d,0,0);
  CHECK("R3-S2-exact-min-no-ovf", !d.ovf && d.psum[2]==-0x800000);
  S(&d,0,0x20); S(&d,0,0);
  CHECK("R3-S2-neg-wrap", d.ovf && d.psum[1]==0x7FFFFF-55);
  chip_t e; chip_reset(&e,1,0); S(&e,0x77,0x10); S(&e,0x77,0x10); e.psum[2]=0x7FFFF0; S(&e,0,0x20); S(&e,0,0);
  CHECK("R3-S2-single-pe-wrap-sets-ovf", e.ovf && e.psum[0]==49); }
static void clear_coll(void){ chip_t c; chip_reset(&c,1,0); load2(&c); mac(&c); c.ovf=1; S(&c,0,0x30); S(&c,0,0);
  int32_t ob=c.outbuf[0]; S(&c,0,0x55);
  CHECK("R3-S3-clear-flags+outbuf-during-dump-illegal", c.illegal && c.ovf && c.outbuf[0]==ob && c.dump_busy); }
static void abort_reload(void){ chip_t c; chip_reset(&c,1,0); load2(&c); mac(&c); S(&c,0,0x30); S(&c,0,0); S(&c,0,0x40); S(&c,0,0x30);
  CHECK("R3-S4-dump-load-after-abort", !c.illegal && c.dump_busy && c.dump_idx==0); }
static void clear_pe_dump(void){ chip_t c; chip_reset(&c,1,0); load2(&c); mac(&c); S(&c,0,0x30); S(&c,0,0); int32_t ob=c.outbuf[0];
  S(&c,0,0x58);
  CHECK("R3-S5-clear-pe-mid-dump-ok", !c.illegal && c.psum[0]==0 && c.outbuf[0]==ob && c.dump_busy && c.dump_idx==1); } /* 3 edges after load = 1 out_tick advance (half-rate) */
static void cfgA_combo(void){ chip_t c; chip_reset(&c,1,0); load2(&c); mac(&c); int32_t p=c.psum[0];
  S(&c,0,0x30); { int e=0; while(!(c.dump_idx==23 && c.phase==0) && e<400){ S(&c,0,0); e++; } } S(&c,0,0x20); /* RUN phase1 on the non-tick edge before the final out_tick */
  int32_t ob=c.outbuf[0]; S(&c,0,0x54); /* phase2 + final nibble + CLEAR outbuf */
  CHECK("R3-S6-cfgA-p2-final-clear-outbuf-collide", c.illegal && c.outbuf[0]==ob);
  CHECK("R3-S6-cfgA-p2-acc-done", c.psum[0]==2*p && !c.run_busy && !c.dump_busy); }
static void sticky(void){ chip_t c; chip_reset(&c,1,0); S(&c,0,0xF0); S(&c,0,0x60); S(&c,0,0);
  CHECK("R3-S7-sticky-illegal-survives-dbgflags", (c.fz_val&0x20) && c.illegal); }
static void place(void){ for(int P=0;P<2;P++){ chip_t c; chip_reset(&c,1,P); S(&c,0x77,0x10); mac(&c);
  CHECK(P?"R3-S8-place1-one-load-zero":"R3-S8-place0-one-load-zero", !c.psum[0]&&!c.psum[1]&&!c.psum[2]&&!c.psum[3]); } }
static void neg8(void){ chip_t c; chip_reset(&c,1,0); S(&c,0x88,0x10); S(&c,0x88,0x10); S(&c,0,0x20);
  int ok=1; for(int k=0;k<4;k++) ok&=c.mul[k]==64; CHECK("R3-S9-neg8-sq-mul", ok); S(&c,0,0);
  ok=1; for(int k=0;k<4;k++) ok&=c.psum[k]==64; CHECK("R3-S9-neg8-sq-psum", ok && !c.ovf); }
static void dbgadd_then_wrap(void){ chip_t c; chip_reset(&c,1,0); S(&c,0x77,0x10); S(&c,0x77,0x10);
  c.psum[0]=0x7FFFF0; S(&c,0,0xA0); CHECK("R3-S10-dbg-add-no-ovf", !c.ovf);
  for(int i=0;i<11;i++) S(&c,0,0); /* 24-bit window is 12 edges; RUN on k+1 would be ignored */
  S(&c,0,0x20); S(&c,0,0xA0); CHECK("R3-S10-real-phase2-wrap-ovf", c.ovf); }
int main(void){ f12(); f13(); f14(); f15(); dbgmul(); ovf_bounds(); clear_coll(); abort_reload(); clear_pe_dump(); cfgA_combo(); sticky(); place(); neg8(); dbgadd_then_wrap();
  printf("R3 pass=%d fail=%d gap=%d\n",passes,fails,gaps); return fails!=0; }
