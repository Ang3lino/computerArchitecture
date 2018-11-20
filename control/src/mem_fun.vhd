
library ieee;
use ieee.std_logic_1164.all;
use ieee.std_logic_unsigned.all;

-- 32 x 20 mem
entity mem_fun is 
    generic (
        naddr: integer := 4;
        ndata: integer := 20
    ); port (
        af: in std_logic_vector(naddr - 1 downto 0); -- address 
        df: out std_logic_vector(ndata - 1 downto 0) -- data 
    );
end entity;

architecture arch of mem_fun is

    --                                                 u   d   w   s   s   s   s   d   w   l   s   s   s   aluo   s   w   s
    --                                                 p   w   p   d   r   w   h   i   r   f   e   o   o   p      d   d   r       
    --                                                         c   m   2   d   e   r           x   p   p          m             
    --                                                             p                           t   1   2          d
    -- arithmetic instructions
    constant inst_add  : std_logic_vector(d'range) := "0"&"0"&"0"&"0"&"0"&"1"&"0"&"0"&"1"&"1"&"0"&"0"&"0"&"0011"&"0"&"0"&"1";
    constant inst_sub  : std_logic_vector(d'range) := "0"&"0"&"0"&"0"&"0"&"1"&"0"&"0"&"1"&"1"&"0"&"0"&"0"&"0111"&"0"&"0"&"1";

    -- logic instructions
    constant inst_and  : std_logic_vector(d'range) := "0"&"0"&"0"&"0"&"0"&"1"&"0"&"0"&"1"&"1"&"1"&"0"&"1"&"0000"&"0"&"0"&"1";
    constant inst_or   : std_logic_vector(d'range) := "0"&"0"&"0"&"0"&"0"&"1"&"0"&"0"&"1"&"1"&"1"&"0"&"1"&"0001"&"0"&"0"&"1";
    constant inst_xor  : std_logic_vector(d'range) := "0"&"0"&"0"&"0"&"0"&"1"&"0"&"0"&"1"&"1"&"1"&"0"&"1"&"0010"&"0"&"0"&"1";
    constant inst_nand : std_logic_vector(d'range) := "0"&"0"&"0"&"0"&"0"&"1"&"0"&"0"&"1"&"1"&"1"&"0"&"1"&"1101"&"0"&"0"&"1";
    constant inst_nor  : std_logic_vector(d'range) := "0"&"0"&"0"&"0"&"0"&"1"&"0"&"0"&"1"&"1"&"1"&"0"&"1"&"1100"&"0"&"0"&"1";
    constant inst_xnor : std_logic_vector(d'range) := "0"&"0"&"0"&"0"&"0"&"1"&"0"&"0"&"1"&"1"&"1"&"0"&"1"&"1010"&"0"&"0"&"1";
    constant inst_not  : std_logic_vector(d'range) := "0"&"0"&"0"&"0"&"0"&"1"&"0"&"0"&"1"&"1"&"1"&"0"&"1"&"1101"&"0"&"0"&"1";

    -- shifting
    constant inst_sll  : std_logic_vector(d'range) := "0"&"0"&"0"&"0"&"0"&"1"&"1"&"0"&"0"&"0"&"0"&"0"&"0"&"0000"&"0"&"0"&"0";
    constant inst_srl  : std_logic_vector(d'range) := "0"&"1"&"0"&"0"&"0"&"1"&"0"&"0"&"0"&"0"&"0"&"0"&"0"&"0000"&"0"&"0"&"0";

    TYPE ARR IS ARRAY (0 TO 2 ** BADDR - 1) OF STD_LOGIC_VECTOR(d'RANGE); 

	CONSTANT ROM : ARR := (
        inst_add , -- 0 
        inst_sub , -- 1
        inst_and , -- 2 
        inst_or  , -- 3 
        inst_xor , -- 4 
        inst_nand, -- 5 
        inst_nor , -- 6 
        inst_xnor, -- 7 
        inst_not , -- 8 
        inst_sll , -- 9 
        inst_srl , -- 10 
		OTHERS => (OTHERS=>'0')
    );

begin

    df <= rom(conv_integer(af));

end arch ; -- arch
