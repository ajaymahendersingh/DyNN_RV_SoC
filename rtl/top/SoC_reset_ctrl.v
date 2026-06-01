module SoC_reset_ctrl
(
    input clk,
    input rst,
    input [31:0] in1, in2,
    output reg out  
);

 wire reset_gate_sig;
 reg reset_gate_FLAG;
 reg [4:0] count;

 assign reset_gate_sig = ((in1 == 'h0DEAD0A5) || (in2 == 'h0DEAD0A5));

    always @(posedge clk or posedge rst) begin
        if (rst) begin
            reset_gate_FLAG <= 1'b0;
            count           <= 5'd0;
            out             <= 1'b0;
        end 
        else begin
            if (!reset_gate_FLAG && reset_gate_sig) begin
                reset_gate_FLAG <= 1'b1;
                count           <= 5'd0;
                out             <= 1'b0;
            end
            else if (reset_gate_FLAG && (count < 5'd30)) begin
                count <= count + 1'b1;
                out   <= 1'b1;
            end
            else if (reset_gate_FLAG) begin
                out <= 1'b0;
                count <= 5'd0;
                reset_gate_FLAG <= 1'b0;
            end
        end
    end
    
endmodule
