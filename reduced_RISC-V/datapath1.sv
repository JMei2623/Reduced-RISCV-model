module datapath1 #(parameter WAD = 5, WD = 32)(
    input logic clk,

    input logic [WAD-1:0] AdIn,
    input logic [WAD-1:0] AdOut1,
    input logic [WAD-1:0] AdOut2,
    input logic [WD-1:0] instr,

    input logic [WD-1:0] PCN,

    input logic ALUsrc,
    input logic [2:0] ALUctrl,
    input logic [1:0] ResultSrc,
    input logic RegWrite,
    input logic RamWrite,
    input logic [1:0] IMMsrc,

    output logic [WD-1:0] A0,
    output logic EQ,
    output logic [WD-1:0] IMM
);

logic [WD-1:0] DOut1;
logic [WD-1:0] DOut2;
logic [WD-1:0] N2;
logic [WD-1:0] DInReg;
logic [WD-1:0] DOutAlu;
logic [WD-1:0] DOutRam;

always_comb begin
    if (ALUsrc) N2 = IMM;
    else N2 = DOut2;
end

always_comb 
case (ResultSrc)
    2'b00: DInReg = DOutAlu;
    2'b01: DInReg = DOutRam;
    2'b10: DInReg = PCN;
    default DInReg = DOutAlu;
endcase


reg32 R1(
    .AdIn(AdIn),
    .AdOut1(AdOut1),
    .AdOut2(AdOut2),
    .DIn(DInReg),
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
    .out(DOutAlu)
);

imm I1(
    .IMMsrc(IMMsrc),
    .instr(instr),
    .out(IMM)
);

ram R2(
    .clk(clk),
    .DIn(DOut2),
    .Ad(DOutAlu),
    .DOut(DOutRam),
    .RamWrite(RamWrite)
);

endmodule


