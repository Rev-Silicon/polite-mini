#!/usr/bin/env bash
set -euo pipefail
cd "$(dirname "$0")/.."
exec ./pnr/librelane.sh librelane pnr/b0/config.json
