
library IEEE;
LIBRARY WORK;

use IEEE.STD_LOGIC_1164.ALL;
USE WORK.control_components.ALL;

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
        s: out std_logic_vector(19 downto 0)
    );
end entity;

architecture arch of control is

    signal tipor, beqi, bneqi, blti, bleti, bgti, bgeti: std_logic;
    signal eq, neq, lt, le, gt, get: std_logic;
    signal na: std_logic;
    signal rbanderas: std_logic_vector(flags'range);
    signal sdopc, sm: std_logic;

    constant zero: std_logic_vector(4 downto 0) := (others => '0');

    signal mem_opcode_input: std_logic_vector(opcode'range);
    signal mem_opcode_output: std_logic_vector(s'range);
    signal mem_funcode_output: std_logic_vector(s'range);

    signal sig_s: std_logic_vector(s'range);

    signal lf: std_logic; -- load flags

begin

    u0: mem_fun port map ( af => funcode, df => mem_funcode_output );
    u1: mem_opcode port map ( a => mem_opcode_input, d => mem_opcode_output );

    s <= sig_s;

    sig_s <= mem_funcode_output when sm = '0' else mem_opcode_output;
    mem_opcode_input <= zero when sdopc = '0' else opcode;

    instruction_decoder: process(opcode)
    begin 
        tipor <= '0';
        beqi  <= '0';
        bneqi <= '0';
        blti  <= '0';
        bleti <= '0';
        bgti  <= '0';
        bgeti <= '0';

        case opcode is 
            when "00000" => tipor <= '1';
            when "01101" => beqi <= '1';
            when "01110" => bneqi <= '1';
            when "01111" => blti <= '1';
            when "10000" => bleti <= '1';
            when "10001" => bgti <= '1';
            when "10010" => bgeti <= '1';
        end case;

    end process;

    level: process(clk, clr)
    begin
        if clr = '1' then 
            na <= '0';
        elsif rising_edge(clk) then 
            na <= '1';
        elsif falling_edge(clk) then 
            na <= '0';
        end if;
    end process;

    condition: process(rbanderas) 
        variable z, n, ov: std_logic;
    begin 
        ov := flags(3);
        n := flags(2);
        z := flags(1);
        -- carry := flags(0); unused, as you can see

        EQ 	<= Z;
        NEQ <= (not Z);
        LT 	<= (N xor OV) and (not Z);
        LE 	<= (N xor OV) or (Z);	
        G   <= (not Z) and ( not(N xor OV));
        GE  <= (not(N xor OV)) or (Z); 

    end process;

end arch ; -- arch