#!/usr/bin/env python3
"""Report functional bins and Verilator 5.x line/toggle coverage separately.

Run inside one run directory after simulation. Code coverage here means
Verilator's line/basic-block points, not an average of line and toggle.
No missing data is treated as 100%. Unknown coverage formats fail clearly.
"""
import argparse
import re
from pathlib import Path


def percentage(hit, total):
    return f"{hit}/{total} = {100.0 * hit / total:.2f}%" if total else "N/A (no points)"


def report(directory, quiet=False):
    directory = Path(directory)
    lines = ["", "================ COVERAGE SUMMARY ================"]
    functional_hit = functional_total = 0
    for config in (0, 1):
        path = directory / f"coverage_outbuf_{config}.txt"
        text = path.read_text() if path.exists() else ""
        match = re.search(r"Functional coverage:\s*(\d+)/(\d+)", text)
        if not match:
            raise ValueError(f"Missing functional coverage summary: {path}")
        hit, total = map(int, match.groups())
        functional_hit += hit
        functional_total += total
        lines.append(f"Functional HAS_OUTBUF={config}: {percentage(hit, total)}")
    lines.append(f"Functional combined: {percentage(functional_hit, functional_total)}")

    data = directory / "coverage.dat"
    totals = {"line": [0, 0], "toggle": [0, 0]}
    # Verilator's textual database uses C '<key>' <count> records. The key
    # contains SOH-delimited name/STX/value pairs; page identifies the type.
    # Keep records distinct: separate instrumented points on one source line
    # are separate bins, exactly as stored in the database.
    for raw in data.read_bytes().splitlines():
        if not raw.startswith(b"C "):
            continue
        match = re.fullmatch(rb"C\s+'(.*)'\s+(\d+)\s*", raw)
        if not match:
            raise ValueError("Unrecognized coverage.dat record format")
        fields = {}
        for part in match[1].split(b"\x01"):
            if b"\x02" in part:
                key, value = part.split(b"\x02", 1)
                fields[key] = value
        # Defensive filter for older builds made before TB coverage exclusion.
        filename = fields.get(b"f", b"").replace(b"\\", b"/")
        if filename.rsplit(b"/", 1)[-1] == b"tb.sv":
            continue
        page = fields.get(b"page", b"")
        kind = "toggle" if page.startswith(b"v_toggle") else (
            "line" if page.startswith(b"v_line") else None)
        if kind:
            totals[kind][1] += 1
            totals[kind][0] += int(match[2]) > 0
    if not any(total for _, total in totals.values()):
        raise ValueError("No recognized DUT line/toggle records; rebuild with coverage enabled or inspect database format")
    lines.append(f"DUT code (line/basic-block): {percentage(*totals['line'])}")
    lines.append(f"DUT toggle: {percentage(*totals['toggle'])}")
    lines.append("Hit threshold: counter > 0. Functional coverage does not prove correctness.")
    lines.append("==================================================")
    result = "\n".join(lines) + "\n"
    (directory / "coverage_summary.txt").write_text(result)
    if not quiet:
        print(result, end="")
    return {
        "functional": (functional_hit, functional_total),
        "code": tuple(totals["line"]),
        "toggle": tuple(totals["toggle"]),
    }


def report_seeds(root, test, seeds=None):
    """Recalculate each saved run; deliberately do not merge seed coverage."""
    root = Path(root)
    if not re.fullmatch(r"[A-Za-z0-9_]+", test):
        raise ValueError("TEST must contain only letters, digits and underscores")
    if seeds is None:
        prefix = f"{test}_seed_"
        seeds = sorted({int(p.name[len(prefix):]) for p in root.glob(prefix + "*")
                        if p.is_dir() and re.fullmatch(r"-?\d+", p.name[len(prefix):])})
    else:
        seeds = list(dict.fromkeys(seeds))
    if not seeds:
        raise ValueError(f"No saved seed runs found for TEST={test} under {root}")
    rows = [f"Coverage by seed: TEST={test}",
            "SEED | FUNCTIONAL (hit/total, %) | DUT CODE (hit/total, %) | DUT TOGGLE (hit/total, %)"]
    errors = 0
    for seed in seeds:
        try:
            metrics = report(root / f"{test}_seed_{seed}", quiet=True)
            rows.append(f"{seed} | " + " | ".join(
                percentage(*metrics[name]) for name in ("functional", "code", "toggle")))
        except (OSError, ValueError) as exc:
            errors += 1
            rows.append(f"{seed} | UNAVAILABLE: {exc}")
    rows.append("Each row is one saved run; coverage is not merged or averaged across seeds.")
    rows.append("Coverage is not a PASS/FAIL result; consult each run's sim_results.log.")
    result = "\n".join(rows) + "\n"
    root.mkdir(parents=True, exist_ok=True)
    destination = root / f"{test}_coverage_by_seed.txt"
    destination.write_text(result)
    print(result, end="")
    print(f"Saved: {destination}")
    return errors


if __name__ == "__main__":
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("directory", nargs="?", default=".")
    selection = parser.add_mutually_exclusive_group()
    selection.add_argument("--seeds", nargs="+", type=int, help="Report these saved seeds")
    selection.add_argument("--all-seeds", action="store_true", help="Discover saved seeds")
    parser.add_argument("--root", default="results", help="Parent of saved run folders")
    parser.add_argument("--test", default="ALL", help="Test name used when running simulation")
    args = parser.parse_args()
    try:
        if args.seeds is not None or args.all_seeds:
            if report_seeds(args.root, args.test, args.seeds):
                parser.exit(1, "Some requested seeds have missing or invalid coverage data.\n")
        else:
            report(args.directory)
    except (OSError, ValueError) as exc:
        parser.exit(1, f"Coverage summary error: {exc}\n")
