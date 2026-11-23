# ==============================================================================
# Makefile for polite_pe Verilator Testbench
# ==============================================================================

TOP_MODULE  := tb_polite_pe
OBJ_DIR     := obj_dir
SIM_BIN     := $(OBJ_DIR)/V$(TOP_MODULE)
WAVE_FILE   := polite_pe.fst
COV_DAT     := logs/coverage.dat
COV_DIR     := coverage_annotated

# Source files (compile order: package -> RTL/SVA -> top testbench)
SV_SOURCES  := \
	polite_pe_tb_pkg.sv \
	../polite_pe.sv \
	polite_pe_sva.sv \
	tb_polite_pe.sv

# Verilator flags (-MAKEFLAGS -s silences ccache/g++/verilator_includer noise)
VERILATOR   := verilator
VFLAGS      := \
	--binary \
	--timing \
	--assert \
	--coverage \
	--trace-fst \
	--trace-structs \
	-j 0 \
	-Wall \
	-Wno-fatal \
	-MAKEFLAGS -s \
	--top-module $(TOP_MODULE) \
	--Mdir $(OBJ_DIR)

# Optional plusargs (e.g., make run SEED=42)
SEED        ?= 1
SIM_ARGS    := +verilator+seed+$(SEED)

# ==============================================================================
# Targets
# ==============================================================================
.PHONY: all build run cov wave lint clean

all: run

# Compile SV sources into C++ executable
build: $(SIM_BIN)

$(SIM_BIN): $(SV_SOURCES)
	@echo "[BUILD] Compiling $(TOP_MODULE)..."
	@$(VERILATOR) $(VFLAGS) $(SV_SOURCES)

# Run simulation (creates logs/ dir for coverage.dat)
run: build
	@mkdir -p logs
	@echo "[RUN]   Executing $(SIM_BIN) (SEED=$(SEED))..."
	@./$(SIM_BIN) $(SIM_ARGS)

# Generate annotated line/toggle/expression/functional coverage report
cov: run
	@verilator_coverage --annotate $(COV_DIR) $(COV_DAT)

# Open waveform in GTKWave
wave: $(WAVE_FILE)
	gtkwave $(WAVE_FILE) &

# Fast static lint check only (no C++ compilation)
lint:
	@$(VERILATOR) --lint-only -Wall --top-module $(TOP_MODULE) $(SV_SOURCES)

# Clean all build and simulation artifacts
clean:
	@rm -rf $(OBJ_DIR) logs $(COV_DIR) $(WAVE_FILE)
