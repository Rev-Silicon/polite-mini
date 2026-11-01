#!/usr/bin/env bash
# R9: re-break at 30677ec under R8 locks. Pin-level via chip_step; hosts decode from uo_out + own op log only.
set -o pipefail
cd "$(dirname "$0")/../.."
gcc -Wall -O2 -DCHIP_NO_MAIN -c golden/chip.c -o /tmp/chip_r9.o && \
gcc -Wall -O2 -o /tmp/test_break_r9 verify/adversarial/test_break_r9.c /tmp/chip_r9.o && \
/tmp/test_break_r9 2>&1 | tee verify/adversarial/last_run_r9.log
