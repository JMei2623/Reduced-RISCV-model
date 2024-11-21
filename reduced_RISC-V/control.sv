module control #(parameter W = 32)(
    input logic [W-1:0] instr,
    input logic EQ,
    output logic RegWrite,
    output logic RamWrite,
    output logic [1:0] ALUop,
    output logic ALUsrc,
    output logic [1:0] IMMsrc,
    output logic PCsrc,
    output logic [1:0] ResultSrc
);

// manipulation in this part ...

logic [6:0] op7;

logic PCsrc_req1;
logic PCsrc_req2;

always_comb begin
    op7 = instr[W-26:W-32];
end

// to imm.sv
always_comb 
case (op7)
    7'b0010011: IMMsrc = 2'b00; // i-type
    7'b0000011: IMMsrc = 2'b00; 

    7'b0100011: IMMsrc = 2'b01; // s-type

    7'b1100011: IMMsrc = 2'b10; // b-type

    7'b0110111: IMMsrc = 2'b11; // u-type
    7'b0010111: IMMsrc = 2'b11;
    7'b1100111: IMMsrc = 2'b11; // j-type
    7'b1101111: IMMsrc = 2'b11;

    default: IMMsrc = 2'b00;
endcase

// to alu.sv
always_comb 
case (op7)
    7'b0110011: ALUsrc = 1'b1; // Reg
    7'b0100011: ALUsrc = 1'b1; // s-type
    7'b0010011: ALUsrc = 1'b1; // i-type
    7'b0000011: ALUsrc = 1'b1; 
    default: ALUsrc = 1'b0;
endcase

// to datapath1.sv
always_comb 
case (op7)
    7'b0100011: ALUop = 2'b00; // s-type

    7'b0000011: ALUop = 2'b00; // load

    7'b1100011: ALUop = 2'b01; // b-type

    7'b0010011: ALUop = 2'b10; // i-type

    default: ALUop = 2'b00;
endcase

// to reg32.sv
always_comb 
case (op7)
    7'b0110011: RegWrite = 1'b1; // Reg
    7'b0010011: RegWrite = 1'b1; // i-type
    7'b0000011: RegWrite = 1'b1;
    7'b0110111: RegWrite = 1'b1; // u-type
    7'b0010111: RegWrite = 1'b1;
    7'b1100111: RegWrite = 1'b1; // j-type
    7'b1101111: RegWrite = 1'b1;
    default: RegWrite = 1'b0;
endcase

// to datapath2.sv
always_comb 
case (op7)
    7'b1100011: PCsrc_req1 = 1'b1; // b-type
    7'b1100111: PCsrc_req1 = 1'b1; // j-type
    7'b1101111: PCsrc_req1 = 1'b1;
    default: PCsrc_req1 = 1'b0;
endcase

always_comb 
case (EQ)
    1'b0: PCsrc_req2 = 1'b1;
    1'b1: PCsrc_req2 = 1'b0;
    default: PCsrc_req2 = 1'b0;
endcase

always_comb 
case (op7)
    7'b0100011: RamWrite = 1'b1; // s-type
    default: RamWrite = 1'b0;
endcase

always_comb begin
    PCsrc = PCsrc_req1 && PCsrc_req2;
end

always_comb 
case (op7)
    7'b0000011: ResultSrc = 2'b01; // load
    7'b1100111: ResultSrc = 2'b10; // j-type
    7'b1101111: ResultSrc = 2'b10;
    default: ResultSrc = 2'b00;
endcase

endmodule
