module rom #(parameter WAD = 8, WD = 8)(
    input logic [WAD-1: 0] AddrIn,
    output logic [WD*4-1: 0] DOut
);

logic [WD-1: 0] RomArr [2**WAD-1: 0]; // error occurs if 2^32 is used

initial begin
    $readmemh("rom.mem", RomArr);
end;

assign DOut = {RomArr[AddrIn], RomArr[AddrIn+1], RomArr[AddrIn+2], RomArr[AddrIn+3]};

endmodule


