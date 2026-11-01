/* Adversarial round 2 vs fixed golden (d85071b). Link with chip.o built -DCHIP_NO_MAIN. */
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
static int32_t sx(int32_t g){ return ((g&0xFFFFFF)^0x800000)-0x800000; }
/* run dump; ins_at(cycle) gives instruction; collect only non-frozen nibbles */
static int dump_collect(chip_t*c,const uint8_t*ins,int nins,int32_t got[4]){
  int n=0,cyc=0; memset(got,0,16); S(c,0,0x30);
  while(c->dump_busy && cyc<200){ uint8_t i=cyc<nins?ins[cyc]:0; uint8_t o=S(c,0,i); cyc++;
    if(c->phase==0 && !c->ofz){ if(n<24) got[n/6]|=(o&0xF)<<(4*(n%6)); n++; } }
  return n; }
static int content_ok(chip_t*c,int32_t got[4]){ for(int k=0;k<4;k++) if(sx(got[k])!=c->psum[k]) return 0; return 1; }

static void r2_f8(void){ chip_t c; chip_reset(&c,1,0); load2(&c); mac(&c); S(&c,0,0x30);
  hr_to_final(&c); /* 23 nibbles out; next edge is the final-nibble out_tick */
  int busy_at_start=c.dump_busy; int32_t ob=c.outbuf[0];
  S(&c,0,0x54); /* CLEAR outbuf on final-nibble cycle */
  CHECK("R2-F8-precond-busy-at-start", busy_at_start);
  CHECK("R2-F8-clear-outbuf-last-nibble-illegal", c.illegal);
  CHECK("R2-F8-clear-outbuf-last-nibble-kept", c.outbuf[0]==ob && ob!=0); }
static void r2_f9(void){ chip_t c; chip_reset(&c,1,0); load2(&c); mac(&c);
  uint8_t o=S(&c,0,0xA0); /* idle: run_busy=0 */
  CHECK("R2-F9-dbg-add-idle-no-phantom-acc", o==(uint8_t)c.psum[0]);
  chip_t d; chip_reset(&d,1,0); load2(&d); mac(&d); S(&d,0,0x20); /* phase1 done, mul pending */
  /* DBG_ADD on phase2 cycle: pending preview psum+mul before the deferred accumulate (R3-F15 revision) */
  int32_t pre=d.psum[0]; int16_t m=d.mul[0]; uint8_t o2=S(&d,0,0xA0);
  CHECK("R2-F9b-dbg-add-phase2-pending-preview", o2==(uint8_t)(pre+m) && m!=0 && d.psum[0]==pre+m); /* Forge lock (revised R3-F15): phase-2 DBG_ADD == low(psum_before+mul) */ }
static void r2_f10(void){ chip_t c; chip_reset(&c,1,0); load2(&c); mac(&c);
  uint8_t ins[6]={0,0x8C,0,0x61,0,0}; int32_t got[4]; int n=dump_collect(&c,ins,6,got);
  CHECK("R2-F10-illegal-dbg-during-dump-24-nibbles", n==24);
  CHECK("R2-F10-illegal-dbg-during-dump-content", content_ok(&c,got));
  /* Cast preference: any DBG_* pauses. Model emits nibble on illegal DBG (no pause). */
  chip_t d; chip_reset(&d,1,0); load2(&d); mac(&d); S(&d,0,0x30); S(&d,0,0); hr_align_tick(&d); int idx=d.dump_idx; S(&d,0,0x8C);
  CHECK("R2-F10b-illegal-dbg-no-pause", d.dump_idx==idx+1 && !d.dump_paused); /* Forge lock: only freezing DBG pauses */ }
static void r2_f11(void){ chip_t c; chip_reset(&c,1,0); S(&c,0x77,0x10); S(&c,0x77,0x10); /* 7*7=49 */
  c.psum[0]=0x7FFFF0; S(&c,0,0x20); S(&c,0,0x51); /* phase2 wraps, CLEAR flags same cycle */
  CHECK("R2-F11-ovf-from-phase2-survives-same-cycle-clear", c.ovf && !c.illegal); /* Forge lock */ }
static void dbg_pauses(void){ chip_t c; chip_reset(&c,1,0); load2(&c); mac(&c);
  uint8_t ins[12]={0,0,0x70,0x71,0x80,0x90,0xA0,0xB0,0,0x60,0x60,0}; int32_t got[4];
  int n=dump_collect(&c,ins,12,got);
  CHECK("R2-A1-consec-dbg-pauses-24", n==24); CHECK("R2-A1-consec-dbg-pauses-content", content_ok(&c,got));
  chip_t d; chip_reset(&d,1,0); load2(&d); mac(&d); S(&d,0,0x30); S(&d,0,0x70);
  int p1=d.dump_paused; S(&d,0,0); S(&d,0,0); CHECK("R2-A1-dump_paused-only-on-freeze", p1 && !d.dump_paused);
  chip_t e; chip_reset(&e,1,0); load2(&e); mac(&e); S(&e,0,0x30); S(&e,0,0); uint8_t o=S(&e,0,0x60);
  CHECK("R2-A2-dbgflags-during-dump-paused-bit5", o&0x20); CHECK("R2-A2-dbgflags-during-dump-busy-bit2", o&0x04);
  chip_t f; chip_reset(&f,1,0); load2(&f); mac(&f); S(&f,0,0x30); S(&f,0,0); S(&f,0,0x70); S(&f,0,0x40);
  CHECK("R2-A3-abort-after-pause", !f.dump_busy && f.outbuf[0]==f.psum[0] && !f.illegal); }
static void cfg_run(void){ chip_t c; chip_reset(&c,1,0); load2(&c); S(&c,0,0x70); S(&c,0,0x20);
  CHECK("R2-A4-cfgA-run-after-freeze-allowed", c.run_busy && !c.illegal);
  chip_t d; chip_reset(&d,0,0); load2(&d); S(&d,0,0x8C); S(&d,0,0x51); S(&d,0,0x20);
  CHECK("R2-A5-cfgB-run-after-illegal-nonfreeze-allowed", d.run_busy && !d.illegal);
  chip_t e; chip_reset(&e,0,0); load2(&e); S(&e,0,0x70); S(&e,0,0x20);
  CHECK("R2-A5b-cfgB-run-after-freeze-illegal", !e.run_busy && e.illegal); }
static void dbgadd_ovf(void){ chip_t c; chip_reset(&c,1,0); S(&c,0x77,0x10); S(&c,0x77,0x10); S(&c,0,0x20); S(&c,0,0);
  c.psum[0]=0x7FFFF0; c.ovf=0; S(&c,0,0xA0); CHECK("R2-A6-dbg-add-no-ovf", !c.ovf); }
static void clear_pe_p2(void){ for(int A=0;A<2;A++){ chip_t c; chip_reset(&c,A,0); load2(&c); mac(&c); int32_t b=c.psum[0];
  S(&c,0,0x20); S(&c,0,0x58); CHECK("R2-A7-clear-pe-phase2-illegal", c.illegal); CHECK("R2-A7-psum-post-acc", c.psum[0]==2*b && b!=0); } }
static void live_order(void){ chip_t c; chip_reset(&c,1,0); load2(&c); S(&c,0x77,0x10); S(&c,0x77,0x10);
  c.psum[0]=0x7FFFF0; S(&c,0,0x20); S(&c,0,0); /* ovf */ S(&c,0,0xF0); /* illegal */ S(&c,0,0x30);
  uint8_t o=S(&c,0,0); CHECK("R2-A8-live-flags-OVF-ill-dump-dbg", (o>>4)==0x7); }
int main(void){ r2_f8(); r2_f9(); r2_f10(); r2_f11(); dbg_pauses(); cfg_run(); dbgadd_ovf(); clear_pe_p2(); live_order();
  printf("R2 pass=%d fail=%d gap=%d\n",passes,fails,gaps); return fails!=0; }
