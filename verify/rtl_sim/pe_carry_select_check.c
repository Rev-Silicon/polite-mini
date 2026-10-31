#include <stdio.h>
#include <stdlib.h>
int main(){ long bad=0,n=0; int his[]={0,1,0x7FFF,0x7FFE,0x8000,0x8001,0xFFFF,0xFFFE,0x1234,0xABCD};
 for(int hh=0;hh<10+2000;hh++){ int hi= hh<10?his[hh]:rand()&0xFFFF;
  for(int lo8=0;lo8<256;lo8++) for(int m=0;m<256;m++){ int ps=(hi<<8)|lo8; int sps=(ps^0x800000)-0x800000; int sm=(m^0x80)-0x80;
   long ref=(long)sps+sm; long w=((ref&0xFFFFFF)^0x800000)-0x800000; int rovf=(w!=ref); int rp=ref&0xFFFFFF;
   int l=lo8+m, c=l>>8, s=m>>7, up=c&&!s, dn=!c&&s; int h= up?(hi+1)&0xFFFF: dn?(hi-1)&0xFFFF:hi;
   int p=(h<<8)|(l&0xFF); int ovf=(up&&hi==0x7FFF)||(dn&&hi==0x8000); n++; if(p!=rp||ovf!=rovf)bad++; }}
 printf("checked %ld bad %ld\n",n,bad); return bad!=0; }
