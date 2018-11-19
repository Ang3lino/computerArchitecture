
library ieee;
use ieee.std_logic_1164.all;
use ieee.std_logic_unsigned.all;

-- 32 x 20 mem
entity mem_opcode is 
    generic (
        naddr: integer := 5;
        ndata: integer := 20
    ); port (
        a: in std_logic_vector(naddr - 1 downto 0); -- address 
        d: out std_logic_vector(ndata - 1 downto 0) -- data 
    );
end entity;

architecture arch of mem_opcode is

    --                                            u   d   w   s   s   s   s   d   w   l   s   s   s   aluo   s   w   s
    --                                            p   w   p   d   r   w   h   i   r   f   e   o   o   p      d   d   r       
    --                                                    c   m   2   d   e   r           x   p   p          m             
    --                                                        p                           t   1   2          d
    -- Load and storage instructions
    constant li   : std_logic_vector(d'range) := "0"&"0"&"0"&"0"&"0"&"0"&"0"&"0"&"0"&"0"&"0"&"0"&"0"&"0000"&"0"&"0"&"1";
    constant lwi  : std_logic_vector(d'range) := "0"&"0"&"0"&"0"&"0"&"1"&"0"&"0"&"1"&"0"&"0"&"0"&"0"&"0000"&"1"&"0"&"0";
    constant lw   : std_logic_vector(d'range) := "0"&"0"&"0"&"0"&"0"&"1"&"0"&"0"&"1"&"0"&"1"&"0"&"1"&"0011"&"0"&"0"&"0";
    constant swi  : std_logic_vector(d'range) := "0"&"0"&"0"&"0"&"1"&"0"&"0"&"0"&"0"&"0"&"0"&"0"&"0"&"0000"&"1"&"1"&"0";
    constant sw   : std_logic_vector(d'range) := "0"&"0"&"0"&"0"&"1"&"0"&"0"&"0"&"0"&"0"&"1"&"0"&"1"&"0011"&"0"&"1"&"0";
    
    
    --                                            u   d   w   s   s   s   s   d   w   l   s   s   s   aluo   s   w   s
    --                                            p   w   p   d   r   w   h   i   r   f   e   o   o   p      d   d   r       
    --                                                    c   m   2   d   e   r           x   p   p          m             
    --                                                        p                           t   1   2          d
    -- arithmetic instructions
    constant addi : std_logic_vector(d'range) := "0"&"0"&"0"&"0"&"0"&"1"&"0"&"0"&"1"&"1"&"0"&"0"&"1"&"0011"&"0"&"0"&"1";
    constant subi : std_logic_vector(d'range) := "0"&"0"&"0"&"0"&"0"&"1"&"0"&"0"&"1"&"1"&"0"&"0"&"1"&"0111"&"0"&"0"&"1";

    --                                            u   d   w   s   s   s   s   d   w   l   s   s   s   aluo   s   w   s
    --                                            p   w   p   d   r   w   h   i   r   f   e   o   o   p      d   d   r       
    --                                                    c   m   2   d   e   r           x   p   p          m             
    --                                                        p                           t   1   2          d
    -- logic instructions
    constant andi : std_logic_vector(d'range) := "0"&"0"&"0"&"0"&"0"&"1"&"0"&"0"&"1"&"1"&"1"&"0"&"1"&"0000"&"0"&"0"&"1";
    constant ori  : std_logic_vector(d'range) := "0"&"0"&"0"&"0"&"0"&"1"&"0"&"0"&"1"&"1"&"1"&"0"&"1"&"0001"&"0"&"0"&"1";
    constant xori : std_logic_vector(d'range) := "0"&"0"&"0"&"0"&"0"&"1"&"0"&"0"&"1"&"1"&"1"&"0"&"1"&"0010"&"0"&"0"&"1";
    constant nandi: std_logic_vector(d'range) := "0"&"0"&"0"&"0"&"0"&"1"&"0"&"0"&"1"&"1"&"1"&"0"&"1"&"1101"&"0"&"0"&"1";
    constant nori : std_logic_vector(d'range) := "0"&"0"&"0"&"0"&"0"&"1"&"0"&"0"&"1"&"1"&"1"&"0"&"1"&"1100"&"0"&"0"&"1";
    constant xnori: std_logic_vector(d'range) := "0"&"0"&"0"&"0"&"0"&"1"&"0"&"0"&"1"&"1"&"1"&"0"&"1"&"1010"&"0"&"0"&"1";

    --                                            u   d   w   s   s   s   s   d   w   l   s   s   s   aluo   s   w   s
    --                                            p   w   p   d   r   w   h   i   r   f   e   o   o   p      d   d   r       
    --                                                    c   m   2   d   e   r           x   p   p          m             
    --                                                        p                           t   1   2          d
    -- conditional jumps
    constant beqi : std_logic_vector(d'range) := "0"&"0"&"0"&"0"&"1"&"0"&"0"&"0"&"0"&"1"&"0"&"0"&"0"&"0111"&"0"&"0"&"0";
    constant bnei : std_logic_vector(d'range) := "0"&"0"&"0"&"0"&"1"&"0"&"0"&"0"&"0"&"1"&"0"&"0"&"0"&"0111"&"0"&"0"&"0";
    constant blti : std_logic_vector(d'range) := "0"&"0"&"0"&"0"&"1"&"0"&"0"&"0"&"0"&"1"&"0"&"0"&"0"&"0111"&"0"&"0"&"0";
    constant bleti: std_logic_vector(d'range) := "0"&"0"&"0"&"0"&"1"&"0"&"0"&"0"&"0"&"1"&"0"&"0"&"0"&"0111"&"0"&"0"&"0";
    constant bgti : std_logic_vector(d'range) := "0"&"0"&"0"&"0"&"1"&"0"&"0"&"0"&"0"&"1"&"0"&"0"&"0"&"0111"&"0"&"0"&"0";
    constant bgeti: std_logic_vector(d'range) := "0"&"0"&"0"&"0"&"1"&"0"&"0"&"0"&"0"&"1"&"0"&"0"&"0"&"0111"&"0"&"0"&"0";
    constant b    : std_logic_vector(d'range) := "0"&"0"&"1"&"0"&"0"&"0"&"0"&"0"&"0"&"0"&"0"&"0"&"0"&"0000"&"0"&"0"&"0";

    --                                            u   d   w   s   s   s   s   d   w   l   s   s   s   aluo   s   w   s
    --                                            p   w   p   d   r   w   h   i   r   f   e   o   o   p      d   d   r       
    --                                                    c   m   2   d   e   r           x   p   p          m             
    --                                                        p                           t   1   2          d
    -- subroutines
    constant call : std_logic_vector(d'range) := "1"&"0"&"1"&"0"&"0"&"0"&"0"&"0"&"0"&"0"&"0"&"0"&"0"&"0000"&"0"&"0"&"0";
    constant ret  : std_logic_vector(d'range) := "0"&"1"&"0"&"0"&"0"&"0"&"0"&"0"&"0"&"0"&"0"&"0"&"0"&"0000"&"0"&"0"&"0";

    -- others (type r too)
    constant nop  : std_logic_vector(d'range) := "0"&"0"&"0"&"0"&"0"&"0"&"0"&"0"&"0"&"0"&"0"&"0"&"0"&"0000"&"0"&"0"&"0";

    -- this is used when the condition for jumping is satisfied
    constant senok: std_logic_vector(d'range) := "0"&"0"&"1"&"1"&"0"&"0"&"0"&"0"&"0"&"0"&"0"&"1"&"1"&"0011"&"0"&"0"&"1";

    TYPE ARR IS ARRAY (0 TO 2 ** BADDR - 1) OF STD_LOGIC_VECTOR(df'RANGE); 

	CONSTANT ROM : ARR := (
        "0000" & "1000" & "0"
		OTHERS => (OTHERS => '0')
    );

	CONSTANT ROM : ARR := (
        senok, -- 0 
        li   , -- 1
        lwi  , -- 2
        swi  , -- 3
        sw   , -- 4
        addi , -- 5
        subi , -- 6
        andi , -- 7
        ori  , -- 8
        xori , -- 9
        nandi, -- 10
        nori , -- 11  
        xnori, -- 12  
        beqi , -- 13  
        bnei , -- 14  
        blti , -- 15  
        bleti, -- 16  
        bgti , -- 17  
        bgeti, -- 18  
        b    , -- 19 
        call , -- 20 
        ret  , -- 21 
        nop  , -- 22
        lw   , -- 23 
		OTHERS => (OTHERS=>'0')
    );
begin

    d <= rom(conv_integer(a));

end arch ; -- arch
