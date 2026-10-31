#!/bin/bash
# Run from repo root with iverilog/vvp on PATH. Needs gcc.
set -u; D=verify/rtl_sim; N=${N:-200000}; mkdir -p $D/out; rc=0; : > $D/out/results.txt
gcc -O2 -DCHIP_NO_MAIN -o $D/out/gen $D/gen_vectors.c golden/chip.c || exit 1
SRC=$(find rtl -name '*.sv' | sort)
for c in configs/*.vh; do n=$(basename $c .vh); A=$(awk '/HAS_OUTBUF/{print $3}' $c); P=$(awk '/OP_PLACE/{print $3}' $c)
  W=$D/out/$n; mkdir -p $W; cp $c $W/cfg.vh
  for s in 1 2 3; do $D/out/gen $A $P $N $s > $W/vec$s.txt; done
  iverilog -g2012 -I$W -s tb_lockstep -o $W/tb.vvp $SRC verify/rtl_elab/cfg_wrap.sv $D/tb_lockstep.sv 2>$W/build.log || { echo "$n BUILD FAIL"; rc=1; continue; }
  for s in 1 2 3; do r=$(vvp -n $W/tb.vvp +VEC=$W/vec$s.txt | tee $W/sim$s.log | grep -E '^(PASS|FAIL)'); echo "$n seed$s $r" | tee -a $D/out/results.txt; echo "$r" | grep -q PASS || rc=1; done
done; exit $rc
