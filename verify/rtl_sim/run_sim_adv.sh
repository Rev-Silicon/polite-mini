#!/bin/bash
# Extended RTL<->golden lockstep (heavier than run_sim.sh). Run from repo root with iverilog/vvp on PATH; needs gcc, python3+numpy.
# Modes: ena toggles (all 16 opcodes), directed 24b overflow ramp, host-legal stream, MNIST pin replay. N=${N:-400000} per run.
set -u -o pipefail; D=verify/rtl_sim; N=${N:-400000}; O=$D/out/adv; mkdir -p $O; rc=0; : > $O/results.txt
gcc -O2 -DCHIP_NO_MAIN -o $O/gen $D/gen_adv.c golden/chip.c || exit 1
SRC=$(find rtl -name '*.sv' | sort)
for c in configs/a0_outbuf_place0.vh configs/b0_no_outbuf_place0.vh; do n=$(basename $c .vh); A=$(awk '/HAS_OUTBUF/{print $3}' $c)
  W=$O/$n; mkdir -p $W; cp $c $W/cfg.vh
  iverilog -g2012 -I$W -s tb_adv -o $W/tb.vvp $SRC verify/rtl_elab/cfg_wrap.sv $D/tb_adv.sv 2>$W/build.log || { echo "$n BUILD FAIL"; rc=1; continue; }
  for m in 0 1 2; do $O/gen $A $m $N $m > $W/v$m.txt 2>$W/gen$m.log
    r=$(vvp -n $W/tb.vvp +VEC=$W/v$m.txt | grep -E '^(PASS|FAIL)'); echo "$n mode$m $r $(cat $W/gen$m.log)" | tee -a $O/results.txt; echo "$r" | grep -q PASS || rc=1; done
  cfg=$([ "$A" = 1 ] && echo A || echo B); python3 $D/mnist_record.py $cfg $W/mnist.txt 2 >/dev/null || rc=1
  r=$(vvp -n $W/tb.vvp +VEC=$W/mnist.txt | grep -E '^(PASS|FAIL)'); echo "$n mnist $r" | tee -a $O/results.txt; echo "$r" | grep -q PASS || rc=1
done; exit $rc
