/* Extended lockstep vectors (golden-stepped on enabled edges only). Modes: 0 random all-16-opcodes + ena toggles; 1 directed 24b overflow ramp (wrap, CLEAR flags, re-wrap, reverse) + ena drops; 2 host-legal stream (freezes spaced >=6) + ena.
 line: "ena ui uio uo_expected" (hex); ena is the pin value, the RTL registers it (one-edge delay), mirrored by enq. */
#include <stdio.h>
#include <stdlib.h>
#include "../../golden/chip.h"
int main(int argc,char**argv){ int A=atoi(argv[1]),mode=atoi(argv[2]),N=atoi(argv[3]); srand(atoi(argv[4]));
  chip_t c; chip_reset(&c,A,0); int enq=1; uint8_t last=0; int gap=0,ovfn=0;
  static const int w[16]={4,5,6,3,1,3,2,1,2,1,2,1,1,1,1,1}; int tot=0; for(int i=0;i<16;i++) tot+=w[i];
  for(int n=0;n<N;n++){ int ena=1; uint8_t d=rand(), ins=0;
    if(mode==1){ /* LOAD 0x88 then RUN 0x88 forever, occasional dbg flags / psum / dump */
      int k=n%4096; if(n==0){d=0x88;ins=0x10;} else if(k==100){ins=0x60;} else if(k==200){ins=0x80|(rand()&3);} else if(k==300 && A){ins=0x30;}
      else if(k>=1000 && k<1010){ins=0x00;} else { ins=0x20; d=(n>200000)?0x77:0x88; if(n>150000 && n<150003) ins=0x51; }
      ena = (rand()%50)!=0;
    } else if(mode==0){ int r=rand()%tot,op=0; while(r>=w[op]) r-=w[op++]; int arg=rand()&0xF; if(op==6&&rand()%4)arg=0;
      ins=op<<4|arg; ena=(rand()%5)!=0; if(rand()%7==0) ena=0; }
    else { /* host-legal: no freeze within 6 edges of last freeze */ int r=rand()%tot,op=0; while(r>=w[op]) r-=w[op++];
      int arg=rand()&0xF; if(op>=6&&op<=0xB){ if(gap<6) op=2; else { if(op==6) arg=0; gap=0; } } if(op>=0xC && rand()%4) op=0;
      ins=op<<4|arg; gap++; ena=(rand()%9)!=0; }
    if(enq) last=chip_step(&c,d,ins); /* edge uses registered ena from previous pin value */
    printf("%d %02x %02x %02x\n",ena,d,ins,last); enq=ena; if(c.ovf) ovfn++; }
  fprintf(stderr,"golden ovf-edges=%d\n",ovfn);
  return 0; }
