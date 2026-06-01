`timescale 1ns / 1ps

module AHBliteTop
  ( input   CLK_P,
    input   CLK_N,
    input   reset,  
    input   jtag_tck_in_BB,
    input   jtag_tms_in_BB,
    input   jtag_tdi_in_BB,
    output  jtag_tdo_out_BB,
    input   jtag_tck_in_EE,
    input   jtag_tms_in_EE,
    input   jtag_tdi_in_EE,
    output  jtag_tdo_out_EE,
    input   uart_RX,
    output  uart_TX,
    output  RGB0_Green,
    output RGB0_Green_EE,
    output  RGB0_Red,
    output LED_BB,
    output LED_EE,
    output  rxnew_LED,
    output  txgo_LED
  );
 
  localparam  BAD_DATA = 32'hdeafbeef;  // value read from invalid slave
  localparam  OKAY = 1'b0, ERROR = 1'b1;  // values for the HRESP signal


    wire        HCLK;       // 100 MHz clock 
    wire        HRESET;
    wire        HRESETn;

    reg [31:0]	HWDATA_BB;     // write data
    wire [31:0]	HADDR_BB;      // address
    wire 	HWRITE_BB;     // write signal
    wire [1:0] 	HTRANS_BB;     // transaction type
    wire [3:0] 	HPROT_BB;      // protection (not used here)
    wire [2:0] 	HSIZE_BB;      // transaction width
    wire [31:0] HRDATA_BB;     // read data
    wire	HREADY;        // ready signal from active slave
    wire 	HRESP_BB;      // error response
    

    reg [31:0]	HWDATA_EE;     // write data
    wire [31:0]	HADDR_EE;      // address
    wire 	HWRITE_EE;     // write signal
    wire [1:0] 	HTRANS_EE;     // transaction type
    wire [3:0] 	HPROT_EE;      // protection (not used here)
    wire [2:0] 	HSIZE_EE;      // transaction width
    wire [31:0] HRDATA_EE;     // read data

    
// Slave select signals (one per slave)
    wire        HSEL_ram_BB, HSEL_dummy, HSEL_uart, HSEL_timer, HSEL_conv;
    
// Slave output signals (one per slave)
    wire [31:0] HRDATA_ram_BB, HRDATA_uart, HRDATA_timer, HRDATA_conv;
    wire        HREADYOUT_ram_BB, HREADYOUT_dummy, HREADYOUT_uart, HREADYOUT_timer, HREADYOUT_conv;
    wire        HRESP_dummy, HRESP_uart, HRESP_timer, HRESP_conv;
 

// ======================== Other Interconnecting Signals =======================

    wire [3:0]  muxSel;         // from address decoder to control the multiplexer
    
// ======================== Interrupt signals ====================================

wire [31:0] x19_BB;
wire [31:0] x19_EE;
wire SoC_clk_EE_gated;
wire SoC_reset_gate;

assign SoC_clk_EE = SoC_clk_EE_gated && HCLK;
assign HRESET = reset || SoC_reset_gate;
assign HRESETn = ~HRESET;

clock_ctrl inst_clock_ctrl(
.clk(HCLK),
.rst(HRESET),
.in1(x19_EE),
.in2(x19_BB),
.out(SoC_clk_EE_gated)
);

SoC_reset_ctrl inst_SoC_reset_ctrl(
.clk(HCLK),
.rst(reset),
.in1(x19_EE),
.in2(x19_BB),
.out(SoC_reset_gate)
);

// ======================== Clock Generator ======================================
wire locked;

clk_wiz_0_local clk_generator
(
    // Clock out ports
    .CLK_100MHZ(HCLK),           // output CLK_100MHZ
    .CLK_120MHZ(CLK_120MHZ),     // output CLK_120MHZ
    .CLK_150MHZ(CLK_150MHZ),     // output CLK_150MHZ
    .CLK_200MHZ(CONV_CLK),       // output CLK_200MHZ
    .reset(0),
    .locked(locked),
    // Clock in ports
    .clk_in1_p(CLK_P),    // input clk_in1_p
    .clk_in1_n(CLK_N)     // input clk_in1_n
);

// ======================== Delay ==============================================
// Buffer HWDATA signal from core for AHB peripherals, but allow pass-through to Data memory IP
wire [31:0] HWDATA_DM_BB;
always @ (posedge HCLK)
    if (HRESET) HWDATA_BB <= 32'b0;
    else HWDATA_BB <= HWDATA_DM_BB;

wire [31:0] HWDATA_DM_EE;
always @ (posedge SoC_clk_EE)
    if (HRESET) HWDATA_EE <= 32'b0;
    else HWDATA_EE <= HWDATA_DM_EE;    

// ======================== AHB_trv32p3 ========================================

// PM signals 
wire [31:0] pm_rd_BB, pm_wr_BB;
wire [31:0] pm_addr_BB;
wire pm_st_BB, pm_ld_BB;

wire [31:0] pm_rd_EE, pm_wr_EE;
wire [31:0] pm_addr_EE;
wire pm_st_EE, pm_ld_EE;

AHB_CPU_BB_trv32p3 inst_AHB_CPU_BB_trv32p3_BB (
    // AHB bus inputs
    .HCLK   (HCLK),
    .HRESET (HRESET),
    .HRDATA (HRDATA_BB),
    .HREADY (HREADY),            // not used
    .HRESP  (HRESP_BB),          // not used
    // AHB bus outputs
    .HADDR  (HADDR_BB),
    .HWDATA (HWDATA_DM_BB),
    .HWRITE (HWRITE_BB),
    .HTRANS (HTRANS_BB),
    .HSIZE  (HSIZE_BB),
    // PM signal for direct connection
    .pm_rd  (pm_rd_BB),   // data from the PM
    .pm_addr(pm_addr_BB), // address to PM
    .pm_wr  (pm_wr_BB),   // data write to PM
    .pm_ld  (pm_ld_BB),   // load from PM
    .pm_st  (pm_st_BB),   // store to PM
    // JTAG signals
    .jtag_tck_in    (jtag_tck_in_BB),
    .jtag_tms_in    (jtag_tms_in_BB),
    .jtag_tdi_in    (jtag_tdi_in_BB),
    .jtag_tdo_out   (jtag_tdo_out_BB),
    
    //Interrupt signals
    .ext_ireq       (1'b0),
    .ext_ireq_idx   (32'd0)
);

AHB_CPU_EE_trv32p3 inst_AHB_CPU_EE_trv32p3_EE (
    // AHB bus inputs
    .HCLK   (SoC_clk_EE),
    .HRESET (HRESET),
    .HRDATA (HRDATA_EE),
    .HREADY (HREADY),         // not used
    .HRESP  (),               // not used
    // AHB bus outputs
    .HADDR  (HADDR_EE),
    .HWDATA (HWDATA_DM_EE),
    .HWRITE (HWRITE_EE),
    .HTRANS (HTRANS_EE),
    .HSIZE  (HSIZE_EE),
    .pm_rd  (pm_rd_EE),   // data from the PM
    .pm_addr(pm_addr_EE), // address to PM
    .pm_wr  (pm_wr_EE),   // data write to PM
    .pm_ld  (pm_ld_EE),   // load from PM
    .pm_st  (pm_st_EE),   // store to PM
    // JTAG signals
    .jtag_tck_in    (jtag_tck_in_EE),
    .jtag_tms_in    (jtag_tms_in_EE),
    .jtag_tdi_in    (jtag_tdi_in_EE),
    .jtag_tdo_out   (jtag_tdo_out_EE),
    
    //Interrupt signals
    .ext_ireq       (1'b0),
    .ext_ireq_idx   (32'd0)
);

// ======================== Address Decoder ======================================
// Implements address map, generates slave select signals and controls mux
    AHBDCD decode (
        .HADDR      (HADDR_BB),        // address in
        .HSEL_S0    (HSEL_ram_BB),     // ten slave select signals out
        .HSEL_S1    (HSEL_uart),
        .HSEL_S2    (HSEL_timer),
        .HSEL_S3    (HSEL_conv),
        .HSEL_S4    (),
        .HSEL_S5    (),
        .HSEL_S6    (),
        .HSEL_S7    (),
        .HSEL_S8    (),
        .HSEL_S9    (),
        .HSEL_NOMAP (HSEL_dummy),   // select dummy slave if invalid address given
        .MUX_SEL    (muxSel)        // multiplexer control signal out
        );


// ======================== Multiplexer ======================================
// Selects appropriate slave output signals to pass to master
    AHBMUX mux (
        .HCLK           (HCLK),
        .HRESETn        (HRESETn),
        .MUX_SEL        (muxSel[3:0]),     // control from address decoder

    // Connect the read data signals to the data multiplexer
        .HRDATA_S0      (HRDATA_ram_BB),       // ten read data inputs from slaves
        .HRDATA_S1      (HRDATA_uart),
        .HRDATA_S2      (HRDATA_timer),
        .HRDATA_S3      (HRDATA_conv),
        .HRDATA_S4      (BAD_DATA),
        .HRDATA_S5      (BAD_DATA),
        .HRDATA_S6      (BAD_DATA),         // unused inputs give BAD_DATA
        .HRDATA_S7      (BAD_DATA),
        .HRDATA_S8      (BAD_DATA),
        .HRDATA_S9      (BAD_DATA),
        .HRDATA_NOMAP   (BAD_DATA),         // dummy slave also gives BAD_DATA
        .HRDATA         (HRDATA_BB),           // read data output to master

    // Connect the ready signals to the ready multiplexer
        .HREADYOUT_S0   (HREADYOUT_ram_BB),    // ten ready signals from slaves
        .HREADYOUT_S1   (HREADYOUT_uart),
        .HREADYOUT_S2   (HREADYOUT_timer),
        .HREADYOUT_S3   (HREADYOUT_conv),             
        .HREADYOUT_S4   (1'b1),
        .HREADYOUT_S5   (1'b1),
        .HREADYOUT_S6   (1'b1),             // unused inputs must be tied to 1
        .HREADYOUT_S7   (1'b1),
        .HREADYOUT_S8   (1'b1),
        .HREADYOUT_S9   (1'b1),
        .HREADYOUT_NOMAP(HREADYOUT_dummy),  // ready signal from dummy slave
        .HREADY         (HREADY),           // ready output to master and all slaves
        
    // Connect the response signals to the response multiplexer
        .HRESP_S0    (OKAY),    // the ROM and RAM slaves do not have HRESP ports, as they 
        .HRESP_S1    (HRESP_uart),    // never signal an error, so response is always OKAY
		.HRESP_S2    (HRESP_timer), 
        .HRESP_S3    (HRESP_conv),             
        .HRESP_S4    (OKAY),
        .HRESP_S5    (OKAY),
        .HRESP_S6    (OKAY),    // unused reponse inputs should also be OKAY
        .HRESP_S7    (OKAY),
        .HRESP_S8    (OKAY),
        .HRESP_S9    (OKAY),
        .HRESP_NOMAP (HRESP_dummy),  // response signal from dummy slave
        .HRESP       (HRESP_BB)         // reponse output to master
        );


// ======================== Slaves on AHB Lite Bus ======================================

// ======================== Program store - block RAM with loader interface ==============
blk_mem_BB_pm_local ROM_BB (
.clka   (HCLK),
.rsta   (HRESET),
.wea    (pm_st_BB),
.addra  (pm_addr_BB[16:2]), // ignore two LSBs
.dina   (pm_wr_BB),
.douta  (pm_rd_BB)
);

blk_mem_EE_pm_local ROM_EE (
.clka   (SoC_clk_EE),
.rsta   (HRESET),
.wea    (pm_st_EE),
.addra  (pm_addr_EE[13:2]),
.dina   (pm_wr_EE),
.douta  (pm_rd_EE)
);

// ======================== Data memory - block RAM ====================================
AHB_DM RAM(
    .HCLK        (HCLK),                     
    .HRESET      (HRESET),                   
    .HSEL_BB        (HSEL_ram_BB),           
    .HREADY_BB      (HREADY),                
    .HADDR_BB       (HADDR_BB),              
    .HTRANS_BB      (HTRANS_BB),             
    .HSIZE_BB       (HSIZE_BB),              
    .HWRITE_BB      (HWRITE_BB),             
    .HWDATAdm_BB      (HWDATA_DM_BB),        
    .HRDATA_BB      (HRDATA_ram_BB),         
    .HREADYOUT_BB   (HREADYOUT_ram_BB),      
    .HSEL_EE        (1'b1),                  
    .HREADY_EE      (HREADY),                
    .HADDR_EE       (HADDR_EE),              
    .HTRANS_EE      (HTRANS_EE),             
    .HSIZE_EE       (HSIZE_EE),              
    .HWRITE_EE      (HWRITE_EE),             
    .HWDATAdm_EE      (HWDATA_DM_EE),        
    .HRDATA_EE      (HRDATA_EE),             
    .HREADYOUT_EE   (HREADYOUT_ram_EE)        
    );

// ======================= UART block ======================================
   
AHBuart uart(
    .HCLK       (HCLK),			        
    .HRESETn    (HRESETn),                     
    .HSEL       (HSEL_uart),		       
    .HREADY     (HREADY),		       
    .HADDR      (HADDR_BB),	               
    .HTRANS     (HTRANS_BB),	               
    .HWRITE     (HWRITE_BB),		       
    .HWDATA     (HWDATA_BB),	               
    .HRDATA     (HRDATA_uart),	               
    .HREADYOUT  (HREADYOUT_uart),	       
    .HRESP      (HRESP_uart),		       
    .serialRx   (uart_RX),		       
    .serialTx   (uart_TX),		       
    .uart_IRQ   (uart_IRQ),			
    .rxnew_LED  (rxnew_LED),
    .txgo_LED   (txgo_LED)
);

// ======================= TIMER block ======================================

  AHBtimer timer(
    .HCLK       (HCLK),
    .HRESETn    (HRESETn),
    .HSEL       (HSEL_timer),
    .HREADY     (HREADY),
    .HADDR      (HADDR_BB),
    .HTRANS     (HTRANS_BB),
    .HWRITE     (HWRITE_BB),
    .HWDATA     (HWDATA_BB),
    .HRDATA     (HRDATA_timer),
    .HREADYOUT  (HREADYOUT_timer),
    .HRESP      (HRESP_timer)
  );

// ======================= AHBconv ======================================
  AHBconv conv_accel(
    .HCLK       (HCLK),
    .CONV_CLK   (CONV_CLK),
    .HRESETn    (HRESETn),
    .HSEL       (HSEL_conv),
    .HREADY     (HREADY),
    .HADDR      (HADDR_BB),
    .HTRANS     (HTRANS_BB),
    .HWRITE     (HWRITE_BB),
    .HWDATA     (HWDATA_BB),
    .HRDATA     (HRDATA_conv),
    .HREADYOUT  (HREADYOUT_conv),
    .HRESP      (HRESP_conv)
  );

// ======================= Dummy Slave ======================================
// Dummy slave only needs the type of transaction to decide how to respond.
// The response is OKAY for IDLE and BUSY transactions, otherwise ERROR.

    AHBdummy DUMMY(
       .HCLK        (HCLK),            
       .HRESETn     (HRESETn),         
       .HSEL        (HSEL_dummy),      
       .HREADY      (HREADY),         
       .HTRANS      (HTRANS_BB),       
       .HREADYOUT   (HREADYOUT_dummy), 
       .HRESP       (HRESP_dummy)      
       );

//=================== LED INDICATOR =======================
assign RGB0_Red = HRESET; // system is in reset
reg [24:0] count = 0;
assign RGB0_Green  = count[24]; 
always @ (posedge(HCLK)) begin
count <= count + 1;
if(HRESET)
    count <= {25{1'b0}};
end

reg [24:0] count_EE = 0;
assign RGB0_Green_EE  = count_EE[24]; 
always @ (posedge(SoC_clk_EE)) begin
count_EE <= count_EE + 1;
if(HRESET)
    count_EE <= {25{1'b0}};
end

 wire LED_wire_BB;
 reg LED_flag_BB;
 wire LED_wire_EE;
 reg LED_flag_EE;

 wire [31:0] x25_BB;
 
 wire [31:0] x25_EE;
 
 assign x25_BB = inst_AHB_CPU_BB_trv32p3_BB.inst_CPU_BB_trv32p3.inst_CPU_EE_reg_X.reg_val[25][31:0];
 assign x19_BB = inst_AHB_CPU_BB_trv32p3_BB.inst_CPU_BB_trv32p3.inst_CPU_EE_reg_X.reg_val[19][31:0];
 assign x19_EE = inst_AHB_CPU_EE_trv32p3_EE.inst_CPU_EE_trv32p3.inst_CPU_EE_reg_X.reg_val[19][31:0];

 assign x25_EE = inst_AHB_CPU_EE_trv32p3_EE.inst_CPU_EE_trv32p3.inst_CPU_EE_reg_X.reg_val[25][31:0];

 assign LED_wire_BB = (x25_BB == 'h0BA550BA) || (x25_BB == 'h0BA550AB);
 assign LED_wire_EE = (x25_EE == 'h0BA550BA) || (x25_EE == 'h0BA550AB);

  always @(posedge HCLK or posedge HRESET) begin
    if (HRESET) begin
        LED_flag_BB <= 1'b0;
    end else if (!LED_flag_BB && LED_wire_BB) begin
            LED_flag_BB <= 1'b1;
        end
  end 
  
   always @(posedge HCLK or posedge HRESET) begin
    if (HRESET) begin
        LED_flag_EE <= 1'b0;
    end else if (!LED_flag_EE && LED_wire_EE) begin
            LED_flag_EE <= 1'b1;
        end
  end 

assign LED_BB = LED_flag_BB;
assign LED_EE = LED_flag_EE;

endmodule
