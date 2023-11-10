`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    02:31:13 05/29/2018 
// Design Name: 
// Module Name:    ALU_multibit 
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
module MUX_multibit(a, b, c, d, sel0, sel1, o
    );

parameter N = 4;
input [N-1:0] a, b, c, d;
input sel0, sel1;

output [N-1:0] o;

//-- body
assign o = sel1 ? (sel0 ? d : c ) : (sel0 ? b : a );


endmodule
