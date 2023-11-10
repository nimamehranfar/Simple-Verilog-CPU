`timescale 1ns / 1ps
`define LOAD   3'b000
`define ADD  3'b001
`define MUL   3'b010
`define SUB   3'b011
`define AND   3'b100
`define NOT  3'b101
`define DIS 3'b110
`define HLT 3'b111

//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    02:31:13 05/29/2018 
// Design Name: 
// Module Name:    CPU
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module CPU( CLK,START,RESET,OPC,OPR,result
    );
	
parameter N=5;
input CLK,START,RESET;
input [2:0] OPC;
input [N-1:0] OPR;
output [2*N:0] result;
reg [2*N:0] Accumulator;
reg [2*N:0] result;

always @(posedge CLK) 
if(RESET) begin
Accumulator=0;

end
else if(~RESET) begin
if(START) begin

begin

case(OPC)

`LOAD: Accumulator=OPR;
`ADD: begin 
Accumulator=Accumulator+OPR;
result=Accumulator;
end
`MUL: begin
Accumulator=Accumulator*OPR;
result=Accumulator;
end
`SUB: begin
Accumulator=Accumulator-OPR;
result=Accumulator;
end
`AND: begin
Accumulator=~(~Accumulator | ~OPR);
result=Accumulator;
end
`NOT: begin
Accumulator=~Accumulator;
result=Accumulator;
end
`DIS:  result=Accumulator;
`HLT: begin 
result=0;
Accumulator=0;
end

endcase
end
end
else if(~START) begin
Accumulator=0;
end

result=Accumulator;
end

endmodule