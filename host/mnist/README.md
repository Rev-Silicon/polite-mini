# MNIST int4 on the POLITE V(−1) golden chip

The host does all scale/zero-point/bias/ReLU work. The chip does only signed int4 2×2 outer-product MACs.

## Run
    ./run_smoke.sh                       # 8 test images, product chip (~5 s)
    python3 run_smoke.py --n 32 --epochs 3
`--cfg B` and the B half of `run_smoke.sh` are retired internal test leftovers (no output buffer); not the product.
Needs `python3`, `numpy`, and `cc`. On first run it downloads MNIST into `data/` (PyTorch's ossci S3 mirror) and builds `build/libchip.so` from `golden/chip.c -DCHIP_NO_MAIN`. The script exits 0 when a full forward pass completes **and** every chip psum tile matches the host integer reference exactly. It throws an error if ovf or illegal gets set.

## Model
MLP 784→16 (ReLU)→10, trained in float with numpy for 1 epoch at startup. Each layer is one GEMM `Xq[M,K] · Wq[N,K]ᵀ`, tiled into 2×2 output tiles (2 samples × 2 output neurons). The chip uses buffer + bus operands: each MAC step is `LOAD` (two samples' int4 activations into the input buffer, rows) followed by `RUN` with the two neurons' int4 weights on `ui_in` (the bus, columns). So one tile streams K steps of `LOAD, RUN`. RUN is a 2-stage pipeline: the next LOAD may land on the RUN's phase-2 core tick and affects only later RUNs, so no NOP is needed and back-to-back RUN is legal. The first 8 test images come out 8/8 correct on the product chip; n=200 gives int4 accuracy 0.960, equal to float. Every chip tile is checked bit-exact against the host integer reference.

## Quantization (PyTorch per-tensor conventions, quint range set to signed int4: quant_min=−8, quant_max=7)
- `q = clamp(round(x/scale) + zp, −8, 7)`. numpy `round` is half-to-even, the same as `torch.quantize_per_tensor`.
- **Weights:** `torch.per_tensor_symmetric`: `scale = max|W| / 7.5`, `zp = 0`. (That is MinMaxObserver's symmetric formula `max/((qmax−qmin)/2)`.)
- **Activations (input and post-ReLU hidden):** `torch.per_tensor_affine` (MinMaxObserver): `scale = (max(x,0) − min(x,0)) / 15`, `zp = clamp(−8 − round(min/scale), −8, 7)`. For x ≥ 0 this gives zp = −8.
- The chip returns `Σ qx·qw`. The host corrects with `acc = Σ qx·qw − zx·Σ qw`, then computes `y = sx·sw·acc + b` and applies ReLU in float, like the reference `quantized::linear` math. Requantization between layers happens in float on the host.
- PyTorch was not installed on the box: system pip is PEP 668 locked, and no venv was set up. The quant functions in `model.py` reproduce the torch formulas above. If torch becomes available, `torch.quantize_per_tensor(x, s, zp, torch.qint8).int_repr()` with clamp to [−8,7] should match `quantize()` on the same s/zp.

## Opcodes used (all through `chip_step(ui_in, uio_in)` in `chipio.py`; no direct state reads)
| op | use |
|---|---|
| 0x59 CLEAR | before every tile: clear psum and ovf/illegal |
| 0x10 LOAD | one per MAC step: input buffer = pack(lo = row 1, hi = row 2) |
| 0x20 RUN | one per MAC step: bus byte on `ui_in` = pack(lo = col 1, hi = col 2); PE(i,j) += buf[i] × bus[j] |
| 0x60 DEBUG_FLAGS | after each tile: two nibbles, low nibble first, on output ticks with uo[7]=1. The assembled byte must have ovf=0 and illegal=0 (bits 4 and 5). Do not issue it, or RUN, while a debug stream is still on the pins |
| 0x30 DUMP_LOAD + NOPs | read 24 nibbles (6 per PE, low nibble first) in dump order (2,2),(2,1),(1,2),(1,1). Dump nibbles are the output ticks with uo[6]=1. A debug-nibble tick forces bit 6 to 0 and sets bit 7, so it is not part of the 24 |

`--place` is accepted for compatibility, but OP_PLACE is obsolete under buffer + bus, so place 0 and 1 behave the same. The 24-bit psums are sign-extended on the host. The worst case is K=784 × 64 ≈ 50k, so it stays well below 2²³.
