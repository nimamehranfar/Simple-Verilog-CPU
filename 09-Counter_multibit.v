`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    03:24:47 05/29/2018 
// Design Name: 
// Module Name:    Counter_multibit 
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
module Counter_multibit(CLK, Load_en, Data_in, Q
    );
parameter N= 8;

input CLK, Load_en;
input [N-1:0] Data_in;

output [N-1:0] Q;
reg [N-1:0] Q;

//-- Body
initial 
begin
	Q = 0;
end

always @(posedge CLK)
begin

if (Load_en == 1)
	Q = Data_in;
else
	Q = Q + 1;
end




endmodule
