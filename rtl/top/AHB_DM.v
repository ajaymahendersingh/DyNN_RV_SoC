module AHB_DM (
    input HCLK,
    input HRESET,
    input [31:0] HADDR_BB,
    input [31:0] HWDATAdm_BB,
    input HSEL_BB,
    input HWRITE_BB,
    input [1:0] HTRANS_BB,
    input [2:0] HSIZE_BB,
    input HREADY_BB, // unused
    output [31:0] HRDATA_BB,
    output HRESP_BB, //unused
    output HREADYOUT_BB, //unused
    
    input [31:0] HADDR_EE,
    input [31:0] HWDATAdm_EE,
    input HSEL_EE,
    input HWRITE_EE,
    input [1:0] HTRANS_EE,
    input [2:0] HSIZE_EE,
    input HREADY_EE, // unused
    output [31:0] HRDATA_EE,
    output HRESP_EE, //unused
    output HREADYOUT_EE //unused
);

// Stub unsupported signals
assign HRESP_BB = 1'b0;     // Never errors
assign HREADYOUT_BB = 1'b1; // Always responds in one cycle 
assign HRESP_EE = 1'b0;     // Never errors
assign HREADYOUT_EE = 1'b1; // Always responds in one cycle 

// Generate port enabling signal
// only enable if selected by the bus
reg enable_BB;
always @ (HSEL_BB, HTRANS_BB) begin
    enable_BB = 0;
    if (HTRANS_BB[1] & HSEL_BB) begin // slave selected AND non-idle transaction
        enable_BB = 1;
        end
end

reg enable_EE;
always @ (HSEL_EE, HTRANS_EE) begin
    enable_EE = 0;
    if (HTRANS_EE[1] & HSEL_EE) begin // slave selected AND non-idle transaction
        enable_EE = 1;
        end
end

//=====================================================================
wire [31:0] ahb_addr_BB = HADDR_BB;     // full byte address
wire [2:0]  ahb_hsize_BB = HSIZE_BB;    // AHB transfer size
reg  [31:0] dm_ad_BB;       // word-aligned address
reg  [3:0]  edm_st_BB;       // byte lane enable

wire [31:0] ahb_addr_EE = HADDR_EE;     // full byte address
wire [2:0]  ahb_hsize_EE = HSIZE_EE;    // AHB transfer size
reg  [31:0] dm_ad_EE;       // word-aligned address
reg  [3:0]  edm_st_EE;       // byte lane enable

// Address and Byte Lane Decoder
always @* begin
  // Word-aligned address
  dm_ad_BB = {2'b00, ahb_addr_BB[31:2]}; // chopping off these bits is fine because we generate edm_st
  // Default 
  edm_st_BB = 4'b0000;
  // We don't want to write if this is a read transfer
  case (HWRITE_BB)
  1'b0: edm_st_BB = 4'b0000;
  1'b1: begin
      case (ahb_hsize_BB)
        3'b000: begin // Byte
          case (ahb_addr_BB[1:0])
            2'b00: edm_st_BB = 4'b0001;
            2'b01: edm_st_BB = 4'b0010;
            2'b10: edm_st_BB = 4'b0100;
            2'b11: edm_st_BB = 4'b1000;
          endcase
        end
        3'b001: begin // Halfword
          case (ahb_addr_BB[1])
            1'b0: edm_st_BB = 4'b0011; // aligned to 0
            1'b1: edm_st_BB = 4'b1100; // aligned to 2
          endcase
        end
        3'b010: edm_st_BB = 4'b1111; // Word
        default: edm_st_BB = 4'b0000; // Invalid size
      endcase
  end
  endcase
end

// Address and Byte Lane Decoder
always @* begin
  // Word-aligned address
  dm_ad_EE = {2'b00, ahb_addr_EE[31:2]}; // chopping off these bits is fine because we generate edm_st
  // Default 
  edm_st_EE = 4'b0000;
  // We don't want to write if this is a read transfer
  case (HWRITE_EE)
  1'b0: edm_st_EE = 4'b0000;
  1'b1: begin
      case (ahb_hsize_EE)
        3'b000: begin // Byte
          case (ahb_addr_EE[1:0])
            2'b00: edm_st_EE = 4'b0001;
            2'b01: edm_st_EE = 4'b0010;
            2'b10: edm_st_EE = 4'b0100;
            2'b11: edm_st_EE = 4'b1000;
          endcase
        end
        3'b001: begin // Halfword
          case (ahb_addr_EE[1])
            1'b0: edm_st_EE = 4'b0011; // aligned to 0
            1'b1: edm_st_EE = 4'b1100; // aligned to 2
          endcase
        end
        3'b010: edm_st_EE = 4'b1111; // Word
        default: edm_st_EE = 4'b0000; // Invalid size
      endcase
  end
  endcase
end

//======================= DATA MEMORY instantiation ====================

blk_mem_dm_local data_mem (
  .clka(HCLK),    // input wire clka
  .rsta(HRESET),    // input wire rsta
  .ena(enable_BB),      // input wire ena
  .wea(edm_st_BB),      // input wire [3 : 0] wea
  .addra(dm_ad_BB),  // input wire addra
  .dina(HWDATAdm_BB),    // input wire [31 : 0] dina
  .douta(HRDATA_BB),  // output wire [31 : 0] douta
  .clkb(HCLK),    // input wire clkb
  .rstb(HRESET),    // input wire rstb
  .enb(enable_EE),      // input wire ena
  .web(edm_st_EE),      // input wire [3 : 0] web
  .addrb(dm_ad_EE),  // input wire addrb
  .dinb(HWDATAdm_EE),    // input wire [31 : 0] dinb
  .doutb(HRDATA_EE)  // output wire [31 : 0] doutb
);

endmodule
