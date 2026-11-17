#!/usr/bin/env python3
"""Run a seed regression and copy its artifacts into TB, Coverage and VCD."""
import argparse
from pathlib import Path
import shutil
import subprocess
import sys


def organize(root, test, seeds):
    tb = root / "TB"
    tb.mkdir(exist_ok=True)
    for name in ("tb.sv", "README.md", "coverage_summary.py", "run_verification.py"):
        source_file = root / name
        if source_file.is_file():
            shutil.copy2(source_file, tb / name)
        else:
            print(f"Warning: {name} not found; skipping its source/document copy.")
    status = ["TEST | SEED | SIMULATION RESULT"]
    failed = False
    for seed in seeds:
        label = f"{test}_seed_{seed}"
        source = root / "results" / label
        coverage = root / "Coverage" / label
        coverage.mkdir(parents=True, exist_ok=True)
        log = source / "sim_results.log"
        text = log.read_text(errors="replace") if log.exists() else ""
        passed = ("PASS: both configurations matched all checked expectations" in text
                  and not any(marker in text for marker in
                              ("FAIL", "%Fatal", "%Error", "COVERAGE MISS")))
        status.append(f"{test} | {seed} | {'PASS' if passed else 'FAILED OR INCOMPLETE'}")
        failed |= not passed
        log_destination = tb / "logs" / f"{label}.log"
        log_destination.parent.mkdir(exist_ok=True)
        if log.exists():
            shutil.copy2(log, log_destination)
        for name in ("coverage.dat", "coverage_summary.txt", "coverage_report.txt",
                     "coverage_outbuf_0.txt", "coverage_outbuf_1.txt"):
            if (source / name).exists():
                shutil.copy2(source / name, coverage / name)
        if (source / "logs").is_dir():
            shutil.copytree(source / "logs", coverage / "logs", dirs_exist_ok=True)
        wave = root / "VCD" / f"{label}.vcd"
        wave.parent.mkdir(exist_ok=True)
        if (source / "tb.vcd").exists():
            shutil.copy2(source / "tb.vcd", wave)
        elif wave.exists():
            # An explicitly selected artifact from an earlier VCD-enabled run
            # must not appear to belong to this VCD-disabled run.
            wave.unlink()
    summary = "\n".join(status) + "\n"
    (tb / f"{test}_regression_summary.txt").write_text(summary)
    print(summary)
    print("Organized artifacts: TB/, Coverage/, VCD/ (original results retained).")
    return failed


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--seeds", nargs="+", type=int, default=[10, 20, 30, 40, 50])
    parser.add_argument("--test", choices=["ALL", "LOAD", "RUN", "ILLEGAL", "CLEAR",
                        "STICKY", "DEBUG", "STATUS", "HOLD", "RESET", "OVF", "RANDOM"], default="ALL")
    parser.add_argument("--vcd", type=int, choices=[0, 1], default=1)
    parser.add_argument("--iterations", type=int, default=5000)
    parser.add_argument("--organize-only", action="store_true",
                        help="Use existing results; do not build or simulate")
    args = parser.parse_args()
    if args.iterations < 0:
        parser.error("iterations must be nonnegative")
    root = Path(__file__).resolve().parent
    seeds = list(dict.fromkeys(args.seeds))
    result = 0
    if not args.organize_only:
        result = subprocess.run(["make", "-f", "Makefile", "seeds",
                                 f"TEST={args.test}", "SEEDS=" + " ".join(map(str, seeds)),
                                 f"VCD={args.vcd}", f"ITERATIONS={args.iterations}"], cwd=root).returncode
        if result and not (root / "results").exists():
            return result
    failed = organize(root, args.test, seeds)
    # Recompute the comparison table from original saved databases, even if
    # one seed failed. The reporter explicitly identifies missing seed data.
    coverage_result = subprocess.run([
        sys.executable, str(root / "coverage_summary.py"), "--root", str(root / "results"),
        "--test", args.test, "--seeds", *map(str, seeds)], cwd=root).returncode
    table = root / "results" / f"{args.test}_coverage_by_seed.txt"
    if table.exists():
        shutil.copy2(table, root / "Coverage" / table.name)
    return 1 if result or failed or coverage_result else 0


if __name__ == "__main__":
    try:
        sys.exit(main())
    except (OSError, ValueError) as exc:
        sys.exit(f"Verification script error: {exc}")
