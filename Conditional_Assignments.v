`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    02:25:12 05/29/2018 
// Design Name: 
// Module Name:    Conditional_Assignments 
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
module Conditional_Assignments(I0, I1, Sel, O
    );
input I0, I1, Sel;
output O;

//-- Body
assign o = sel1 ? (sel0 ? d : c ) : (sel0 ? b : a );


endmodule
