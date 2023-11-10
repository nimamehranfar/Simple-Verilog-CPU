`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    03:01:23 05/29/2018 
// Design Name: 
// Module Name:    DFF_1bit_Arst 
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
module DFF_1bit_Arst(CLK, RST, D, Q
    );
input CLK, RST, D;

output Q;
reg Q;

//-- body

always @ (posedge RST, posedge CLK)
begin
	if (RST == 1)
	begin
		Q = 0;
	end
	else 
	begin
		Q = D;
	end
end

endmodule
