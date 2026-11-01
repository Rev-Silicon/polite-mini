#!/usr/bin/env bash
# R8: re-break of 33 MHz pad-out at 677ce98. Pin-level via chip_step; hosts decode from uo_out + own op log only.
set -o pipefail
cd "$(dirname "$0")/../.."
gcc -Wall -O2 -DCHIP_NO_MAIN -c golden/chip.c -o /tmp/chip_r8.o && \
gcc -Wall -O2 -o /tmp/test_break_r8 verify/adversarial/test_break_r8.c /tmp/chip_r8.o && \
/tmp/test_break_r8 2>&1 | tee verify/adversarial/last_run_r8.log
