# Reproducing the results

The reproducibility package `DyNN-RV_reproducibility_<date>.zip` is attached to the release `v2.0-revision`. It
recomputes the numbers of the paper and of the revision from the FPGA result files and the deployed models, and
checks each of them against the reported value:

```
unzip DyNN-RV_reproducibility_<date>.zip && cd DyNN_RV
python3 -m venv venv && . venv/bin/activate        # Python 3.11 or 3.12; gcc is also needed
pip install -r reproducibility/requirements.txt
python reproducibility/reproduce_all.py          # about 20 minutes; ends with "all steps passed"
```

`reproducibility/README.md` inside the package maps each result to its script, output and check. In short:

| Results | Script in the package |
|---|---|
| Full 10,000-image test set: accuracy, exit rates, latency, speedup and energy (Tables VII–VIII, Figs. 6–8) | `analysis/r1_5_full_test_set/analyze.py` |
| Exit overhead of the multi-exit network vs. the exit-free backbone | `analysis/r2_4_exit_overhead/exit_overhead.py` |
| INT8 vs. FP32 confidence and exit decisions; the host build of the deployed C code reproduces the FPGA outputs | `analysis/r1_1_confidence/scripts/reproduce.py` |
| Exit placement (Algorithm 1): sensitivity, accuracy-aware option, measured layer costs, the networks of `models/revision/` | `analysis/placement/scripts/reproduce.py` |
| CIFAR-100 for MNV1, MNV2, MNV3-S | `analysis/cifar100/scripts/reproduce.py` |

The package contains the FPGA result files (CSV), the models of this repository, the CIFAR-10 and CIFAR-100
archives, and the scripts. It does not need the FPGA, Vivado or ASIP Designer.
