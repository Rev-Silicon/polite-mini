#!/usr/bin/env python3
"""Forward pass of a tiny int4 MNIST MLP on the golden chip. Exit 0 = forward pass completed and chip == host int reference.
usage: run_smoke.py [--cfg A|B] [--place 0|1] [--n 8] [--epochs 1]"""
import argparse, sys, numpy as np
from chipio import Driver
from model import load, train, qparams_affine, qparams_symmetric, quantize

def chip_gemm(drv, A, B):
    """A[M,K] int4, B[N,K] int4 -> A@B.T via streaming 2x2 tiles: CLEAR, K x (LOAD,RUN) pipelined, DBG_FLAGS, dump."""
    M, K = A.shape; N = B.shape[0]
    A = np.pad(A, ((0, M % 2), (0, 0))); B = np.pad(B, ((0, N % 2), (0, 0))); C = np.zeros((A.shape[0], B.shape[0]), np.int64)
    for i in range(0, A.shape[0], 2):
        for j in range(0, B.shape[0], 2):
            drv.clear()
            for k in range(K): drv.mac(A[i:i+2, k], B[j:j+2, k])
            f = drv.flags()
            if f & 0x30: raise RuntimeError(f"tile ({i},{j}) flags=0x{f:02x} (ovf/illegal)")
            C[i:i+2, j:j+2] = drv.read_tile()
    return C[:M, :N]

def qlinear(drv, x, W, b, relu):
    """PyTorch-style quantized Linear: x affine per-tensor, W symmetric per-tensor (zp=0). Host does zp/scale/bias/ReLU."""
    sx, zx = qparams_affine(x); sw, _ = qparams_symmetric(W)
    qx, qw = quantize(x, sx, zx), quantize(W, sw, 0)
    raw = chip_gemm(drv, qx, qw)
    ref = qx @ qw.T
    assert np.array_equal(raw, ref), "chip psum != host int reference"
    acc = raw - zx * qw.sum(1)[None, :]          # sum (qx-zx)*qw
    y = sx * sw * acc + b
    return np.maximum(y, 0) if relu else y

def main():
    ap = argparse.ArgumentParser(); ap.add_argument("--cfg", default="A"); ap.add_argument("--place", type=int, default=0)
    ap.add_argument("--n", type=int, default=8); ap.add_argument("--epochs", type=int, default=1); a = ap.parse_args()
    W1, b1, W2, b2 = train(a.epochs)
    X, y = load("t10k"); X, y = X[:a.n], y[:a.n]
    fl = np.argmax(np.maximum(X @ W1.T + b1, 0) @ W2.T + b2, 1)
    drv = Driver(a.cfg, a.place)
    h = qlinear(drv, X, W1, b1, True); z = qlinear(drv, h, W2, b2, False); pred = z.argmax(1)
    print(f"cfg={a.cfg} place={a.place} n={a.n} steps={drv.steps} opcodes={ {hex(k): v for k, v in sorted(drv.ops.items())} }")
    print(f"int4-chip acc={np.mean(pred == y):.3f}  float acc={np.mean(fl == y):.3f}  pred={pred.tolist()} label={y.tolist()}")
    return 0
if __name__ == "__main__": sys.exit(main())
