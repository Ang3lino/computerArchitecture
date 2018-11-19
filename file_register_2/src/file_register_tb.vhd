--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   20:48:20 10/14/2018
-- Design Name:   
-- Module Name:   /home/ang3l/xilinxProyects/file_register//file_reg.vhd
-- Project Name:  file_register
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: file_register
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
 
ENTITY file_reg IS
END file_reg;
 
ARCHITECTURE behavior OF file_reg IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT file_register
    PORT(
         read_register_1 : IN  std_logic_vector(3 downto 0);
         read_register_2 : IN  std_logic_vector(3 downto 0);
         write_register : IN  std_logic_vector(3 downto 0);
         shamt : IN  std_logic_vector(3 downto 0);
         write_data : IN  std_logic_vector(15 downto 0);
         dir : IN  std_logic;
         we : IN  std_logic;
         she : IN  std_logic;
         clk : IN  std_logic;
         read_data_1 : OUT  std_logic_vector(15 downto 0);
         read_data_2 : OUT  std_logic_vector(15 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal read_register_1 : std_logic_vector(3 downto 0) := (others => '0');
   signal read_register_2 : std_logic_vector(3 downto 0) := (others => '0');
   signal write_register : std_logic_vector(3 downto 0) := (others => '0');
   signal shamt : std_logic_vector(3 downto 0) := (others => '0');
   signal write_data : std_logic_vector(15 downto 0) := (others => '0');
   signal dir : std_logic := '0';
   signal we : std_logic := '0';
   signal she : std_logic := '0';
   signal clk : std_logic := '0';

 	--Outputs
   signal read_data_1 : std_logic_vector(15 downto 0);
   signal read_data_2 : std_logic_vector(15 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: file_register PORT MAP (
          read_register_1 => read_register_1,
          read_register_2 => read_register_2,
          write_register => write_register,
          shamt => shamt,
          write_data => write_data,
          dir => dir,
          we => we,
          she => she,
          clk => clk,
          read_data_1 => read_data_1,
          read_data_2 => read_data_2
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

      file fresult : TEXT; -- file of results                                 
      variable lresult : line; -- line of result

      file finput : TEXT; --file of data that enters
      variable linput : line;
		variable str: string(1 to 5);

      variable nibble : std_logic_vector(3 downto 0);
      variable byte : std_logic_vector(15 downto 0);
      variable mBit : std_logic;
      variable int4b : integer range 0 to 2 ** 4 - 1;
      variable int16b : integer range 0 to 2 ** 16 - 1;
      --variable str : string(1 to 20);

   begin		

      -- these files must be or will be in the path of the project
      file_open(finput, "src/inputs.txt", read_mode);  
      file_open(fresult, "src/results.txt", write_mode);    

	str:= "  RR1";
	write(lresult, str, right, str'length + 1);
	str:= "  RR2";
	write(lresult, str, right, str'length + 1);
	str:= "   SH";
	write(lresult, str, right, str'length + 1);
	str:= " WREG";
	write(lresult, str, right, str'length + 1);
	str:= "   WD";
	write(lresult, str, right, str'length + 1);
	str:= "   WR";
	write(lresult, str, right, str'length + 1);
	str:= "  SHE";
	write(lresult, str, right, str'length + 1);
	str:= "  DIR";
	write(lresult, str, right, str'length + 1);
	str:= "  RD1";
	write(lresult, str, right, str'length + 1);
	str:= "  RD2";
	write(lresult, str, right, str'length + 1);
	writeline(fresult, lresult);

      -- hold reset state for 100 ns.
      wait for 100 ns;	

      wait for clk_period*10;

      -- insert stimulus here 
      while not endfile(finput) loop
         readline(finput, linput); -- Read a complete line
         read(linput, int4b);
         read_register_1 <= conv_std_logic_vector(int4b, 4);

         read(linput, int4b);
         read_register_2 <= conv_std_logic_vector(int4b, 4);

         read(linput, int4b);
         shamt <= conv_std_logic_vector(int4b, 4);

         read(linput, int4b);
         write_register <= conv_std_logic_vector(int4b, 4);

         hread(linput, byte);
			write_data <= byte;
			
         read(linput, mBit);
         we <= mBit;

         read(linput, mBit);
         she <= mBit;

         read(linput, mBit);
         dir <= mBit;

         --WAIT FOR clk_period;
	 --wait until rising_edge(clk);
	 wait until falling_edge(clk);

         -- the third argument of write function must be the amount of bits of de data
         -- plus one (an extra space)
         hwrite(lresult, read_register_1, right, 6);
         hwrite(lresult, read_register_2, right, 6);
         hwrite(lresult, shamt, right, 6);
         hwrite(lresult, write_register, right, 6);
         hwrite(lresult, write_data, right, 6);
         write(lresult, we, right, 6);
         write(lresult, she, right, 6);
         write(lresult, dir, right, 6);
         hwrite(lresult, read_data_1, right, 6);
         hwrite(lresult, read_data_2, right, 6);
            
         writeline(fresult, lresult);-- escribe la linea en el archivo
      end loop;

      file_close(finput);
      file_close(fresult);  

      wait;
   end process;

END;
