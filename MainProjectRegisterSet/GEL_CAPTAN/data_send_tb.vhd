--------------------------------------------------------------------------------
-- Company: Fermilab
-- Engineer: Collin Bradford
--
-- Create Date:   18:06:21 05/05/2016
-- Design Name:   
-- Module Name:   C:/Users/Collin/Fermilab/Main Project 1/GEL_CAPTAN/data_send_tb.vhd
-- Project Name:  dig_mac
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: data_send
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY data_send_tb IS
END data_send_tb;
 
ARCHITECTURE behavior OF data_send_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT data_send
    PORT(
         b_enable : IN  std_logic;
         clk : IN  std_logic;
         rst : IN  std_logic;
         b_data : OUT  std_logic_vector(63 downto 0);
         b_data_we : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal b_enable : std_logic := '0';
   signal clk : std_logic := '0';
   signal rst : std_logic := '1';

 	--Outputs
   signal b_data : std_logic_vector(63 downto 0);
   signal b_data_we : std_logic;

   -- Clock period definitions
   constant clk_period : time := 1 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: data_send PORT MAP (
          b_enable => b_enable,
          clk => clk,
          rst => rst,
          b_data => b_data,
          b_data_we => b_data_we
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	
		
		rst <= '0';
		b_enable <= '1';

      wait for clk_period*10;

      -- insert stimulus here 

      wait;
   end process;

END;
