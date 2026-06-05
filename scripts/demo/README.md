## Requirements

```bash
pip install pyserial numpy pillow      # fpga_demo.py
npm install                            # generate_demo_pptx.js (pptxgenjs)
```

## Usage

```bash
# 1. Classify images at profile EE1/EE2/EE3 = 90/80/70
python fpga_demo.py --port /dev/ttyUSB2 --images ./photos --profile 90/80/70

# 2. Build PPT from the results
node generate_demo_pptx.js demo_output/
```

| Flag | Default | Meaning |
|------|---------|---------|
| `--port` | `/dev/ttyUSB2` | Serial port |
| `--baud` | `2000000` | Baud rate |
| `--images` | *(required)* | Folder of JPG/PNG/BMP/WEBP images |
| `--profile` | `90/80/70` | Per-exit thresholds `EE1/EE2/EE3` (illustrative, not an operating point claimed in the paper) |
| `--output` | `demo_output` | Output directory |
| `--label` | *(none)* | Optional ground-truth class for all images |

## Output

```
demo_output/
├── results.json                  # consumed by the PPTX generator
├── thumbnails/                   # 256x256 PNGs
├── bin_cache/                    # converted float32 .bin inputs
└── FPGA_Demo_Presentation.pptx   # created by the Node script
```

## UART protocol (per image)

1. Image prompt → send `49152` bytes (64×64×3 float32, row-major, `[0,1]`).
2. `Image received` acknowledgment.
3. Three threshold prompts (EE1, EE2, EE3) → send one integer `0–100` each.
4. Result: predicted class, `Scores: [...]`, `Cycles:`, `Time: … ms`.
