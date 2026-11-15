#!/usr/bin/env python3
"""Validate saved GTKWave names, clock duty/period, and optional VCD round trip."""
import argparse
from pathlib import Path

ap = argparse.ArgumentParser(description=__doc__)
ap.add_argument('vcd', type=Path)
ap.add_argument('save', type=Path)
ap.add_argument('--compare', type=Path)
a = ap.parse_args()

def parse(path):
    scope, names, codes = [], set(), {}
    events = {}
    timestamp, definitions = 0, True
    for line in path.read_text().splitlines():
        tok = line.split()
        if not tok:
            continue
        if definitions:
            if tok[0] == '$scope':
                scope.append(tok[2])
            elif tok[0] == '$upscope':
                scope.pop()
            elif tok[0] == '$var':
                name = '.'.join(scope + [tok[4] + ''.join(tok[5:-1])])
                names.add(name)
                codes.setdefault(tok[3], []).append(name)
                events[name] = []
            elif tok[0] == '$enddefinitions':
                definitions = False
        elif tok[0].startswith('#'):
            timestamp = int(tok[0][1:])
        else:
            if tok[0][0] in 'bB' and len(tok) == 2:
                code, value = tok[1], tok[0][1:]
            elif tok[0][0] in '01xXzZ':
                code, value = tok[0][1:], tok[0][0]
            else:
                continue
            value = value.lower().lstrip('0') or '0'
            for name in codes.get(code, []):
                seq = events[name]
                if not seq or seq[-1][1] != value:
                    seq.append((timestamp, value))
    return names, events

names, events = parse(a.vcd)
saved = [s.strip() for s in a.save.read_text().splitlines() if s.startswith('TOP.')]
missing = [name for name in saved if name not in names]
assert not missing, f'Unresolved savefile signals: {missing}'
# Skip startup/reset gaps; there must be repeated 7,576 ps half periods.
clock = events['TOP.clk']
steps = [clock[i+1][0]-clock[i][0] for i in range(len(clock)-1)]
assert sum(dt == 7576 for dt in steps) >= 10, 'Clock does not have expected half periods'
assert 1 not in steps, 'Clock contains a one-picosecond pulse'
print(f'PASS: {len(saved)} saved signals resolve; expected clock half periods observed')
if a.compare:
    _, other = parse(a.compare)
    for name in ['TOP.clk','TOP.rst_n','TOP.ena','TOP.ui_in[7:0]',
                 'TOP.uio_in[7:0]','TOP.uo_out[7:0]',
                 'TOP.uio_out[7:0]','TOP.uio_oe[7:0]']:
        assert events[name] == other[name], f'Round-trip mismatch: {name}'
    print('PASS: public pin waveforms match after VCD/FST/VCD round trip')
