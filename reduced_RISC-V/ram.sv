module ram #(parameter WA = 8, WD = 32)(
    input logic clk,
    input logic [WA-1:0] Ad,
    input logic RamWrite,
    input logic [WA-1:0] DIn,
    output logic [WD-1:0] DOut
);

logic [WD-1:0] RamArray [2**WA-1:0];

always_comb begin 
    DOut = RamArray[Ad];
end

always_ff@(posedge clk)
    if (RamWrite) RamArray[Ad] <= DIn;

endmodule
