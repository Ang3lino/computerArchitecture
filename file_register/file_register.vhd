
library ieee;

use ieee.std_logic_1164.all;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity file_register is 
    generic (
        nbits: integer := 16;
        naddr: integer := 4
    );
    port (
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

    sig_register_enabled: std_logic_vector(write_data'range);

    component DOUBLE_PORT_RAM_64k_x_8 
        generic (
            naddr: integer := 8;
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

    constant logic_one : std_logic := '1';

    signal sig_dataout1, sig_dataout2: std_logic_vector(read_data_1'range);
    signal sig_

begin

    u_ram: double_port_ram_64K_x_8 port map (
        CLK,
        logic_one,
        read_register_1,
        read_register_2,
        write_register,
        write_data,
        sig_dataout1,
        sig_dataout2
    );

end arch ; -- arch
