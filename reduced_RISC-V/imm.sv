module imm #(parameter W = 32)(
    input logic [1:0] IMMsrc,
    input logic [W-1:0] instr,
    output logic [W-1:0] out
);

logic sign; // for 2's complement

assign sign = instr[W-1]; // not required by extend (U / J type)

always_comb case(IMMsrc)
    2'b00: out = {{20{sign}}, instr[W-1:W-12]}; // I-type
    2'b01: out = {{20{sign}}, instr[W-1:W-7], instr[W-21:W-25]}; // S-type
    2'b10: out = {{19{sign}}, instr[W-1], instr[W-25], instr[W-2:W-7], instr[W-21:W-24], 1'b0}; //B-type
    2'b11: out = {instr[W-1:W-20], 12'b0}; // U-type, J-type
    default: out = {{20{sign}}, instr[W-1:W-12]}; // I-type
endcase

endmodule

