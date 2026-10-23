"""Algorithm 1 of the paper (hardware-aware refinement of exit placements), shared by the three notebooks.

Depth-based selection (lines 1-16 and 18 of Algorithm 1):
  - every backbone layer i gets a cost m_i = ALPHA_ACC * (accelerator-eligible MACs) + (other MACs), or, if the network
    has been profiled on the target, its measured cost (line 1);
  - candidate exits are the layers with a 4-D output; if at least 2 * N_max of them are architectural boundaries,
    only the boundaries are kept (the boundary rule of each notebook is a parameter, see `candidates`);
  - for N = N_max down to N_min, every ordered tuple of N candidates is checked: first exit past D_min, last exit
    in [D_L,min, D_L,max], every exit head cheaper than the backbone segment that follows it (the head runs on the
    EE core, without accelerator); among the feasible tuples, the one with the lowest (phi, psi) is selected,
    phi = |d_N - D_tar| - lambda * min(S) / max(S), psi = total head cost.

Accuracy-aware option (line 17), when a validation set is available: for every feasible tuple of the first N that
admits any, early exiting is simulated on the validation images for the nine threshold profiles (an image leaves at
the first exit whose confidence reaches the threshold and costs the backbone up to that exit plus the head;
otherwise it costs the whole backbone). The tuple with the lowest mean cost per image at an accuracy Delta below the
accuracy without exits (C_Delta, interpolated between profiles) is selected.

The selection functions use numpy only; `layer_table`, `probe_head_cost` and `run_tflite` need TensorFlow.
"""
import itertools
import json

import numpy as np

# Threshold profiles of the paper (confidence thresholds in % for exits 1, 2, 3); the first one takes no exit.
PROFILES = [(100, 100, 100), (95, 90, 85), (95, 85, 75), (90, 85, 80), (90, 80, 70), (85, 75, 65), (80, 70, 60),
            (70, 60, 50), (50, 40, 25)]


# ---------------------------------------------------------------- layer table (TensorFlow) ---------------------------

def _shape(s):
    return s[0] if isinstance(s, list) else s


def split_layer_macs(layer):
    """(accelerator-eligible MACs, software-only MACs) of a Keras layer. Pointwise Conv2D and Dense layers run on
    the AHBconv accelerator; spatial and depthwise convolutions, pooling and batch normalization run in software."""
    out, inp = _shape(layer.output_shape), _shape(layer.input_shape)
    t = type(layer).__name__
    if t == "Conv2D":
        k = layer.kernel_size
        macs = k[0] * k[1] * inp[-1] * layer.filters * out[1] * out[2]
        return (macs, 0) if tuple(k) == (1, 1) else (0, macs)
    if t == "DepthwiseConv2D":
        k = layer.kernel_size
        return 0, k[0] * k[1] * inp[-1] * layer.depth_multiplier * out[1] * out[2]
    if t == "Dense":
        return inp[-1] * layer.units, 0
    if t == "GlobalAveragePooling2D":
        return 0, inp[1] * inp[2] * inp[3]
    if t == "BatchNormalization":
        return 0, 4 * out[-1]
    return 0, 0


def layer_table(backbone, keywords, case_sensitive=True, layer_types=()):
    """One entry per backbone layer: name, (h, w, c) of a 4-D output (else None), MACs and the boundary flag.
    A layer is a boundary if its name contains one of `keywords` or it is an instance of `layer_types`."""
    t = dict(name=[], hwc=[], macs_acc=[], macs_sw=[], boundary=[])
    for layer in backbone.layers:
        a, s = split_layer_macs(layer)
        shape = _shape(layer.output_shape)
        four_d = len(shape) == 4 and shape[1] is not None
        name = layer.name if case_sensitive else layer.name.lower()
        kws = keywords if case_sensitive else [k.lower() for k in keywords]
        t["name"].append(layer.name)
        t["hwc"].append(tuple(shape[1:]) if four_d else None)
        t["macs_acc"].append(float(a)); t["macs_sw"].append(float(s))
        t["boundary"].append(four_d and (any(k in name for k in kws) or isinstance(layer, tuple(layer_types))))
    return t


def probe_head_cost(make_exit_head, hwc, exit_idx, cache={}):
    """MACs of the head that make_exit_head builds on a feature map of shape hwc (all at software cost, since the
    EE core has no accelerator). Built once per (shape, exit index) and cached."""
    import tensorflow as tf
    key = (make_exit_head, tuple(hwc), exit_idx)
    if key not in cache:
        inp = tf.keras.Input(shape=tuple(hwc))
        probe = tf.keras.Model(inp, make_exit_head(inp, f"probe_{len(cache)}", exit_idx=exit_idx))
        cache[key] = float(sum(sum(split_layer_macs(l)) for l in probe.layers))
    return cache[key]


def run_tflite(model, X, batch=250):
    """Outputs of a .tflite model (path or bytes) on the images X, as {output name: array}. The outputs are matched
    by the names in the model's signature (the Keras output names): TFLite orders them alphabetically, not in the
    order of the Keras model."""
    import tensorflow as tf
    it = (tf.lite.Interpreter(model_content=bytes(model)) if isinstance(model, (bytes, bytearray))
          else tf.lite.Interpreter(model_path=str(model)))
    sig = it.get_signature_list()["serving_default"]
    runner = it.get_signature_runner()
    out = {n: [] for n in sig["outputs"]}
    for s in range(0, len(X), batch):
        r = runner(**{sig["inputs"][0]: np.asarray(X[s:s + batch], np.float32)})
        for n in out:
            out[n].append(r[n])
    return {n: np.concatenate(v) for n, v in out.items()}


def load_measured_costs(path, table):
    """Measured cost of every backbone layer (JSON written for the target: {"backbone": {layer name: cycles},
    "head_cycles_per_mac": x}); layers not listed cost 0. Returns (costs, head cycles per MAC)."""
    m = json.load(open(path))
    missing = [n for n in m["backbone"] if n not in table["name"]]
    assert not missing, f"layers not in this backbone: {missing[:5]}"
    return np.array([float(m["backbone"].get(n, 0.0)) for n in table["name"]]), float(m["head_cycles_per_mac"])


# ---------------------------------------------------------------- depth-based selection (numpy) ----------------------

def candidates(table, cum, n_target, dedup=False):
    """Indices of the candidate exits: layers with a 4-D output; with dedup, of layers with equal cumulative cost
    only the last is kept (ResNet-8 notebook); only boundaries if there are at least 2 * n_target of them."""
    cand = [i for i, s in enumerate(table["hwc"]) if s is not None]
    if dedup:
        last = {}
        for i in cand:
            last[round(float(cum[i]), 3)] = i
        cand = sorted(last.values())
    boundary = [i for i in cand if table["boundary"][i]]
    return boundary if len(boundary) >= 2 * n_target else cand


def place(table, head_cost, alpha=0.25, layer_cost=None, d_min=10.0, last_range=(55.0, 90.0), d_tar=70.0,
          lam=10.0, n_max=3, n_min=1, dedup=False):
    """Depth-based Algorithm 1. head_cost(hwc, exit_idx) gives the head cost in the units of the layer costs.
    Returns (N, feasible configurations of that N sorted by (phi, psi), candidate indices, cumulative costs);
    the first configuration is the depth-based choice. N is None if no N >= n_min is feasible."""
    cost = (alpha * np.array(table["macs_acc"]) + np.array(table["macs_sw"])) if layer_cost is None \
        else np.asarray(layer_cost, dtype=float)
    cum = np.cumsum(cost); total = cum[-1]
    cand = candidates(table, cum, n_max, dedup)
    depth = {i: 100.0 * cum[i] / total for i in cand}
    for n in range(n_max, n_min - 1, -1):
        found = []
        for combo in itertools.combinations(cand, n):
            d = [depth[i] for i in combo]
            if d[0] < d_min or not (last_range[0] <= d[-1] <= last_range[1]):
                continue
            segs = [cum[combo[k + 1]] - cum[combo[k]] for k in range(n - 1)] + [total - cum[combo[-1]]]
            if any(s <= 0 for s in segs):
                continue
            heads = [head_cost(table["hwc"][i], k + 1) for k, i in enumerate(combo)]
            if any(h >= s for h, s in zip(heads, segs)):
                continue
            found.append(dict(n_exits=n, idx=list(combo), exits=[table["name"][i] for i in combo], depths=d,
                              segments=segs, head_costs=heads, total_head_cost=sum(heads),
                              margins=[s / h for s, h in zip(segs, heads)],
                              score=abs(d[-1] - d_tar) - lam * min(segs) / max(segs)))
        if found:
            found.sort(key=lambda c: (c["score"], c["total_head_cost"]))     # stable: ties keep the tuple order
            return n, found, cand, cum
    return None, [], cand, cum


# ---------------------------------------------------------------- accuracy-aware option (numpy) ----------------------

def simulate(conf, pred, final_pred, y, exit_cost, total_cost, profiles=PROFILES):
    """Early exiting on a labelled set. conf[k], pred[k]: confidence (max softmax) and class of exit k per image;
    exit_cost[k]: cost of an image that leaves at exit k. An image leaves at the first exit whose confidence (in %)
    reaches the threshold (rule of the EE firmware). Returns one dict per profile: accuracy (%) and mean cost."""
    n = len(conf)
    rows = []
    for prof in profiles:
        taken = np.full(len(y), n)
        for k in range(n - 1, -1, -1):
            taken[np.float32(np.asarray(conf[k], np.float32) * np.float32(100)) >= prof[k]] = k
        yhat = np.array(final_pred, copy=True); cost = np.full(len(y), float(total_cost))
        for k in range(n):
            yhat[taken == k] = pred[k][taken == k]; cost[taken == k] = exit_cost[k]
        rows.append(dict(profile="/".join(map(str, prof[:n])), acc=float((yhat == y).mean() * 100),
                         cost=float(cost.mean()), exit_share=[float((taken == k).mean() * 100) for k in range(n)]))
    return rows


def cost_at_margin(rows, margin=2.0):
    """C_Delta: mean cost at which the accuracy-cost curve reaches (accuracy without exits - margin), interpolated
    linearly between neighbouring profiles (the cheapest profile if all are above that accuracy)."""
    target = rows[0]["acc"] - margin
    pts = sorted((r["cost"], r["acc"]) for r in rows)
    if pts[0][1] >= target:
        return pts[0][0]
    for (c0, a0), (c1, a1) in zip(pts, pts[1:]):
        if a0 < target <= a1:
            return c0 + (target - a0) * (c1 - c0) / (a1 - a0)
    return pts[-1][0]


def best_ee(rows, margin=2.0):
    """Fastest profile whose accuracy stays within `margin` points of the accuracy without exits."""
    return min((r for r in rows if r["acc"] >= rows[0]["acc"] - margin), key=lambda r: r["cost"])


def select_accuracy_aware(configs, cum, total_cost, head_outputs, final_pred, y, margin=2.0):
    """configs: feasible configurations of `place` (in (phi, psi) order). head_outputs[(layer name, head type)] =
    (conf, pred) on the validation set, head type 1 for exit 1 and 2 for later exits. Adds 'rows', 'c_delta' and
    'best' to every configuration and returns the one with the lowest C_Delta (ties keep the (phi, psi) order)."""
    for order, c in enumerate(configs):
        outs = [head_outputs[(name, 1 if k == 0 else 2)] for k, name in enumerate(c["exits"])]
        cost = [cum[i] + h for i, h in zip(c["idx"], c["head_costs"])]
        c["rows"] = simulate([o[0] for o in outs], [o[1] for o in outs], final_pred, y, cost, total_cost)
        c["c_delta"] = cost_at_margin(c["rows"], margin)
        c["best"] = best_ee(c["rows"], margin)
        c["order"] = order
    return min(configs, key=lambda c: (round(100.0 * c["c_delta"] / total_cost, 9), c["order"]))


def head_pairs(configs):
    """(layer name, head type) pairs whose head has to be trained for the accuracy-aware option."""
    return sorted({(name, 1 if k == 0 else 2) for c in configs for k, name in enumerate(c["exits"])})


def print_options(configs, top=5):
    for rank, c in enumerate(configs[:top], 1):
        print(f"  -- option {rank} (N={c['n_exits']}) --")
        for k, (e, d) in enumerate(zip(c["exits"], c["depths"])):
            print(f"     exit {k + 1}: {e:<45s} ({d:.1f}%)")
        print("     seg:    " + "  ".join(f"S{k + 1}={s:,.0f}" for k, s in enumerate(c["segments"])))
        print("     head:   " + "  ".join(f"H{k + 1}={h:,.0f}" for k, h in enumerate(c["head_costs"])))
        print("     margin: " + "  ".join(f"{m:.2f}x" for m in c["margins"]))
        print(f"     score:  {c['score']:.3f}")
