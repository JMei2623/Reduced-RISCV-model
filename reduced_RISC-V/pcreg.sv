module pcreg #(parameter W = 32)(
    input logic clk,
    input logic rst,
    input logic [W-1: 0] PCN,
    output logic [W-1: 0] PC
);

always_ff@(posedge clk)
    if (rst) PC <= {W{1'b0}};
    else PC <= PCN;

endmodule


