module main #(WA = 5, WD = 32)(
    input logic clk,
    input logic rst,
    output logic [WD-1:0] A0
);

logic [WD-1:0] instr;
logic [WD-1:0] IMMop;

logic [WA-1:0] AdIn;
logic [WA-1:0] AdOut1;
logic [WA-1:0] AdOut2;

logic ALUsrc;
logic [1:0] ALUop;
logic [2:0] ALUctrl;
logic RegWrite;
logic [1:0] IMMsrc;
logic PCsrc;

logic EQ;

assign AdIn = instr[WD-21:WD-25];
assign AdOut1 = instr[WD-13:WD-17];
assign AdOut2 = instr[WD-8:WD-12];

datapath1 D1(
    .clk(clk),

    .instr(instr),

    .AdIn(AdIn),
    .AdOut1(AdOut1),
    .AdOut2(AdOut2),

    .ALUsrc(ALUsrc),
    .ALUctrl(ALUctrl),
    .RegWrite(RegWrite),
    .IMMsrc(IMMsrc),

    .IMM(IMMop),
    .EQ(EQ),
    .A0(A0)
);

control C1(
    .instr(instr),
    .EQ(EQ),

    .RegWrite(RegWrite),
    .ALUop(ALUop),
    .ALUsrc(ALUsrc),
    .IMMsrc(IMMsrc),
    .PCsrc(PCsrc)
);

aludecode A11(
    .instr(instr),
    .ALUop(ALUop),

    .ALUctrl(ALUctrl)
);

datapath2 D2(
    .clk(clk),
    .rst(rst),
    .PCsrc(PCsrc),
    .IMMop(IMMop),

    .instr(instr)
);

endmodule


