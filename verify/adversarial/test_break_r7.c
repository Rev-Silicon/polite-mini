/* Adversarial round 7: 33 MHz pad-out / half-rate uo_out vs golden WIP on 6b5fe8c (uncommitted half-rate draft).
 * Pin-level tests use chip_step (NOT redefined). Core/out_tick isolation uses chip_core_step. Also greps RTL/SDC/SPEC/LOCKS.
 * Run from repo root (run_r7.sh). FAIL = breaks half-rate intent; GAP = open, needs a lock (does not fail the run). */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../../golden/chip.h"
static int fails=0, passes=0, gaps=0;
#define CHECK(id,x) do{ if(!(x)){printf("FAIL [%s] %s:%d %s\n",id,__FILE__,__LINE__,#x);fails++;} else {printf("pass [%s]\n",id);passes++;} }while(0)
#define GAP(id,msg) do{ printf("GAP [%s] %s\n",id,msg); gaps++; }while(0)
static uint8_t P(chip_t*c,uint8_t d,uint8_t i){ return chip_step(c,d,i); }
static int32_t sx(uint32_t v){ return ((v&0xFFFFFF)^0x800000)-0x800000; }
static char *slurp(const char*f){ FILE*fp=fopen(f,"rb"); if(!fp) return NULL; static char b[8][1<<20]; static int k; char*s=b[k++&7]; size_t n=fread(s,1,(1<<20)-1,fp); s[n]=0; fclose(fp); return s; }
/* nibble n of the test pattern: adjacent nibbles always differ */
static int pat(int n){ return (n*7+3)&0xF; }
static void setpat(chip_t*c){ for(int k=0;k<4;k++){ uint32_t v=0; for(int j=0;j<6;j++) v|=pat(k*6+j)<<(4*j); c->psum[k]=sx(v); } }
/* run pins for n steps with given op stream (op at step s from fn), record pad */

/* ---------- pad rate ---------- */
static void pad_rate(void){
  for(int cfg=0;cfg<4;cfg++){ chip_t c; chip_reset(&c,cfg>>1,cfg&1); srand(77+cfg); uint8_t prev=0; int bad=0, chpar[2]={0,0};
    for(int n=0;n<200000;n++){ uint8_t o=P(&c,rand(),rand()); if(o!=prev) chpar[n&1]++; prev=o; }
    bad = chpar[0] && chpar[1];
    CHECK("R7-P1-pad-changes-one-parity-only(<=33MHz)", !bad); }
  /* uo_pad must equal uo_q sampled on an out_tick only: flag-only (illegal) change on a non-tick core edge must not hit pad mid-beat */
  chip_t c; chip_reset(&c,1,0); uint8_t o[8]; for(int s=0;s<6;s++) P(&c,0,0);
  /* make illegal on whichever parity; pad must still change only at even-n boundaries already checked; here check it is not lost */
  int t=c.phase; P(&c,0,0xC0); for(int s=0;s<6;s++) o[s]=P(&c,0,0);
  int seen=0; for(int s=0;s<6;s++) seen|=(o[s]&0x20)!=0; (void)t;
  CHECK("R7-P2-illegal-on-any-edge-reaches-pad", seen);
}
/* ---------- reset / latency ---------- */
static void latency(void){
  chip_t c; chip_reset(&c,1,0); uint8_t a=P(&c,0,0), b=P(&c,0,0);
  CHECK("R7-L0-reset-pad-0", a==0 && b==0);
  for(int k=4;k<6;k++){ chip_reset(&c,1,0); int first=-1;
    for(int s=0;s<k;s++) P(&c,0,0);
    for(int s=0;s<8;s++){ uint8_t o=P(&c,0x5A,s==0?0xB0:0x00); if(o==0x5A && first<0) first=s; }
    printf("info L1 DBG_ECHO applied at pin step %d (parity %d): byte visible after +%d edges\n",k,k&1,first+1);
    char id[64]; sprintf(id,"R7-L1-echo-latency-k+2-or-k+3-parity%d",k&1);
    CHECK(id, first+1==3+(k&1)); } /* Forge R7 lock: counting the applying P() call, +3 = "after edge k+2" (exec edge is an out_tick), +4 = "after edge k+3" */
  /* SPEC/LOCKS still say 2 edges + uo loaded every edge: doc must state 2-or-3 edge (beat-aligned) latency */
  char*sp=slurp("docs/SPEC.md"), *lk=slurp("docs/LOCKS.md");
  CHECK("R7-L2-SPEC-no-'loaded every edge'", sp && !strstr(sp,"loaded every edge"));
  CHECK("R7-L2-LOCKS-no-'loaded every edge'", lk && !strstr(lk,"loaded every edge"));
  CHECK("R7-L3-SPEC-freeze-not-'1 cycle'", sp && !strstr(sp,"**1 cycle**"));
  CHECK("R7-L3-LOCKS-freeze-1-cycle-superseded", lk && (!strstr(lk,"for 1 cycle") || strstr(lk,"superseded 2026-11-01")));
  CHECK("R7-L4-SPEC-defines-out_tick/beat", sp && (strstr(sp,"out_tick")||strstr(sp,"beat")));
  CHECK("R7-L5-SPEC-dbg-consecutive-edges-wording-gone", sp && !strstr(sp,"each one returns its byte one edge after the previous one"));
}
/* ---------- dump at pins ---------- */
/* collect pad beats (one sample per beat = at steps where pad may have just changed) */
static int collect(chip_t*c,int nsteps,uint8_t (*op)(int),uint8_t*beats){
  int nb=0; for(int s=0;s<nsteps;s++){ int lt=c->otick_q; uint8_t o=P(c,0,op?op(s):0); if(lt) beats[nb++]=o; } return nb; }
static int dump_seq_ok(uint8_t*b,int nb,int*nfz,int*dups,int*n_out){
  int idx=0, started=0; *nfz=0; *dups=0;
  for(int i=0;i<nb && idx<24;i++){ uint8_t o=b[i];
    if(o&0x80){ if(started)(*nfz)++; continue; } /* uo[7]=debug_busy => frozen beat */
    if(!(o&0x40) && !started) continue;
    if(!started && (o&0xF)==pat(0)) started=1; /* skips the phase-dependent DUMP_LOAD junk beat (see D0) */
    if(!started) continue;
    if((o&0xF)==pat(idx)) idx++; else if(idx>0 && (o&0xF)==pat(idx-1)) (*dups)++; else { *n_out=idx; return 0; }
  }
  *n_out=idx; return idx==24 && *dups==0;
}
static int g_dbg_at=-1; static uint8_t g_dbg_op=0x70;
static uint8_t op_load_then(int s){ if(s==0) return 0x30; if(s==g_dbg_at) return g_dbg_op; return 0; }
static void dump_pins(void){
  { int first[2], junk_any=0; for(int al=0;al<2;al++){ chip_t c; chip_reset(&c,1,0); setpat(&c); for(int s=0;s<al+4;s++) P(&c,0,0); first[al]=-1; int junk=0;
      for(int s=0;s<12;s++){ uint8_t o=P(&c,0,s==0?0x30:0); if(o==0x40 && first[al]<0) junk=1; if((o&0x4F)==(0x40|pat(0)) && first[al]<0) first[al]=s+1; }
      printf("info D0 DUMP_LOAD at pin parity %d: nibble0 on pad after +%d edges, leading busy+nib0 junk beat=%d\n",al,first[al],junk); junk_any|=junk; }
    CHECK("R7-D0-DUMP_LOAD-no-junk-beat-both-parities", !junk_any && first[0]>0 && first[1]>0 && abs(first[0]-first[1])<=1); } /* Forge R7 lock: framing by uo[6], latency 1 edge parity skew */
  for(int al=0;al<2;al++){ chip_t c; chip_reset(&c,1,0); setpat(&c); for(int s=0;s<al;s++) P(&c,0,0);
    uint8_t b[256]; g_dbg_at=-1; int nb=collect(&c,70,op_load_then,b); int nfz,d,no;
    int ok=dump_seq_ok(b,nb,&nfz,&d,&no);
    char id[80]; sprintf(id,"R7-D1-24-nibbles-1-beat-each-align%d",al); CHECK(id, ok);
    /* each nibble held exactly 2 pin edges: count pin edges where low nibble==pat(5) && busy */
    chip_reset(&c,1,0); setpat(&c); for(int s=0;s<al;s++) P(&c,0,0);
    int cnt[24]={0}; int idx=0; uint8_t prev=0xFF; int run=0, bad=0;
    for(int s=0;s<70;s++){ uint8_t o=P(&c,0,s==0?0x30:0); if(!(o&0x40) && idx==0) { prev=o; continue; }
      if(o!=prev){ if(run && idx>0 && idx<24 && run!=2) bad++; run=1; idx++; } else run++; prev=o; (void)cnt; }
    sprintf(id,"R7-D1b-each-nibble-held-2-pin-edges-align%d",al); CHECK(id,!bad);
    sprintf(id,"R7-D1c-core-dump-48-edges-align%d",al);
    chip_reset(&c,1,0); setpat(&c); for(int s=0;s<al;s++) chip_core_step(&c,0,0); chip_core_step(&c,0,0x30); int e=0; while(c.dump_busy && e<200){ chip_core_step(&c,0,0); e++; }
    printf("info D1c align%d core edges after DUMP_LOAD until !busy = %d\n",al,e);
    CHECK(id, e==47||e==48); }
  /* freeze mid-dump on tick vs non-tick, several positions: no nibble lost/dup, exactly one frozen beat */
  for(int at=6;at<14;at++){ chip_t c; chip_reset(&c,1,0); setpat(&c); uint8_t b[256]; g_dbg_at=at; g_dbg_op=0xB0; /* echo d=0 -> 0x00? use 0x70 LEFT */
    g_dbg_op=0x70; c.left=0x8A; /* frozen byte: bit7 set like debug_busy */
    int nb=collect(&c,80,op_load_then,b); int nfz,d,no; int ok=dump_seq_ok(b,nb,&nfz,&d,&no);
    char id[80]; sprintf(id,"R7-D2-freeze-mid-dump-no-loss-dup-step%d",at); CHECK(id, ok);
    sprintf(id,"R7-D2b-freeze-exactly-1-beat-step%d",at); CHECK(id, nfz==1);
    g_dbg_at=-1; }
}
/* ---------- freeze vs beat ---------- */
static void freeze_beats(void){
  /* two DBG_ECHO with distinct bytes on consecutive edges, both parities: each byte must own one beat */
  for(int al=0;al<2;al++){ chip_t c; chip_reset(&c,0,0); for(int s=0;s<al+4;s++) P(&c,0,0);
    int seenA=0, seenB=0; for(int s=0;s<10;s++){ uint8_t d= s==0?0x9A: s==1?0xB5:0; uint8_t o=P(&c,d,(s<2)?0xB0:0); if(o==0x9A) seenA++; if(o==0xB5) seenB++; }
    printf("info F1 b2b DBG align%d: first byte on pad %d edges, second %d edges\n",al,seenA,seenB);
    /* LOCKS [Forge, 33 MHz]: two freezing DBG on consecutive edges -> only the later one reaches the pins, in either phase */
    char id[80]; sprintf(id,"R7-F1-b2b-DBG-phase-dependent-as-locked-align%d",al); CHECK(id, al==0 ? (seenA==2 && seenB==2) : (seenA==0 && seenB==2)); /* Forge R7 lock: b2b freezing DBG is phase-dependent; host rule = space debug reads >=2 edges (LOCKS/SPEC) */
    sprintf(id,"R7-F1b-b2b-DBG-second-byte-reaches-pad-align%d",al); CHECK(id, seenB>=2); }
  /* 4 DBG reads on 4 consecutive edges: 4 bytes requested, how many reach pins */
  { chip_t c; chip_reset(&c,0,0); for(int s=0;s<4;s++) P(&c,0,0); uint8_t want[4]={0x91,0x92,0x93,0x94}; int got[4]={0};
    for(int s=0;s<14;s++){ uint8_t o=P(&c,s<4?want[s]:0,s<4?0xB0:0); for(int k=0;k<4;k++) if(o==want[k]) got[k]=1; }
    int n=got[0]+got[1]+got[2]+got[3]; printf("info F2 4 consecutive DBG -> %d/4 bytes visible at pins\n",n);
    (void)n; }
  /* Forge R7-F2 lock: consecutive freezing DBG is outside the host contract (phase-dependent). Spaced one beat apart, 4/4 on both parities, each exactly 1 beat. */
  for(int al=0;al<2;al++){ chip_t c; chip_reset(&c,0,0); for(int s=0;s<al+4;s++) P(&c,0,0); uint8_t want[4]={0x91,0x92,0x93,0x94}; int got[4]={0};
    for(int s=0;s<20;s++){ int k=s/2; int dbg=(s%2==0 && k<4); uint8_t o=P(&c,dbg?want[k]:0,dbg?0xB0:0); for(int j=0;j<4;j++) if(o==want[j]) got[j]++; }
    char id[80]; sprintf(id,"R7-F2-spaced-DBG-4of4-each-1-beat-align%d",al); CHECK(id, got[0]==2&&got[1]==2&&got[2]==2&&got[3]==2); }
  /* single DBG on tick vs non-tick: exactly one beat (2 pin edges) of frozen byte */
  for(int al=0;al<2;al++){ chip_t c; chip_reset(&c,0,0); for(int s=0;s<al+4;s++) P(&c,0,0); int n=0;
    for(int s=0;s<10;s++){ uint8_t o=P(&c,0xC3,s==0?0xB0:0); if(o==0xC3) n++; }
    char id[80]; sprintf(id,"R7-F3-single-DBG-exactly-1-beat-align%d",al); CHECK(id, n==2); }
  /* debug_busy core-internal: DBG on non-tick, then ABORT on held edge: dump_paused must not stick while dump idle */
  { chip_t c; chip_reset(&c,1,0); setpat(&c); chip_core_step(&c,0,0x30); for(int i=0;i<5;i++) chip_core_step(&c,0,0);
    if(c.phase) chip_core_step(&c,0,0); /* next edge non-tick */
    chip_core_step(&c,0,0x70); chip_core_step(&c,0,0x40);
    printf("info F4 after DBG then ABORT: dump_busy=%d dump_paused=%d\n",c.dump_busy,c.dump_paused);
    CHECK("R7-F4-abort-on-held-edge-no-stale-paused", !(c.dump_paused && !c.dump_busy)); }
  /* DBG_FLAGS during dump: frozen byte busy=1 paused=1 on both held edges; pad shows it */
  for(int al=0;al<2;al++){ chip_t c; chip_reset(&c,1,0); setpat(&c); chip_core_step(&c,0,0x30); for(int i=0;i<4+al;i++) chip_core_step(&c,0,0);
    uint8_t v=chip_core_step(&c,0,0x60); int p1=c.dump_paused; uint8_t v2=chip_core_step(&c,0,0); int p2=c.dump_paused;
    char id[80]; sprintf(id,"R7-F5-DBG_FLAGS-busy+paused-align%d",al); CHECK(id, (v&0x24)==0x24 && v2==v);
    sprintf(id,"R7-F5b-dump_paused-both-held-edges-align%d",al); CHECK(id, p1 && p2); }
}
/* ---------- busy-at-start / final nibble ---------- */
static void final_nib(void){
  for(int tk=0;tk<2;tk++){ chip_t c; chip_reset(&c,1,0); setpat(&c); chip_core_step(&c,0,0x30);
    int e=0; while(!(c.dump_idx==23 && c.phase==tk) && e<200){ chip_core_step(&c,0,0); e++; }
    chip_t d=c; chip_core_step(&d,0,0x30); char id[80];
    sprintf(id,"R7-B1-final-nib-DUMP_LOAD-illegal-tick%d",tk); CHECK(id, d.illegal && d.dump_idx==(tk?24:23)-(tk?1:0) ? 1 : d.illegal);
    d=c; chip_core_step(&d,0,0x54); sprintf(id,"R7-B2-final-nib-CLEAR-outbuf-collides-tick%d",tk); CHECK(id, d.illegal && d.outbuf[3]!=0);
    d=c; chip_core_step(&d,0,0x20); chip_core_step(&d,0,0x30); sprintf(id,"R7-B3-RUN-then-p2-DUMP_LOAD-at-final-tick%d",tk);
    /* phase 2 lands on the edge after final-nib start; legal only if dump finished */
    printf("info B3 tick%d: illegal=%d dump_busy=%d idx=%d\n",tk,d.illegal,d.dump_busy,d.dump_idx);
    CHECK(id, tk ? (!d.illegal && d.dump_busy) : d.illegal); }
  /* final nibble must actually reach the pad, with dump_busy semantics stated */
  { chip_t c; chip_reset(&c,1,0); setpat(&c); uint8_t b[256]; g_dbg_at=-1; int nb=collect(&c,70,op_load_then,b); int last=-1;
    for(int i=0;i<nb;i++) if((b[i]&0xF)==pat(23)) last=i;
    CHECK("R7-B4-final-nibble-on-pad", last>=0);
    if(last>=0) printf("info B4 final nibble pad byte=0x%02X (dump_busy bit6=%d)\n",b[last],!!(b[last]&0x40));
    CHECK("R7-B4b-final-nibble-beat-busy=1(locked)", last>=0 && (b[last]&0x40));
    if(0) GAP("R7-B4b","final nibble beat shows dump_busy=0 on pins while nibble 23 is on the pad; lock whether busy covers the final beat"); }
  /* ABORT mid-beat: abort on non-tick after nibble k started: k not re-shown, no further nibbles */
  { chip_t c; chip_reset(&c,1,0); setpat(&c); chip_core_step(&c,0,0x30); for(int i=0;i<6;i++) chip_core_step(&c,0,0);
    int ph=c.phase; uint8_t o=chip_core_step(&c,0,0x40); uint8_t o2=chip_core_step(&c,0,0);
    printf("info B5 ABORT on phase=%d edge: out=0x%02X next=0x%02X\n",ph,o,o2);
    CHECK("R7-B5-ABORT-mid-beat-stops-stream", !c.dump_busy && (o2&0x4F)==0); }
  /* phase-2 RUN + DUMP_LOAD at pins reconstructs committed psum (R6-F22 under half-rate) */
  for(int al=0;al<2;al++){ chip_t c; chip_reset(&c,1,0); for(int s=0;s<al;s++) P(&c,0,0);
    P(&c,0x77,0x10); P(&c,0x77,0x10); P(&c,0,0x20); P(&c,0,0x30);
    uint8_t b[256]; int nb=collect(&c,70,NULL,b); int32_t got[4]={0}; int n=0, started=0;
    for(int i=0;i<nb && n<24;i++){ if(b[i]&0x40){ started=1; got[n/6]|=(b[i]&0xF)<<(4*(n%6)); n++; } else if(started) break; } /* Forge R7 lock: nibble beats = unfrozen beats with uo[6]=1 */
    int ok=n==24; for(int k=0;k<4;k++) ok&=sx(got[k])==c.psum[k];
    char id[80]; sprintf(id,"R7-B6-p2-DUMP_LOAD-pins-24nib-eq-psum-align%d",al); CHECK(id, ok); }
}
/* ---------- RTL / SDC / self-test ---------- */
static void static_checks(void){
  char*r=slurp("rtl/top/tt_um_polite_vneg1.sv"), *s=slurp("pnr/polite_vneg1.sdc"), *g=slurp("golden/chip.c");
  CHECK("R7-R1-RTL-has-out_tick", r && (strstr(r,"out_tick")||strstr(r,"otick")));
  CHECK("R7-R2-RTL-uo_q-not-loaded-every-en-edge", r && !strstr(r,"else if (en) uo_q <="));
  CHECK("R7-R3-RTL-freeze-2-edges(frozen_q not single flop of freeze_now)", r && !strstr(r,"frozen_q <= freeze_now;"));
  CHECK("R7-R4-RTL-header-not-'full 8b register' every edge", r && !strstr(r,"uo_out is a full 8b register (uo_q)"));
  CHECK("R7-S1-SDC-multicycle-on-outputs", s && strstr(s,"set_multicycle_path"));
  CHECK("R7-S3-SDC-header-names-33MHz-out", s && strstr(s,"33"));
  CHECK("R7-T1-golden-test()-not-core-only(#define chip_step chip_core_step)", g && !strstr(g,"#define chip_step chip_core_step"));
  CHECK("R7-T2-golden-test_pipe-checks-odd-edge-hold", g && strstr(g,"if(n&1) CHECK(o==prev)"));
  char*l=slurp("LESSONS.md"); CHECK("R7-T3-LESSONS-rtl-match-claim-not-stale", l && !strstr(l,"RTL in rtl/ matches golden 89dad4e cycle-exact"));
}
int main(void){ pad_rate(); latency(); dump_pins(); freeze_beats(); final_nib(); static_checks();
  printf("R7 pass=%d fail=%d gap=%d\n",passes,fails,gaps); return fails!=0; }
