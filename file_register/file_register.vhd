
library ieee;

use ieee.std_logic_1164.all;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity file_register is 
    generic (
        nbits: integer := 16;
        naddr: integer := 4
    ); port (
        read_register_1, read_register_2: in std_logic_vector(naddr - 1 downto 0);
        write_register: in std_logic_vector(naddr - 1 downto 0);
        shift_amount: in std_logic_vector(naddr - 1 downto 0); 
        write_data: in std_logic_vector(nbits - 1 downto 0); 
        left_dir, write_not_read, shift_enabled: in std_logic;
        clk: in std_logic;
        read_data_1, read_data_2: out std_logic_vector(nbits - 1 downto 0)
    );
end entity;

architecture arch of file_register is

    component DOUBLE_PORT_RAM
		generic (
			naddr: integer := 4;
			nbits: integer := 16
		); 
	port ( 
            CLK 	: IN  STD_LOGIC;
            WE 	: IN  STD_LOGIC; -- write enable
            ADDR_R1  : IN  STD_LOGIC_VECTOR (naddr - 1 DOWNTO 0); --Two variables for reading
            ADDR_R2  : IN  STD_LOGIC_VECTOR (naddr - 1 DOWNTO 0);
            ADDR_W 	: IN  STD_LOGIC_VECTOR (naddr - 1 DOWNTO 0);  --One variable for writing
            DIN 	: IN  STD_LOGIC_VECTOR (nbits - 1 DOWNTO 0);
            DOUT1 	: OUT STD_LOGIC_VECTOR (nbits - 1 DOWNTO 0);  --Two outs (one for each reading)
            DOUT2 	: OUT STD_LOGIC_VECTOR (nbits - 1 DOWNTO 0)
        );
    end component;

    component barrel_shifter 
        generic (
            nbits: integer := 8;
            nshift: integer := 3
        );
        Port ( 
            DATAIN : in  STD_LOGIC_VECTOR (nbits - 1 downto 0);
            SHIFT_AMT : in  STD_LOGIC_VECTOR (nshift - 1 downto 0);
            left: in std_logic;
            DATAOUT : out  STD_LOGIC_VECTOR (nbits - 1 downto 0)
        );
    end component;

    constant logic_one : std_logic := '1';

    signal sig_dataout1, sig_dataout2: std_logic_vector(read_data_1'range);
    signal sig_datain: std_logic_vector(read_data_1'range);
    signal sig_datashift: std_logic_vector(read_data_1'range);

begin

    read_data_1 <= sig_dataout1;
    read_data_2 <= sig_dataout2;

    u_ram: double_port_ram generic map (
	naddr => naddr,
	nbits => nbits
    ) port map (
        clk => CLK,
        we => write_not_read,
        addr_r1 => read_register_1,
        addr_r2 => read_register_2,
        addr_w => write_register,
        din => sig_datain,
        dout1 => sig_dataout1,
        dout2 => sig_dataout2
    );

					   
    u_shifter: barrel_shifter generic map (
        nbits => nbits, 
        nshift => naddr
    ) port map (
        datain => sig_dataout1,
        SHIFT_AMT => shift_amount, 
        left => left_dir,
        dataout => sig_datashift 
    );

    sig_datain <= sig_datashift when shift_enabled = '1' else 
                  write_data;


end arch ; -- arch
