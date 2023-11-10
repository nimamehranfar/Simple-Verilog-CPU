`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    02:22:20 05/29/2018 
// Design Name: 
// Module Name:    FullAdder-1bit 
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
module FullAdder_1bit(x, y, cin, sum, cout
    );
input x, y, cin;
output sum, cout;

//-- body 

assign sum = (x ^ y) ^ cin;
assign cout = (x & y) | (x & cin) | (y & cin);

endmodule
