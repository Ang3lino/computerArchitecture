
--
--	Package File Template
--
--	Purpose: This package defines supplemental types, subtypes, 
--		 constants, and functions 
--
--   To use any of the example code shown below, uncomment the lines and modify as necessary
--

library IEEE;
use IEEE.STD_LOGIC_1164.all;

package components is

component control is
    port (
        funcode: in std_logic_vector(3 downto 0);
        opcode : in std_logic_vector(4 downto 0);
        clk, clr: in std_logic;
        flags: in std_logic_vector(3 downto 0);
        s: out std_logic_vector(19 downto 0);
		  lf: inout std_logic --load flags
    );
end component;

component MEMORIA_DATOS is
	GENERIC(
				BDATA : INTEGER := 16; --Bus de datos
				BADDR : INTEGER := 16	  --Bus de direcciones
	); Port ( 
	    din : in  STD_LOGIC_VECTOR  ( BDATA - 1 downto 0);
        dout	 : out  STD_LOGIC_VECTOR ( BDATA - 1 downto 0);
        ADR : in  STD_LOGIC_VECTOR (BADDR-1 downto 0);
        CLK : in  STD_LOGIC;
        --WRITE ENABLE
        WD : in  STD_LOGIC
	);
end component;


component alu is 
    generic ( 
        n: integer := 16 -- amount of bits to use
    );
    port (
        a, b: in std_logic_vector (n - 1 downto 0);
        aluop: in std_logic_vector(3 downto 0);
        flags: out std_logic_vector(3 downto 0); 
        ans: out std_logic_vector (n - 1 downto 0)
    );
end component;

component file_register is 
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
        read_data_1, read_data_2: out std_logic_vector(nbits - 1 downto 0)
    );
end component;

component DIVISOR is
	generic (
		n: integer := 25
	); Port ( 
        OSC_CLK : in  STD_LOGIC;
        diven: in std_logic;
        CLR : in  STD_LOGIC;
        CLK : out  STD_LOGIC);
end component;

component program_memory is
	Generic (BADDR: Integer:=16;
			  BDATA: Integer:=25 );
    Port ( A : in  STD_LOGIC_VECTOR (BADDR-1 downto 0);
           D : out  STD_LOGIC_VECTOR (BDATA-1 downto 0)
    );
end component;

component stack is
    port ( d : in  std_logic_vector (15 downto 0);
           q : out  std_logic_vector (15 downto 0);
           clk : in  std_logic;
           clr : in  std_logic;
           up : in  std_logic;
           dw : in  std_logic; -- down
           wpc : in  std_logic); -- write program counter
end component;

end components;

package body components is

 
end components;