`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    02:52:27 05/29/2018 
// Design Name: 
// Module Name:    DFF_1bit 
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
module DFF_1bit( CLK, D, Q
    );
input CLK, D;

output Q;
reg Q;

//-- body

always @ (posedge CLK)
begin
	Q = D;
end

endmodule
