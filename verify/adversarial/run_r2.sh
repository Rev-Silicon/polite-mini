#!/usr/bin/env bash
set -o pipefail
cd "$(dirname "$0")/../.."
gcc -Wall -O2 -DCHIP_NO_MAIN -c golden/chip.c -o /tmp/chip_r2.o && \
gcc -Wall -O2 -Dchip_step=chip_core_step -o /tmp/test_break_r2 verify/adversarial/test_break_r2.c /tmp/chip_r2.o && \
/tmp/test_break_r2 2>&1 | tee verify/adversarial/last_run_r2.log
