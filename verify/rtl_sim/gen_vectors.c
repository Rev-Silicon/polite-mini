/* Random lockstep vectors from golden/chip.c: each line "ui uio uo_expected" (hex). Build with -DCHIP_NO_MAIN. */
#include <stdio.h>
#include <stdlib.h>
#include "../../golden/chip.h"
int main(int argc,char**argv){ int A=atoi(argv[1]),P=atoi(argv[2]),N=atoi(argv[3]); srand(atoi(argv[4]));
  chip_t c; chip_reset(&c,A,P);
  static const int w[16]={4,5,6,3,1,3,2,1,2,1,2,1,1,0,0,1}; int tot=0; for(int i=0;i<16;i++) tot+=w[i];
  for(int n=0;n<N;n++){ int r=rand()%tot,op=0; while(r>=w[op]) r-=w[op++];
    int arg=rand()&0xF; if(op==6 && rand()%4) arg=0; if(op==5 && rand()%3==0) arg=1; if(op==8 && (arg>>2)==3 && rand()%2) arg&=7;
    uint8_t d=rand()&0xFF; if(rand()%3==0) d=(rand()%2)?0x77:0x88; /* push toward OVF */
    uint8_t ins=op<<4|arg; uint8_t o=chip_step(&c,d,ins); printf("%02x %02x %02x\n",d,ins,o); }
  return 0; }
