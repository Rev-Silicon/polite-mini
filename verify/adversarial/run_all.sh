#!/usr/bin/env bash
# R1-R9 adversarial (R8/R9 are pin-level + doc checks) suites target core semantics (chip_core_step); pad pipeline is covered by chip_test PIPE + RTL lockstep.
cd "$(dirname "$0")"; rc=0
for s in run.sh run_r2.sh run_r3.sh run_r4.sh run_r5.sh run_r6.sh run_r7.sh run_r8.sh run_r9.sh; do ./$s >/dev/null 2>&1; e=$?; echo "$s exit=$e"; [ $e = 0 ] || rc=1; done; exit $rc
