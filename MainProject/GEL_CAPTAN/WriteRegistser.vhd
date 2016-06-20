----------------------------------------------------------------------------------
-- Company: Fermilab	
-- Engineer: Collin Bradford
-- 
-- Create Date:    09:25:29 06/01/2016 
-- Design Name: 
-- Module Name:    WriteRegistser - Behavioral 
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


-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity WriteRegistser is
    Port ( rst : in STD_LOGIC;
			  clk : in STD_LOGIC; 
			  rx_addr : in  STD_LOGIC_VECTOR (31 downto 0);
           rx_data : in  STD_LOGIC_VECTOR (63 downto 0);
           rx_wren : in  STD_LOGIC;
           user_ready : out  STD_LOGIC;
			  reg_out : out STD_LOGIC_VECTOR (63 downto 0));
end WriteRegistser;

architecture Behavioral of WriteRegistser is
begin
	process(clk, rx_wren) begin
		if(rst = '0') then
			if(rx_wren = '1') then
				if(rising_edge(clk)) then
					reg_out <= rx_data;
				end if;
			end if;
		else
			reg_out <= (others => '0');
		end if;
	end process;
end Behavioral;

