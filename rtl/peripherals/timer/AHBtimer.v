// 64-bit cycle counter with software-only control

module AHBtimer(
    input  HCLK,
    input  HRESETn,        // Only used for initial state, not counter!
    input  HSEL,
    input  HREADY,
    input  [31:0] HADDR,
    input  [1:0] HTRANS,
    input  HWRITE,
    input  [31:0] HWDATA,
    output [31:0] HRDATA,
    output HREADYOUT,
    output HRESP
);

    reg [63:0] counter;
    
    reg enable;
    
    reg [2:0] rHADDR;
    reg rWrite;
    
    always @(posedge HCLK) begin
        if(!HRESETn) begin
            rHADDR <= 3'b0;
            rWrite <= 1'b0;
        end
        else if(HREADY) begin
            rHADDR <= HADDR[4:2];
            rWrite <= HSEL & HWRITE & HTRANS[1];
        end
    end
    
    always @(posedge HCLK) begin
         if (rWrite && (rHADDR == 3'h2)) begin
            enable <= HWDATA[0];  // Software control
        end
    end
    
    always @(posedge HCLK) begin
        if (rWrite && (rHADDR == 3'h2) && HWDATA[1]) begin
            counter <= 64'h0;
        end
        else if (enable) begin
            counter <= counter + 64'h1;
        end
    end
    
    reg [31:0] readData;
    always @(*) begin
        case (rHADDR)
            3'h0:    readData = counter[31:0];
            3'h1:    readData = counter[63:32];
            3'h2:    readData = {31'h0, enable};
            default: readData = 32'h0;
        endcase
    end
    
    assign HRDATA = readData;
    assign HREADYOUT = 1'b1;
    assign HRESP = 1'b0;

endmodule
