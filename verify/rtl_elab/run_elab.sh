#!/bin/bash
# Usage: verify/rtl_elab/run_elab.sh <tag>   (run from repo root, tools on PATH)
set -u; TAG=${1:-run}; D=verify/rtl_elab; OUT=$D/$TAG; mkdir -p $OUT
SRC=$(find rtl -name '*.sv' | sort); rc=0; : > $OUT/results.txt
for c in configs/*.vh; do n=$(basename $c .vh); W=$OUT/w_$n; mkdir -p $W; cp $c $W/cfg.vh
  iverilog -g2012 -Wall -I$W -s cfg_wrap -o $W/sim.vvp $SRC $D/cfg_wrap.sv > $OUT/iverilog_$n.log 2>&1; r1=$?
  verilator --lint-only -Wall -Wno-DECLFILENAME -I$W --top-module cfg_wrap $SRC $D/cfg_wrap.sv > $OUT/verilator_$n.log 2>&1; r2=$?
  echo "$n iverilog=$([ $r1 = 0 ] && echo PASS || echo FAIL) verilator=$([ $r2 = 0 ] && echo PASS || echo FAIL)" | tee -a $OUT/results.txt
  [ $r1 = 0 ] && [ $r2 = 0 ] || rc=1; done
exit $rc
