
# Shared coverage-only flow; module Makefiles follow Ryan's build/run/cov layout.
SHELL := /bin/bash
.DEFAULT_GOAL := all
VERILATOR ?= verilator
VERILATOR_COVERAGE ?= verilator_coverage
JOBS ?= 4
TEST ?= all
SEED ?= 1
NUM ?= 10000
WAVE ?= 0
OWNER := $(abspath ..)
REPO := $(abspath ../../..)
BUILD_DIR := $(OWNER)/build/$(MODULE)
OBJ_DIR := $(BUILD_DIR)/obj_dir
SIM_BIN := $(OBJ_DIR)/V$(TOP_MODULE)
RUN_DIR := $(OWNER)/results/$(MODULE)/$(TEST)_seed$(SEED)
VFLAGS := --binary --timing --coverage --trace-fst --trace-structs -CFLAGS "-O0" -j $(JOBS) -Wall -Wno-fatal -MAKEFLAGS -s --timescale 1ns/1ps --top-module $(TOP_MODULE) --Mdir $(OBJ_DIR)
RUN_ARGS = +TEST=$(TEST) +SEED=$(SEED) +NUM=$(NUM) +verilator+seed+$(SEED)
RUN_ARGS += $(if $(filter 1,$(WAVE)),+WAVE,)

.PHONY: all preflight build run cov wave lint clean
all: run
preflight:
	@command -v "$(VERILATOR)" >/dev/null || { echo "Select modern Verilator with VERILATOR=/path/to/verilator"; exit 2; }
	@"$(VERILATOR)" --version | grep -Eq '^Verilator 5\.' || { echo "Verilator 5 required; PATH may point to old 4.038"; exit 2; }

build: $(SIM_BIN)
$(SIM_BIN): $(SV_SOURCES) Makefile ../common.mk | preflight
	@mkdir -p "$(BUILD_DIR)"
	@echo "[BUILD] $(MODULE)"
	@"$(VERILATOR)" $(VFLAGS) $(SV_SOURCES) > "$(BUILD_DIR)/build.log" 2>&1; status=$$?; cat "$(BUILD_DIR)/build.log"; exit $$status
	@! grep -Eq 'Warning-(COVERIGN|CONSTRAINTIGN)' "$(BUILD_DIR)/build.log" || { echo "Unsupported coverage/random constraints cannot be ignored"; exit 2; }

run: build
	@case "$(TEST)" in *[!A-Za-z0-9_]*) echo "TEST must be a testcase name or all"; exit 2;; esac
	@mkdir -p "$(RUN_DIR)"
	@if [[ "$(WAVE)" != 1 ]]; then rm -f -- "$(RUN_DIR)/wave.fst"; fi
	@{ echo "CHECKOUT=$$(git -C "$(REPO)" rev-parse HEAD)"; echo "MODULE=$(MODULE) TEST=$(TEST) SEED=$(SEED) NUM=$(NUM) WAVE=$(WAVE)"; "$(VERILATOR)" --version; 	  echo "COMMAND: make -C $(CURDIR) run VERILATOR=$(VERILATOR) TEST=$(TEST) SEED=$(SEED) NUM=$(NUM) WAVE=$(WAVE) JOBS=$(JOBS)"; 	  for source in $(SV_SOURCES); do absolute=$$(realpath "$$source"); echo "BLOB $$source=$$(git -C "$(REPO)" hash-object -- "$$absolute")"; sha256sum "$$source"; done; 	  sha256sum Makefile ../common.mk; } > "$(RUN_DIR)/metadata.txt"
	@cd "$(RUN_DIR)" && ulimit -c 0 && "$(SIM_BIN)" $(RUN_ARGS) +verilator+coverage+file+coverage.dat > run.log 2>&1; 	  status=$$?; cat run.log; echo "RUN_EXIT=$$status" >> metadata.txt; exit $$status
	@test -s "$(RUN_DIR)/coverage.dat" || { echo "No raw code coverage written"; exit 2; }
	@sed -n '/COVERAGE BEGIN/,/COVERAGE END/p' "$(RUN_DIR)/run.log" > "$(RUN_DIR)/functional_coverage.txt"
	@echo "[RESULT] Stimulus completed; no functional correctness checking. $(RUN_DIR)"

cov:
	@test -s "$(RUN_DIR)/coverage.dat" || { echo "Run this TEST/SEED first"; exit 2; }
	@grep -q "^RUN_EXIT=0$$" "$(RUN_DIR)/metadata.txt" || { echo "Last run did not complete; refusing stale coverage"; exit 2; }
	@command -v "$(VERILATOR_COVERAGE)" >/dev/null || { echo "Set VERILATOR_COVERAGE to a matching utility"; exit 2; }
	@sim_v=$$("$(VERILATOR)" --version | grep -oE '[0-9]+\.[0-9]+' | head -1); 	  cov_v=$$("$(VERILATOR_COVERAGE)" --version | grep -oE '[0-9]+\.[0-9]+' | head -1); 	  test "$$sim_v" = "$$cov_v" || { echo "Coverage utility version $$cov_v does not match simulator $$sim_v"; exit 2; }
	@"$(VERILATOR_COVERAGE)" --annotate "$(RUN_DIR)/annotated" "$(RUN_DIR)/coverage.dat" > "$(RUN_DIR)/code_coverage.log" 2>&1
	@"$(VERILATOR_COVERAGE)" --write-info "$(RUN_DIR)/coverage.info" "$(RUN_DIR)/coverage.dat" >> "$(RUN_DIR)/code_coverage.log" 2>&1
	@cat "$(RUN_DIR)/functional_coverage.txt" "$(RUN_DIR)/code_coverage.log" > "$(RUN_DIR)/coverage_summary.txt"
	@echo "[COVERAGE] $(RUN_DIR)/coverage_summary.txt"

wave: WAVE=1
wave: run
	@gtkwave "$(RUN_DIR)/wave.fst"

lint: preflight
	@"$(VERILATOR)" --lint-only --timing -Wall -Wno-fatal --top-module $(TOP_MODULE) $(SV_SOURCES)

# Retain source, logs, coverage, and representative waveforms.
clean:
	@rm -rf -- "$(BUILD_DIR)/obj_dir"
