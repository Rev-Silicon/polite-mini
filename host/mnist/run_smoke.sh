#!/bin/sh
# Runs all 4 golden configs (A/B x op_place 0/1). Exit 0 iff every forward pass completes bit-exact.
set -e; cd "$(dirname "$0")"
for c in A B; do for p in 0 1; do python3 run_smoke.py --cfg $c --place $p --n "${N:-8}"; done; done
