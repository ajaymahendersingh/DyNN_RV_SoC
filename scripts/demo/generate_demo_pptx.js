#!/usr/bin/env node
/**
 * FPGA Classifier Demo — Presentation Generator (10-class)
 * ========================================================
 *
 * Reads results.json + thumbnails from fpga_demo.py and builds a PPT.
 *
 * Usage:
 *   node generate_demo_pptx.js demo_output/
 *   node generate_demo_pptx.js demo_output/ --title "My Demo"
 */

const pptxgen = require("pptxgenjs");
const fs = require("fs");
const path = require("path");

// ── Args ──
const args = process.argv.slice(2);
if (args.length === 0) {
  console.log("Usage: node generate_demo_pptx.js <demo_output_dir> [--title 'Title']");
  process.exit(1);
}
const inputDir = args[0];
const titleIdx = args.indexOf("--title");
const customTitle = titleIdx !== -1 && args[titleIdx + 1] ? args[titleIdx + 1] : null;

// ── Load data ──
const jsonPath = path.join(inputDir, "results.json");
if (!fs.existsSync(jsonPath)) {
  console.error(`Not found: ${jsonPath}`);
  process.exit(1);
}
const { summary, results, config } = JSON.parse(fs.readFileSync(jsonPath, "utf8"));
const thumbDir = path.join(inputDir, "thumbnails");
const CLASS_NAMES = config.class_names || [
  "AIRPLANE", "AUTOMOBILE", "BIRD", "CAT", "DEER",
  "DOG", "FROG", "HORSE", "SHIP", "TRUCK",
];

// ── Palette ──
const BG_DARK   = "0F172A";
const BG_CARD   = "1E293B";
const ACCENT    = "3B82F6";
const AMBER      = "F59E0B";  // UNCERTAIN
const RED        = "EF4444";  // ERROR
const TXT_WHITE = "F1F5F9";
const TXT_MUTED = "94A3B8";

// One color per class (10) for badges and the chart.
const CLASS_COLORS = [
  "3B82F6", "EF4444", "10B981", "F59E0B", "8B5CF6",
  "06B6D4", "EC4899", "F97316", "84CC16", "6366F1",
];

const mkShadow = () => ({ type: "outer", blur: 8, offset: 3, angle: 135, color: "000000", opacity: 0.25 });

function classColor(cls) {
  const i = CLASS_NAMES.indexOf(cls);
  if (i !== -1) return CLASS_COLORS[i % CLASS_COLORS.length];
  if (cls === "UNCERTAIN") return AMBER;
  return RED; // ERROR / UNKNOWN
}

// Top-2 predictions from a score vector aligned to CLASS_NAMES.
function topTwo(scores) {
  if (!Array.isArray(scores)) return [];
  return scores
    .map((s, i) => ({ name: CLASS_NAMES[i], score: s == null ? -1 : s }))
    .filter((x) => x.score >= 0)
    .sort((a, b) => b.score - a.score)
    .slice(0, 2);
}

// ── Presentation ──
const pres = new pptxgen();
pres.layout = "LAYOUT_16x9";
pres.author = "FPGA Classifier Demo";
pres.title = customTitle || "FPGA Image Classification Demo";

const topBar = (slide) =>
  slide.addShape(pres.shapes.RECTANGLE, { x: 0, y: 0, w: 10, h: 0.06, fill: { color: ACCENT } });

// ── Slide 1: Title ──
{
  const slide = pres.addSlide();
  slide.background = { color: BG_DARK };
  topBar(slide);

  slide.addText(customTitle || "FPGA Image Classification", {
    x: 0.8, y: 1.2, w: 8.4, h: 1.2,
    fontSize: 40, fontFace: "Trebuchet MS", color: TXT_WHITE, bold: true, margin: 0,
  });
  slide.addText("Hardware Demo", {
    x: 0.8, y: 2.4, w: 8.4, h: 0.6,
    fontSize: 22, fontFace: "Calibri", color: ACCENT, margin: 0,
  });

  const details = [
    `Model: ${config.model || "MobileNet"}`,
    `Processor: ${config.processor || "Synopsys TRV32P3 with early exit"}`,
    `Input: ${config.image_size || "64x64x3"} float32  |  UART @ ${(config.baud || 2000000).toLocaleString()} baud`,
    `Threshold profile (EE1/EE2/EE3): ${config.profile}`,
  ].join("\n");
  slide.addText(details, {
    x: 0.8, y: 3.5, w: 8.4, h: 1.5,
    fontSize: 13, fontFace: "Calibri", color: TXT_MUTED, lineSpacingMultiple: 1.5,
  });

  slide.addShape(pres.shapes.RECTANGLE, {
    x: 0.8, y: 5.0, w: 2.2, h: 0.45, fill: { color: ACCENT }, rectRadius: 0.05,
  });
  slide.addText(`${summary.total_images} images classified`, {
    x: 0.8, y: 5.0, w: 2.2, h: 0.45,
    fontSize: 11, fontFace: "Calibri", color: TXT_WHITE, bold: true,
    align: "center", valign: "middle", margin: 0,
  });
}

// ── Slide 2: Summary ──
{
  const slide = pres.addSlide();
  slide.background = { color: BG_DARK };
  topBar(slide);

  slide.addText("Classification Summary", {
    x: 0.8, y: 0.3, w: 8.4, h: 0.7,
    fontSize: 28, fontFace: "Trebuchet MS", color: TXT_WHITE, bold: true, margin: 0,
  });

  const counts = summary.class_counts || {};
  const detected = Object.values(counts).filter((v) => v > 0).length;
  const stats = [
    { label: "TOTAL", value: `${summary.total_images}`, color: ACCENT },
    { label: "CLASSES SEEN", value: `${detected}`, color: CLASS_COLORS[2] },
    { label: "UNCERTAIN", value: `${summary.classified_uncertain || 0}`, color: AMBER },
    { label: "EARLY EXIT", value: `${summary.early_exit_rate.toFixed(0)}%`, color: CLASS_COLORS[2] },
    { label: "AVG TIME", value: `${summary.avg_time_ms.toFixed(0)} ms`, color: ACCENT },
    { label: "ERRORS", value: `${summary.errors || 0}`, color: RED },
  ];

  const cardW = 2.6, cardH = 1.1, gapX = 0.35, gapY = 0.25, startX = 0.8, startY = 1.2;
  stats.forEach((st, i) => {
    const cx = startX + (i % 3) * (cardW + gapX);
    const cy = startY + Math.floor(i / 3) * (cardH + gapY);
    slide.addShape(pres.shapes.RECTANGLE, { x: cx, y: cy, w: cardW, h: cardH, fill: { color: BG_CARD }, shadow: mkShadow() });
    slide.addShape(pres.shapes.RECTANGLE, { x: cx, y: cy, w: 0.06, h: cardH, fill: { color: st.color } });
    slide.addText(st.value, {
      x: cx + 0.2, y: cy + 0.1, w: cardW - 0.4, h: 0.6,
      fontSize: 30, fontFace: "Trebuchet MS", color: TXT_WHITE, bold: true,
      align: "center", valign: "middle", margin: 0,
    });
    slide.addText(st.label, {
      x: cx + 0.2, y: cy + 0.72, w: cardW - 0.4, h: 0.3,
      fontSize: 10, fontFace: "Calibri", color: TXT_MUTED,
      align: "center", valign: "middle", margin: 0,
    });
  });

  // Class-distribution bar chart (only classes that appeared)
  const present = CLASS_NAMES.filter((c) => (counts[c] || 0) > 0);
  if (present.length) {
    slide.addChart(pres.charts.BAR, [{
      name: "Count",
      labels: present,
      values: present.map((c) => counts[c]),
    }], {
      x: 0.8, y: 3.9, w: 8.4, h: 1.6,
      barDir: "col",
      chartColors: present.map((c) => classColor(c)),
      showValue: true,
      dataLabelColor: TXT_WHITE,
      dataLabelFontSize: 9,
      showLegend: false,
      catAxisLabelColor: TXT_MUTED,
      catAxisLabelFontSize: 8,
      valAxisHidden: true,
      valGridLine: { style: "none" },
    });
  }
}

// ── Per-image slides (2x2 grid) ──
const GRID_COLS = 2, GRID_ROWS = 2, PER_SLIDE = GRID_COLS * GRID_ROWS;
for (let page = 0; page < Math.ceil(results.length / PER_SLIDE); page++) {
  const slide = pres.addSlide();
  slide.background = { color: BG_DARK };
  topBar(slide);

  const pageStart = page * PER_SLIDE + 1;
  const pageEnd = Math.min((page + 1) * PER_SLIDE, results.length);
  slide.addText(`Results ${pageStart}-${pageEnd} of ${results.length}`, {
    x: 0.5, y: 0.15, w: 9, h: 0.4,
    fontSize: 14, fontFace: "Calibri", color: TXT_MUTED, margin: 0,
  });

  const batch = results.slice(page * PER_SLIDE, (page + 1) * PER_SLIDE);
  const cellW = 4.3, cellH = 2.35, marginX = 0.5, marginY = 0.65, gapX = 0.4, gapY = 0.25;

  batch.forEach((r, idx) => {
    const cx = marginX + (idx % GRID_COLS) * (cellW + gapX);
    const cy = marginY + Math.floor(idx / GRID_COLS) * (cellH + gapY);

    slide.addShape(pres.shapes.RECTANGLE, { x: cx, y: cy, w: cellW, h: cellH, fill: { color: BG_CARD }, shadow: mkShadow() });

    const thumbPath = path.join(thumbDir, r.thumb_file);
    if (fs.existsSync(thumbPath)) {
      slide.addImage({ path: thumbPath, x: cx + 0.15, y: cy + 0.15, w: 1.7, h: 1.7 });
    } else {
      slide.addShape(pres.shapes.RECTANGLE, { x: cx + 0.15, y: cy + 0.15, w: 1.7, h: 1.7, fill: { color: "334155" } });
      slide.addText("No\nimage", { x: cx + 0.15, y: cy + 0.15, w: 1.7, h: 1.7, fontSize: 12, color: TXT_MUTED, align: "center", valign: "middle" });
    }

    // Predicted-class badge
    slide.addShape(pres.shapes.RECTANGLE, { x: cx + 2.05, y: cy + 0.15, w: 2.05, h: 0.45, fill: { color: classColor(r.classification) } });
    slide.addText(r.classification, {
      x: cx + 2.05, y: cy + 0.15, w: 2.05, h: 0.45,
      fontSize: 14, fontFace: "Trebuchet MS", color: TXT_WHITE, bold: true,
      align: "center", valign: "middle", margin: 0,
    });

    // Details
    const conf = r.confidence != null ? r.confidence.toFixed(1) : "?";
    const tms = r.time_ms != null ? r.time_ms.toFixed(0) : "?";
    const tt = topTwo(r.scores);
    const top2Line = tt.length
      ? tt.map((x) => `${x.name} ${(x.score * 100).toFixed(0)}%`).join("  ")
      : "scores n/a";

    slide.addText([
      { text: `Confidence: ${conf}%`, options: { fontSize: 11, color: TXT_WHITE, bold: true, breakLine: true } },
      { text: top2Line, options: { fontSize: 9, color: TXT_MUTED, breakLine: true } },
      { text: `Exit: ${r.exit_type}  |  ${tms} ms`, options: { fontSize: 10, color: TXT_MUTED, breakLine: true } },
    ], { x: cx + 2.05, y: cy + 0.7, w: 2.1, h: 1.0, fontFace: "Calibri", valign: "top", margin: 0 });

    slide.addText(r.filename, {
      x: cx + 0.15, y: cy + 1.95, w: cellW - 0.3, h: 0.3,
      fontSize: 9, fontFace: "Calibri", color: TXT_MUTED, valign: "middle", margin: 0,
    });
  });
}

// ── Final slide ──
{
  const slide = pres.addSlide();
  slide.background = { color: BG_DARK };
  topBar(slide);

  slide.addText("Thank You", {
    x: 0.8, y: 1.5, w: 8.4, h: 1.0,
    fontSize: 44, fontFace: "Trebuchet MS", color: TXT_WHITE, bold: true, align: "center", margin: 0,
  });
  slide.addText("Discussion", {
    x: 0.8, y: 2.6, w: 8.4, h: 0.6,
    fontSize: 20, fontFace: "Calibri", color: ACCENT, align: "center", margin: 0,
  });
  const recap = [
    `${summary.total_images} images at profile ${config.profile} (EE1/EE2/EE3)`,
    `${summary.early_exit_rate.toFixed(0)}% early exit rate — avg ${summary.avg_time_ms.toFixed(0)} ms inference`,
    `${config.model} on ${config.processor}`,
  ].join("\n");
  slide.addText(recap, {
    x: 1.5, y: 3.6, w: 7, h: 1.5,
    fontSize: 13, fontFace: "Calibri", color: TXT_MUTED, align: "center", lineSpacingMultiple: 1.6,
  });
}

// ── Save ──
const outPath = path.join(inputDir, "FPGA_Demo_Presentation.pptx");
pres.writeFile({ fileName: outPath })
  .then(() => {
    console.log(`\n  Presentation saved: ${outPath}`);
    console.log(`  Slides: ${2 + Math.ceil(results.length / PER_SLIDE) + 1}`);
  })
  .catch((err) => console.error("Error:", err));
