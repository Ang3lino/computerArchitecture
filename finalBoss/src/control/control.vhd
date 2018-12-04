
library IEEE;
LIBRARY WORK;

use IEEE.STD_LOGIC_1164.ALL;
USE WORK.control_components.ALL;
use work.opcode_definitions.all;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity control is
    port (
        funcode: in std_logic_vector(3 downto 0);
        opcode : in std_logic_vector(4 downto 0);
        clk, clr: in std_logic;
        flags: in std_logic_vector(3 downto 0);
        s: out std_logic_vector(19 downto 0);
		  lf: inout std_logic --load flags
    );
end entity;

architecture arch of control is

    signal tipor, beqi, bneqi, blti, bleti, bgti, bgeti: std_logic;
    signal eq, neq, lt, le, g, get: std_logic;
    signal na: std_logic;
    signal rbanderas: std_logic_vector(flags'range);
    signal sdopc, sm: std_logic;

    constant zero: std_logic_vector(4 downto 0) := (others => '0');

    signal mem_opcode_input: std_logic_vector(opcode'range);
    signal mem_opcode_output: std_logic_vector(s'range);
    signal mem_funcode_output: std_logic_vector(s'range);

    signal sig_s: std_logic_vector(s'range);
	 
	 signal ffd1, ffd2: std_logic; -- required for high and low level

begin

    u0: mem_fun port map ( af => funcode, df => mem_funcode_output );
    u1: mem_opcode port map ( a => mem_opcode_input, d => mem_opcode_output );
    u2: control_unit port map ( 
		tipor =>  tipor, 
		beqi  =>  beqi , 
		bneqi =>  bneqi, 
		blti  =>  blti , 
		bleti =>  bleti, 
		bgti  =>  bgti , 
		bgeti =>  bgeti, 
		eq    =>  eq   ,  
		neq   =>  neq  , 
		lt    =>  lt   , 
		le    =>  le   , 
		g     =>  g   , 
		get   =>  get  , 
		clk   =>  clk  , 
		clr   =>  clr  , 
		na    =>  na   , 
		sm    =>  sm   , 
		sdopc =>  sdopc 
	);

    lf <= sig_s(10); -- here it is the load flag
    s <= sig_s;

    sig_s <= mem_funcode_output when sm = '0' else mem_opcode_output;
    mem_opcode_input <= zero when sdopc = '0' else opcode;

    -- intruction decodere
    tipor <= '1' when opcode = opcode_tipor else '0';
    beqi  <= '1' when opcode = opcode_beqi else '0';
    bneqi <= '1' when opcode = opcode_bnei else '0';
    blti  <= '1' when opcode = opcode_blti else '0';
    bleti <= '1' when opcode = opcode_bleti else '0';
    bgti  <= '1' when opcode = opcode_bgti else '0';
    bgeti <= '1' when opcode = opcode_bgeti else '0';

    level: process(clk, clr)
    begin
        if clr = '1' then 
            ffd1 <= '0';
            ffd2 <= '0';
        elsif rising_edge(clk) then 
            ffd1 <= not ffd1;
        elsif falling_edge(clk) then 
            ffd2 <= not ffd2;
        end if;
    end process;
	 na <= ffd1 xor ffd2;

    condition: process(rbanderas) 
        variable z, n, ov: std_logic;
    begin 
        ov := rbanderas(3);
        n := rbanderas(2);
        z := rbanderas(1);
        -- carry := flags(0); unused, as you can see

        EQ 	<= Z;
        NEQ <= (not Z);
        LT 	<= (N xor OV) and (not Z);
        LE 	<= (N xor OV) or (Z);	
        G   <= (not Z) and ( not(N xor OV));
        GEt  <= (not(N xor OV)) or (Z); 

    end process;

    preg: process(clk, clr)
    begin
        if clr = '1' then 
            rbanderas <= (others => '0');
        elsif falling_edge(clk) then 
				if lf = '1' then  	
                rbanderas <= flags;
            end if;
        end if;
    end process;


end arch ; -- arch

