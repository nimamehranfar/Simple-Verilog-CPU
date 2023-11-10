`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    03:08:47 05/29/2018 
// Design Name: 
// Module Name:    Shift_reg_8bit 
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
module Shift_reg_8bit(CLK, Data_in, Sel, Q
    );

input CLK;
input [7:0] Data_in;
input [1:0] Sel;

output [7:0] Q; 
reg [7:0] Q;

//-- body

always @(posedge CLK)
begin

case (Sel)

2'b00: Q = Data_in;

2'b01: Q = {1'b0, Q[7:1]};

2'b10: Q = {Q[6:0], 1'b0};

2'b11: Q = Q;

endcase

end

endmodule
