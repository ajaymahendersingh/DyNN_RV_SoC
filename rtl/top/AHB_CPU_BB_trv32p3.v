module AHB_CPU_BB_trv32p3
  ( 
    input   HCLK,
    input   HRESET,
    input   [31:0] HRDATA,
    input   HREADY,         // not used
    input   HRESP,          // not used
    output  [31:0] HADDR,
    output [31:0] HWDATA,
    output reg HWRITE,
    output  [1:0] HTRANS,
    output [2:0] HSIZE,
    output [3:0] edm_st_out,
    input   [31:0] pm_rd,   // data from PM
    output  [31:0] pm_addr, // address to PM
    output  [31:0] pm_wr,   // data write to PM
    output  pm_ld,          // load from PM
    output  pm_st,          // store to PM
    // JTAG signals
    input   jtag_tck_in,
    input   jtag_tms_in,
    input   jtag_tdi_in,
    output  jtag_tdo_out,
    // Interrupt signals
    input   ext_ireq,
    input [31:0] ext_ireq_idx
  );

//------------------------------------------------------------

localparam nid = 1;

wire          dbg_ext_break;

wire    jtag_trst_n;
assign  jtag_trst_n = ~HRESET; 


wire [3:0] edm_st;
assign edm_st_out = edm_st;
wire edm_ld;

// ============== Generate HWRITE ================ 
always @ (edm_st, edm_ld) begin
    case (edm_st)
    4'b0: HWRITE = 1'b0;
    default: HWRITE = ~edm_ld; 
    endcase
end

//// ============== Generate HSIZE ================ 
//// Mux for converting edm_st into HSIZE

// Compute byte address and HSIZE
wire [31:0] edm_ad;
reg [31:0] ahb_addr; 
reg [2:0] ahb_hsize;
assign HADDR = ahb_addr;
assign HSIZE = ahb_hsize;
always @ (*) begin
ahb_addr = {edm_ad[29:0], 2'b00}; // default to word-aligned byte address
case (edm_ld) // if this is read transfer it will be word aligned
1'b1: begin
    ahb_addr[1:0] = 2'b00;  // word aligned
    ahb_hsize = 3'b010; // word
end
1'b0: begin
    case (edm_st)
    4'b0001: begin
        ahb_addr[1:0] = 2'b00;
        ahb_hsize = 3'b000; // byte
    end
    4'b0010: begin
        ahb_addr[1:0] = 2'b01;
        ahb_hsize = 3'b000; // byte
    end
    4'b0100: begin
        ahb_addr[1:0] = 2'b10;
        ahb_hsize = 3'b000; // byte
    end
    4'b1000: begin
        ahb_addr[1:0] = 2'b11;
        ahb_hsize = 3'b000; // byte
    end
    4'b0011: begin
        ahb_addr[1:0] = 2'b00;
        ahb_hsize = 3'b001; // halfword
    end
    4'b1100: begin
        ahb_addr[1:0] = 2'b10;
        ahb_hsize = 3'b001; // halfword
    end
    4'b1111: begin
        ahb_addr[1:0] = 2'b00;
        ahb_hsize = 3'b010; // word
    end
    default: begin
        ahb_addr[1:0] = 2'b00;
        ahb_hsize = 3'b111; // invalid case
    end 
    endcase
end
endcase
end

//==========================================================
// Generate transaction type
assign HTRANS = {~(edm_st[0] & ~HWRITE) ,1'b0}; // this is always NONSEQ


// ==========================================================
// stub other inputs:
assign dbg_ext_break = 1'b0;

//-------------------------------

// Model instantiation:
CPU_EE_trv32p3
#(
.nid ( nid )
)
inst_CPU_BB_trv32p3
(
// clock:
.clock  ( HCLK ),
.reset_ext  ( HRESET ),
// memory interfaces:
.edm_ad_out ( edm_ad ), 
.edm_ld_out ( edm_ld ), 
.edm_rd_in ( HRDATA ), 
.edm_st_out ( edm_st ), 
.edm_wr_out ( HWDATA ), 
.pm_addr_out ( pm_addr ), 
.pm_ld_out ( pm_ld ), 
.pm_rd_in ( pm_rd ), 
.pm_st_out ( pm_st ), 
.pm_wr_out ( pm_wr ), 
// Misc inputs (stubbed):
.dbg_ext_break_in ( dbg_ext_break ), 
.ext_ireq_in ( ext_ireq ), 
.ext_ireq_idx_in ( ext_ireq_idx ), 
// Misc outputs (most left open):
.dbg_set_break_out ( ), 
.ext_iack_out ( ), 
// JTAG debug interface:
.jtag_tck_in       ( jtag_tck_in ),
.jtag_tms_in       ( jtag_tms_in ),
.jtag_tdi_in       ( jtag_tdi_in ),
.jtag_tdo_out      ( jtag_tdo_out ),
.jtag_trst       ( jtag_trst_n )
);

endmodule
