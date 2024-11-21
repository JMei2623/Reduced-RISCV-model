module datapath2 #(W = 32)(
    input logic clk,
    input logic rst,
    input logic PCsrc,
    input logic [W-1:0] IMMop,

    output logic [W-1:0] PCN,
    output logic [W-1:0] instr
);

logic [W-1:0] PC;
logic [W-1:0] branch_pc;

assign branch_pc = PC + IMMop;

always_comb begin
    if (PCsrc) PCN = branch_pc;
    else PCN = PC + 4;
end 

pcreg P1(
    .clk(clk),
    .rst(rst),
    .PCN(PCN),

    .PC(PC)
);

rom R1(
    .AddrIn(PC),

    .DOut(instr)
);


endmodule
