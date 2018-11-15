--------------------------------------------------------------------------------
-- AUTHORS: 
-- Lopez Manriquez Angel
-- Maya Rocha Emmanuel
-- Vazquez Marcos
--
-- Create Date:   18:31:20 10/06/2018
-- Design Name:   
-- Module Name:   C:/Xilinx/ProgramMem/TB_ROM.vhd
-- Project Name:  ProgramMem 
-- 
-- VHDL Test Bench Created by ISE for module: MEM
-- 
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
--------------------------------------------------------------------------------
LIBRARY ieee;

use ieee.numeric_std.all; -- cast
USE ieee.std_logic_1164.ALL;
USE ieee.std_logic_UNSIGNED.ALL;
USE ieee.std_logic_ARITH.ALL;
USE ieee.std_logic_TEXTIO.ALL;	--YOU CAN USE STD_LOGIC
USE STD.TEXTIO.ALL;

 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY TB_ROM IS
	Generic (
		BADDR: Integer := 16;
		BDATA: Integer := 25
	);
END TB_ROM;
 
ARCHITECTURE behavior OF TB_ROM IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT MEM
    	PORT(
			CLK : IN  std_logic;
			A : IN  std_logic_vector(BADDR-1 downto 0);
			D : OUT  std_logic_vector(BDATA-1 downto 0)
        );
    END COMPONENT;
    

   --Inputs
	signal CLK : std_logic := '0';
   signal A : std_logic_vector(BADDR-1 downto 0) := (others => '0');

 	--Outputs
   signal D : std_logic_vector(BDATA-1 downto 0);
   
   constant CLK_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: MEM PORT MAP (
		CLK => CLK,
		A => A,
		D => D
	);

--   -- Clock process definitions
	CLK_process :process
	begin
		CLK <= '0';
		wait for CLK_period/2;
		CLK <= '1';
		wait for CLK_period/2;
	end process;
-- 

   -- Stimulus process
   stim_proc: process
	
	file FILE_RES : TEXT;			 --	file of results																	
	variable LINE_RES : line;
	file FILE_INPUT : TEXT; --file of data that enters
	variable LINE_INPUT : line;

	variable data_in: std_logic_vector(baddr - 1 downto 0);
	
	VARIABLE OPCODE : STD_LOGIC_VECTOR(4 DOWNTO 0); --D (5 bits OPCODE)
	VARIABLE CHAIN : STRING(1 TO 8);
   begin		
	
		file_open(FILE_INPUT, "ENTRADAS.txt", READ_MODE); 	
		file_open(FILE_RES, "RESULTADOS.txt", WRITE_MODE); 	
      
		CHAIN := "     A  ";
		write(LINE_RES, CHAIN, right, CHAIN'LENGTH+1);	--Write "A"
		CHAIN := " OPCODE "; 
		write(LINE_RES, CHAIN, right, CHAIN'LENGTH+1);  --Write the result (D) in parts
		CHAIN := "19...16 "; 
		write(LINE_RES, CHAIN, right, CHAIN'LENGTH+1);
		CHAIN := "15...12 "; 
		write(LINE_RES, CHAIN, right, CHAIN'LENGTH+1);
		CHAIN := "11...08 "; 
		write(LINE_RES, CHAIN, right, CHAIN'LENGTH+1);
		CHAIN := "07...04 "; 
		write(LINE_RES, CHAIN, right, CHAIN'LENGTH+1);
		CHAIN := "03...00 "; 
		write(LINE_RES, CHAIN, right, CHAIN'LENGTH+1);
		writeline(FILE_RES,LINE_RES);-- escribe la linea en el archivo
		
		WAIT FOR clk_period;
		while not endfile(FILE_INPUT) loop
			readline(FILE_INPUT, LINE_INPUT); -- Read a complete line
			Hread(LINE_INPUT, data_in);  --read an hex direction

			A <= data_in;
			WAIT FOR clk_period;
			opcode := d(24 downto 20);

			-- the third argument of write function must be the amount of bits of de data
			-- plus one (an extra space)
			
			hwrite(LINE_RES,   a  , right, 9);
			write(LINE_RES,  opcode ,	right, 7);	
			write(LINE_RES, d(19 downto 16)  , right, 9);	
			write(LINE_RES, d(15 downto 12)  , right, 9);	
			write(LINE_RES, d(11 downto 8)  , right, 9);	
			write(LINE_RES, d(7 downto 4)   , right, 9);	
			write(LINE_RES, d(3 downto 0)   , right, 9);
				
			writeline(FILE_RES,LINE_RES);-- escribe la linea en el archivo
		end loop;

		file_close(FILE_INPUT);  -- close files
		file_close(FILE_RES);  

		wait;
   end process;

END;