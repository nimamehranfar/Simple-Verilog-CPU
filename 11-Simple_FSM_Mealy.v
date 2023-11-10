`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    04:14:50 05/29/2018 
// Design Name: 
// Module Name:    Simple_FSM_Mealy 
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
module Simple_FSM_Mealy(
    );
parameter S0 = 2'b00;
parameter S1 = 2'b01;
parameter S2 = 2'b10;
parameter S3 = 2'b11;
	 
input CLK, RST, x;
output y;
reg y;

reg [1:0] Current_state;
reg [1:0] Next_state;

//-- body

assign y = x & (Current_state[0] & Current_state[1]);

always @(posedge CLK)
begin
	if (RST == 1)
		Current_state = S0;
	else if (x == 1)
		Current_state = Next_state;
	else 
		Current_state = Current_state;
	
	/*
	if (Current_state == 2'b11)
		y = 1;
	else 
		y = 0;
	*/
end


//-- Clarifying next states
always @(posedge CLK)
begin

case (Current_state)

2'b00: Next_state = 2'b10;
2'b01: Next_state = 2'b00;
2'b10: Next_state = 2'b11;
2'b11: Next_state = 2'b01;

endcase

end

endmodule
