
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

end arch ; -- arch