
# ==============================================================================
# Makefile for polite_dbg Verilator Testbench
# ==============================================================================

TOP_MODULE  := tb_polite_dbg
OBJ_DIR     := obj_dir
SIM_BIN     := $(OBJ_DIR)/V$(TOP_MODULE)
WAVE_FILE   := polite_dbg.fst
COV_DAT     := coverage.dat
COV_DIR     := coverage_annotated

# Source files (compile order: package -> RTL/SVA -> top testbench)
SV_SOURCES  := \
	polite_dbg_tb_pkg.sv \
	../polite_dbg.sv \
	polite_dbg_sva.sv \
	tb_polite_dbg.sv

# Verilator flags
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

build: $(SIM_BIN)

$(SIM_BIN): $(SV_SOURCES)
	@echo "[BUILD] Compiling $(TOP_MODULE)..."
	@$(VERILATOR) $(VFLAGS) $(SV_SOURCES)

run: build
	@mkdir -p logs
	@echo "[RUN]   Executing $(SIM_BIN) (SEED=$(SEED))..."
	@./$(SIM_BIN) $(SIM_ARGS)

cov: run
	@verilator_coverage --annotate $(COV_DIR) $(COV_DAT)

wave: $(WAVE_FILE)
	gtkwave $(WAVE_FILE) &

lint:
	@$(VERILATOR) --lint-only --timing --assert -Wall -Wno-fatal \
		--top-module $(TOP_MODULE) $(SV_SOURCES)

clean:
	@rm -rf $(OBJ_DIR) logs $(COV_DIR) $(WAVE_FILE)
