# FPGA script

For every image and threshold profile it sends the image and the thresholds over UART, reads the exit taken, the predicted class, the scores and the cycle count of the hardware timer, and writes one CSV row:

`filename, true_label, profile, ee1_threshold, ee2_threshold, ee3_threshold, exit_type, exit_number,
classification, score_0 ... score_9, cycles, time_ms`

    python fpga_classifier_bench.py --port /dev/ttyUSB2 --folder <dir with bin/<class>/*.bin> --output results
    python fpga_classifier_bench.py --plot-only results/results.csv --output results

Inputs: `data/cifar10_64/make_bins.py`. Requires `pyserial`, `numpy`, `matplotlib`.
