# GNU make + Bash (Linux/WSL). make run SEED=42 VCD=0
SHELL := /bin/bash
.SHELLFLAGS := -eu -o pipefail -c
.DEFAULT_GOAL := all
DUT        ?= polite_ctrl.v
TB         := tb.sv
TOP        := tb
VERILATOR  ?= verilator
PYTHON     ?= python3
JOBS       ?= 16
VFLAGS     := -Wall --binary --timing --trace --coverage-line --coverage-toggle --build -j $(JOBS) -Wno-fatal
TEST       ?= ALL
SEED       ?= 1
SEEDS      ?= 10 20 30 40 50
ITERATIONS ?= 5000
VCD        ?= 1
ARGS       ?=
# Separate test/seed runs retain individual logs, VCDs and coverage data.
# Repeating the same TEST/SEED replaces that run's files.
RUN_DIR    ?= results/$(TEST)_seed_$(SEED)
ROOT       := $(CURDIR)
MAKE_SOURCE := $(abspath $(firstword $(MAKEFILE_LIST)))

.PHONY: all build run run-one seeds coverage coverage-seeds coverage-all regression organize clean
all: run

build:
	@echo "==> Building testbench..."
	$(VERILATOR) $(VFLAGS) $(abspath $(DUT)) $(abspath $(TB)) --top-module $(TOP)

run: build
	@$(MAKE) --no-print-directory -f "$(MAKE_SOURCE)" run-one

# Internal reusable target: seeds builds once, then invokes this per seed.
run-one:
	@mkdir -p "$(RUN_DIR)"
	@rm -f "$(RUN_DIR)/coverage.dat" "$(RUN_DIR)/coverage_summary.txt" "$(RUN_DIR)/coverage_report.txt" "$(RUN_DIR)/tb.vcd" "$(RUN_DIR)/coverage_outbuf_0.txt" "$(RUN_DIR)/coverage_outbuf_1.txt"
	@echo "==> TEST=$(TEST) SEED=$(SEED) VCD=$(VCD) directory=$(RUN_DIR)"
	@cd "$(RUN_DIR)" && "$(ROOT)/obj_dir/V$(TOP)" +TEST=$(TEST) +SEED=$(SEED) +ITERATIONS=$(ITERATIONS) +VCD=$(VCD) +verilator+coverage+file+coverage.dat $(ARGS) 2>&1 | tee sim_results.log
	@$(MAKE) --no-print-directory -f "$(MAKE_SOURCE)" coverage RUN_DIR="$(RUN_DIR)"

seeds: build
	@failed=0; for seed in $(SEEDS); do \
	  if ! $(MAKE) --no-print-directory -f "$(MAKE_SOURCE)" run-one SEED=$$seed RUN_DIR="results/$(TEST)_seed_$$seed"; then failed=1; fi; \
	done; exit $$failed

# Post-processing only; does NOT execute simulation or merge different seeds.
coverage:
	@test -f "$(RUN_DIR)/coverage.dat" || { echo "Missing coverage.dat: run the simulation first."; exit 1; }
	@verilator_coverage --annotate "$(RUN_DIR)/logs" --annotate-min 1 "$(RUN_DIR)/coverage.dat" > "$(RUN_DIR)/coverage_report.txt"
	@$(PYTHON) "$(ROOT)/coverage_summary.py" "$(RUN_DIR)"
	@echo "Reports: $(RUN_DIR)/coverage_summary.txt and coverage_report.txt"

# Report an explicit list of previously simulated seeds, without rebuilding.
coverage-seeds:
	@$(PYTHON) "$(ROOT)/coverage_summary.py" --root results --test "$(TEST)" --seeds $(SEEDS)

# Discover all saved seed folders for this TEST, without rebuilding.
coverage-all:
	@$(PYTHON) "$(ROOT)/coverage_summary.py" --root results --test "$(TEST)" --all-seeds

# Build once, run the requested seeds and organize all artifacts.
regression:
	@$(PYTHON) "$(ROOT)/run_verification.py" --test "$(TEST)" --seeds $(SEEDS) --vcd $(VCD) --iterations $(ITERATIONS)

# Organize existing runs only; no build or simulation.
organize:
	@$(PYTHON) "$(ROOT)/run_verification.py" --organize-only --test "$(TEST)" --seeds $(SEEDS)

clean:
	rm -rf obj_dir results
