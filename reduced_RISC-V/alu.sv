module alu #(parameter W = 32)(
    input logic [2: 0] ALUctrl,
    input logic [W-1: 0] N1,
    input logic [W-1: 0] N2,
    output logic [W-1: 0] out,
    output logic EQ
);

always_comb
    case (ALUctrl)
        3'b000: out = N1 + N2; // add
        3'b001: out = N1 - N2; // sub
        3'b010: out = N1 & N2; // and
        3'b011: out = N1 | N2; // or
        3'b101: out = N1 < N2 ? 32'b1 : 32'b0; // set less than, slt

        default out = N1 + N2;
    endcase

always_comb begin
    if (out == 0) EQ = 1;
    else EQ = 0;
end

endmodule


