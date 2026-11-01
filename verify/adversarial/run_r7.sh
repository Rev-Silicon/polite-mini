#!/usr/bin/env bash
# R7: 33 MHz pad-out / half-rate uo_out. Pin-level: chip_step is NOT redefined to chip_core_step.
set -o pipefail
cd "$(dirname "$0")/../.."
gcc -Wall -O2 -DCHIP_NO_MAIN -c golden/chip.c -o /tmp/chip_r7.o && \
gcc -Wall -O2 -o /tmp/test_break_r7 verify/adversarial/test_break_r7.c /tmp/chip_r7.o && \
/tmp/test_break_r7 2>&1 | tee verify/adversarial/last_run_r7.log
