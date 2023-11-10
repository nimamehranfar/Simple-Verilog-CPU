`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    02:28:33 05/29/2018 
// Design Name: 
// Module Name:    ALU_1bit 
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
module MUX_1bit(a, b, c, d, sel0, sel1, o
    );
input a, b, c, d;
input sel0, sel1;

output o;

//-- body

assign o = sel1 ? (sel0 ? d : c ) : (sel0 ? b : a );


endmodule
