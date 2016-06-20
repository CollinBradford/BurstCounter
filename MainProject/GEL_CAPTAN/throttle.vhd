----------------------------------------------------------------------------------
-- Company: Fermilab
-- Engineer: Collin Bradford
-- 
-- Create Date:    11:12:05 06/17/2016 
-- Design Name: 
-- Module Name:    throttle - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity throttle is
    Port ( clk : in  STD_LOGIC;
           rst : in  STD_LOGIC;
           throttle : out  STD_LOGIC);
end throttle;

architecture Behavioral of throttle is
	signal counter : STD_LOGIC_VECTOR (26 downto 0);
	signal compare : STD_LOGIC_VECTOR (26 downto 0);
begin

	compare <= (others => '0');
	
	process(counter, clk, rst, compare) begin
		if(rst = '0') then
			if(rising_edge(clk)) then -- update on rising edge of clk
				counter <= counter + 1;
				if(counter = compare) then
					throttle <= '1';
				else
					throttle <= '0';
				end if;
			end if;
		else -- reset code
			counter <= (others => '0');
			throttle <= '0';
		end if;
	end process;
	
end Behavioral;

