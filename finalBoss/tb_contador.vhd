--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   11:35:56 12/04/2018
-- Design Name:   
-- Module Name:   /home/angelos/Documents/git/computerArchitecture/finalBoss/tb_contador.vhd
-- Project Name:  finalBoss
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: main
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
 
ENTITY tb_contador IS
END tb_contador;
 
ARCHITECTURE behavior OF tb_contador IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT main
    PORT(
         CLK : IN  std_logic;
         CLR : IN  std_logic;
         datain : INOUT  std_logic_vector(15 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal CLK : std_logic := '0';
   signal CLR : std_logic := '0';

	--BiDirs
   signal datain : std_logic_vector(15 downto 0);

   -- Clock period definitions
   constant CLK_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: main PORT MAP (
          CLK => CLK,
          CLR => CLR,
          datain => datain
        );

   -- Clock process definitions
   CLK_process :process
   begin
		CLK <= '0';
		wait for CLK_period/2;
		CLK <= '1';
		wait for CLK_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
      



     file fresult : TEXT; -- file of results                                 
      variable lresult : line; -- line of result

      variable linput : line;
		variable str: string(1 to 5);

      variable nibble : std_logic_vector(3 downto 0);
      variable byte : std_logic_vector(15 downto 0);
      variable mBit : std_logic;
      variable int4b : integer range 0 to 2 ** 4 - 1;
      variable int16b : integer range 0 to 2 ** 16 - 1;
      --variable str : string(1 to 20);

   begin		

      for i in 0 to 10

      wait;
   end process;

END;
