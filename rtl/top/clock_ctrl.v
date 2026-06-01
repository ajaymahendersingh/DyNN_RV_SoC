module clock_ctrl 
(
    input  wire        clk,
    input  wire        rst,
    input  wire [31:0] in1, 
    input  wire [31:0] in2,
    output reg         out
);

    // ================================
    //  STATES
    // ================================
    reg [1:0] state, next_state;

    parameter IDLE    = 2'b00;
    parameter DELAY   = 2'b01;
    parameter GATED   = 2'b10;
    parameter UNGATED = 2'b11;

    wire clk_gate_sig   = (in1 == 32'h0DEAD0BE);
    wire clk_ungate_sig = (in2 == 32'h0CCCC0BE);

    reg [2:0] delay_cnt;
    reg       pending_gate;
    reg       pending_ungate;

    // ================================
    //  NEXT STATE LOGIC
    // ================================
    always @(*) begin
        next_state = state;

        case (state)

            IDLE:
                if (clk_gate_sig || clk_ungate_sig)
                    next_state = DELAY;

            GATED:
                if (clk_ungate_sig)
                    next_state = DELAY;

            UNGATED:
                if (clk_gate_sig)
                    next_state = DELAY;

            DELAY:
                if (delay_cnt == 3'd0) begin
                    if (pending_gate)
                        next_state = GATED;
                    else if (pending_ungate)
                        next_state = UNGATED;
                end
        endcase
    end


    // ================================
    //  SEQUENTIAL STATE + OUTPUT LOGIC
    // ================================
    always @(posedge clk or posedge rst) begin
        if (rst) begin
            state          <= IDLE;
            out            <= 1'b1;  // default state
            delay_cnt      <= 3'd0;
            pending_gate   <= 1'b0;
            pending_ungate <= 1'b0;
        end 
        else begin
            state <= next_state;

            case (state)

                IDLE,
                GATED,
                UNGATED: begin
                    if (clk_gate_sig) begin
                        pending_gate    <= 1'b1;
                        pending_ungate  <= 1'b0;
                        delay_cnt       <= 3'd5;
                    end 
                    else if (clk_ungate_sig) begin
                        pending_gate    <= 1'b0;
                        pending_ungate  <= 1'b1;
                        delay_cnt       <= 3'd5;
                    end
                end

                DELAY: begin
                    if (delay_cnt != 3'd0)
                        delay_cnt <= delay_cnt - 3'd1;
                
                    // Accept new commands during DELAY - last command wins
                    if (clk_gate_sig) begin
                        pending_gate   <= 1'b1;
                        pending_ungate <= 1'b0;
                        delay_cnt      <= 3'd5;       // restart countdown
                    end
                    else if (clk_ungate_sig) begin
                        pending_gate   <= 1'b0;
                        pending_ungate <= 1'b1;
                        delay_cnt      <= 3'd5;       // restart countdown
                    end
                end
            endcase

            if (state == DELAY && delay_cnt == 3'd0) begin
                if (pending_gate) begin
                    out <= 1'b0;
                end
                else if (pending_ungate) begin
                    out <= 1'b1;
                end

                pending_gate   <= 1'b0;
                pending_ungate <= 1'b0;
            end
        end
    end

endmodule
