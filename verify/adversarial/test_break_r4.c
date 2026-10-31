/* Adversarial round 4 vs golden f80b7f0. Link with chip.o built -DCHIP_NO_MAIN. */
#include <stdio.h>
#include <string.h>
#include "../../golden/chip.h"
static int fails=0, passes=0, gaps=0;
#define CHECK(id,x) do{ if(!(x)){printf("FAIL [%s] %s:%d %s\n",id,__FILE__,__LINE__,#x);fails++;} else {printf("pass [%s]\n",id);passes++;} }while(0)
#define GAP(id,x,msg) do{ if(!(x)){printf("GAP  [%s] %s\n",id,msg);gaps++;} else {printf("pass [%s]\n",id);passes++;} }while(0)
static uint8_t S(chip_t*c,uint8_t d,uint8_t i){ return chip_step(c,d,i); }
static void load2(chip_t*c){ S(c,0x21,0x10); S(c,0x3F,0x10); }
static void l77(chip_t*c){ S(c,0x77,0x10); S(c,0x77,0x10); }
static void mac(chip_t*c){ S(c,0,0x20); S(c,0,0x00); }
static void to_final(chip_t*c){ S(c,0,0x30); for(int i=0;i<23;i++) S(c,0,0); }

static void f16(void){ chip_t c; chip_reset(&c,1,0); l77(&c); c.psum[0]=0x7FFFF0; S(&c,0,0x20);
  uint8_t o=S(&c,0,0x60);
  CHECK("R4-F16-precond-ovf-after-step", c.ovf);
  CHECK("R4-F16-dbgflags-phase2-shows-inflight-ovf", o&1); }
static void f17(void){ chip_t c; chip_reset(&c,1,0); l77(&c); mac(&c); int32_t pre=c.psum[0]; S(&c,0,0x20);
  uint8_t o=S(&c,0,0x80);
  CHECK("R4-F17-precond-post-acc", c.psum[0]==pre+49);
  CHECK("R4-F17-dbgpsum-phase2-snapshot-before-commit", o==(uint8_t)pre); }
static void f18(void){ chip_t c; chip_reset(&c,1,0); l77(&c); c.ovf=1; S(&c,0,0x20); S(&c,0,0x51);
  CHECK("R4-F18-clear-flags-phase2-nonwrap-ovf0", !c.ovf && !c.illegal && c.psum[0]==49); }
static void f19(void){ chip_t c; chip_reset(&c,1,0); l77(&c); S(&c,0,0x20); S(&c,0,0x20); S(&c,0,0);
  CHECK("R4-F19-busy-run-ignored-acc-once", c.illegal && c.psum[0]==49 && c.psum[3]==49 && !c.run_busy); }
static void cfgB_neg(void){ chip_t c; chip_reset(&c,0,0); S(&c,0x88,0x10); S(&c,0x77,0x10); mac(&c); mac(&c);
  int ok=1; for(int k=0;k<4;k++){ uint32_t v=S(&c,0,0x80|k)|S(&c,0,0x84|k)<<8|S(&c,0,0x88|k)<<16; int32_t s=((v&0xFFFFFF)^0x800000)-0x800000; ok&=s==-112&&s==c.psum[k]; }
  CHECK("R4-X1-cfgB-psum-bytes-neg-reconstruct", ok && !c.illegal); }
static void abort_final(void){ chip_t c; chip_reset(&c,1,0); load2(&c); mac(&c); to_final(&c); S(&c,0,0x40);
  CHECK("R4-X2-abort-final-nibble-legal", !c.illegal && !c.dump_busy && !c.dump_paused); }
static void live_ovf(void){ chip_t c; chip_reset(&c,1,0); l77(&c); c.psum[1]=0x7FFFF0; S(&c,0,0x20); uint8_t o=S(&c,0,0);
  CHECK("R4-X3-live-return-ovf-uo4", o&0x10); }
static void add_preview(void){ chip_t c; chip_reset(&c,1,0); l77(&c); mac(&c); S(&c,0,0x20); uint8_t a=S(&c,0,0xA0); uint8_t b=S(&c,0,0xA0);
  CHECK("R4-X4-dbgadd-preview-equals-committed", a==b && b==(uint8_t)c.psum[0] && c.psum[0]==98); }
static void clear5f_dump(void){ chip_t c; chip_reset(&c,1,0); load2(&c); mac(&c); int32_t p=c.psum[0]; S(&c,0,0x30); S(&c,0,0); S(&c,0,0x20); S(&c,0,0x5F);
  CHECK("R4-X5-clear5f-dump-collide-acc-runs", c.illegal && c.psum[0]==2*p && !c.run_busy && c.dump_busy); }
static void dump_run_add(void){ chip_t c; chip_reset(&c,1,0); load2(&c); mac(&c); int32_t p=c.psum[0]; S(&c,0,0x30); S(&c,0,0); S(&c,0,0x20);
  int idx=c.dump_idx; uint8_t o=S(&c,0,0xA0);
  CHECK("R4-X6-cfgA-dump-run-dbgadd-pause", c.dump_paused && c.dump_idx==idx && c.dump_busy);
  CHECK("R4-X6-cfgA-dbgadd-preview+acc", o==(uint8_t)(2*p) && c.psum[0]==2*p); }
static void illegal_p2(void){ chip_t c; chip_reset(&c,1,0); l77(&c); S(&c,0,0x20); S(&c,0,0xC0); S(&c,0,0);
  CHECK("R4-X7-illegal-op-phase2-acc-completes", c.illegal && c.psum[0]==49); }
static void flags_runbusy(void){ chip_t c; chip_reset(&c,1,0); l77(&c); S(&c,0,0x20); uint8_t o=S(&c,0,0x60);
  CHECK("R4-X8-dbgflags-runbusy1-state0", (o&0x10) && !c.run_busy); }
int main(void){ f16(); f17(); f18(); f19(); cfgB_neg(); abort_final(); live_ovf(); add_preview(); clear5f_dump(); dump_run_add(); illegal_p2(); flags_runbusy();
  printf("R4 pass=%d fail=%d gap=%d\n",passes,fails,gaps); return fails!=0; }
