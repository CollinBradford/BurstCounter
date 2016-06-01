----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    12:07:48 05/11/2016 
-- Design Name: 
-- Module Name:    reset_tester - Behavioral 
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

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity reset_tester is
    Port ( rst : in  STD_LOGIC;
           low : out  STD_LOGIC;
           high : out  STD_LOGIC;
           unknown : out  STD_LOGIC;
           unconnected : out  STD_LOGIC);
end reset_tester;

architecture Behavioral of reset_tester is
	
begin

	process(rst) begin	
		if(rst = '1') then
			high <= '1';
		else
			high <= '0';
		end if;
		
		if(rst = '0') then
			low <= '1';
		else
			low <= '0';
		end if;
		
		if(rst = 'X') then
			unconnected <= '1';
		else
			unconnected <= '0';
		end if;
		
		if(rst = 'U') then
			unknown <= '1';
		else
			unknown <= '0';
		end if;
	end process;

end Behavioral;

