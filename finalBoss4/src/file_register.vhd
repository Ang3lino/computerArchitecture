
library ieee;

use ieee.std_logic_1164.all;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
USE IEEE.NUMERIC_STD.ALL;

entity file_register is 
    generic (
        nbits: integer := 16;
        naddr: integer := 4
    ); port (
        read_register_1, read_register_2: in std_logic_vector(naddr - 1 downto 0);
        shamt: in std_logic_vector(naddr - 1 downto 0); -- shift amount
        write_data: in std_logic_vector(nbits - 1 downto 0); -- data to be selected by write_data input
        write_register: in std_logic_vector(naddr - 1 downto 0); -- selects the register
        dir: in std_logic; -- if it's one then it'll be shifted to the left
        we: in std_logic; -- write enable
        she: in std_logic; -- shift enabled
        clk: in std_logic;
        read_data_1: inout std_logic_vector(nbits - 1 downto 0);
		  read_data_2: out std_logic_vector(nbits - 1 downto 0)
    );
end entity;

architecture arch of file_register is

    type registers is array(0 to 2 ** naddr - 1) of std_logic_vector(nbits - 1 downto 0);
    signal buff: registers;
	 
	 signal sig_out_shift: std_logic_vector(nbits - 1 downto 0);
	 signal sig_towrite: std_logic_vector(nbits - 1 downto 0);
	 
	component barrel_shifter 
	generic (
		nbits: integer := 8;
		nshift: integer := 3
	); Port ( 
		DATAIN : in  STD_LOGIC_VECTOR (nbits - 1 downto 0);
		SHIFT_AMT : in  STD_LOGIC_VECTOR (nshift - 1 downto 0);
		left: in std_logic;
		DATAOUT : out  STD_LOGIC_VECTOR (nbits - 1 downto 0)
	);
	end component;

begin

	u_barrel_shifter: barrel_shifter generic map (
		nbits => nbits,
		nshift => naddr
	) port map (
		datain => read_data_1,
		left => dir, 
		shift_amt => shamt, 
		dataout => sig_out_shift
	);
	
	reg_proc: process(clk)
	begin
		if rising_edge(clk) then
			if we = '1' then
				buff(conv_integer(write_register)) <= sig_towrite;
			end if;
		end if;
	end process reg_proc;
	 
	sig_towrite <= sig_out_shift when she = '1' else write_data;

    read_data_1 <= buff(conv_integer(read_register_1));
    read_data_2 <= buff(conv_integer(read_register_2));

end architecture ; -- arch
