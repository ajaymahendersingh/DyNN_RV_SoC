# Software pipeline

| File | Content |
|---|---|
| `model_to_multi_exit_C.ipynb` | MobileNetV1/V2/V3-Small (and other `keras.applications` backbones): fine-tuning, exit placement, exit training, INT8 quantization, TVM C code |
| `model_to_multi_exit_C__resnet8.ipynb` | The same for ResNet-8 (MLPerf Tiny), defined in the notebook |
| `model_to_multi_exit_C__squeezenet.ipynb` | The same for SqueezeNet 1.1; Part A converts the torchvision ImageNet weights to Keras |
| `dynn_placement.py` | Exit placement algorithm, used by the three notebooks |
| `measured_costs/<model>_DEA.json` | Measured cost of every backbone layer of the five networks, for the measured-cost option |

The notebooks run on Google Colab (runtime version 2025.07, TensorFlow 2.12.0, TVM 0.14.dev273). They load
`dynn_placement.py` from this folder when run in a clone, and otherwise download it from the repository (`REPO_REF`).

## Exit placement options (configuration cell)

| Setting | Default | Meaning |
|---|---|---|
| `AUTO_SELECT_EXITS` | `True` | `False` uses the exit layers of the model registry |
| `PLACEMENT_MODE` | `"depth"` | `"depth"`: depth-based selection, `"accuracy"`: accuracy-aware option: an exit head is trained at every candidate layer, the heads are quantized to INT8 with the network, and the configuration with the lowest mean cost per image at `ACC_MARGIN` points below the no-exit accuracy is selected on the validation split |
| `ALPHA_ACC` | `0.25` | Cost of an accelerator MAC relative to a software MAC on the BB core (`1.0`: no accelerator) |
| `MEASURED_COSTS` | `None` | Measured cost of every backbone layer on the target (Algorithm 1, line 1), e.g. `"software/measured_costs/MobileNetV2_DEA.json"`; replaces `ALPHA_ACC` |
| `MIN_FIRST_DEPTH`, `LAST_DEPTH_RANGE`, `TARGET_LAST_DEPTH`, `LAMBDA_BAL` | 10, (55, 90), 70, 10 | `D_min`, `[D_L,min, D_L,max]`, `D_tar`, `lambda` of the paper |
| `BOUNDARY_*` | per notebook | Which layers count as architectural boundaries (candidate exits). The values reproduce the networks of the paper; in `model_to_multi_exit_C.ipynb`, `BOUNDARY_CASE_SENSITIVE = False` also matches the `block_N_add` layers of MobileNetV2 (and changes its exits) |

Each run writes to `output_<model>_..._<placement>/`, including `exit_placement.json` with the selected exits, and the
trained multi-exit model is saved under a name that contains the exit layers, so runs with different exits do not
overwrite each other. After quantization, the notebooks compare the FP32 and INT8 models on the test set (outputs
matched by name) and simulate early exiting for the nine threshold profiles of the paper.

Checked (2026-10-23): with the defaults, the notebooks select the exits of the five networks of the paper; with the
measured costs and with the accuracy-aware option, `dynn_placement.py` reproduces the selections reported in the
revision.
