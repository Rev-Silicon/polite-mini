#!/usr/bin/env bash
set -o pipefail
cd "$(dirname "$0")/../.."
gcc -Wall -O2 -DCHIP_NO_MAIN -c golden/chip.c -o /tmp/chip.o && \
gcc -Wall -O2 -o /tmp/test_break verify/adversarial/test_break.c /tmp/chip.o && \
/tmp/test_break 2>&1 | tee verify/adversarial/last_run.log
