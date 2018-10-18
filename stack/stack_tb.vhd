--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   18:27:15 10/17/2018
-- Design Name:   
-- Module Name:   /home/ang3l/xilinxProyects/stack/stack/src/stack_tb.vhd
-- Project Name:  stack
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: stack
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
use ieee.std_logic_arith.all; -- conv_std_logic_vector
USE ieee.std_logic_TEXTIO.ALL;
USE STD.TEXTIO.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY stack_tb IS
END stack_tb;
 
ARCHITECTURE behavior OF stack_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT stack
    PORT(
         clk : IN  std_logic;
         clr : IN  std_logic;
         up : IN  std_logic;
         down : IN  std_logic;
         wpc : IN  std_logic;
         d : IN  std_logic_vector(15 downto 0);
         q : OUT  std_logic_vector(15 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal clr : std_logic := '0';
   signal up : std_logic := '0';
   signal down : std_logic := '0';
   signal wpc : std_logic := '0';
   signal d : std_logic_vector(15 downto 0) := (others => '0');

 	--Outputs
   signal q : std_logic_vector(15 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: stack PORT MAP (
          clk => clk,
          clr => clr,
          up => up,
          down => down,
          wpc => wpc,
          d => d,
          q => q
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

      file finput, fresult: TEXT; -- file of results                                 
      variable linput, lresult: line;

      variable nibble : std_logic_vector(3 downto 0);
      variable byte : std_logic_vector(15 downto 0);
      variable mBit : std_logic;
      variable int4b : integer range 0 to 2 ** 4 - 1;
      variable int16b : integer range 0 to 2 ** 16 - 1;
      variable str : string(1 to 20);

   begin    

      -- these files must be or will be in the path of the project
      file_open(finput, "inputs.txt", read_mode);  
      file_open(fresult, "results.txt", write_mode);    

      -- hold reset state for 100 ns.
      wait for 100 ns;  

      -- insert stimulus here 
      while not endfile(finput) loop 
        hread(finput, byte);
        d <= byte;
        hread(finput, mBit);
        up <= mBit;
        hread(finput, mBit);
        down <= mBit;
        hread(finput, mBit);
        wpc <= mBit;
        hread(finput, mBit);
        clr <= mBit;
        --WAIT FOR clk_period;
        WAIT until falling_edge(clk);

         -- the third argument of write function must be the amount of bits of de data
         -- plus one (an extra space)
         hwrite(lresult, d, right, 5);
         write(lresult, up, right, 2);
         write(lresult, down, right, 2);
         write(lresult, wpc, right, 2);
         write(lresult, clr, right, 2);
         --write(lresult, sp, right, 2); -- sp is not defined in the entity...
         write(lresult, q, right, 2);

         writeline(fresult, lresult);-- escribe la linea en el archivo
      end loop;

      file_close(finput);
      file_close(fresult);  

      wait;
   end process;

END;
