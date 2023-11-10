`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    02:17:35 05/29/2018 
// Design Name: 
// Module Name:    LogicalGates 
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
module LogicalGates( a, b, c
    );
	 
input a, b; // Both are single-bit wires
output c; // A single-bit wire

//-- body
assign c = a & b; // 2-input AND gate
/*
assign c = a | b; // OR gate
assign c = a ^ b; // XOR gate
assign c = ~(a & b); // NAND gate
*/

endmodule
