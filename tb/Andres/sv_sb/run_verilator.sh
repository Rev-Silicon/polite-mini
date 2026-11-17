#!/usr/bin/env bash

set -euo pipefail

script_dir="$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")" && pwd)"
repo_root="$(cd -- "$script_dir/../../.." && pwd)"

usage() {
    cat <<'EOF'
Usage:
  run_verilator.sh [options] TESTBENCH [SOURCE ...] [-- PLUSARG ...]

Options:
  -t, --top-module NAME  Top module name (default: testbench filename)
      --waves             Pass +WAVES to the testbench
      --keep-build        Keep the generated Verilator build directory
      --coverage FILE     Write Verilator line coverage data to FILE
      --coverage-toggle FILE  Write Verilator toggle coverage data to FILE
  -h, --help              Show this help

Examples:
  ./run_verilator.sh polite_outmux_tb.sv ../../../rtl/polite_outmux.sv
  ./run_verilator.sh --waves polite_outbuf_tb.sv ../../../rtl/polite_outbuf.sv
  ./run_verilator.sh --coverage outmux.dat polite_outmux_tb.sv ../../../rtl/polite_outmux.sv
  ./run_verilator.sh -t my_tb my_tb.sv rtl_a.sv rtl_b.sv -- +SEED=7
EOF
}

top_module=
keep_build=0
waves=0
coverage_file=
coverage_option=
testbench=
sources=()
plusargs=()
parsing_plusargs=0

while (($#)); do
    if ((parsing_plusargs)); then
        plusargs+=("$1")
        shift
        continue
    fi

    case "$1" in
        --)
            parsing_plusargs=1
            shift
            ;;
        -t|--top-module)
            if (($# < 2)); then
                echo "error: $1 requires a module name" >&2
                exit 2
            fi
            top_module="$2"
            shift 2
            ;;
        --waves)
            waves=1
            shift
            ;;
        --keep-build)
            keep_build=1
            shift
            ;;
        --coverage|--coverage-toggle)
            if (($# < 2)) || [[ -z "$2" || "$2" == -* ]]; then
                echo "error: $1 requires an output filename" >&2
                exit 2
            fi
            if [[ -n "$coverage_option" ]]; then
                echo "error: specify only one coverage option" >&2
                exit 2
            fi
            if [[ "$1" == "--coverage" ]]; then
                coverage_option=--coverage-line
            else
                coverage_option=--coverage-toggle
            fi
            coverage_file="$2"
            shift 2
            ;;
        -h|--help)
            usage
            exit 0
            ;;
        -*)
            echo "error: unknown option: $1" >&2
            usage >&2
            exit 2
            ;;
        *)
            if [[ -z "$testbench" ]]; then
                testbench="$1"
            else
                sources+=("$1")
            fi
            shift
            ;;
    esac
done

if [[ -z "$testbench" ]]; then
    echo "error: a testbench source is required" >&2
    usage >&2
    exit 2
fi

resolve_source() {
    local source="$1"
    if [[ "$source" = /* && -f "$source" ]]; then
        printf '%s\n' "$source"
    elif [[ -f "$PWD/$source" ]]; then
        printf '%s\n' "$PWD/$source"
    elif [[ -f "$repo_root/$source" ]]; then
        printf '%s\n' "$repo_root/$source"
    else
        echo "error: source file not found: $source" >&2
        exit 2
    fi
}

testbench_path="$(resolve_source "$testbench")"
if [[ -z "$top_module" ]]; then
    top_module="$(basename "$testbench_path")"
    top_module="${top_module%.*}"
fi

source_paths=("$testbench_path")
for source in "${sources[@]}"; do
    source_paths+=("$(resolve_source "$source")")
done

build_dir="$(mktemp -d "${TMPDIR:-/tmp}/polite-mini-verilator.XXXXXX")"
cleanup() {
    if ((keep_build == 0)); then
        rm -rf -- "$build_dir"
    else
        echo "Build directory kept at: $build_dir"
    fi
}
trap cleanup EXIT

# --assert is required: without it Verilator ignores the testbenches' immediate assert checks.
verilator_options=(--binary --timing --assert)
if ((waves)); then
    verilator_options+=(--trace)
fi
if [[ -n "$coverage_file" ]]; then
    verilator_options+=("$coverage_option")
fi

verilator "${verilator_options[@]}" \
    --Mdir "$build_dir" \
    --top-module "$top_module" \
    "${source_paths[@]}"

run_args=()
if ((waves)); then
    run_args+=("+WAVES")
fi
if [[ -n "$coverage_file" ]]; then
    run_args+=("+verilator+coverage+file+$coverage_file")
fi
run_args+=("${plusargs[@]}")

"$build_dir/V$top_module" "${run_args[@]}"
