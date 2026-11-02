/* Adversarial round 5 vs golden e096fbf. Link with chip.o built -DCHIP_NO_MAIN. */
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
static void l77(chip_t*c){ S(c,0x77,0x10); S(c,0x77,0x10); }
static void mac(chip_t*c){ S(c,0,0x20); S(c,0,0x00); }
static int32_t sx(uint32_t v){ return ((v&0xFFFFFF)^0x800000)-0x800000; }

static void f22(void){ chip_t c; chip_reset(&c,1,0); l77(&c); mac(&c); S(&c,0,0x20); S(&c,0,0x30);
  int ok=1; for(int k=0;k<4;k++) ok&=c.outbuf[k]==c.psum[k];
  CHECK("R5-F22-precond-psum-committed", c.psum[0]==98 && !c.illegal && c.dump_busy);
  CHECK("R5-F22-dumpload-phase2-captures-committed-psum", ok);
  int32_t got[4]={0}; uint8_t nb[24]; hr_idle_nibs(&c,nb,24); for(int n=0;n<24;n++) got[n/6]|=nb[n]<<(4*(n%6));
  CHECK("R5-F22-stream-equals-psum", sx(got[0])==c.psum[0]); }
static void f23(void){ chip_t c; chip_reset(&c,1,0); l77(&c); S(&c,0,0x20); S(&c,0,0x52);
  CHECK("R5-F23-clear-inbuf-phase2-mul-latched", c.psum[0]==49 && c.psum[3]==49 && !c.buf && !c.illegal); }
static void f24(void){ chip_t c;
  chip_reset(&c,1,0); l77(&c); c.psum[2]=0x7FFFF0; S(&c,0,0x20); S(&c,0,0x60);
  CHECK("R5-F24a-one-lane-wrap-bit4", (c.fz_val&0x10) && c.ovf);
  chip_reset(&c,1,0); l77(&c); c.ovf=1; S(&c,0,0x20); S(&c,0,0x60);
  CHECK("R5-F24b-sticky-ovf-no-wrap-bit4", (c.fz_val&0x10) && c.ovf);
  chip_reset(&c,1,0); l77(&c); c.ovf=1; c.psum[0]=0x7FFFF0; S(&c,0,0x51); CHECK("R5-F24c-precond-cleared", !c.ovf);
  S(&c,0,0x20); S(&c,0,0x60);
  CHECK("R5-F24c-clear-then-phase2-wrap", (c.fz_val&0x10) && c.ovf); }
/* one DEBUG_PARTIAL_SUM/DEBUG_ADD opcode -> 6 nibbles / 12 core edges, LS nibble first. uo[7] marks each debug nibble. */
static uint32_t rd24(chip_t*c,uint8_t op){ uint32_t v=0; int n=0; for(int e=0;e<12;e++){ uint8_t o=chip_step(c,0,e?0:op); if((o&0x80)&&n<6) v|=(uint32_t)(o&0xF)<<(4*n++); } return v; }
static void f25(void){ chip_t c; chip_reset(&c,1,1); S(&c,0x9A,0x10); S(&c,0x3D,0x10); mac(&c); mac(&c); mac(&c);
  uint8_t b[4][3]; for(int k=0;k<4;k++){ uint32_t v=rd24(&c,0x80|k); for(int j=0;j<3;j++) b[k][j]=v>>(8*j); }
  S(&c,0,0x30); uint8_t n[24]; hr_idle_nibs(&c,n,24);
  int ok=1; for(int k=0;k<4;k++) for(int j=0;j<3;j++) ok&= b[k][j]==(n[k*6+2*j]|n[k*6+2*j+1]<<4);
  CHECK("R5-F25-stream-nibbles-match-dbgpsum-bytes", ok && !c.dump_busy && !c.illegal); }
static void x_load_p2(void){ chip_t c; chip_reset(&c,1,0); l77(&c); S(&c,0,0x20); S(&c,0x11,0x10);
  CHECK("R5-X1-load-phase2-no-effect-on-inflight", c.psum[0]==49 && c.buf==0x11 && g_bus==0x77); }
static void x_mul_p2(void){ chip_t c; chip_reset(&c,1,0); l77(&c); S(&c,0,0x20); S(&c,0,0x90);
  CHECK("R5-X2-dbgmul-phase2-precommit-then-sticky", c.fz_val==49 && c.mul[0]==49); } /* no zero after phase 2 */
static void x_abort2(void){ chip_t c; chip_reset(&c,1,0); S(&c,0,0x30); S(&c,0,0x40); S(&c,0,0x40);
  CHECK("R5-X3-double-abort-legal", !c.illegal && !c.dump_busy); }
static void x_cfgB_dump(void){ chip_t c; chip_reset(&c,0,0); l77(&c); mac(&c); S(&c,0,0x30);
  CHECK("R5-X4-cfgB-dumpload-illegal-psum-intact", c.illegal && c.psum[0]==49 && !c.dump_busy); }
static void x_sticky(void){ chip_t c; chip_reset(&c,1,0); l77(&c); c.psum[0]=0x7FFFF0; mac(&c); S(&c,0,0xC0);
  CHECK("R5-X5-both-sticky", c.ovf && c.illegal); S(&c,0,0x50);
  CHECK("R5-X5-clear-no-bit0-keeps-both", c.ovf && c.illegal); S(&c,0,0x51);
  CHECK("R5-X5-clear-bit0-clears-both", !c.ovf && !c.illegal); }
static void x_straps(void){ int ok=1; for(int a=0;a<2;a++) for(int p=0;p<2;p++){ chip_t c; chip_reset(&c,a,p);
  S(&c,0,0x60); ok&=c.fz_val==(uint32_t)(0x80|(a<<3)); /* bit7 debug busy, bit3 outbuf; bit6 dump busy stays 0 */
  S(&c,0,0x5F); S(&c,0,0x51); S(&c,0,0); S(&c,0,0x60); ok&=c.fz_val==(uint32_t)(0x80|(a<<3)) && !c.illegal; }
  CHECK("R5-X6-straps-match-reset-survive-clear", ok); }
static void x_dnib(void){ chip_t c; chip_reset(&c,1,0); l77(&c); mac(&c); int ok=1;
  for(int i=0;i<4;i++) ok&=(S(&c,0,0)&0xF)==0;
  CHECK("R5-X7-live-dnib0-when-idle(TBD documented)", ok); }
static void x_maxrate(void){ chip_t c; chip_reset(&c,1,0); S(&c,0x9A,0x10); S(&c,0x3D,0x10); int16_t m[4];
  S(&c,0,0x20); for(int k=0;k<4;k++) m[k]=c.mul[k]; S(&c,0,0); for(int i=1;i<8;i++) mac(&c);
  int ok=1; for(int k=0;k<4;k++) ok&=c.psum[k]==8*m[k];
  CHECK("R5-X8-maxrate-8mac", ok && !c.illegal); }
static void x_hadfreeze(void){ chip_t c; chip_reset(&c,1,0); l77(&c); S(&c,0,0x60); S(&c,0,0x20); S(&c,0,0);
  CHECK("R5-X9-run-in-freeze-window-illegal", c.illegal && !c.run_busy && c.psum[0]==0); }
int main(void){ f22(); f23(); f24(); f25(); x_load_p2(); x_mul_p2(); x_abort2(); x_cfgB_dump(); x_sticky(); x_straps(); x_dnib(); x_maxrate(); x_hadfreeze();
  printf("R5 pass=%d fail=%d gap=%d\n",passes,fails,gaps); return fails!=0; }
