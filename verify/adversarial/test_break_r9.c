/* Adversarial round 9: re-break at 30677ec under R8 locks (j+3 freeze drop, count-24, ABORT wait). Pin level only through chip_step (pad regs on).
 * A "host" here sees only uo_out per pin step plus its own op log; it never reads chip state or c->phase.
 * Step convention: op passed to call j is "sampled on edge j" (SPEC 2.x), pad[j] = uo_out after edge j.
 * FAIL = breaks a locked/SPEC claim or host contract; GAP = open, needs a lock (does not fail run). */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../../golden/chip.h"
static int fails=0, passes=0, gaps=0;
#define CHECK(id,x) do{ if(!(x)){printf("FAIL [%s] %s:%d %s\n",id,__FILE__,__LINE__,#x);fails++;} else {printf("pass [%s]\n",id);passes++;} }while(0)
#define GAP(id,msg) do{ printf("GAP  [%s] %s\n",id,msg); gaps++; }while(0)
static int32_t sx(uint32_t v){ return ((v&0xFFFFFF)^0x800000)-0x800000; }
static char *slurp(const char*f){ FILE*fp=fopen(f,"rb"); if(!fp) return NULL; static char b[8][1<<20]; static int k; char*s=b[k++&7]; size_t n=fread(s,1,(1<<20)-1,fp); s[n]=0; fclose(fp); return s; }
#define MAXS 1024
typedef struct { chip_t c; int n; uint8_t pad[MAXS]; int dbg[64]; int ndbg; int tick_exec[MAXS]; } H;
static void hreset(H*h,int A,int P,int pre){ memset(h,0,sizeof *h); chip_reset(&h->c,A,P); for(int i=0;i<pre;i++) chip_step(&h->c,0,0); }
/* tick_exec[j] = whether the core edge that executes op j is an out_tick (test-side oracle only, never used by decoders) */
static uint8_t st(H*h,uint8_t d,uint8_t i){ int j=h->n; uint8_t o=chip_step(&h->c,d,i); h->tick_exec[j]=h->c.phase; h->pad[h->n++]=o;
  int op=i>>4; if(op==6||op==7||op==8||op==9||op==0xA||op==0xB) if(h->ndbg<64) h->dbg[h->ndbg++]=j; return o; }
static void idle(H*h,int n){ for(int i=0;i<n;i++) st(h,0,0); }
static int pat(int n){ return (n*7+3)&0xF; }
static void setpat(chip_t*c){ for(int k=0;k<4;k++){ uint32_t v=0; for(int j=0;j<6;j++) v|=pat(k*6+j)<<(4*j); c->psum[k]=sx(v); } }
static void setrand(chip_t*c){ for(int k=0;k<4;k++) c->psum[k]=sx(((uint32_t)rand()<<8)^rand()); }
static void tonib(const int32_t*ob,uint8_t*nb){ for(int n=0;n<24;n++) nb[n]=(ob[n/6]>>(4*(n%6)))&0xF; }
/* Host U6: uo[6]-only framing, no phase, no own-op knowledge: collect the low nibble of every beat with uo[6]=1 from 'from'.
 * Beat sampling: every 2nd step starting at the first uo[6]=1 step (MNIST chipio style), skipping uo[6]=0 beats. */
static int dec_u6(H*h,int from,uint8_t*nb){ int s0=-1; for(int s=from;s<h->n;s++) if(h->pad[s]&0x40){ s0=s; break; }
  if(s0<0) return 0; int n=0; for(int s=s0;s<h->n && n<24;s+=2) if(h->pad[s]&0x40) nb[n++]=h->pad[s]&0xF; return n; }
/* Host K: same, but drops the beat that contains pin step j+3 for each freezing DBG it issued (SPEC 6.6.1: "after edge k+3 always
 * returns the byte"). Beat boundaries come from s0 (first uo[6]=1 step is a beat start) -- no phase counter. */
static int dec_k(H*h,int from,uint8_t*nb){ int s0=-1; for(int s=from;s<h->n;s++) if(h->pad[s]&0x40){ s0=s; break; }
  if(s0<0) return 0; int n=0;
  for(int s=s0;s<h->n && n<24;s+=2){ int fz=0; for(int d=0;d<h->ndbg;d++){ int t=h->dbg[d]+3; int b=t-((t-s0)&1); if(b==s) fz=1; }
    if(fz) continue; if(h->pad[s]&0x40) nb[n++]=h->pad[s]&0xF; } return n; }
/* tighter version of K that also refuses beats before s0 being frozen-with-bit6: handled since s0 may itself be frozen */
static int dec_k2(H*h,int from,uint8_t*nb){ /* find first uo[6]=1 step that is not inside a frozen beat window [j+2,j+4] */
  int s0=-1; for(int s=from;s<h->n;s++){ if(!(h->pad[s]&0x40)) continue; int inw=0; for(int d=0;d<h->ndbg;d++) if(s>=h->dbg[d]+2 && s<=h->dbg[d]+4 && h->pad[s]==h->pad[h->dbg[d]+3]) inw=1; if(!inw){ s0=s; break; } }
  if(s0<0) return 0; /* s0 is a beat start iff pad[s0-1]!=pad[s0]; else shift (pad equal across a boundary is possible) */
  if(s0>0 && h->pad[s0-1]==h->pad[s0]) s0--; /* pad holds 2 steps per beat: if previous step equal, s0 was 2nd step */
  int n=0; for(int s=s0;s<h->n && n<24;s+=2){ int fz=0; for(int d=0;d<h->ndbg;d++){ int t=h->dbg[d]+3; int b=t-((t-s0)&1); if(b==s) fz=1; }
    if(fz) continue; if(h->pad[s]&0x40) nb[n++]=h->pad[s]&0xF; } return n; }
static int nbeq(const uint8_t*a,const uint8_t*b){ return !memcmp(a,b,24); }
/* Host L (locked R9 host): beat grid from first uo[6]=1 at/after 'from'; drop beat holding j+3 per freezing DBG; count exactly cnt nibbles. */
/* Host L = locked host: beat grid anchored at first uo[6]=1 step at/after 'from' (a beat start); drop the beat holding j+3 per
 * freezing DBG issued; count exactly cnt nibbles. (An earlier draft tried to skip frozen-looking s0 by value compare: test bug, removed.) */
static int dec_l(H*h,int from,uint8_t*nb,int cnt){ int s0=-1; for(int s=from;s<h->n;s++) if(h->pad[s]&0x40){ s0=s; break; }
  if(s0<0) return 0;
  int n=0; for(int s=s0;s<h->n && n<cnt;s+=2){ int fz=0; for(int d=0;d<h->ndbg;d++){ int t=h->dbg[d]+3; if(t-((t-s0)&1)==s) fz=1; }
    if(fz) continue; if(h->pad[s]&0x40) nb[n++]=h->pad[s]&0xF; } return n; }
static int isfreeze(int i){ int op=i>>4; return op>=6&&op<=0xB; }

static void t_freeze(void){ char id[96];
  /* F1: freeze byte with bit6=1 at every position, both parities, several bytes; locked host recovers 24/24 */
  uint8_t by[]={0x40,0x45,0x4F,0x7F,0xC0,0xFF,0x8A,0x0A}; int tot=0,bad=0,bad6=0,u6bad=0;
  for(int al=0;al<2;al++) for(int at=1;at<56;at++) for(unsigned b=0;b<sizeof by;b++){ H h; hreset(&h,1,0,al); setpat(&h.c); int j=h.n; st(&h,0,0x30);
    for(int s=1;s<75;s++) st(&h,s==at?by[b]:0,s==at?0xB0:0); uint8_t w[24],nb[24]; tonib(h.c.outbuf,w);
    int n=dec_l(&h,j,nb,24); int ok=n==24&&nbeq(nb,w); tot++; if(!ok){ bad++; if(by[b]&0x40) bad6++; }
    h.ndbg=0; n=dec_l(&h,j,nb,24); if(!(n==24&&nbeq(nb,w))) u6bad++; }
  printf("info F1 %d cases: locked j+3 host wrong=%d (bit6=1 subset %d); uo6-only host wrong=%d (expected >0, shows tracking needed)\n",tot,bad,bad6,u6bad);
  CHECK("R9-F1-j+3-drop-24/24-freeze-byte-bit6=1-both-par", bad==0);
  CHECK("R9-F1b-uo6-only-still-breaks(lock is load-bearing)", u6bad>0);
  /* F2 (R7-D2 replacement): 0x8A and 0xCA frozen; decode with j+3, never with uo[7] */
  for(int al=0;al<2;al++) for(int q=0;q<2;q++){ uint8_t b=q?0xCA:0x8A; H h; hreset(&h,1,0,al); setpat(&h.c); int j=h.n; st(&h,0,0x30); idle(&h,9); st(&h,b,0xB0); idle(&h,70);
    uint8_t w[24],nb[24]; tonib(h.c.outbuf,w); sprintf(id,"R9-F2-R7D2-fixed-j+3-byte%02X-par%d",b,al); CHECK(id, dec_l(&h,j,nb,24)==24&&nbeq(nb,w)); }
  /* F3: double freeze spacings 1 beat (legal), 3,5 edges (odd spacing), both parities, positions */
  int sp[]={2,3,4,5,7}; for(unsigned k=0;k<5;k++){ int bd=0,c=0; for(int al=0;al<2;al++) for(int at=2;at<40;at++){ H h; hreset(&h,1,0,al); setpat(&h.c); int j=h.n; st(&h,0,0x30);
      for(int s=1;s<80;s++){ int f=(s==at||s==at+sp[k]); st(&h,f?0x55:0,f?0xB0:0); } uint8_t w[24],nb[24]; tonib(h.c.outbuf,w); c++; if(!(dec_l(&h,j,nb,24)==24&&nbeq(nb,w)&&!h.c.illegal)) bd++; }
    printf("info F3 double-freeze spacing %d edges: %d/%d wrong\n",sp[k],bd,c); sprintf(id,"R9-F3-double-freeze-spacing%d",sp[k]); CHECK(id, bd==0); }
  /* F3b: consecutive DBG (spacing 1, unsupported per SPEC) -- record only */
  { int bd=0,c=0,il=0; for(int al=0;al<2;al++) for(int at=2;at<40;at++){ H h; hreset(&h,1,0,al); setpat(&h.c); int j=h.n; st(&h,0,0x30);
      for(int s=1;s<80;s++){ int f=(s==at||s==at+1); st(&h,f?0x55:0,f?0xB0:0); } uint8_t w[24],nb[24]; tonib(h.c.outbuf,w); c++; il+=h.c.illegal; if(!(dec_l(&h,j,nb,24)==24&&nbeq(nb,w))) bd++; }
    printf("info F3b consecutive DBG (unsupported): j+3 host wrong %d/%d, illegal flagged %d/%d\n",bd,c,il,c); }
  /* F4: random spaced DBG fuzz incl. phase-2 DUMP_LOAD (RUN just before) */
  { int bad=0,badil=0,badp2=0; srand(909); for(int ep=0;ep<20000;ep++){ H h; int al=rand()&1; hreset(&h,1,rand()&1,al); setrand(&h.c); int p2=rand()&1;
      if(p2){ st(&h,0x13,0x10); st(&h,0x13,0x10); st(&h,0,0x20); } int j=h.n; st(&h,0,0x30); int last=-10;
      for(int s=1;s<90;s++){ int r=rand()%6; if(s-last>=2&&r<2){ uint8_t ops[]={0xB0,0x60,0x70,0x90}; st(&h,rand()&0xFF,ops[rand()%4]); /* 1-tick reads only: 0x80/0xA0 now freeze 3 output ticks (spacing 6) */ last=s; } else st(&h,0,0); }
      idle(&h,120); uint8_t w[24],nb[24]; tonib(h.c.outbuf,w); if(!(dec_l(&h,j,nb,24)==24&&nbeq(nb,w))){ bad++; if(h.c.illegal) badil++; else if(p2) badp2++; } }
    printf("info F4 diag: wrong with illegal flagged=%d, legal+p2=%d\n",badil,badp2);
    printf("info F4 20000 random spaced-DBG episodes (half phase-2 DUMP_LOAD): wrong=%d\n",bad); CHECK("R9-F4-fuzz-spaced-DBG+p2-DUMP_LOAD-j+3", bad==0); }
}
static void t_count(void){ char id[96];
  /* C1: count-24 both parities, with/without freeze, no reliance on separator */
  for(int al=0;al<2;al++) for(int fz=0;fz<2;fz++){ H h; hreset(&h,1,0,al); setrand(&h.c); int j=h.n; st(&h,0,0x30); idle(&h,7); if(fz) st(&h,0xC5,0xB0); idle(&h,70);
    uint8_t w[24],nb[24]; tonib(h.c.outbuf,w); sprintf(id,"R9-C1-count24-par%d-freeze%d",al,fz); CHECK(id, dec_l(&h,j,nb,24)==24&&nbeq(nb,w)); }
  /* C2: merged b2b DUMP_LOAD at first legal edge -> 48 contiguous uo6=1; count-24 recovers stream 1, next 24 = stream 2 */
  for(int al=0;al<2;al++) for(int fz=0;fz<2;fz++){ H h; hreset(&h,1,0,al); setpat(&h.c); int j=h.n; st(&h,0,0x30); idle(&h,5); if(fz) st(&h,0x4C,0xB0); st(&h,0,0);
    uint8_t w1[24]; tonib(h.c.outbuf,w1); int e=0; while(!(h.c.dump_idx==23&&h.c.phase==1)&&e<200){ st(&h,0,0); e++; }
    for(int k=0;k<4;k++) ; st(&h,0,0x30); int ill=h.c.illegal; idle(&h,70);
    int s0=-1; for(int s=j;s<h.n;s++) if((h.pad[s]&0x40)){ s0=s; break; } int run=0; for(int s=s0;s<h.n;s+=2){ int f=0; for(int d=0;d<h.ndbg;d++){int t=h.dbg[d]+3; if(t-((t-s0)&1)==s) f=1;} if(f) continue; if(h.pad[s]&0x40) run++; else break; }
    uint8_t nb[48]; int n=dec_l(&h,j,nb,48);
    sprintf(id,"R9-C2-merged-b2b-48-contig-par%d-fz%d",al,fz); CHECK(id, !ill && run==48);
    sprintf(id,"R9-C2b-count24-recovers-stream1-par%d-fz%d",al,fz); CHECK(id, n==48 && nbeq(nb,w1) && nbeq(nb+24,w1)); }
  char*sp=slurp("docs/SPEC.md"),*lk=slurp("docs/LOCKS.md");
  CHECK("R9-C3-LOCKS-count-24-MUST", lk && strstr(lk,"MUST count 24"));
  CHECK("R9-C3b-SPEC-count-exactly-24", sp && strstr(sp,"count exactly 24 nibbles"));
  CHECK("R9-C3c-SPEC-separator-sentence-qualified", sp && strstr(sp,"separator holds only if the next DUMP_LOAD is not issued"));
}
static void t_abort(void){ char id[96];
  /* A1: ABORT at many offsets (tick vs non-tick exec), immediate DUMP_LOAD vs wait 1 beat; host knows its own ops */
  int merge[2]={0,0},cnt[2]={0,0},wbad=0,wc=0;
  for(int al=0;al<2;al++) for(int off=4;off<40;off++) for(int w=0;w<2;w++){ H h; hreset(&h,1,0,al); setpat(&h.c); int j=h.n; st(&h,0,0x30); idle(&h,off); int ja=h.n; st(&h,0,0x40);
      if(w) idle(&h,2); int jl=h.n; st(&h,0,0x30); idle(&h,70); uint8_t wn[24]; tonib(h.c.outbuf,wn);
      /* separator present between ja and stream2 start? */ int sep=0; for(int s=ja+1;s<=jl+3;s++) if(!(h.pad[s]&0x40)) sep=1;
      if(!w){ cnt[h.tick_exec[ja]]++; if(!sep) merge[h.tick_exec[ja]]++; }
      else { wc++; /* locked host: stream2 starts at first uo6=1 at/after jl+3 */ uint8_t nb[24]; int n=dec_l(&h,jl+3,nb,24); if(!sep||!(n==24&&nbeq(nb,wn))||h.c.illegal) wbad++; } (void)j; }
  printf("info A1 immediate reload: merged(no uo6=0 sep) tick-exec %d/%d, non-tick %d/%d; waited 1 beat: bad %d/%d\n",merge[1],cnt[1],merge[0],cnt[0],wbad,wc);
  CHECK("R9-A1-immediate-reload-merge-is-phase-dependent(as locked)", merge[1]>0 && merge[1]!=merge[0]);
  CHECK("R9-A1b-wait>=1beat-separates-and-24/24", wbad==0);
  /* A2: ABORT tick vs non-tick after partial dump then DBG_FLAGS: paused=0 busy=0 */
  for(int al=0;al<2;al++) for(int off=6;off<8;off++){ H h; hreset(&h,1,0,al); setpat(&h.c); st(&h,0,0x30); idle(&h,off); int ja=h.n; st(&h,0,0x40); idle(&h,3); int jf=h.n; st(&h,0,0x60); idle(&h,5);
    uint8_t f=h.pad[jf+3]; sprintf(id,"R9-A2-ABORT-tick%d-par%d-flags-clean",h.tick_exec[ja],al); CHECK(id, !h.c.dump_busy && !(f&0x24) && !h.c.illegal); }
  /* A3: CLEAR (outbuf 0x54 / flags 0x51) on the held freeze edge mid-dump */
  for(int al=0;al<2;al++) for(int q=0;q<2;q++){ H h; hreset(&h,1,0,al); setpat(&h.c); int j=h.n; st(&h,0,0x30); idle(&h,9); st(&h,0x11,0xB0); st(&h,0,q?0x51:0x54); idle(&h,70);
    uint8_t w[24],nb[24]; tonib(h.c.outbuf,w); int n=dec_l(&h,j,nb,24);
    if(q){ sprintf(id,"R9-A3-CLEAR-flags-on-held-edge-stream-intact-par%d",al); CHECK(id, n==24&&nbeq(nb,w)); }
    else { printf("info A3 par%d CLEAR outbuf on held freeze edge mid-dump: illegal=%d n=%d\n",al,h.c.illegal,n); sprintf(id,"R9-A3b-CLEAR-outbuf-mid-dump-held-edge-collides-par%d",al); CHECK(id, h.c.illegal); } }
  char*lk=slurp("docs/LOCKS.md"),*sp=slurp("docs/SPEC.md");
  CHECK("R9-A4-LOCKS-ABORT-wait>=1beat", lk && strstr(lk,"after DUMP_ABORT wait ≥1 beat"));
  CHECK("R9-A4b-SPEC-ABORT-wait", sp && strstr(sp,"After DUMP_ABORT, wait at least 1 output tick"));
}
static void t_live(void){ char id[96];
  long ones=0,beats=0; srand(77); for(int cfg=0;cfg<4;cfg++){ H h; hreset(&h,cfg&1,cfg>>1,cfg&1); for(int s=0;s<200000;s++){ int r=rand()%10; uint8_t i=0;
      if(r==0) i=0x10; else if(r==1) i=0x20; else if(r==2) i=0x30; else if(r==3) i=0x40; else if(r==4) i=0x50|(rand()&0xF); else if(r==5) i=0xC0;
      uint8_t o=chip_step(&h.c,rand()&0xFF,i); if(!h.c.ofz){ beats++; ones+=!!(o&0x80);} } }
  printf("info V1 %ld unfrozen steps, uo7=1 on %ld\n",beats,ones); CHECK("R9-V1-live-uo7==0-long-unfrozen", ones==0 && beats>0);
  for(int al=0;al<2;al++){ H h; hreset(&h,1,0,al); idle(&h,3); int jf=h.n; st(&h,0,0x60); idle(&h,5); sprintf(id,"R9-V2-frozen-DEBUG_FLAGS-bit3=1-par%d",al); CHECK(id, h.pad[jf+3]&0x08); }
}
static void t_static(void){
  char*s=slurp("pnr/polite_vneg1.sdc"),*sp=slurp("docs/SPEC.md"),*ls=slurp("LESSONS.md"),*rd=slurp("README.md"),*ct=slurp("rtl/ctrl/polite_ctrl.sv"),*ch=slurp("host/mnist/chipio.py");
  CHECK("R9-S1-SDC-setup2-from-clk-to-uo", s && strstr(s,"set_multicycle_path -setup 2 -from [get_clocks clk] -to $uo_ports"));
  CHECK("R9-S1b-SDC-hold1-from-clk-to-uo", s && strstr(s,"set_multicycle_path -hold  1 -from [get_clocks clk] -to $uo_ports"));
  CHECK("R9-S1c-SDC-no-bare-to-uo", s && !strstr(s,"-setup 2 -to $uo_ports") && !strstr(s,"-hold  1 -to $uo_ports"));
  CHECK("R9-D1-ctrl-header-fresh", ct && !strstr(ct,"89dad4e"));
  CHECK("R9-D2-LESSONS-uo7-superseded", ls && strstr(ls,"Live uo[7] is 0"));
  CHECK("R9-D3-chipio-no-separator-assert", ch && !strstr(ch,"edges[s0+48]") && !strstr(ch,"edges[s0 + 48]"));
  CHECK("R9-D3b-chipio-counts-24-no-dbg-in-dump", ch && strstr(ch,"range(24)") && !strstr(ch,"DUMP_LOAD); self.step(0, DBG"));
  const char*bad[]={"frames on uo[6] only","uo[6] alone","no phase tracking"}; int hit=0; const char*docs[]={sp,ls,rd};
  for(int d=0;d<3;d++) for(int b=0;b<3;b++) if(docs[d]&&strstr(docs[d],bad[b])){ printf("info doc %d contains '%s'\n",d,bad[b]); hit++; }
  CHECK("R9-D4-no-unqualified-uo6-only-framing-claims", hit==0);
  CHECK("R9-D5-SPEC-uo7-live-0", sp && strstr(sp,"live `uo_out[7]` is 0"));
  /* SPEC debug section: "with debug busy = 1" during freeze -- must not imply a live pin */
  if(sp && strstr(sp,"with debug busy = 1")) printf("info D6 SPEC §debug still says 'with debug busy = 1' (internal flag only; pin is the byte) -- Low wording\n");
  GAP("R9-G1","RTL lockstep not rerun (no iverilog/verilator on box); tb ties ena=1, ena hold of out_phase_q unverified in sim.");
}
int main(void){ t_freeze(); t_count(); t_abort(); t_live(); t_static();
  printf("R9 pass=%d fail=%d gap=%d\n",passes,fails,gaps); return fails!=0; }
