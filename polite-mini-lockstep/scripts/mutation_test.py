#!/usr/bin/env python3
"""Four negative controls. Never edits the supplied top or example sources."""
import argparse
import csv
from pathlib import Path
import shutil
import subprocess
import sys

root = Path(__file__).resolve().parents[1]
parser = argparse.ArgumentParser(description=__doc__)
parser.add_argument('--verilator', default='verilator')
parser.add_argument('--extra-vflags', default='')
parser.add_argument('--jobs', type=int, default=2)
a = parser.parse_args()
mutations = [
    ('stale_snapshot', 'tt_um_polite_mini.sv',
     'cap = acc_en ? sum_all : psum_all;', 'cap = psum_all;'),
    ('early_enable', 'tt_um_polite_mini.sv',
     'en = ena_q;', 'en = ena;'),
    ('swapped_rows', 'tt_um_polite_mini.sv',
     'ROW2 = (g < 2);', 'ROW2 = (g >= 2);'),
    ('short_debug_window', 'polite_dbg.sv',
     "? 4'd12 : 4'd4;", "? 4'd10 : 4'd4;"),
]
results = []
base = root / 'build' / 'mutations'
for name, filename, before, after in mutations:
    case = base / name
    sources = case / 'rtl'
    sources.mkdir(parents=True, exist_ok=True)
    for p in (root / 'example_rtl').glob('*.sv'):
        shutil.copy2(p, sources / p.name)
    shutil.copy2(root / 'rtl' / 'tt_um_polite_mini.sv', sources / 'tt_um_polite_mini.sv')
    p = sources / filename
    content = p.read_text()
    if content.count(before) != 1:
        raise SystemExit('Mutation anchor missing or ambiguous: ' + name)
    p.write_text(content.replace(before, after))
    cmd = ['make', '--no-print-directory', 'directed', 'CONFIG=1',
           f'RTL_DIR={sources}', f'BUILD_ROOT={case / "build"}',
           f'VERILATOR={a.verilator}', f'EXTRA_VFLAGS={a.extra_vflags}', f'JOBS={a.jobs}']
    run = subprocess.run(cmd, cwd=root, text=True, stdout=subprocess.PIPE, stderr=subprocess.STDOUT)
    (case / 'run.log').write_text(run.stdout)
    # A syntax/build/tool error is not evidence that a checker killed the fault.
    failed = next((x for x in run.stdout.splitlines() if x.startswith('FAIL CONFIG=')), '')
    outcome = 'DETECTED' if run.returncode != 0 and failed else 'NOT_DETECTED_OR_BUILD_ERROR'
    results.append((name, outcome, failed))
    print(name + ': ' + outcome + ('; ' + failed if failed else ''), flush=True)
with (base / 'results.csv').open('w', newline='') as f:
    writer = csv.writer(f)
    writer.writerow(['mutation', 'outcome', 'failure'])
    writer.writerows(results)
sys.exit(0 if all(x[1] == 'DETECTED' for x in results) else 1)
