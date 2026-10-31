#!/usr/bin/env bash
set -o pipefail
cd "$(dirname "$0")/../.."
gcc -Wall -O2 -DCHIP_NO_MAIN -c golden/chip.c -o /tmp/chip_r5.o && \
gcc -Wall -O2 -Dchip_step=chip_core_step -o /tmp/test_break_r5 verify/adversarial/test_break_r5.c /tmp/chip_r5.o && \
/tmp/test_break_r5 2>&1 | tee verify/adversarial/last_run_r5.log
