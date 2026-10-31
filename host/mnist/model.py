"""Tiny MNIST MLP 784->16->10, float training in numpy, int4 quant per PyTorch per-tensor conventions."""
import gzip, os, urllib.request, numpy as np
HERE = os.path.dirname(os.path.abspath(__file__)); DATA = os.path.join(HERE, "data")
URL = "https://ossci-datasets.s3.amazonaws.com/mnist/"
QMIN, QMAX = -8, 7

def load(split="t10k"):
    os.makedirs(DATA, exist_ok=True); out = []
    for kind, off in (("images-idx3-ubyte", 16), ("labels-idx1-ubyte", 8)):
        f = os.path.join(DATA, f"{split}-{kind}.gz")
        if not os.path.exists(f): urllib.request.urlretrieve(URL + f"{split}-{kind}.gz", f)
        out.append(np.frombuffer(gzip.open(f).read(), np.uint8, offset=off))
    return out[0].reshape(-1, 784).astype(np.float32) / 255, out[1].astype(np.int64)

# --- PyTorch-equivalent quant (torch.ao.quantization observers, quant_min=-8, quant_max=7) ---
def qparams_symmetric(x):  # torch.per_tensor_symmetric: scale = max|x| / ((qmax-qmin)/2), zp = 0
    return max(float(np.abs(x).max()), 1e-8) / ((QMAX - QMIN) / 2), 0
def qparams_affine(x):     # torch.per_tensor_affine (MinMaxObserver): range includes 0
    lo, hi = min(float(x.min()), 0.0), max(float(x.max()), 0.0)
    s = max(hi - lo, 1e-8) / (QMAX - QMIN); zp = int(np.clip(QMIN - round(lo / s), QMIN, QMAX)); return s, zp
def quantize(x, s, zp):    # == torch.quantize_per_tensor: clamp(round(x/s)+zp, qmin, qmax); round = half-to-even
    return np.clip(np.round(x / s) + zp, QMIN, QMAX).astype(np.int64)

def train(epochs=3, hidden=16, seed=0):
    X, y = load("train"); r = np.random.default_rng(seed)
    W1 = r.normal(0, .05, (hidden, 784)); b1 = np.zeros(hidden); W2 = r.normal(0, .3, (10, hidden)); b2 = np.zeros(10)
    for _ in range(epochs):
        for i in r.permutation(len(X) // 128):
            x = X[i*128:(i+1)*128]; t = np.eye(10)[y[i*128:(i+1)*128]]
            h = np.maximum(x @ W1.T + b1, 0); z = h @ W2.T + b2; p = np.exp(z - z.max(1, keepdims=True)); p /= p.sum(1, keepdims=True)
            g = (p - t) / 128; gh = (g @ W2) * (h > 0)
            W2 -= .5 * g.T @ h; b2 -= .5 * g.sum(0); W1 -= .5 * gh.T @ x; b1 -= .5 * gh.sum(0)
    return W1, b1, W2, b2
