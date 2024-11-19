module datapath1 #(parameter WAD = 5, WD = 32)(
    input logic clk,

    input logic [WAD-1:0] AdIn,
    input logic [WAD-1:0] AdOut1,
    input logic [WAD-1:0] AdOut2,
    input logic [WD-1:0] instr,

    input logic ALUsrc,
    input logic [2:0] ALUctrl,
    input logic RegWrite,
    input logic [1:0] IMMsrc,

    output logic [WD-1:0] A0,
    output logic EQ,
    output logic [WD-1:0] IMM
);

logic [WD-1:0] DOut1;
logic [WD-1:0] DOut2;
logic [WD-1:0] N2;
logic [WD-1:0] DIn;

always_comb begin
    if (ALUsrc) N2 = IMM;
    else N2 = DOut2;
end

reg32 R1(
    .AdIn(AdIn),
    .AdOut1(AdOut1),
    .AdOut2(AdOut2),
    .DIn(DIn),
    .RegWrite(RegWrite),
    .clk(clk),

    .DOut1(DOut1),
    .DOut2(DOut2),
    .A0(A0)
);

alu A1(
    .ALUctrl(ALUctrl),
    .N1(DOut1),
    .N2(N2),

    .EQ(EQ),
    .out(DIn)
);

imm I1(
    .IMMsrc(IMMsrc),
    .instr(instr),
    .out(IMM)
);

endmodule


