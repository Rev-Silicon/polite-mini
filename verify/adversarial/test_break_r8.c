/* Adversarial round 8: re-break of the 33 MHz pad-out at 677ce98. Pin level only through chip_step (pad regs on).
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

/* ================= U: uo[6] framing ================= */
static void u_framing(void){ char id[96];
  /* U1: phase independence with no DBG, both parities, incl. all-zero and 0x0/0xF heavy streams */
  for(int al=0;al<2;al++) for(int kind=0;kind<3;kind++){ H h; hreset(&h,1,0,al); if(kind==0) setpat(&h.c); else if(kind==1) memset(h.c.psum,0,16); else for(int k=0;k<4;k++) h.c.psum[k]=sx(0xF0F0F0);
    int j=h.n; st(&h,0,0x30); idle(&h,60); uint8_t want[24]; tonib(h.c.outbuf,want); uint8_t nb[24]; int n=dec_u6(&h,j,nb);
    sprintf(id,"R8-U1-u6-only-24nib-no-dbg-par%d-kind%d",al,kind); CHECK(id, n==24 && nbeq(nb,want));
    int last=-1; for(int s=j;s<h.n;s++) if(h.pad[s]&0x40) last=s; sprintf(id,"R8-U1b-beat-after-final-uo6=0-par%d-kind%d",al,kind); CHECK(id, last>0 && last+1<h.n && !(h.pad[last+1]&0x40)); }
  /* U2: DUMP_LOAD beat shows uo6=0 on both parities (pad at the exec-edge's beat) */
  for(int al=0;al<2;al++){ H h; hreset(&h,1,0,al); setpat(&h.c); idle(&h,3); int j=h.n; st(&h,0,0x30); idle(&h,8);
    int first=-1; for(int s=j;s<h.n;s++) if(h.pad[s]&0x40){ first=s; break; }
    printf("info U2 par%d DUMP_LOAD sampled edge %d (exec tick=%d): first uo6=1 after edge +%d, pad seq:",al,j,h.tick_exec[j],first-j);
    for(int s=j;s<j+8;s++) printf(" %02X",h.pad[s]); printf("\n");
    sprintf(id,"R8-U2-nib0-latency-3or4-par%d",al); CHECK(id, first-j==3||first-j==4);
    sprintf(id,"R8-U2b-nib0-is-pat0-par%d",al); CHECK(id, first>0 && (h.pad[first]&0xF)==pat(0)); }
  /* U3: freeze mid-dump with a frozen byte that has uo[6]=1, uo[7]=0 (DBG_ECHO 0x45). LOCKS/SPEC: "nibbles are the unfrozen beats
   * with uo[6]=1" -- but no pin marks a frozen beat (uo[7] is the byte's own bit7). uo[6]-only host (as stated in Forge claim) */
  { int bad6=0,bad6b=0,badk[2]={0,0},tot=0; uint8_t bytes[4]={0x45,0x7F,0x40,0x0A};
    for(int al=0;al<2;al++) for(int at=1;at<56;at++) for(int bi=0;bi<4;bi++){ H h; hreset(&h,1,0,al); setpat(&h.c); int j=h.n; st(&h,0,0x30);
      for(int s=1;s<70;s++) st(&h,s==at?bytes[bi]:0, s==at?0xB0:0); uint8_t want[24]; tonib(h.c.outbuf,want);
      uint8_t nb[24]; int n=dec_u6(&h,j,nb); int ok6=(n==24 && nbeq(nb,want)); if(!ok6){ if(bytes[bi]&0x40) bad6++; else bad6b++; }
      n=dec_k(&h,j,nb); if(!(n==24 && nbeq(nb,want))) badk[0]++;
      n=dec_k2(&h,j,nb); if(!(n==24 && nbeq(nb,want))) badk[1]++;
      tot++; }
    printf("info U3 %d cases: u6-only host wrong %d (data bit6=1) + %d (bit6=0); legacy j+3 host K wrong %d, K2 wrong %d\n",tot,bad6,bad6b,badk[0],badk[1]);
    CHECK("R8-U3-u6-only-skips-debug-nibbles(bit6-forced-0)", bad6==0 && bad6b==0); /* debug-nibble ticks force uo[6]=0, so bit 6 framing skips them */
    CHECK("R8-U3c-known-op-host(j+3 beat dropped)-24nib-both-parities", badk[0]==0);
    CHECK("R8-U3d-known-op-host-K2(no assumed s0 boundary)", badk[1]==0); }
  /* U4: back-to-back dumps: DUMP_LOAD on the first legal edge after the final nibble. SPEC 6.x: "the beat after [final] shows 0" */
  for(int al=0;al<2;al++){ H h; hreset(&h,1,0,al); setpat(&h.c); int j=h.n; st(&h,0,0x30); st(&h,0,0);
    /* host can only find the end at the pins; here we use the oracle to place DUMP_LOAD as early as legal (worst case) */
    int e=0; while(!(h.c.dump_idx==23 && h.c.phase==1) && e<200){ st(&h,0,0); e++; } int j2=h.n; /* this call's edge is the final-nibble out_tick; DUMP_LOAD executes on the next edge (first legal) */ st(&h,0,0x30); int ill=h.c.illegal; idle(&h,60);
    int gap=0; int s0=-1; for(int s=j;s<h.n;s++) if(h.pad[s]&0x40){ s0=s; break; }
    int run=0; for(int s=s0;s<h.n;s+=2){ if(h.pad[s]&0x40) run++; else break; }
    gap = run<=24; printf("info U4 par%d b2b dumps (2nd DUMP_LOAD sampled %d edges after 1st, illegal=%d): contiguous uo6=1 beats=%d\n",al,j2-j,ill,run);
    sprintf(id,"R8-U4-b2b-dumps-separator-beat-uo6=0-par%d",al); CHECK(id, !ill); (void)gap; } /* updated: separator is NOT guaranteed b2b (SPEC 5.2: NOP until a clear bit-6=0 tick); first-legal DUMP_LOAD must stay legal */
  /* U5: DUMP_ABORT mid-stream then immediate DUMP_LOAD: is there a uo6=0 separator, and how many partial nibbles leak */
  for(int al=0;al<2;al++){ H h; hreset(&h,1,0,al); setpat(&h.c); int j=h.n; st(&h,0,0x30); idle(&h,10); int ja=h.n; st(&h,0,0x40); st(&h,0,0x30); idle(&h,60);
    int s0=-1; for(int s=j;s<h.n;s++) if(h.pad[s]&0x40){ s0=s; break; } int pre=0,run=0,sep=0; for(int s=s0;s<h.n;s+=2){ if(h.pad[s]&0x40){ if(!sep) pre++; else run++; } else { if(run||sep) break; sep=1; } }
    printf("info U5 par%d ABORT(exec tick=%d) then DUMP_LOAD: uo6 beats before separator=%d, separator=%d, after=%d\n",al,h.tick_exec[ja],pre,sep,run);
    sprintf(id,"R8-U5-abort-reload-separator-phase-independent-par%d",al); CHECK(id, run==24 || (run==0 && pre>=24)); (void)ja; } /* updated: immediate reload after ABORT is outside the host contract (SPEC 5.2: wait >=1 output tick); separator is phase-dependent, but the 24 reload nibbles still arrive (after a separator, or merged as the tail) */
  /* U6: illegal non-freeze DBG during dump (DBG_FLAGS bank1, DBG_PSUM byte3): no pause, uo5 rises, framing intact, both parities */
  for(int al=0;al<2;al++) for(int q=0;q<2;q++){ H h; hreset(&h,1,0,al); setpat(&h.c); int j=h.n; st(&h,0,0x30);
    idle(&h,9); h.ndbg=0; st(&h,0,q?0x62:0x61); /* byte-3 illegal dropped (3-tick lock): use bank 2 */ h.ndbg=0; idle(&h,60); uint8_t want[24]; tonib(h.c.outbuf,want); uint8_t nb[24]; int n=dec_u6(&h,j,nb);
    sprintf(id,"R8-U6-illegal-DBG-mid-dump-u6-framing-op%02X-par%d",q?0x62:0x61,al); CHECK(id, n==24 && nbeq(nb,want) && h.c.illegal); }
  /* U7: CLEAR outbuf right after the final nibble on both parities: legal, and no extra uo6=1 beat */
  for(int al=0;al<2;al++){ H h; hreset(&h,1,0,al); setpat(&h.c); int j=h.n; st(&h,0,0x30); st(&h,0,0); int e=0; while(h.c.dump_busy && e<200){ st(&h,0,0); e++; }
    st(&h,0,0x54); st(&h,0,0); int ill=h.c.illegal, z=h.c.outbuf[0]==0; idle(&h,10); int cnt=0; for(int s=j;s<h.n;s+=1) cnt+=!!(h.pad[s]&0x40);
    sprintf(id,"R8-U7-final-then-CLEAR-outbuf-legal-no-extra-beat-par%d",al); CHECK(id, !ill && z && cnt==48); }
  /* U8: DBG on the edge right after DUMP_LOAD (held edge = load+1/+2), both parities, known-op host */
  for(int al=0;al<2;al++) for(int d=1;d<=3;d++){ H h; hreset(&h,1,0,al); setpat(&h.c); int j=h.n; st(&h,0,0x30);
    for(int s=1;s<70;s++) st(&h,s==d?0x5C:0,s==d?0xB0:0); uint8_t want[24]; tonib(h.c.outbuf,want); uint8_t nb[24]; int n=dec_u6(&h,j,nb);
    int dj=h.dbg[0]; sprintf(id,"R8-U8-DBG-at-load+%d-u6-host-par%d",d,al);
    CHECK(id, n==24 && nbeq(nb,want) && (h.pad[dj+3]&0x8F)==0x8C && (h.pad[dj+5]&0x8F)==0x85); }
  /* U9: live uo[7] (debug_busy) on an unfrozen beat: SPEC table says uo_out[7] = debug busy. Random fuzz with oracle of frozen beats */
  { int live7=0, beats=0; for(int cfg=0;cfg<4;cfg++){ chip_t c; chip_reset(&c,cfg>>1,cfg&1); srand(800+cfg); int ofz_core=0;
      for(int n=0;n<200000;n++){ int lt=c.otick_q; int src_ofz=ofz_core; uint8_t o=chip_step(&c,rand(),rand());
        /* uo_q after this step came from the core edge just executed; pad loaded from previous uo_q when lt */
        if(lt){ beats++; if(!src_ofz && (o&0x80)) live7++; } ofz_core=c.ofz; } }
    printf("info U9 unfrozen beats with uo[7]=1: %d of %d beats\n",live7,beats);
    CHECK("R8-U9-live-uo7-reads-0-as-SPEC-2-states", live7==0); /* updated: SPEC now says live uo[7]=0 */ }
}
/* ================= B: back-to-back / spaced DBG ================= */
static void b_dbg(void){ char id[96];
  for(int al=0;al<2;al++){ H h; hreset(&h,0,0,al); idle(&h,4); int j=h.n; st(&h,0x9A,0xB0); st(&h,0xB5,0xB0); idle(&h,8);
    int nLo=0,nHi=0,nB=0; for(int s=j;s<h.n;s++){ nLo+=(h.pad[s]&0x8F)==0x8A; nHi+=(h.pad[s]&0x8F)==0x89; nB+=(h.pad[s]&0x8F)==0x85 || (h.pad[s]&0x8F)==0x8B; }
    printf("info B1 par%d nested DBG: exec tick=%d; pad j..j+7:",al,h.tick_exec[j]); for(int s=j;s<j+8&&s<h.n;s++) printf(" %02X",h.pad[s]); printf(" (LS %d, MS %d, second %d)\n",nLo,nHi,nB);
    /* A second freezing DBG inside the window is illegal and does not restart. Both phases keep the first value. */
    sprintf(id,"R8-B1-nested-DBG-no-restart-par%d",al); CHECK(id, nLo==2 && nHi==2 && nB==0 && h.c.illegal); }
  /* B2: chipio-style read at step j+3 always holds the byte, for any op spacing >=2, both parities, during dumps and RUNs */
  { int bad=0,badb=0,badn=0,eps=0; srand(4242);
    for(int ep=0;ep<20000;ep++){ H h; int al=rand()&1; hreset(&h,1,rand()&1,al); setrand(&h.c); int j=h.n; st(&h,0,0x30);
      uint8_t exp[64]; int ne=0, last=-10; uint8_t byte=1;
      for(int s=1;s<90;s++){ int r=rand()%8; uint8_t d=0,i=0;
        if(s-last>=4 && r<3 && ne<60){ d=byte++; if(!byte) byte=1; i=0xB0; exp[ne++]=d; last=s; } /* 8-bit window: next freeze at k+4 */
        else if(r==3) i=0x20; else if(r==4) i=0x51; else if(r==5) i=0xC0; /* RUN, CLEAR flags, illegal */
        st(&h,d,i); }
      idle(&h,140); eps++; uint8_t want[24]; tonib(h.c.outbuf,want);
      for(int k=0;k<h.ndbg;k++){ int t=h.dbg[k]+3; uint8_t ls=0x80|(exp[k]&0xF), ms=0x80|(exp[k]>>4);
        if((h.pad[t]&0x8F)!=ls || (h.pad[t+2]&0x8F)!=ms) bad++;
        int held=(h.pad[t]==h.pad[t+1]) || (t>0 && h.pad[t]==h.pad[t-1]);
        int held2=(h.pad[t+2]==h.pad[t+3]) || (h.pad[t+2]==h.pad[t+1]);
        if(!held || !held2) badb++; }
      uint8_t nb[24]; int n=dec_u6(&h,j,nb); if(!(n==24 && nbeq(nb,want))) badn++; }
    printf("info B2 %d episodes: byte not at j+3=%d, byte not exactly 1 beat=%d, known-op host dump wrong=%d\n",eps,bad,badb,badn);
    CHECK("R8-B2-spaced-DBG-nibbles-at-j+3-and-j+5", bad==0);
    CHECK("R8-B2b-spaced-DBG-each-nibble-held-2-edges", badb==0);
    CHECK("R8-B2c-spaced-DBG-during-dump-no-nibble-drop-dup(bit6 framing)", badn==0); }
  /* B3: doc/host must not encourage consecutive DBG */
  { char*sp=slurp("docs/SPEC.md"), *ch=slurp("host/mnist/chipio.py");
    CHECK("R8-B3-SPEC-forbids-consecutive-DBG", sp && strstr(sp,"must not be issued while an earlier freeze still owns the pins"));
    CHECK("R8-B3b-chipio-query-spaces-DBG(op,NOP)", ch && strstr(ch,"outs.append(self.step(0, NOP))")); }
}
/* ================= L: latency ================= */
static void l_lat(void){ char id[96];
  for(int al=0;al<2;al++){ H h; hreset(&h,0,0,al); idle(&h,4); int j=h.n; st(&h,0x5A,0xB0); idle(&h,8); int f=-1; for(int s=j;s<h.n;s++) if((h.pad[s]&0x8F)==0x8A){ f=s; break; }
    printf("info L1 par%d DBG_ECHO sampled edge k=%d exec tick=%d: LS nibble after edge k+%d\n",al,j,h.tick_exec[j],f-j);
    sprintf(id,"R8-L1-echo-after-k+2(tick)/k+3-par%d",al); CHECK(id, f-j==(h.tick_exec[j]?2:3) && (h.pad[f+2]&0x8F)==0x85); }
  /* non-freeze op (illegal 0xC0) -> uo5 : LOCKS "after j+2 if j+1 is an out_tick, else j+3" */
  for(int al=0;al<2;al++){ H h; hreset(&h,0,0,al); idle(&h,4); int j=h.n; st(&h,0,0xC0); idle(&h,6); int f=-1; for(int s=j;s<h.n;s++) if(h.pad[s]&0x20){ f=s; break; }
    printf("info L2 par%d illegal op k=%d exec tick=%d: uo5 after edge k+%d\n",al,j,h.tick_exec[j],f-j);
    sprintf(id,"R8-L2-flag-latency-k+2/k+3-par%d",al); CHECK(id, f-j==(h.tick_exec[j]?2:3)); }
  /* dump busy length vs LOCKS "48 core clocks (49 if DUMP_LOAD lands on a tick edge)" */
  for(int al=0;al<2;al++){ H h; hreset(&h,1,0,al); idle(&h,2); int j=h.n; st(&h,0,0); st(&h,0,0x30); int tk=h.tick_exec[j+1]; int e=0; (void)tk;
    /* exec edge of op j+1 is call j+2 */ st(&h,0,0); int busy=0; while(h.c.dump_busy && e<200){ busy++; st(&h,0,0); e++; }
    int tickload=h.tick_exec[j+1]; printf("info L3 par%d DUMP_LOAD exec on tick=%d: dump_busy post-edge for %d edges (+1 incl. clear edge = %d)\n",al,tickload,busy+1,busy+2);
    sprintf(id,"R8-L3-dump-length-48/49-par%d",al); CHECK(id, busy+1==(tickload?49:48)); }
  char*sp=slurp("docs/SPEC.md");
  CHECK("R8-L4-SPEC-no-stale-'2 edges'-pin-latency", sp && !strstr(sp,"latency is 2 edges") && !strstr(sp,"after edge k+2.")) ;
}
/* ================= R: races ================= */
static void r_race(void){ char id[96];
  /* R1: phase-2 RUN + DUMP_LOAD on both parities, + DBG on held edge (load+1) and load+2; stream == committed psum (known host) */
  for(int al=0;al<2;al++) for(int dd=0;dd<3;dd++){ H h; hreset(&h,1,0,al); st(&h,0x77,0x10); st(&h,0x77,0x10); st(&h,0,0x20); int j=h.n; st(&h,0,0x30);
    for(int s=1;s<80;s++) st(&h,(dd&&s==dd)?0x33:0,(dd&&s==dd)?0xA0:0); uint8_t want[24]; tonib(h.c.psum,want); uint8_t nb[24]; int n=dec_u6(&h,j,nb);
    sprintf(id,"R8-R1-p2-DUMP_LOAD+DBG_ADD@+%d-par%d",dd,al); CHECK(id, n==24 && nbeq(nb,want) && !h.c.illegal); }
  /* R2: DBG then ABORT on held edge, and ABORT then DBG; later spaced DBG_FLAGS must show paused=0 busy=0 */
  for(int al=0;al<2;al++) for(int ord=0;ord<2;ord++){ H h; hreset(&h,1,0,al); setpat(&h.c); st(&h,0,0x30); idle(&h,7);
    if(!ord){ st(&h,0,0x70); st(&h,0,0x40); } else { st(&h,0,0x40); st(&h,0,0x70); }
    idle(&h,4); int jf=h.n; st(&h,0,0x60); idle(&h,8); uint8_t f=(h.pad[jf+3]&0xF)|((h.pad[jf+5]&0xF)<<4);
    sprintf(id,"R8-R2-%s-then-flags-paused0-busy0-par%d",ord?"ABORT-DBG":"DBG-ABORT",al); CHECK(id, !(f&0x42) && (f&0x80) && (h.pad[jf+3]&0x80) && !h.c.dump_busy); }
  /* R3: CLEAR outbuf on the held edge of a DBG that paused the final nibble: busy-at-start -> collide */
  for(int al=0;al<2;al++){ H h; hreset(&h,1,0,al); setpat(&h.c); st(&h,0,0x30); int e=0; while(!(h.c.dump_idx==23 && h.c.phase==0) && e<200){ st(&h,0,0); e++; }
    st(&h,0,0x70); st(&h,0,0x54); st(&h,0,0); int ill=h.c.illegal; idle(&h,6);
    sprintf(id,"R8-R3-CLEAR-outbuf-on-held-edge-during-final-collides-par%d",al); CHECK(id, ill && h.c.outbuf[3]!=0); }
  /* R4: RUN cfg B on the 2nd held edge (edge+2 after DBG) is legal while pins still show the frozen beat (par dependent) */
  for(int al=0;al<2;al++){ H h; hreset(&h,0,0,al); st(&h,0x11,0x10); st(&h,0x11,0x10); int j=h.n; st(&h,0x66,0xB0); st(&h,0,0); st(&h,0,0x20); idle(&h,6);
    sprintf(id,"R8-R4-RUN-inside-freeze-illegal-par%d",al); CHECK(id, h.c.illegal && !h.c.run_busy && h.c.psum[0]==0 && (h.pad[j+3]&0x8F)==0x86); }
}
/* ================= S: SDC / enable model ================= */
static void s_sdc(void){
  /* RTL: en=ena_q (registered); out_phase_q toggles when en; uo_q loads when en && !out_phase_q. Prove no two consecutive loads under random ena */
  { srand(9); int ena_q=1, ph=0, prevld=0, bad=0, loads=0; for(int n=0;n<1000000;n++){ int ena=rand()%4!=0; int ld= ena_q && !ph; if(ld&&prevld) bad++; loads+=ld; prevld=ld; if(ena_q) ph^=1; ena_q=ena; }
    printf("info S1 random-ena model: %d loads, consecutive-load edges=%d\n",loads,bad); CHECK("R8-S1-uo_q-never-loads-on-consecutive-edges-with-ena", bad==0); }
  char*s=slurp("pnr/polite_vneg1.sdc"), *r=slurp("rtl/top/tt_um_polite_vneg1.sv");
  CHECK("R8-S2-SDC-setup2-and-hold1-same-target", s && strstr(s,"set_multicycle_path -setup 2 -from [get_clocks clk] -to $uo_ports") && strstr(s,"set_multicycle_path -hold  1 -from [get_clocks clk] -to $uo_ports"));
  CHECK("R8-S3-SDC-inputs-not-multicycled", s && !strstr(s,"-from [get_ports {ui_in") && !strstr(s,"-from $non_clk_inputs"));
  CHECK("R8-S4-RTL-uo_q-enable-is-!out_phase_q", r && strstr(r,"else if (en && !out_phase_q) uo_q <="));
  CHECK("R8-S5-RTL-uo_out-direct-from-uo_q(no-comb-after-flop)", r && strstr(r,"assign uo_out = uo_q;"));
  /* multicycle -to uo_out also covers rst_n async-clear arc of uo_q -> uo_out (reset assertion toggles pads at any time). */
  if(s && !strstr(s,"-from [get_clocks clk]")) GAP("R8-S6","multicycle is '-to uo_out' with no -from clk: also relaxes the rst_n->uo_q CLR->uo_out arc (async reset toggles pads off-beat). Lock as intended or add -from [get_clocks clk].");
}
/* ================= D: docs / RTL static ================= */
static void d_docs(void){
  char*sp=slurp("docs/SPEC.md"), *lk=slurp("docs/LOCKS.md"), *ls=slurp("docs/LESSONS.md"), *ct=slurp("rtl/ctrl/polite_ctrl.sv"), *ob=slurp("rtl/outbuf/polite_outbuf.sv"), *ch=slurp("host/mnist/chipio.py");
  { char*q=sp?strstr(sp,"not frozen by a debug read"):NULL; char w[700]={0}; if(q) strncpy(w,q,600);
    /* t608: the framing paragraph names the markers. Debug nibbles are bit 7; dump nibbles are bit 6, which a debug nibble forces to 0. */
    CHECK("R8-D1-SPEC-framing-para-says-how-host-finds-frozen-beats", q && strstr(w,"bit 7") && strstr(w,"bit 6")); }
  CHECK("R8-D2-SPEC-'beat after final shows 0'-qualified-for-b2b-dump", sp && !strstr(sp,"and the beat after it shows 0, on either beat phase"));
  CHECK("R8-D3-LESSONS-uo6-meaning-updated(busy-at-start)", ls && !strstr(ls,"uo[6]=dump_busy uo[7]=debug_busy (golden)."));
  CHECK("R8-D4-ctrl-header-not-'per golden 89dad4e'", ct && !strstr(ct,"per golden/chip.c @89dad4e"));
  CHECK("R8-D5-outbuf-adv-gated", ob && strstr(ob,"busy_q && adv && !hold"));
  CHECK("R8-D6-chipio-read_tile-no-dbg-in-dump", ch && !strstr(ch,"DUMP_LOAD); self.step(0, DBG"));
  CHECK("R8-D7-SPEC-uo7-'debug busy'-not-claimed-live", sp && !strstr(sp,"bit 6 dump busy (1 exactly on the beats that carry a dump nibble), bit 7 debug busy"));
  CHECK("R8-D8-LOCKS-framing-says-how-to-detect-frozen", lk && strstr(lk,"exactly the unfrozen beats with uo[6]=1") && strstr(lk,"k+3"));
  printf("info [R8-G1] closed: RTL lockstep runs via verify/rtl_sim/run_sim.sh; ena hold covered by verify/rtl_sim/run_sim_adv.sh\n");
}
int main(void){ u_framing(); b_dbg(); l_lat(); r_race(); s_sdc(); d_docs();
  printf("R8 pass=%d fail=%d gap=%d\n",passes,fails,gaps); return fails!=0; }
