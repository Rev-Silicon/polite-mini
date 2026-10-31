/* Adversarial round 5 vs golden e096fbf. Link with chip.o built -DCHIP_NO_MAIN. */
#include <stdio.h>
#include <string.h>
#include "../../golden/chip.h"
static int fails=0, passes=0, gaps=0;
#define CHECK(id,x) do{ if(!(x)){printf("FAIL [%s] %s:%d %s\n",id,__FILE__,__LINE__,#x);fails++;} else {printf("pass [%s]\n",id);passes++;} }while(0)
#define GAP(id,x,msg) do{ if(!(x)){printf("GAP  [%s] %s\n",id,msg);gaps++;} else {printf("pass [%s]\n",id);passes++;} }while(0)
static uint8_t S(chip_t*c,uint8_t d,uint8_t i){ return chip_step(c,d,i); }
static void l77(chip_t*c){ S(c,0x77,0x10); S(c,0x77,0x10); }
static void mac(chip_t*c){ S(c,0,0x20); S(c,0,0x00); }
static int32_t sx(uint32_t v){ return ((v&0xFFFFFF)^0x800000)-0x800000; }

static void f22(void){ chip_t c; chip_reset(&c,1,0); l77(&c); mac(&c); S(&c,0,0x20); S(&c,0,0x30);
  int ok=1; for(int k=0;k<4;k++) ok&=c.outbuf[k]==c.psum[k];
  CHECK("R5-F22-precond-psum-committed", c.psum[0]==98 && !c.illegal && c.dump_busy);
  CHECK("R5-F22-dumpload-phase2-captures-committed-psum", ok);
  int32_t got[4]={0}; for(int n=0;n<24;n++){ uint8_t o=S(&c,0,0); got[n/6]|=(o&0xF)<<(4*(n%6)); }
  CHECK("R5-F22-stream-equals-psum", sx(got[0])==c.psum[0]); }
static void f23(void){ chip_t c; chip_reset(&c,1,0); l77(&c); S(&c,0,0x20); S(&c,0,0x52);
  CHECK("R5-F23-clear-inbuf-phase2-mul-latched", c.psum[0]==49 && c.psum[3]==49 && !c.left && !c.top && !c.illegal); }
static void f24(void){ chip_t c; uint8_t o;
  chip_reset(&c,1,0); l77(&c); c.psum[2]=0x7FFFF0; S(&c,0,0x20); o=S(&c,0,0x60);
  CHECK("R5-F24a-one-lane-wrap-bit0", (o&1) && c.ovf);
  chip_reset(&c,1,0); l77(&c); c.ovf=1; S(&c,0,0x20); o=S(&c,0,0x60);
  CHECK("R5-F24b-sticky-ovf-no-wrap-bit0", (o&1) && c.ovf);
  chip_reset(&c,1,0); l77(&c); c.ovf=1; c.psum[0]=0x7FFFF0; S(&c,0,0x51); CHECK("R5-F24c-precond-cleared", !c.ovf);
  S(&c,0,0x20); o=S(&c,0,0x60);
  CHECK("R5-F24c-clear-then-phase2-wrap", (o&1) && c.ovf); }
static void f25(void){ chip_t c; chip_reset(&c,1,1); S(&c,0x9A,0x10); S(&c,0x3D,0x10); mac(&c); mac(&c); mac(&c);
  uint8_t b[4][3]; for(int k=0;k<4;k++) for(int j=0;j<3;j++) b[k][j]=S(&c,0,0x80|j<<2|k);
  S(&c,0,0x30); uint8_t n[24]; for(int i=0;i<24;i++) n[i]=S(&c,0,0)&0xF;
  int ok=1; for(int k=0;k<4;k++) for(int j=0;j<3;j++) ok&= b[k][j]==(n[k*6+2*j]|n[k*6+2*j+1]<<4);
  CHECK("R5-F25-stream-nibbles-match-dbgpsum-bytes", ok && !c.dump_busy && !c.illegal); }
static void x_load_p2(void){ chip_t c; chip_reset(&c,1,0); l77(&c); S(&c,0,0x20); S(&c,0x11,0x10);
  CHECK("R5-X1-load-phase2-no-effect-on-inflight", c.psum[0]==49 && c.left==0x11 && c.top==0x77); }
static void x_mul_p2(void){ chip_t c; chip_reset(&c,1,0); l77(&c); S(&c,0,0x20); uint8_t o=S(&c,0,0x90);
  CHECK("R5-X2-dbgmul-phase2-precommit-then-0", o==49 && c.mul[0]==0); }
static void x_abort2(void){ chip_t c; chip_reset(&c,1,0); S(&c,0,0x30); S(&c,0,0x40); S(&c,0,0x40);
  CHECK("R5-X3-double-abort-legal", !c.illegal && !c.dump_busy); }
static void x_cfgB_dump(void){ chip_t c; chip_reset(&c,0,0); l77(&c); mac(&c); S(&c,0,0x30);
  CHECK("R5-X4-cfgB-dumpload-illegal-psum-intact", c.illegal && c.psum[0]==49 && !c.dump_busy); }
static void x_sticky(void){ chip_t c; chip_reset(&c,1,0); l77(&c); c.psum[0]=0x7FFFF0; mac(&c); S(&c,0,0xC0);
  CHECK("R5-X5-both-sticky", c.ovf && c.illegal); S(&c,0,0x50);
  CHECK("R5-X5-clear-no-bit0-keeps-both", c.ovf && c.illegal); S(&c,0,0x51);
  CHECK("R5-X5-clear-bit0-clears-both", !c.ovf && !c.illegal); }
static void x_straps(void){ int ok=1; for(int a=0;a<2;a++) for(int p=0;p<2;p++){ chip_t c; chip_reset(&c,a,p);
  uint8_t o=S(&c,0,0x60); ok&=((o>>6)&3)==(p|a<<1); S(&c,0,0x5F); S(&c,0,0x51); o=S(&c,0,0x60); ok&=((o>>6)&3)==(p|a<<1); }
  CHECK("R5-X6-straps-match-reset-survive-clear", ok); }
static void x_dnib(void){ chip_t c; chip_reset(&c,1,0); l77(&c); mac(&c); int ok=1;
  for(int i=0;i<4;i++) ok&=(S(&c,0,0)&0xF)==0;
  CHECK("R5-X7-live-dnib0-when-idle(TBD documented)", ok); }
static void x_maxrate(void){ chip_t c; chip_reset(&c,1,0); S(&c,0x9A,0x10); S(&c,0x3D,0x10); int16_t m[4];
  S(&c,0,0x20); for(int k=0;k<4;k++) m[k]=c.mul[k]; S(&c,0,0); for(int i=1;i<8;i++) mac(&c);
  int ok=1; for(int k=0;k<4;k++) ok&=c.psum[k]==8*m[k];
  CHECK("R5-X8-maxrate-8mac", ok && !c.illegal); }
static void x_hadfreeze(void){ chip_t c; chip_reset(&c,1,0); l77(&c); S(&c,0,0x60); S(&c,0,0x20); S(&c,0,0);
  CHECK("R5-X9-cfgA-run-after-dbg-allowed", !c.illegal && c.psum[0]==49); }
int main(void){ f22(); f23(); f24(); f25(); x_load_p2(); x_mul_p2(); x_abort2(); x_cfgB_dump(); x_sticky(); x_straps(); x_dnib(); x_maxrate(); x_hadfreeze();
  printf("R5 pass=%d fail=%d gap=%d\n",passes,fails,gaps); return fails!=0; }
