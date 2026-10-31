# Adversarial tests vs golden/chip.c
Run from anywhere: `verify/adversarial/run.sh`
It builds `golden/chip.c` with `-DCHIP_NO_MAIN` into `/tmp/chip.o`, links `test_break.c`, runs it, and writes the output to `last_run.log`.
Output lines: `FAIL [id]` means the model disagrees with LOCKS/OPCODE_PROPOSAL. `GAP [id]` means the spec is open or TBD (these don't fail the run). Exit code is nonzero if any FAIL.
Expected-fail IDs (F*) are model bugs for Forge. P* IDs should pass. See FINDINGS.md.
