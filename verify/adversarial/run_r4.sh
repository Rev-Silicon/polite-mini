#!/usr/bin/env bash
set -o pipefail
cd "$(dirname "$0")/../.."
gcc -Wall -O2 -DCHIP_NO_MAIN -c golden/chip.c -o /tmp/chip_r4.o && \
gcc -Wall -O2 -o /tmp/test_break_r4 verify/adversarial/test_break_r4.c /tmp/chip_r4.o && \
/tmp/test_break_r4 2>&1 | tee verify/adversarial/last_run_r4.log
