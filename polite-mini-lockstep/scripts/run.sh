#!/usr/bin/env bash
set -euo pipefail
cd -- "$(dirname -- "${BASH_SOURCE[0]}")/.."
if (($# == 0)); then
    exec make test
fi
exec make "$@"
