/* Adversarial tests vs docs/LOCKS.md + docs/OPCODE_PROPOSAL.md. Link with chip.o built -DCHIP_NO_MAIN. */
#include <stdio.h>
#include <string.h>
#include "../../golden/chip.h"
static int fails=0, passes=0, gaps=0;
#define CHECK(id,x) do{ if(!(x)){printf("FAIL [%s] %s:%d %s\n",id,__FILE__,__LINE__,#x);fails++;} else passes++; }while(0)
#define GAP(id,x,msg) do{ if(!(x)){printf("GAP  [%s] %s\n",id,msg);gaps++;} else passes++; }while(0)
/* Buffer+bus retarget (Alex 2026-11-01): LOAD writes the one input buffer; RUN multiplies it by the live ui_in byte.
 * Legacy vector adapter: these R1-R6 vectors were written for the old 2-LOAD shift (first byte = "top"). S() keeps that
 * byte in g_bus and, for a RUN driven with d=0, presents it on the bus, so legacy expectations still hold. New
 * buffer+bus semantics are tested directly in golden test_bufbus and test_break.c t_bufbus. */
static uint8_t g_bus;
static uint8_t S(chip_t*c,uint8_t d,uint8_t i){ if((i>>4)==1) g_bus=c->buf; if((i>>4)==2 && d==0) d=g_bus; return chip_step(c,d,i); }
#include "halfrate.h"
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
    if(c.phase==0 && !c.ofz){ if(n<24) got[n/6]|=(o&0xF)<<(4*(n%6)); n++; } }
  CHECK("F2-dump-dbg-24-nibbles", n==24);
  int ok=1; for(int k=0;k<4;k++){ int32_t v=((got[k]&0xFFFFFF)^0x800000)-0x800000; if(v!=c.psum[k]) ok=0; }
  CHECK("F2-dump-dbg-content", ok);
}
/* one DEBUG_PARTIAL_SUM/DEBUG_ADD opcode -> 6 nibbles / 12 core edges, LS nibble first. uo[7] marks each debug nibble. */
static uint32_t rd24(chip_t*c,uint8_t op){ uint32_t v=0; int n=0; for(int e=0;e<12;e++){ uint8_t o=chip_step(c,0,e?0:op); if((o&0x80)&&n<6) v|=(uint32_t)(o&0xF)<<(4*n++); } return v; }
static void t_psum_byte3(void){ chip_t c; chip_reset(&c,1,0); c.psum[0]=0x123456; uint32_t v=rd24(&c,0x8C); CHECK("F3-dbg-psum-arg32-reserved-ignored-3tick", !c.illegal && v==0x123456); }
static void t_dump_paused(void){ chip_t c; chip_reset(&c,1,0); int seen=0; load2(&c); S(&c,0,0x30);
  for(int i=0;i<30;i++){ uint8_t o=S(&c,0,(i%2)?0x60:0x20); if(c.dump_paused) seen=1; (void)o; }
  GAP("F4-dump-paused", seen, "dump_paused never asserted by model (no pause semantics defined; LOCKS lists it as level flag)");
}
static void t_dbgflags_debug_busy(void){ chip_t c; chip_reset(&c,1,0); S(&c,0,0x60);
  CHECK("F5-dbgflags-debug_busy-bit7-set-during-freeze", c.fz_val&0x80); }
static void t_dbg_add(void){ chip_t c; chip_reset(&c,1,0); load2(&c); S(&c,0,0x20); S(&c,0,0); S(&c,0,0xA0);
  CHECK("F6-dbg-add-captured-value", c.fz_val!=0); }
static void t_run_storm(int A,int P){ chip_t c; chip_reset(&c,A,P); load2(&c);
  for(int i=0;i<10;i++){ S(&c,0,0x20); } /* pipelined: every back-to-back RUN executes */
  S(&c,0,0);
  int e=lanev(P?0x21:0x3F,PR[0]-1)*lanev(P?0x3F:0x21,PC[0]-1);
  CHECK("P1-run-storm-legal", !c.illegal); CHECK("P1-run-storm-10-macs", c.psum[0]==10*e); }
static void t_clear_outbuf_dump(void){ chip_t c; chip_reset(&c,1,0); load2(&c); S(&c,0,0x20); S(&c,0,0);
  S(&c,0,0x30); S(&c,0,0x30); /* second DUMP_LOAD -> illegal */ CHECK("P2-second-dumpload-illegal", c.illegal);
  S(&c,0,0x51); CHECK("P2-clear-flags", !c.illegal);
  c.ovf=1; /* inject prior OVF */
  uint8_t L=c.buf,T=g_bus; int32_t ps=c.psum[0], ob=c.outbuf[0];
  S(&c,0,0x5F); /* all bits incl outbuf during dump -> collide */
  CHECK("P3-clear-collide-illegal", c.illegal); CHECK("P3-ovf-kept", c.ovf);
  CHECK("P3-no-partial", c.buf==L&&g_bus==T&&c.psum[0]==ps&&c.outbuf[0]==ob);
}
static void t_dump_run(int P){ chip_t c; chip_reset(&c,1,P); load2(&c); S(&c,0,0x20); S(&c,0,0);
  int32_t snap[4]; memcpy(snap,c.psum,sizeof snap); S(&c,0,0x30); int32_t got[4]={0};
  int runs=0; { int n=0,e=0; uint8_t o; while(n<24 && e<200){ if(!(e%2)) runs++; if(hr_vis(&c,(e%2)?0:g_bus,(e%2)?0x00:0x20,&o)){ got[n/6]|=(o&0xF)<<(4*(n%6)); n++; } e++; } if(e%2) { S(&c,0,0); } } /* RUN every 2 edges, nibble every out_tick */
  int ok=1; for(int k=0;k<4;k++){ int32_t v=((got[k]&0xFFFFFF)^0x800000)-0x800000; if(v!=snap[k]) ok=0; }
  CHECK("P4-dump-par-run", ok && !c.illegal && !c.dump_busy);
  CHECK("P4-run-advanced-psum", c.psum[0]==(1+runs)*snap[0] && runs==24); /* 48 edges of dump = 24 RUNs */
}
static void t_abort(void){ chip_t c; chip_reset(&c,1,0); load2(&c); S(&c,0,0x20); S(&c,0,0); S(&c,0,0x30); S(&c,0,0); S(&c,0,0x40);
  CHECK("P5-abort-clears-busy", !c.dump_busy); CHECK("P5-abort-keeps-outbuf", c.outbuf[0]==c.psum[0]&&c.outbuf[0]!=0); }
static void t_cfgB(int P){ chip_t c; chip_reset(&c,0,P);
  S(&c,0,0x30); CHECK("P6-B-dumpload-illegal", c.illegal); S(&c,0,0x51);
  S(&c,0,0x40); CHECK("P6-B-abort-illegal", c.illegal); S(&c,0,0x51);
  load2(&c); S(&c,0,0x70); S(&c,0,0x20); CHECK("P6-B-run-after-dbg-illegal", c.illegal&&!c.run_busy); S(&c,0,0x51);
  S(&c,0,0x20); S(&c,0,0); int32_t v=(int32_t)rd24(&c,0x80); v=((v&0xFFFFFF)^0x800000)-0x800000;
  CHECK("P6-B-psum-via-dbg", v==c.psum[0]); S(&c,0,0x54); CHECK("P6-B-clear-outbuf-illegal", c.illegal); }
/* P7 retarget (buffer+bus): LOAD overwrites the single buffer (no shift, OP_PLACE ignored); RUN takes the bus byte live. */
static void t_place(int P){ chip_t c; chip_reset(&c,1,P); chip_step(&c,0xAA,0x10); chip_step(&c,0xBB,0x10);
  chip_step(&c,0,0x70); CHECK("P7-load-overwrites-buffer", c.fz_val==0xBB && c.buf==0xBB);
  for(int i=0;i<3;i++) chip_step(&c,0,0); /* 8-bit freeze window; first legal RUN is k+4 */
  chip_step(&c,0x12,0x20); chip_step(&c,0x99,0x00); /* bus 0x12 sampled with RUN only */
  CHECK("P7-run-buf-x-bus", c.psum[0]==-5*1 && c.psum[3]==-5*2 && c.psum[1]==-5*2 && c.psum[2]==-5*1);
  chip_step(&c,0,0x52); CHECK("P7-clear-inbuf", c.buf==0 && !c.illegal); }
static void t_endian(void){ chip_t c; chip_reset(&c,1,0); c.psum[0]=0x654321; S(&c,0,0x30); int ok=1;
  uint8_t nb[6]; hr_idle_nibs(&c,nb,6); for(int n=0;n<6;n++){ if(nb[n]!=n+1) ok=0; } CHECK("P8-nibble-LE", ok); }
static void t_sticky(void){ chip_t c; chip_reset(&c,1,0); S(&c,0x77,0x10); S(&c,0x77,0x10); /* 7*7=49 */
  c.psum[3]=0x7FFFF0; S(&c,0,0x20); S(&c,0,0); CHECK("P9-ovf-set", c.ovf); for(int i=0;i<5;i++) S(&c,0,0);
  CHECK("P9-ovf-sticky", c.ovf); uint8_t o=S(&c,0,0); CHECK("P9-ovf-live-flag-bit4", o&0x10);
  CHECK("F7-live-flag-bit-order-documented", (o&0x90)==0x10); /* uo[4]=OVF; this idle tick is not a debug nibble, so uo[7]=0 */
  S(&c,0,0x51); CHECK("P9-ovf-cleared", !c.ovf);
  for(int op=0xC;op<=0xF;op++){ S(&c,0,0x51); S(&c,0,op<<4); S(&c,0,0); S(&c,0,0); CHECK("P9-illegal-CF-sticky", c.illegal); } }
static void t_flags(int A,int P){ chip_t c; chip_reset(&c,A,P); S(&c,0,0x60);
  /* bank 0: bit7 debug busy, bit3 output buffer present, bit6 dump busy = 0. Phase 0 right after reset. */
  CHECK("P10-straps", c.fz_val==(uint32_t)(0x80|(A<<3))); S(&c,0,0); S(&c,0,0x61); CHECK("P10-bank1-illegal", c.illegal); }
/* RUN on k+1..k+3 after an 8-bit DBG is ignored and sticky-illegal. k+4 still executes (illegal stays set). */
static void t_run_window(void){ chip_t c; chip_reset(&c,1,0); c.buf=0x11; S(&c,0,0x70);
  for(int i=0;i<3;i++){ S(&c,0x11,0x20); CHECK("T612-run-in-8bit-window-ignored", c.illegal && !c.run_busy && c.psum[0]==0 && c.fz_val==0x11); }
  S(&c,0x11,0x20); CHECK("T612-first-legal-run-is-k+4", c.run_busy && c.illegal && c.psum[0]==0);
  S(&c,0,0); CHECK("T612-phase2-of-legal-run", c.psum[0]==1 && c.illegal); }
/* A second freezing DBG while fz_left>0 sets illegal and does not replace the value already streaming. */
static void t_nested(void){ chip_t c; chip_reset(&c,1,0); c.buf=0xAB; uint32_t v=0; int n=0;
  for(int e=0;e<4;e++){ uint8_t ins=e==0?0x70:(e==1?0xB0:0); uint8_t d=e==1?0x5A:0; uint8_t o=S(&c,d,ins);
    if(o&0x80){ v|=(uint32_t)(o&0xF)<<(4*n); n++; } }
  CHECK("T620-nested-dbg-keeps-stream", n==2 && v==0xAB && c.illegal && c.fz_val==0xAB && c.fz_n==2);
  chip_t d; chip_reset(&d,1,0); S(&d,0,0x60); uint32_t fz=d.fz_val; S(&d,0,0x61);
  CHECK("T620-flags-bank-nonzero-no-restart", d.illegal && d.fz_val==fz && d.fz_n==2); }
int main(void){
  for(int A=1;A>=0;A--) for(int P=0;P<2;P++){ t_clear_pe_phase2(A,P); t_run_storm(A,P); t_flags(A,P); t_place(P); }
  for(int P=0;P<2;P++){ t_dump_dbg(P); t_dump_run(P); t_cfgB(P); }
  t_psum_byte3(); t_dump_paused(); t_dbgflags_debug_busy(); t_dbg_add(); t_clear_outbuf_dump(); t_abort(); t_endian(); t_sticky();
  t_run_window(); t_nested();
  printf("SUMMARY pass=%d fail=%d gap=%d\n",passes,fails,gaps); return fails!=0; }
