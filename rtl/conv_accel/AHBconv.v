// AHBconv.v

module AHBconv (
    input  wire        HCLK,
    input  wire        CONV_CLK,
    input  wire        HRESETn,
    input  wire        HSEL,
    input  wire        HREADY,
    input  wire [31:0] HADDR,
    input  wire [1:0]  HTRANS,
    input  wire        HWRITE,
    input  wire [31:0] HWDATA,
    output reg  [31:0] HRDATA,
    output wire        HREADYOUT,
    output wire        HRESP,
    output wire [4:0]  fsm_busy
);

    assign HRESP     = 1'b0;
    assign HREADYOUT = 1'b1;

    assign fsm_busy = state;

    // ============================================================
    //  Reset synchronizers
    // ============================================================
    (* ASYNC_REG = "TRUE" *) reg rstn_h_meta, rstn_h_sync;
    always @(posedge HCLK or negedge HRESETn) begin
        if (!HRESETn) {rstn_h_sync, rstn_h_meta} <= 2'b00;
        else          {rstn_h_sync, rstn_h_meta} <= {rstn_h_meta, 1'b1};
    end
    wire rstn_h = rstn_h_sync;

    (* ASYNC_REG = "TRUE" *) reg rstn_c_meta, rstn_c_sync;
    always @(posedge CONV_CLK or negedge HRESETn) begin
        if (!HRESETn) {rstn_c_sync, rstn_c_meta} <= 2'b00;
        else          {rstn_c_sync, rstn_c_meta} <= {rstn_c_meta, 1'b1};
    end
    wire rstn_c = rstn_c_sync;

    // ============================================================
    //  AHB address phase capture
    // ============================================================
    reg [13:0] rHADDR;
    reg        rWrite;

    wire current_xact = HSEL & HTRANS[1] & HREADY;

    always @(posedge HCLK) begin
        if (!rstn_h) begin
            rHADDR <= 14'b0;
            rWrite <= 1'b0;
        end else begin
            rHADDR <= HADDR[13:0];
            rWrite <= current_xact & HWRITE;
        end
    end

    wire reg_space  = (rHADDR[13:11] == 3'b000);
    wire spad_space = ~reg_space;

    // ============================================================
    //  Configuration registers
    //
    //  Use rHADDR[5:2]:
    //    [5:2] == 4'h0 -> INPUT_OFFSET    (0x00)
    //    [5:2] == 4'h1 -> WEIGHT_OFFSET   (0x04)
    //    [5:2] == 4'h2 -> OUTPUT_OFFSET   (0x08)
    //    [5:2] == 4'h3 -> LENGTH          (0x0C)
    //    [5:2] == 4'h4 -> CTRL            (0x10) bit 0=start, bit 1=requant_en
    //    [5:2] == 4'h5 -> STATUS          (0x14)
    //    [5:2] == 4'h6 -> NUM_PRODUCTS    (0x18)
    //    [5:2] == 4'h7 -> PARAM_OFFSET    (0x1C)
    //    [5:2] == 4'h8 -> OUTPUT_ZP       (0x20)
    // ============================================================
    reg [31:0] reg_input_offset;
    reg [31:0] reg_weight_offset;
    reg [31:0] reg_output_offset;
    reg [31:0] reg_length;
    reg [31:0] reg_num_products;
    reg [31:0] reg_param_offset;
    reg [31:0] reg_output_zp;
    reg        reg_start;
    reg        reg_requant_en;

    always @(posedge HCLK) begin
        if (!rstn_h) begin
            reg_input_offset  <= 32'b0;
            reg_weight_offset <= 32'b0;
            reg_output_offset <= 32'b0;
            reg_length        <= 32'b0;
            reg_num_products  <= 32'd1;
            reg_param_offset  <= 32'b0;
            reg_output_zp     <= 32'b0;
            reg_start         <= 1'b0;
            reg_requant_en    <= 1'b0;
        end else begin
            reg_start <= 1'b0;
            if (rWrite && reg_space) begin
                case (rHADDR[5:2])
                    4'h0: reg_input_offset  <= HWDATA;
                    4'h1: reg_weight_offset <= HWDATA;
                    4'h2: reg_output_offset <= HWDATA;
                    4'h3: reg_length        <= HWDATA;
                    4'h4: begin
                        reg_start      <= HWDATA[0];
                        reg_requant_en <= HWDATA[1];
                    end
                    4'h6: reg_num_products  <= HWDATA;
                    4'h7: reg_param_offset  <= HWDATA;
                    4'h8: reg_output_zp     <= HWDATA;
                    default: ;
                endcase
            end
        end
    end

    // ============================================================
    //  start: HCLK pulse -> toggle -> CONV_CLK pulse
    // ============================================================
    reg start_tog_h;
    always @(posedge HCLK) begin
        if (!rstn_h)         start_tog_h <= 1'b0;
        else if (reg_start)  start_tog_h <= ~start_tog_h;
    end

    (* ASYNC_REG = "TRUE" *) reg start_s0_c, start_s1_c;
    reg                                start_s2_c;
    always @(posedge CONV_CLK) begin
        if (!rstn_c) {start_s2_c, start_s1_c, start_s0_c} <= 3'b0;
        else         {start_s2_c, start_s1_c, start_s0_c} <=
                     {start_s1_c, start_s0_c, start_tog_h};
    end
    wire start_pulse_c = start_s2_c ^ start_s1_c;

    // ============================================================
    //  Scratchpad and AHB port A
    // ============================================================
    wire [10:0] porta_word_rd = HADDR[13:3] - 11'h100;
    wire [10:0] porta_word_wr = rHADDR[13:3] - 11'h100;
    wire        porta_half_wr = rHADDR[2];

    wire is_read_addr_phase = current_xact && !HWRITE && spad_space;

    reg         wb_valid;
    reg  [10:0] wb_addr;
    reg  [7:0]  wb_we;
    reg  [63:0] wb_data;
    reg         forward_lower;
    reg         forward_upper;
    reg  [31:0] forward_data;

    always @(posedge HCLK) begin
        if (!rstn_h) begin
            wb_valid      <= 1'b0;
            wb_addr       <= 11'b0;
            wb_we         <= 8'b0;
            wb_data       <= 64'b0;
            forward_lower <= 1'b0;
            forward_upper <= 1'b0;
            forward_data  <= 32'b0;
        end else begin
            forward_lower <= 1'b0;
            forward_upper <= 1'b0;
            if (rWrite && spad_space) begin
                if (is_read_addr_phase) begin
                    wb_valid <= 1'b1;
                    wb_addr  <= porta_word_wr;
                    wb_we    <= porta_half_wr ? 8'b11110000 : 8'b00001111;
                    wb_data  <= {HWDATA, HWDATA};
                    if (porta_word_rd == porta_word_wr) begin
                        if (porta_half_wr) forward_upper <= 1'b1;
                        else               forward_lower <= 1'b1;
                        forward_data <= HWDATA;
                    end
                end else begin
                    wb_valid <= 1'b0;
                end
            end else begin
                if (wb_valid) begin
                    if (!is_read_addr_phase) begin
                        wb_valid <= 1'b0;
                    end else if (porta_word_rd == wb_addr) begin
                        if (wb_we[7]) forward_upper <= 1'b1;
                        if (wb_we[0]) forward_lower <= 1'b1;
                        forward_data <= wb_data[31:0];
                    end
                end
            end
        end
    end

    wire flush_wb = wb_valid && !is_read_addr_phase && !(rWrite && spad_space);
    wire direct_w = (rWrite && spad_space) && !is_read_addr_phase;

    wire [7:0] porta_we8 =
        flush_wb ? wb_we :
        direct_w ? (porta_half_wr ? 8'b11110000 : 8'b00001111) :
        8'b00000000;

    wire [10:0] porta_addr =
        flush_wb ? wb_addr :
        direct_w ? porta_word_wr :
        porta_word_rd;

    wire [63:0] porta_din64 =
        flush_wb ? wb_data :
        {HWDATA, HWDATA};

    wire [63:0] porta_dout_w;

    // ----- Port B ---------------------------
    reg  [10:0] portb_addr_r;
    reg         portb_we;
    reg  [7:0]  portb_wmask;
    reg  [63:0] portb_din64_r;

    wire [7:0]  portb_we8 = portb_we ? portb_wmask : 8'b00000000;
    wire [63:0] portb_dout_w;

    xpm_memory_tdpram #(
        .ADDR_WIDTH_A          (11),
        .ADDR_WIDTH_B          (11),
        .AUTO_SLEEP_TIME       (0),
        .BYTE_WRITE_WIDTH_A    (8),
        .BYTE_WRITE_WIDTH_B    (8),
        .CASCADE_HEIGHT        (0),
        .CLOCKING_MODE         ("independent_clock"),
        .ECC_MODE              ("no_ecc"),
        .MEMORY_INIT_FILE      ("none"),
        .MEMORY_INIT_PARAM     ("0"),
        .MEMORY_OPTIMIZATION   ("true"),
        .MEMORY_PRIMITIVE      ("block"),
        .MEMORY_SIZE           (98304),
        .MESSAGE_CONTROL       (0),
        .READ_DATA_WIDTH_A     (64),
        .READ_DATA_WIDTH_B     (64),
        .READ_LATENCY_A        (1),
        .READ_LATENCY_B        (1),
        .READ_RESET_VALUE_A    ("0"),
        .READ_RESET_VALUE_B    ("0"),
        .RST_MODE_A            ("SYNC"),
        .RST_MODE_B            ("SYNC"),
        .SIM_ASSERT_CHK        (0),
        .USE_EMBEDDED_CONSTRAINT(0),
        .USE_MEM_INIT          (1),
        .WAKEUP_TIME           ("disable_sleep"),
        .WRITE_DATA_WIDTH_A    (64),
        .WRITE_DATA_WIDTH_B    (64),
        .WRITE_MODE_A          ("read_first"),
        .WRITE_MODE_B          ("read_first")
    ) mem_inst (
        .clka      (HCLK),
        .rsta      (1'b0),
        .ena       (1'b1),
        .regcea    (1'b0),
        .addra     (porta_addr),
        .dina      (porta_din64),
        .wea       (porta_we8),
        .douta     (porta_dout_w),
        .injectsbiterra(1'b0),
        .injectdbiterra(1'b0),
        .sbiterra  (),
        .dbiterra  (),
        .clkb      (CONV_CLK),
        .rstb      (1'b0),
        .enb       (1'b1),
        .regceb    (1'b0),
        .addrb     (portb_addr_r),
        .dinb      (portb_din64_r),
        .web       (portb_we8),
        .doutb     (portb_dout_w),
        .injectsbiterrb(1'b0),
        .injectdbiterrb(1'b0),
        .sbiterrb  (),
        .dbiterrb  (),
        .sleep     (1'b0)
    );

    wire [63:0] portb_dout = portb_dout_w;
    wire [63:0] porta_dout = porta_dout_w;

    wire [63:0] final_dout;
    assign final_dout[31:0]  = forward_lower ? forward_data : porta_dout[31:0];
    assign final_dout[63:32] = forward_upper ? forward_data : porta_dout[63:32];
    wire [31:0] spad_dout_a = rHADDR[2] ? final_dout[63:32] : final_dout[31:0];

    // ============================================================
    //  done: CONV_CLK level -> HCLK 2-FF + clear-pending mask
    // ============================================================
    reg reg_done_c;

    (* ASYNC_REG = "TRUE" *) reg done_s0_h, done_s1_h;
    always @(posedge HCLK) begin
        if (!rstn_h) {done_s1_h, done_s0_h} <= 2'b0;
        else         {done_s1_h, done_s0_h} <= {done_s0_h, reg_done_c};
    end

    reg done_visible_h;
    reg done_clear_pending_h;
    always @(posedge HCLK) begin
        if (!rstn_h) begin
            done_visible_h       <= 1'b0;
            done_clear_pending_h <= 1'b0;
        end else if (rWrite && reg_space && (rHADDR[5:2] == 4'h4)) begin
            done_visible_h       <= 1'b0;
            done_clear_pending_h <= 1'b1;
        end else if (done_clear_pending_h) begin
            done_visible_h <= 1'b0;
            if (!done_s1_h) done_clear_pending_h <= 1'b0;
        end else begin
            done_visible_h <= done_s1_h;
        end
    end

    // ============================================================
    //  AHB read mux
    // ============================================================
    reg [31:0] reg_rdata;
    always @(*) begin
        case (rHADDR[5:2])
            4'h0:    reg_rdata = reg_input_offset;
            4'h1:    reg_rdata = reg_weight_offset;
            4'h2:    reg_rdata = reg_output_offset;
            4'h3:    reg_rdata = reg_length;
            4'h4:    reg_rdata = 32'b0;
            4'h5:    reg_rdata = {31'b0, done_visible_h};
            4'h6:    reg_rdata = reg_num_products;
            4'h7:    reg_rdata = reg_param_offset;
            4'h8:    reg_rdata = reg_output_zp;
            default: reg_rdata = 32'b0;
        endcase
    end

    always @(*) begin
        if (spad_space) HRDATA = spad_dout_a;
        else            HRDATA = reg_rdata;
    end

    // ============================================================
    //  Compute FSM (CONV_CLK)
    //
    //  Phases:
    //   1. MAC pass (S_RD_A..S_NEXT). Places INT32
    //      results in scratchpad at OUTPUT_OFFSET, 4 bytes per OC.
    //   2. Requant pass (S_RQ_*) — only if reg_requant_en latched at
    //      start. Walks output channels, applies bias/scale/shift/zp,
    //      packs INT8 results, writes 4 OCs per 32-bit word back to
    //      OUTPUT_OFFSET (overwriting INT32 area).
    //   3. S_DONE.
    //
    //  Requant pipeline:
    //   S_RQ_RD_DOT  : issue BRAM read of INT32 dot for current OC
    //   S_RQ_RD_P0   : capture dot; issue read of param word 0
    //   S_RQ_RD_P1   : capture {bias, scale}; issue read of param word 1
    //   S_RQ_M0      : capture shift; compute (dot + bias)
    //   S_RQ_M1      : 64-bit multiply
    //   S_RQ_M2      : multiply pipeline
    //   S_RQ_M3      : product available; add round constant
    //   S_RQ_SH      : shift right; add zp; clip to INT8
    //   S_RQ_PACK    : place INT8 byte; if 4 bytes ready, write word
    //   S_RQ_NEXT    : advance OC; loop or finish
    // ============================================================
    localparam S_IDLE      = 5'd0;
    localparam S_RD_A      = 5'd1;
    localparam S_RD_B      = 5'd2;
    localparam S_RD_W      = 5'd3;
    localparam S_MAC       = 5'd4;
    localparam S_WRITE     = 5'd5;
    localparam S_NEXT      = 5'd6;
    // Requant states
    localparam S_RQ_INIT   = 5'd7;
    localparam S_RQ_WAIT_DOT   = 5'd8;
    localparam S_RQ_RD_DOT = 5'd9;
    localparam S_RQ_RD_P0  = 5'd10;
    localparam S_RQ_RD_P1  = 5'd11;
    localparam S_RQ_M0     = 5'd12;
    localparam S_RQ_M1     = 5'd13;
    localparam S_RQ_M2     = 5'd14;
    localparam S_RQ_M3     = 5'd15;
    localparam S_RQ_SH     = 5'd16;
    localparam S_RQ_PACK   = 5'd17;
    localparam S_RQ_NEXT   = 5'd18;
    localparam S_RQ_FLUSH  = 5'd19;
    localparam S_DONE      = 5'd20;

    reg [4:0]  state;
    reg [10:0] ptr_a, ptr_b;
    reg [11:0] ptr_out_half;
    reg [10:0] input_start;
    reg [31:0] count;
    reg [31:0] accumulator;
    reg [63:0] latched_a;
    reg [31:0] product_count;

    // CONV_CLK-side captures of HCLK config (sampled on start_pulse_c)
    reg [31:0] cfg_length_c;
    reg [31:0] cfg_num_products_c;
    reg [31:0] cfg_output_offset_c;
    reg [31:0] cfg_param_offset_c;
    reg [31:0] cfg_output_zp_c;
    reg        cfg_requant_en_c;

    // 8-way INT8 MAC
    wire signed [7:0] a [0:7];
    wire signed [7:0] b [0:7];
    assign a[0] = latched_a[7:0];     assign b[0] = portb_dout[7:0];
    assign a[1] = latched_a[15:8];    assign b[1] = portb_dout[15:8];
    assign a[2] = latched_a[23:16];   assign b[2] = portb_dout[23:16];
    assign a[3] = latched_a[31:24];   assign b[3] = portb_dout[31:24];
    assign a[4] = latched_a[39:32];   assign b[4] = portb_dout[39:32];
    assign a[5] = latched_a[47:40];   assign b[5] = portb_dout[47:40];
    assign a[6] = latched_a[55:48];   assign b[6] = portb_dout[55:48];
    assign a[7] = latched_a[63:56];   assign b[7] = portb_dout[63:56];

    (* use_dsp = "yes" *) wire signed [15:0] m0 = a[0] * b[0];
    (* use_dsp = "yes" *) wire signed [15:0] m1 = a[1] * b[1];
    (* use_dsp = "yes" *) wire signed [15:0] m2 = a[2] * b[2];
    (* use_dsp = "yes" *) wire signed [15:0] m3 = a[3] * b[3];
    (* use_dsp = "yes" *) wire signed [15:0] m4 = a[4] * b[4];
    (* use_dsp = "yes" *) wire signed [15:0] m5 = a[5] * b[5];
    (* use_dsp = "yes" *) wire signed [15:0] m6 = a[6] * b[6];
    (* use_dsp = "yes" *) wire signed [15:0] m7 = a[7] * b[7];

    wire signed [16:0] s01 = m0 + m1;
    wire signed [16:0] s23 = m2 + m3;
    wire signed [16:0] s45 = m4 + m5;
    wire signed [16:0] s67 = m6 + m7;
    wire signed [17:0] s0123 = s01 + s23;
    wire signed [17:0] s4567 = s45 + s67;
    wire signed [31:0] mac_sum = $signed({{14{s0123[17]}}, s0123})
                               + $signed({{14{s4567[17]}}, s4567});

    // ============================================================
    //  Requant pipeline data registers
    // ============================================================
    reg signed [31:0] rq_dot;          // INT32 from INT32-output area
    reg signed [31:0] rq_bias;         // INT32 from param word 0 lo
    reg signed [31:0] rq_scale;        // INT32 from param word 0 hi
    reg        [31:0] rq_shift;        // INT32 from param word 1 lo (use [5:0])
    reg signed [32:0] rq_acc_plus_bias; // 33-bit (acc + bias)
    reg signed [63:0] rq_product;      // 64-bit DSP output
    reg signed [63:0] rq_rounded;      // after adding round constant
    reg signed [31:0] rq_shifted;      // after sar (truncated to 32 bits)
    reg signed [31:0] rq_with_zp;      // after adding zp
    reg signed [7:0]  rq_clipped;      // INT8 final
    reg [31:0] rq_oc;                  // current output channel index
    reg [31:0] rq_pack_word;           // assembled 4-byte word for write
    reg [10:0] rq_pack_addr;           // word address (full 64-bit word)
    reg        rq_pack_half;           // which 32-bit half within the word
    reg [10:0] rq_param_word;          // current param word index in scratchpad

    reg signed [32:0] rq_mul_a;
    reg signed [31:0] rq_mul_b;
    (* use_dsp = "yes" *) reg signed [63:0] rq_mul_m;

// 1. Check if shift is negative (upscale / left shift)
    wire        is_lshift = rq_shift[31];
    
    // 2. Get the absolute magnitude of the 6-bit shift
    wire [5:0]  sh = is_lshift ? (~rq_shift[5:0] + 1'b1) : rq_shift[5:0];

    // 3. Compute rounding constant based on magnitude (only used for right shifts)
    wire signed [63:0] round_const = (sh == 0 || is_lshift) ? 64'sd0 : (64'sd1 <<< (sh - 6'd1));

    // 4. Perform the direction-aware shift
    // For left shift, we don't add round_const (already 0). Just shift left.
    // For right shift, add round_const then shift right.
    wire signed [63:0] sar_out = is_lshift ? (rq_rounded <<< sh) 
                                           : (rq_rounded >>> sh);

    always @(posedge CONV_CLK) begin
        if (!rstn_c) begin
            state              <= S_IDLE;
            reg_done_c         <= 1'b0;
            portb_addr_r       <= 11'b0;
            portb_we           <= 1'b0;
            portb_wmask        <= 8'b0;
            portb_din64_r      <= 64'b0;
            accumulator        <= 32'b0;
            latched_a          <= 64'b0;
            ptr_a              <= 11'b0;
            ptr_b              <= 11'b0;
            ptr_out_half       <= 12'b0;
            input_start        <= 11'b0;
            count              <= 32'b0;
            product_count      <= 32'b0;
            cfg_length_c       <= 32'b0;
            cfg_num_products_c <= 32'b0;
            cfg_output_offset_c<= 32'b0;
            cfg_param_offset_c <= 32'b0;
            cfg_output_zp_c    <= 32'b0;
            cfg_requant_en_c   <= 1'b0;
            rq_dot             <= 32'b0;
            rq_bias            <= 32'b0;
            rq_scale           <= 32'b0;
            rq_shift           <= 32'b0;
            rq_acc_plus_bias   <= 33'b0;
            rq_product         <= 64'b0;
            rq_rounded         <= 64'b0;
            rq_shifted         <= 32'b0;
            rq_with_zp         <= 32'b0;
            rq_clipped         <= 8'b0;
            rq_oc              <= 32'b0;
            rq_pack_word       <= 32'b0;
            rq_pack_addr       <= 11'b0;
            rq_pack_half       <= 1'b0;
            rq_param_word      <= 11'b0;
            rq_mul_a           <= 33'b0;
            rq_mul_b           <= 32'b0;
            rq_mul_m           <= 64'b0;
        end else begin
            portb_we <= 1'b0;

            case (state)
                S_IDLE: begin
                    if (start_pulse_c) begin
                        cfg_length_c       <= reg_length;
                        cfg_num_products_c <= reg_num_products;
                        cfg_output_offset_c<= reg_output_offset;
                        cfg_param_offset_c <= reg_param_offset;
                        cfg_output_zp_c    <= reg_output_zp;
                        cfg_requant_en_c   <= reg_requant_en;
                        ptr_a         <= reg_input_offset[13:3];
                        ptr_b         <= reg_weight_offset[13:3];
                        ptr_out_half  <= reg_output_offset[13:2];
                        input_start   <= reg_input_offset[13:3];
                        count         <= reg_length;
                        accumulator   <= 32'b0;
                        product_count <= 32'b0;
                        portb_addr_r  <= reg_input_offset[13:3];
                        state         <= S_RD_A;
                    end
                end

                S_RD_A: begin
                    portb_addr_r <= ptr_b;
                    ptr_a        <= ptr_a + 11'd1;
                    state        <= S_RD_B;
                end

                S_RD_B: begin
                    latched_a <= portb_dout;
                    ptr_b     <= ptr_b + 11'd1;
                    state     <= S_RD_W;
                end

                S_RD_W: begin
                    portb_addr_r <= ptr_a;
                    state        <= S_MAC;
                end

                S_MAC: begin
                    accumulator <= accumulator + mac_sum;
                    count       <= count - 32'd8;
                    if (count <= 32'd8) begin
                        state <= S_WRITE;
                    end else begin
                        state <= S_RD_A;
                    end
                end

                S_WRITE: begin
                    // Always write INT32 to OUTPUT_OFFSET. If requant
                    // is enabled, we'll overwrite this region with INT8
                    // packed bytes during the requant pass.
                    portb_addr_r  <= ptr_out_half[11:1];
                    portb_din64_r <= {accumulator, accumulator};
                    portb_wmask   <= ptr_out_half[0] ? 8'b11110000 : 8'b00001111;
                    portb_we      <= 1'b1;
                    state         <= S_NEXT;
                end

                S_NEXT: begin
                    product_count <= product_count + 32'd1;
                    if (product_count + 32'd1 < cfg_num_products_c) begin
                        ptr_a        <= input_start;
                        ptr_out_half <= ptr_out_half + 12'd1;
                        accumulator  <= 32'b0;
                        count        <= cfg_length_c;
                        portb_addr_r <= input_start;
                        state        <= S_RD_A;
                    end else begin
                        // All products done. Branch to requant or done.
                        if (cfg_requant_en_c) begin
                            rq_oc        <= 32'b0;
                            rq_pack_word <= 32'b0;
                            rq_pack_addr <= cfg_output_offset_c[13:3];
                            rq_pack_half <= cfg_output_offset_c[2];
                            state        <= S_RQ_INIT;
                        end else begin
                            state <= S_DONE;
                        end
                    end
                end

                // ====================================================
                //  Requant FSM
                // ====================================================

		S_RQ_INIT: begin
                    // 1. Request 64-bit word containing the DOT product
                    portb_addr_r <= (cfg_output_offset_c[13:2] + rq_oc[10:0]) >> 1;
                    state        <= S_RQ_WAIT_DOT; 
                end

                S_RQ_WAIT_DOT: begin
                    // 2. Request Param Word 0 (Bias & Scale) early
                    portb_addr_r <= cfg_param_offset_c[13:3] + (rq_oc[9:0] << 1);
                    state        <= S_RQ_RD_DOT;
                end

                S_RQ_RD_DOT: begin
                    // 3. DOT data arrives. Mux the correct 32-bit half.
                    rq_dot <= (cfg_output_offset_c[2] ^ rq_oc[0]) ? portb_dout[63:32] : portb_dout[31:0];
                    
                    // Request Param Word 1 (Shift) early
                    portb_addr_r <= cfg_param_offset_c[13:3] + (rq_oc[9:0] << 1) + 11'd1;
                    state        <= S_RQ_RD_P0;
                end

                S_RQ_RD_P0: begin
                    // 4. Param Word 0 arrives. Latch Bias and Scale.
                    rq_bias  <= portb_dout[31:0];
                    rq_scale <= portb_dout[63:32];
                    state    <= S_RQ_RD_P1;
                end

                S_RQ_RD_P1: begin
                    // 5. Param Word 1 arrives. Latch Shift amount.
                    rq_shift <= portb_dout[31:0];
                    
                    // Pipeline the first math operation
                    rq_acc_plus_bias <= $signed({rq_dot[31], rq_dot})
                                      + $signed({rq_bias[31], rq_bias});
                    state <= S_RQ_M0;
                end

                // M0: present operands to multiplier input registers.
                S_RQ_M0: begin
                    rq_mul_a <= rq_acc_plus_bias;
                    rq_mul_b <= rq_scale;
                    state    <= S_RQ_M1;
                end

                // M1: DSP captures multiply output (M register).
                S_RQ_M1: begin
                    rq_mul_m <= $signed({{31{rq_mul_a[32]}}, rq_mul_a})
                              * $signed({{32{rq_mul_b[31]}}, rq_mul_b});
                    state    <= S_RQ_M2;
                end

                // M2: capture pipelined product.
                S_RQ_M2: begin
                    rq_product <= rq_mul_m;
                    state      <= S_RQ_M3;
                end

                S_RQ_M3: begin
                    rq_rounded <= rq_product + round_const;
                    state      <= S_RQ_SH;
                end

                S_RQ_SH: begin
                    // Shift, add zero point, clip to INT8.
                    rq_shifted <= sar_out[31:0];
                    rq_with_zp <= sar_out[31:0] + cfg_output_zp_c;
                    if ($signed(sar_out[31:0] + cfg_output_zp_c) > 32'sd127) begin
                        rq_clipped <= 8'sd127;
                    end else if ($signed(sar_out[31:0] + cfg_output_zp_c) < -32'sd128) begin
                        rq_clipped <= -8'sd128;
                    end else begin
                        rq_clipped <= (sar_out[31:0] + cfg_output_zp_c);
                    end
                    state <= S_RQ_PACK;
                end

                S_RQ_PACK: begin
                    // Insert clipped byte into pack_word at byte-position oc[1:0]
                    case (rq_oc[1:0])
                        2'd0: rq_pack_word[7:0]   <= rq_clipped;
                        2'd1: rq_pack_word[15:8]  <= rq_clipped;
                        2'd2: rq_pack_word[23:16] <= rq_clipped;
                        2'd3: rq_pack_word[31:24] <= rq_clipped;
                    endcase
                    // If we just filled the 4th byte, write the word.
                    if (rq_oc[1:0] == 2'd3) begin
                        // Drive the write next cycle in S_RQ_NEXT
                        state <= S_RQ_NEXT;
                    end else begin
                        state <= S_RQ_NEXT;
                    end
                end

                S_RQ_NEXT: begin
                    // Drive write of pack_word if we just filled byte 3
                    if (rq_oc[1:0] == 2'd3) begin
                        portb_addr_r  <= rq_pack_addr;
                        portb_din64_r <= {rq_pack_word, rq_pack_word};
                        portb_wmask   <= rq_pack_half ? 8'b11110000 : 8'b00001111;
                        portb_we      <= 1'b1;
                        // Advance pack address: half then word
                        if (rq_pack_half) begin
                            rq_pack_addr <= rq_pack_addr + 11'd1;
                            rq_pack_half <= 1'b0;
                        end else begin
                            rq_pack_half <= 1'b1;
                        end
                        rq_pack_word <= 32'b0;
                    end
                    rq_oc <= rq_oc + 32'd1;
                    if (rq_oc + 32'd1 < cfg_num_products_c) begin
                        state <= S_RQ_INIT;
                    end else begin
                        // Done with all OCs. If we have a partial pack
                        // (oc didn't end on a 4-boundary), flush it.
                        if (rq_oc[1:0] != 2'd3) begin
                            state <= S_RQ_FLUSH;
                        end else begin
                            state <= S_DONE;
                        end
                    end
                end

                S_RQ_FLUSH: begin
                    // Write the partial pack_word with byte-mask covering
                    // only the bytes that were filled.
                    portb_addr_r  <= rq_pack_addr;
                    portb_din64_r <= {rq_pack_word, rq_pack_word};
                    case (rq_oc[1:0])
                        2'd1: portb_wmask <= rq_pack_half ? 8'b00010000 : 8'b00000001;
                        2'd2: portb_wmask <= rq_pack_half ? 8'b00110000 : 8'b00000011;
                        2'd3: portb_wmask <= rq_pack_half ? 8'b01110000 : 8'b00000111;
                        default: portb_wmask <= 8'b00000000;
                    endcase
                    portb_we <= 1'b1;
                    state    <= S_DONE;
                end

                S_DONE: begin
                    reg_done_c <= 1'b1;
                    state      <= S_IDLE;
                end

                default: state <= S_IDLE;
            endcase

            if (start_pulse_c) reg_done_c <= 1'b0;
        end
    end

endmodule
