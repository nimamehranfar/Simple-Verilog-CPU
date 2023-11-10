`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    02:36:02 05/29/2018 
// Design Name: 
// Module Name:    Simple_ALU 
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
module Simple_ALU(a, b, sel, o
    );
	 
input [3:0] a, b;
input [1:0] sel;

output [3:0] o;

//-- body
assign o = sel[1] ? (sel[0] ? (a-b) : (a+b) ) : (sel[0] ? b : a );
 

endmodule
