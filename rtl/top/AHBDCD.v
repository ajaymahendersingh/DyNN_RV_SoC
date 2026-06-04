module AHBDCD(
    input [31:0] HADDR,
    output reg HSEL_S0,       // Data Memory
    output reg HSEL_S1,       // UART
    output reg HSEL_S2,       // TIMER
    output reg HSEL_S3,       // AHBconv
    output reg HSEL_S4,
    output reg HSEL_S5,
    output reg HSEL_S6,
    output reg HSEL_S7,
    output reg HSEL_S8,
    output reg HSEL_S9,
    output reg HSEL_NOMAP,
    output reg [3:0] MUX_SEL
);

always @ (HADDR)
    begin
        HSEL_S0 = 1'b0;
        HSEL_S1 = 1'b0;
        HSEL_S2 = 1'b0;
        HSEL_S3 = 1'b0;
        HSEL_S4 = 1'b0;
        HSEL_S5 = 1'b0;
        HSEL_S6 = 1'b0;
        HSEL_S7 = 1'b0;
        HSEL_S8 = 1'b0;
        HSEL_S9 = 1'b0;
        HSEL_NOMAP = 1'b0;
        
        // Check for peripheral region (0x4xxxxxxx)
        if (HADDR[31:16] == 16'h4000) begin
            // Peripheral decode using bits [15:12] for 4KB spacing
            case(HADDR[15:12])
                4'h0: begin             // 0x40000xxx = UART
                    HSEL_S1 = 1'b1;
                    MUX_SEL = 4'd1;
                end
                
                4'h1: begin             // 0x40001xxx = TIMER
                    HSEL_S2 = 1'b1;
                    MUX_SEL = 4'd2;
                end
                
                4'h4,
                4'h5,
                4'h6,
                4'h7: begin             // 0x40004xxx - 0x40006FFF = AHBconv
                    HSEL_S3 = 1'b1;
                    MUX_SEL = 4'd3;
                end
                
                default: begin          // Unmapped peripheral
                    HSEL_NOMAP = 1'b1;
                    MUX_SEL = 4'd15;
                end
            endcase
        end
        // Check for data memory (3 MB)
        else if (HADDR < 32'h00300000) begin
            HSEL_S0 = 1'b1;
            MUX_SEL = 4'd0;
        end
        else begin
            // Unmapped
            HSEL_NOMAP = 1'b1;
            MUX_SEL = 4'd15;
        end
    end

endmodule
