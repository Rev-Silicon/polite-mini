#!/usr/bin/env bash
# Mutation check for the block testbenches: each mutant injects one RTL bug
# into a temporary copy of the block; the testbench must FAIL on it.
# A surviving mutant (testbench still prints PASS) is a verification gap and
# stops the run with exit 1.
#
# Usage: run_mutants.sh pe|outbuf|outmux|ctrl|dbg [MUTANT_NAME]
# JOBS=N sets the number of parallel mutant builds (default 8).
# Expressions are GNU sed -E; use \x27 for a Verilog apostrophe.

set -uo pipefail

script_dir="$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")" && pwd)"
rtl_dir="$(cd -- "$script_dir/../../../rtl" && pwd)"

block="${1:-}"
only="${2:-}"
case "$block" in
    pe|outbuf|outmux|ctrl|dbg) ;;
    *) echo "usage: $0 pe|outbuf|outmux|ctrl|dbg [MUTANT_NAME]" >&2; exit 2 ;;
esac

rtl="$rtl_dir/polite_$block.sv"
tb="$script_dir/polite_${block}_tb.sv"
work="$(mktemp -d "${TMPDIR:-/tmp}/polite-mutants.XXXXXX")"
trap 'rm -rf -- "$work"' EXIT

mutants=()   # "name|sed-expression"
case "$block" in
pe) mutants=(
    'ovf-zero|s/full\[24\] \^ full\[23\]/1\x27b0/'
    'ovf-bit24|s/full\[24\] \^ full\[23\]/full[24]/'
    'ovf-pos-only|s/full\[24\] \^ full\[23\]/~full[24] \& full[23]/'
    'ovf-neg-only|s/full\[24\] \^ full\[23\]/full[24] \& ~full[23]/'
    'mul-signext|s/\{\{17\{mul\[7\]\}\}, mul\}/{17\x27b0, mul}/'
    'psum-signext|s/\{psum\[23\], psum\}/{1\x27b0, psum}/'
    'b-unsigned|s/\{\{4\{b\[3\]\}\}, b\}/{4\x27b0, b}/'
    'a-unsigned|s/\{\{4\{a\[3\]\}\}, a\}/{4\x27b0, a}/'
    'clr-beats-acc|s/if \(acc_en\)/if (acc_en \&\& !clr)/'
    'clr-ignored|s/else if \(clr\)/else if (1\x27b0)/'
    'mul-blocked-by-acc|s/if \(run_now\)/if (run_now \&\& !acc_en)/'
    'mul-reset|s/mul  <= 8.sd0;/mul <= 8\x27sd1;/'
    'psum-reset|s/psum <= 24.sd0;/psum <= 24\x27sd1;/'
    'ignore-en|s/else if \(en\)/else/'
) ;;
# outbuf: CLEAR bit 2 never coincides with a busy dump (polite_ctrl rejects it),
# so mutants that only change clr-vs-step priority are equivalent and omitted.
outbuf) mutants=(
    'sel-pe1|s/\(idx >= 5.d6\)/(idx >= 5\x27d7)/'
    'sel-pe2|s/\(idx >= 5.d12\)/(idx >= 5\x27d13)/'
    'sel-pe3|s/\(idx >= 5.d18\)/(idx >= 5\x27d17)/'
    'nibble-order|s/3.d4:    wn = w\[19:16\]/3\x27d4:    wn = w[23:20]/'
    'word3-capture|s/cap\[24\*k \+: 24\]/cap[24*(k%3) +: 24]/'
    'abort-ignored|s/ \|\| abort\)/)/'
    'hold-ignored|s/ && !hold;/;/'
    'phase-ignored|s/busy && phase/busy/'
    'last-nibble-early|s/idx == 5.d23/idx == 5\x27d22/'
    'ignore-en|s/else if \(en\)/else/'
    'load-keeps-idx|s/idx  <= 5.d0;/idx <= idx;/'
    'idle-nibble-nonzero|s/busy \? wn : 4.h0/wn/'
    'clr-ignored|s/if \(clr\)/if (1\x27b0)/'
    'reset-busy|s/busy <= 1.b0;/busy <= 1\x27b1;/'
) ;;
outmux) mutants=(
    'dbg-marker-keeps-dump|s/dbg_tick \? 1.b0 : dump_busy/dump_busy/'
    'swap-flags|s/illegal,/ovf,/'
    'nibble-select|s/dbg_tick \? dbg_nib : dump_nib/dump_nib/'
    'bit7-zero|s/\{dbg_tick,/{1\x27b0,/'
) ;;
ctrl) mutants=(
    'rsvd-0xC-legal|s/\(op >  OP_DINP\)/(op > 4\x27hC)/'
    'rsvd-0xF-legal|s/\(op >  OP_DINP\)/(op > OP_DINP) \&\& (op != 4\x27hF)/'
    'dbg-range-low|s/\(op >= OP_DFLAG\)/(op > OP_DFLAG)/'
    'dbg-range-high|s/\(op <= OP_DINP\)/(op < OP_DINP)/'
    'bank-bit3-ignored|s/\(a != 4.h0\);      \/\/ FLAGS/(a[2:0] != 3\x27h0);      \/\/ FLAGS/'
    'clr-ps-no-runbusy|s/\(a\[3\] && run_busy\)/(1\x27b0)/'
    'clr-ob-no-dumpbusy|s/a\[2\] && \(dump_busy \|\| no_ob\)/a[2] \&\& no_ob/'
    'clr-ob-no-noob|s/a\[2\] && \(dump_busy \|\| no_ob\)/a[2] \&\& dump_busy/'
    'clr-flags-on-reject|s/clr_ok && a\[0\]/is_clear \&\& a[0]/'
    'run-in-window|s/is_run && !fz_open;/is_run;/'
    'acc-en-run-now|s/assign acc_en     = run_busy/assign acc_en = run_now/'
    'clr-psum-on-reject|s/clr_ok && a\[3\]/is_clear \&\& a[3]/'
    'clr-ob-on-reject|s/clr_ok && a\[2\]/is_clear \&\& a[2]/'
    'dload-while-busy|s/is_dload && !dump_busy && !no_ob/is_dload \&\& !no_ob/'
    'dload-no-noob|s/is_dload && !dump_busy && !no_ob/is_dload \&\& !dump_busy/'
    'dabort-no-noob|s/is_dabrt && !no_ob;/is_dabrt;/'
    'dbg-start-in-window|s/dbg_req && !fz_open;/dbg_req;/'
    'dbg-pe-shift|s/dbg_pe     = a\[1:0\]/dbg_pe = a[2:1]/'
    'ill-run-window|s/\(is_run   && fz_open\)/1\x27b0/'
    'ill-dload-busy|s/\(is_dload && \(dump_busy \|\| no_ob\)\)/(is_dload \&\& no_ob)/'
    'ill-dabrt-noob|s/\(is_dabrt && no_ob\)/1\x27b0/'
    'ill-clr-coll|s/\(is_clear && clr_coll\)/1\x27b0/'
    'ill-bad-bank|s/\| bad_bank/| 1\x27b0/'
    'ill-dbg-window|s/\(dbg_req  && fz_open\)/1\x27b0/'
    'ill-rsvd|s/\| is_rsvd;/| 1\x27b0;/'
    'acc-ovf-ungated|s/acc_en && pe_ovf_any/pe_ovf_any/'
    'illegal-not-sticky|s/\(illegal & ~clr_flg\)/1\x27b0/'
    'illegal-clr-ignored|s/\(illegal & ~clr_flg\)/illegal/'
    'ovf-clr-wins|s/acc_ovf \| \(ovf & ~clr_flg\)/(acc_ovf | ovf) \& ~clr_flg/'
    'ovf-clr-ignored|s/\(ovf & ~clr_flg\)/ovf/'
    'status-b7|s/\{1.b1, dump_busy, illegal,/{1\x27b0, dump_busy, illegal,/'
    'status-b6|s/\{1.b1, dump_busy, illegal,/{1\x27b1, 1\x27b0, illegal,/'
    'status-b5|s/dump_busy, illegal, ovf \| acc_ovf,/dump_busy, ~illegal, ovf | acc_ovf,/'
    'status-b4-nopend|s/ovf \| acc_ovf,/ovf,/'
    'status-b3|s/^( +)dump_busy, phase, dump_busy, run_busy\};/\1run_busy, phase, dump_busy, run_busy};/'
    'status-b2|s/dump_busy, phase, dump_busy, run_busy\}/dump_busy, ~phase, dump_busy, run_busy}/'
    'status-b1|s/dump_busy, phase, dump_busy, run_busy\}/dump_busy, phase, 1\x27b0, run_busy}/'
    'status-b0|s/dump_busy, phase, dump_busy, run_busy\}/dump_busy, phase, dump_busy, 1\x27b0}/'
    'clr-inbuf-ignored|s/\(clr_ok && a\[1\]\)/(1\x27b0)/'
    'clr-inbuf-on-reject|s/\(clr_ok && a\[1\]\)/(is_clear \&\& a[1])/'
    'load-on-run|s/wire \[7:0\] inbuf_d = is_load/wire [7:0] inbuf_d = (is_load || is_run)/'
    'ignore-en|s/else if \(en\)/else/'
    'phase-stuck|s/phase    <= ~phase;/phase <= phase;/'
    'run-busy-sticky|s/run_busy <= run_now;/run_busy <= run_now | run_busy;/'
    'run-busy-is-run|s/run_busy <= run_now;/run_busy <= is_run;/'
    'reset-phase|s/phase    <= 1.b0;/phase <= 1\x27b1;/'
    'reset-inbuf|s/inbuf    <= 8.h00;$/inbuf <= 8\x27h01;/'
) ;;
dbg) mutants=(
    'flags-src|s/v = \{16.h0, status\}/v = {16\x27h0, inbuf}/'
    'buf-src|s/v = \{16.h0, inbuf\}/v = {16\x27h0, status}/'
    'psum-pe|s/psum_all\[24\*pe \+: 24\]/psum_all[24*(pe ^ 2\x27d1) +: 24]/'
    'mul-pe|s/mul_all \[8\*pe  \+: 8\]/mul_all[8*(pe ^ 2\x27d2) +: 8]/'
    'sum-pe|s/sum_all \[24\*pe \+: 24\]/sum_all[24*(pe ^ 2\x27d3) +: 24]/'
    'mul-nibble-swap|s/v = \{16.h0, mu\}/v = {16\x27h0, mu[3:0], mu[7:4]}/'
    'add-ignores-run|s/run_busy \? sm : ps/ps/'
    'add-always-sum|s/run_busy \? sm : ps/sm/'
    'add-inverted|s/run_busy \? sm : ps/run_busy ? ps : sm/'
    'psum-from-sum|s/4.h8:    v = ps;/4\x27h8:    v = sm;/'
    'input-src|s/default: v = \{16.h0, d\}/default: v = {16\x27h0, status}/'
    'psum-8bit|s/\(op == 4.h8\) \|\| \(op == 4.hA\)/(op == 4\x27hA)/'
    'add-8bit|s/\(op == 4.h8\) \|\| \(op == 4.hA\)/(op == 4\x27h8)/'
    'len8-short|s/4.d12 : 4.d4/4\x27d12 : 4\x27d3/'
    'len8-long|s/4.d12 : 4.d4/4\x27d12 : 4\x27d5/'
    'len24-short|s/4.d12 : 4.d4/4\x27d11 : 4\x27d4/'
    'len24-long|s/4.d12 : 4.d4/4\x27d13 : 4\x27d4/'
    'open-early|s/\(fz_left != 4.d0\)/(fz_left > 4\x27d1)/'
    'ofz-no-start|s/assign ofz  = start \|\| open/assign ofz = open/'
    'tick-no-phase|s/ofz && phase;/ofz;/'
    'tick-inverted-phase|s/ofz && phase;/ofz \&\& !phase;/'
    'k-not-cleared|s/k_e    = start \? 3.d0 : fz_k/k_e = fz_k/'
    'nib-off-by-one|s/phase \? k_e :/phase ? k_e + 3\x27d1 :/'
    'k-counts-all|s/\{2.b00, \(ofz && phase\)\}/{2\x27b00, ofz}/'
    'left-only-open|s/if \(ofz\)$/if (open)/'
    'val-not-captured|s/val_e  = start \? v    : fz_val/val_e = fz_val/'
    'val-recaptured|s/val_e  = start \? v    : fz_val/val_e = v/'
    'nib-order-1|s/3.d1:    vn = val_e\[7:4\]/3\x27d1:    vn = val_e[3:0]/'
    'nib-order-5|s/default: vn = val_e\[23:20\]/default: vn = val_e[19:16]/'
    'ignore-en|s/else if \(en\)/else/'
    'reset-left|s/fz_left <= 4.d0;/fz_left <= 4\x27d1;/'
) ;;
esac

# Each mutant is built and run in its own temp dir; JOBS run in parallel.
jobs="${JOBS:-8}"
ran=0
for entry in "${mutants[@]}"; do
    name="${entry%%|*}"
    expr="${entry#*|}"
    [[ -n "$only" && "$name" != "$only" ]] && continue
    mutated="$work/$name.sv"
    sed -E "$expr" "$rtl" > "$mutated"
    if cmp -s "$mutated" "$rtl"; then
        echo "$block/$name: MUTATION NOT APPLIED (fix the expression)"
        exit 1
    fi
    ran=$((ran + 1))
    (
        if "$script_dir/run_verilator.sh" "$tb" "$mutated" 2>&1 | grep -q '^PASS'; then
            echo "$block/$name: SURVIVED  <-- testbench gap" > "$work/$name.res"
        else
            echo "$block/$name: killed" > "$work/$name.res"
        fi
    ) &
    while (($(jobs -rp | wc -l) >= jobs)); do wait -n; done
done
wait

if ((ran == 0)); then
    echo "no mutant named '$only' in $block" >&2
    exit 2
fi
cat "$work"/*.res | sort
if grep -q SURVIVED "$work"/*.res; then
    exit 1
fi
echo "$block: all $ran mutants killed"
