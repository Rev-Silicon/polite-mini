/* Adversarial tests vs docs/LOCKS.md + docs/OPCODE_PROPOSAL.md. Link with chip.o built -DCHIP_NO_MAIN. */
#include <stdio.h>
#include <string.h>
#include "../../golden/chip.h"
static int fails=0, passes=0, gaps=0;
#define CHECK(id,x) do{ if(!(x)){printf("FAIL [%s] %s:%d %s\n",id,__FILE__,__LINE__,#x);fails++;} else passes++; }while(0)
#define GAP(id,x,msg) do{ if(!(x)){printf("GAP  [%s] %s\n",id,msg);gaps++;} else passes++; }while(0)
static uint8_t S(chip_t*c,uint8_t d,uint8_t i){ return chip_step(c,d,i); }
static int s4(int v){ v&=0xF; return v&8?v-16:v; }
static const int PR[4]={2,2,1,1}, PC[4]={2,1,2,1};
static int lanev(uint8_t b,int i){ return s4(i? b>>4 : b); }
static void load2(chip_t*c){ S(c,0x21,0x10); S(c,0x3F,0x10); }

static void t_clear_pe_phase2(int A,int P){ chip_t c; chip_reset(&c,A,P); load2(&c);
  S(&c,0,0x20); S(&c,0,0x00); /* psum = 1 MAC */ int32_t before=c.psum[0];
  S(&c,0,0x20);              /* RUN phase1 */
  S(&c,0,0x58);              /* CLEAR PE on phase-2 cycle: RUN still in flight */
  CHECK("F1-clear-pe-phase2-illegal", c.illegal);
  CHECK("F1-clear-pe-phase2-no-clear", c.psum[0]==2*before);
}
static void t_dump_dbg(int P){ chip_t c; chip_reset(&c,1,P); load2(&c);
  S(&c,0,0x20); S(&c,0,0); int32_t got[4]={0}; int n=0, cyc=0;
  S(&c,0,0x30);
  while(c.dump_busy && cyc<100){ uint8_t i = (cyc==3)?0x70:0x00; uint8_t o=S(&c,0,i); cyc++;
    if(!c.frozen){ if(n<24) got[n/6]|=(o&0xF)<<(4*(n%6)); n++; } }
  CHECK("F2-dump-dbg-24-nibbles", n==24);
  int ok=1; for(int k=0;k<4;k++){ int32_t v=((got[k]&0xFFFFFF)^0x800000)-0x800000; if(v!=c.psum[k]) ok=0; }
  CHECK("F2-dump-dbg-content", ok);
}
static void t_psum_byte3(void){ chip_t c; chip_reset(&c,1,0); S(&c,0,0x8C); CHECK("F3-dbg-psum-byte3-illegal", c.illegal); }
static void t_dump_paused(void){ chip_t c; chip_reset(&c,1,0); int seen=0; load2(&c); S(&c,0,0x30);
  for(int i=0;i<30;i++){ uint8_t o=S(&c,0,(i%2)?0x60:0x20); if(c.dump_paused) seen=1; (void)o; }
  GAP("F4-dump-paused", seen, "dump_paused never asserted by model (no pause semantics defined; LOCKS lists it as level flag)");
}
static void t_dbgflags_debug_busy(void){ chip_t c; chip_reset(&c,1,0); uint8_t o=S(&c,0,0x60);
  CHECK("F5-dbgflags-debug_busy-bit3-set-during-freeze", o&0x08); }
static void t_dbg_add(void){ chip_t c; chip_reset(&c,1,0); load2(&c); S(&c,0,0x20); S(&c,0,0); uint8_t o=S(&c,0,0xA0);
  GAP("F6-dbg-add", o!=0, "DBG_ADD returns constant 0 (TBD from RTL)"); }
static void t_run_storm(int A,int P){ chip_t c; chip_reset(&c,A,P); load2(&c);
  for(int i=0;i<10;i++){ S(&c,0,0x20); }
  S(&c,0,0);
  int e=lanev(P?0x21:0x3F,PR[0]-1)*lanev(P?0x3F:0x21,PC[0]-1);
  CHECK("P1-run-storm-illegal", c.illegal); CHECK("P1-run-storm-5-macs", c.psum[0]==5*e); }
static void t_clear_outbuf_dump(void){ chip_t c; chip_reset(&c,1,0); load2(&c); S(&c,0,0x20); S(&c,0,0);
  S(&c,0,0x30); S(&c,0,0x30); /* second DUMP_LOAD -> illegal */ CHECK("P2-second-dumpload-illegal", c.illegal);
  S(&c,0,0x51); CHECK("P2-clear-flags", !c.illegal);
  c.ovf=1; /* inject prior OVF */
  uint8_t L=c.left,T=c.top; int32_t ps=c.psum[0], ob=c.outbuf[0];
  S(&c,0,0x5F); /* all bits incl outbuf during dump -> collide */
  CHECK("P3-clear-collide-illegal", c.illegal); CHECK("P3-ovf-kept", c.ovf);
  CHECK("P3-no-partial", c.left==L&&c.top==T&&c.psum[0]==ps&&c.outbuf[0]==ob);
}
static void t_dump_run(int P){ chip_t c; chip_reset(&c,1,P); load2(&c); S(&c,0,0x20); S(&c,0,0);
  int32_t snap[4]; memcpy(snap,c.psum,sizeof snap); S(&c,0,0x30); int32_t got[4]={0};
  for(int n=0;n<24;n++){ uint8_t o=S(&c,0,(n%2)?0x00:0x20); got[n/6]|=(o&0xF)<<(4*(n%6)); }
  int ok=1; for(int k=0;k<4;k++){ int32_t v=((got[k]&0xFFFFFF)^0x800000)-0x800000; if(v!=snap[k]) ok=0; }
  CHECK("P4-dump-par-run", ok && !c.illegal && !c.dump_busy);
  CHECK("P4-run-advanced-psum", c.psum[0]==13*snap[0]);
}
static void t_abort(void){ chip_t c; chip_reset(&c,1,0); load2(&c); S(&c,0,0x20); S(&c,0,0); S(&c,0,0x30); S(&c,0,0); S(&c,0,0x40);
  CHECK("P5-abort-clears-busy", !c.dump_busy); CHECK("P5-abort-keeps-outbuf", c.outbuf[0]==c.psum[0]&&c.outbuf[0]!=0); }
static void t_cfgB(int P){ chip_t c; chip_reset(&c,0,P);
  S(&c,0,0x30); CHECK("P6-B-dumpload-illegal", c.illegal); S(&c,0,0x51);
  S(&c,0,0x40); CHECK("P6-B-abort-illegal", c.illegal); S(&c,0,0x51);
  load2(&c); S(&c,0,0x70); S(&c,0,0x20); CHECK("P6-B-run-after-dbg-illegal", c.illegal&&!c.run_busy); S(&c,0,0x51);
  S(&c,0,0x20); S(&c,0,0); int32_t v=0; for(int b=0;b<3;b++) v|=S(&c,0,0x80|b<<2)<<(8*b); v=((v&0xFFFFFF)^0x800000)-0x800000;
  CHECK("P6-B-psum-via-dbg", v==c.psum[0]); S(&c,0,0x54); CHECK("P6-B-clear-outbuf-illegal", c.illegal); }
static void t_place(int P){ chip_t c; chip_reset(&c,1,P); S(&c,0xAA,0x10); S(&c,0xBB,0x10);
  uint8_t l=S(&c,0,0x70), t=S(&c,0,0x71);
  CHECK("P7-place-left", l==(P?0xAA:0xBB)); CHECK("P7-place-top", t==(P?0xBB:0xAA)); }
static void t_endian(void){ chip_t c; chip_reset(&c,1,0); c.psum[0]=0x654321; S(&c,0,0x30); int ok=1;
  for(int n=0;n<6;n++){ uint8_t o=S(&c,0,0); if((o&0xF)!=n+1) ok=0; } CHECK("P8-nibble-LE", ok); }
static void t_sticky(void){ chip_t c; chip_reset(&c,1,0); S(&c,0x77,0x10); S(&c,0x77,0x10); /* 7*7=49 */
  c.psum[3]=0x7FFFF0; S(&c,0,0x20); S(&c,0,0); CHECK("P9-ovf-set", c.ovf); for(int i=0;i<5;i++) S(&c,0,0);
  CHECK("P9-ovf-sticky", c.ovf); uint8_t o=S(&c,0,0); CHECK("P9-ovf-live-flag-bit4", o&0x10);
  CHECK("F7-live-flag-bit-order-documented", (o&0x90)==0x10); /* documented: high nibble bits0..3 = {OVF,illegal,dump_busy,debug_busy} = uo[4..7], matches bank0[0:3] */
  S(&c,0,0x51); CHECK("P9-ovf-cleared", !c.ovf);
  for(int op=0xC;op<=0xF;op++){ S(&c,0,0x51); S(&c,0,op<<4); S(&c,0,0); S(&c,0,0); CHECK("P9-illegal-CF-sticky", c.illegal); } }
static void t_flags(int A,int P){ chip_t c; chip_reset(&c,A,P); uint8_t o=S(&c,0,0x60);
  CHECK("P10-straps", (o&0xC0)==(P<<6|A<<7)); S(&c,0,0); S(&c,0,0x61); CHECK("P10-bank1-illegal", c.illegal); }
int main(void){
  for(int A=1;A>=0;A--) for(int P=0;P<2;P++){ t_clear_pe_phase2(A,P); t_run_storm(A,P); t_flags(A,P); t_place(P); }
  for(int P=0;P<2;P++){ t_dump_dbg(P); t_dump_run(P); t_cfgB(P); }
  t_psum_byte3(); t_dump_paused(); t_dbgflags_debug_busy(); t_dbg_add(); t_clear_outbuf_dump(); t_abort(); t_endian(); t_sticky();
  printf("SUMMARY pass=%d fail=%d gap=%d\n",passes,fails,gaps); return fails!=0; }
