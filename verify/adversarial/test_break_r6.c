/* Adversarial round 6 vs golden 89dad4e (R5-F22 fix). Link with chip.o built -DCHIP_NO_MAIN. */
#include <stdio.h>
#include <string.h>
#include "../../golden/chip.h"
static int fails=0, passes=0;
#define CHECK(id,x) do{ if(!(x)){printf("FAIL [%s] %s:%d %s\n",id,__FILE__,__LINE__,#x);fails++;} else {printf("pass [%s]\n",id);passes++;} }while(0)
/* Buffer+bus retarget (Alex 2026-11-01): LOAD writes the one input buffer; RUN multiplies it by the live ui_in byte.
 * Legacy vector adapter: these R1-R6 vectors were written for the old 2-LOAD shift (first byte = "top"). S() keeps that
 * byte in g_bus and, for a RUN driven with d=0, presents it on the bus, so legacy expectations still hold. New
 * buffer+bus semantics are tested directly in golden test_bufbus and test_break.c t_bufbus. */
static uint8_t g_bus;
static uint8_t S(chip_t*c,uint8_t d,uint8_t i){ if((i>>4)==1) g_bus=c->buf; if((i>>4)==2 && d==0) d=g_bus; return chip_step(c,d,i); }
#include "halfrate.h"
static void l77(chip_t*c){ S(c,0x77,0x10); S(c,0x77,0x10); }
static int32_t sx(uint32_t v){ return ((v&0xFFFFFF)^0x800000)-0x800000; }
static int outeq(chip_t*c){ int ok=1; for(int k=0;k<4;k++) ok&=c->outbuf[k]==c->psum[k]; return ok; }

static void f22a(void){ chip_t c,d; chip_reset(&c,1,0); l77(&c); S(&c,0,0x20); S(&c,0,0); S(&c,0,0x20);
  d=c; uint8_t prev=S(&d,0,0xA0); /* DBG_ADD PE0 preview on phase 2 */
  S(&c,0,0x30);
  CHECK("R6-F22a-outbuf-eq-psum", outeq(&c) && c.psum[0]==98);
  CHECK("R6-F22a-dbgadd-lowbyte-pe0", prev==(uint8_t)c.outbuf[0]);
  int32_t got[4]={0}; uint8_t nb[24]; hr_idle_nibs(&c,nb,24); for(int n=0;n<24;n++) got[n/6]|=nb[n]<<(4*(n%6));
  int ok=1; for(int k=0;k<4;k++) ok&=sx(got[k])==c.psum[k];
  CHECK("R6-F22a-stream-24nib-eq-psum", ok); }
static void f22b(void){ chip_t c; chip_reset(&c,1,0); l77(&c); c.psum[0]=0x7FFFF0; S(&c,0,0x20);
  CHECK("R6-F22b-precond-no-ovf", !c.ovf); S(&c,0,0x30);
  CHECK("R6-F22b-wrapped-outbuf-eq-psum-ovf", c.ovf==1 && outeq(&c) && c.outbuf[0]==sx(0x7FFFF0+49)); }
static void f22c(void){ chip_t c; chip_reset(&c,1,0); c.psum[0]=5; c.psum[1]=-7; c.psum[2]=0x123456; c.psum[3]=-0x800000;
  memset(c.mul,0,sizeof c.mul); c.mul[0]=0; S(&c,0,0x30);
  CHECK("R6-F22c-idle-memcpy", outeq(&c) && c.outbuf[0]==5 && c.outbuf[3]==-0x800000 && !c.ovf);
  chip_reset(&c,1,0); l77(&c); S(&c,0,0x20); S(&c,0,0); c.mul[0]=99; /* stale mul, not phase 2 */ S(&c,0,0x30);
  CHECK("R6-F22c-idle-no-phantom-mul", outeq(&c) && c.outbuf[0]==49); }
static void s1(void){ chip_t c; chip_reset(&c,1,0); l77(&c); S(&c,0,0x20); S(&c,0,0x30);
  CHECK("R6-S1-p2-dumpload-legal-busy", !c.illegal && c.dump_busy==1); }
static void s2(void){ chip_t c; chip_reset(&c,1,0); l77(&c); S(&c,0,0x20); S(&c,0,0x30); S(&c,0,0x54);
  CHECK("R6-S2-clear-outbuf-collides", c.illegal==1); }
int main(void){ f22a(); f22b(); f22c(); s1(); s2();
  printf("R6 pass=%d fail=%d\n",passes,fails); return fails!=0; }
