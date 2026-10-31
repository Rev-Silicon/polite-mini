#!/usr/bin/env bash
# Run a command inside the LibreLane container; repo + $HOME mounted 1:1.
set -euo pipefail
IMG=${LIBRELANE_IMAGE:-ghcr.io/librelane/librelane:3.0.14}
POLITE_MEM_MAX=${POLITE_MEM_MAX:-9g}
REPO=$(cd "$(dirname "$0")/.." && pwd)
exec docker run --rm --memory="$POLITE_MEM_MAX" --memory-swap="$POLITE_MEM_MAX" --user "$(id -u):$(id -g)" -e HOME="$HOME" \
  -e PDK_ROOT="${PDK_ROOT:-$HOME/.ciel}" ${POLITE_DOCKER_ENV:-} \
  -v "$HOME:$HOME" -v "$REPO:$REPO" -w "$REPO" "$IMG" nice -n 10 "$@"
