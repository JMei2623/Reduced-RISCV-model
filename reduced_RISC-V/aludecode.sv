module aludecode #(W = 32)(
    input logic [W-1:0] instr,
    input logic [1:0] ALUop,
    output logic [2:0] ALUctrl
);

logic [2:0] func3;
logic func75;
logic op5;

assign func3 = instr[W-18:W-20];
assign func75 = instr[W-6];
assign op5 = instr[W-30];




always_comb
case (func3)
    3'b010: ALUctrl = 3'b101; // slt
    3'b110: ALUctrl = 3'b011; // or
    3'b111: ALUctrl = 3'b010; // and

    default: ALUctrl = 3'b000;
endcase

always_comb
case ({func3, op5, func75})
    5'b00111: ALUctrl = 3'b001;
    5'b00000: ALUctrl = 3'b000;
    5'b00001: ALUctrl = 3'b000;
    5'b00010: ALUctrl = 3'b000;
endcase

always_comb
case (ALUop)
    2'b00: ALUctrl = 3'b000;
    2'b01: ALUctrl = 3'b001;
endcase


    
endmodule
