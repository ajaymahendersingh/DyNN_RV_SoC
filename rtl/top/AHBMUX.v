module AHBMUX(
  //GLOBAL CLOCK & RESET
  input wire HCLK,
  input wire HRESETn,
   
  //MUX SELECT FROM ADDRESS DECODER
  input wire [3:0] MUX_SEL,

  //READ DATA FROM ALL THE SLAVES  
  input wire [31:0] HRDATA_S0,		
  input wire [31:0] HRDATA_S1,
  input wire [31:0] HRDATA_S2,
  input wire [31:0] HRDATA_S3,
  input wire [31:0] HRDATA_S4,
  input wire [31:0] HRDATA_S5,
  input wire [31:0] HRDATA_S6,
  input wire [31:0] HRDATA_S7,
  input wire [31:0] HRDATA_S8,
  input wire [31:0] HRDATA_S9,
  input wire [31:0] HRDATA_NOMAP,

  //READYOUT FROM ALL THE SLAVES  
  input wire HREADYOUT_S0,
  input wire HREADYOUT_S1,
  input wire HREADYOUT_S2,
  input wire HREADYOUT_S3,
  input wire HREADYOUT_S4,
  input wire HREADYOUT_S5,
  input wire HREADYOUT_S6,
  input wire HREADYOUT_S7,
  input wire HREADYOUT_S8,
  input wire HREADYOUT_S9,
  input wire HREADYOUT_NOMAP,

  //RESPONSE FROM ALL THE SLAVES  
  input wire HRESP_S0,
  input wire HRESP_S1,
  input wire HRESP_S2,
  input wire HRESP_S3,
  input wire HRESP_S4,
  input wire HRESP_S5,
  input wire HRESP_S6,
  input wire HRESP_S7,
  input wire HRESP_S8,
  input wire HRESP_S9,
  input wire HRESP_NOMAP,
 
  //MULTIPLEXED HREADY, HRESP and HRDATA TO MASTER
  output reg HREADY, HRESP,
  output reg [31:0] HRDATA
);

 
  reg [3:0] APHASE_MUX_SEL;			// LATCH THE ADDRESS PHASE MUX_SELECT
									// TO SEND THE APPROPRIATE RESPONSE & RDATA
									// IN THE DATA PHASE
  always@ (posedge HCLK)
  begin
    if(!HRESETn)
      APHASE_MUX_SEL <= 4'd0;
    else if(HREADY)						// NOTE: ALL THE CONTROL SIGNALS ARE VALID ONLY IF HREADY = 1'b1
      APHASE_MUX_SEL <= MUX_SEL;
  end


  always@*
  begin
    case(APHASE_MUX_SEL)
      4'd0: begin						// SELECT SLAVE0 RESPONSE & DATA IF PREVIOUS APHASE WAS FOR S0
        HRDATA = HRDATA_S0;
        HREADY = HREADYOUT_S0;
        HRESP = HRESP_S0;
      end
      4'd1: begin
        HRDATA = HRDATA_S1;
        HREADY = HREADYOUT_S1;
        HRESP = HRESP_S1;
      end
      4'd2: begin
        HRDATA = HRDATA_S2;
        HREADY = HREADYOUT_S2;
        HRESP = HRESP_S2;
      end
      4'd3: begin
        HRDATA = HRDATA_S3;
        HREADY = HREADYOUT_S3;
        HRESP = HRESP_S3;
      end
      4'd4: begin
        HRDATA = HRDATA_S4;
        HREADY = HREADYOUT_S4;
        HRESP = HRESP_S4;
      end
      4'd5: begin
        HRDATA = HRDATA_S5;
        HREADY = HREADYOUT_S5;
        HRESP = HRESP_S5;
      end
      4'd6: begin
        HRDATA = HRDATA_S6;
        HREADY = HREADYOUT_S6;
        HRESP = HRESP_S6;
      end
      4'd7: begin
        HRDATA = HRDATA_S7;
        HREADY = HREADYOUT_S7;
        HRESP = HRESP_S7;
      end
      4'd8: begin
        HRDATA = HRDATA_S8;
        HREADY = HREADYOUT_S8;
        HRESP = HRESP_S8;
      end
      4'd9: begin
        HRDATA = HRDATA_S9;
        HREADY = HREADYOUT_S9;
        HRESP = HRESP_S9;
      end
      default: begin            
        HRDATA = HRDATA_NOMAP;
        HREADY = HREADYOUT_NOMAP;
        HRESP = HRESP_NOMAP;
      end
    endcase
    
  end


endmodule