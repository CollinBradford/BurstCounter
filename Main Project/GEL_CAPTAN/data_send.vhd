----------------------------------------------------------------------------------
-- Company: Fermilab
-- Engineer: Collin Bradford
-- 
-- Create Date:    19:42:08 04/22/2016 
-- Design Name: 
-- Module Name:    data_send - Behavioral 
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

entity data_send is
    Port ( b_enable : in  STD_LOGIC;
           clk : in  STD_LOGIC;
			  rst : in STD_LOGIC;
           b_data : out  STD_LOGIC_VECTOR (63 downto 0);
           b_data_we : out  STD_LOGIC);
end data_send;

architecture Behavioral of data_send is
	signal data : STD_LOGIC_VECTOR(63 downto 0); -- arbitrary data that is simply incrimented on each rising edge of clk.  
	signal counter : std_logic_vector(2 downto 0);
	signal send : std_logic;
begin
	
	process(clk, b_enable, send) begin
		if(rst = '0') then 
			if(b_enable = '1') then-- alright, everything is go for sending data.  
				if(send = '1') then--send has been called.  
					if(falling_edge(clk)) then--falling edge.  Time to present the next datapoint.  
						data <= data + 1;
						b_data_we <= '1';
					end if;
				else
					b_data_we <= '0';
				end if;
			end if;
		else --put reset code here.  
			data <= (others => '0');
		end if;
	end process;
	
	process(clk, rst) begin
		if(rst = '0') then
			if(rising_edge(clk)) then 
				counter <= counter + 1;
			end if;
		else--more reset code. 
			counter <= (others => '0');
		end if;
	end process;
	
	send <= counter(2);
	b_data <= data;
	
end Behavioral;

