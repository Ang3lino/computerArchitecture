
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

package control_components is

-- 16 x 20 mem
component mem_fun is
    generic (
        naddr: integer := 4;
        ndata: integer := 20
    ); port (
        af: in std_logic_vector(naddr - 1 downto 0); -- address 
        df: out std_logic_vector(ndata - 1 downto 0) -- data 
    );
end component;

-- 32s x 20 mem
component mem_opcode is 
    generic (
        naddr: integer := 5;
        ndata: integer := 20
    ); port (
        a: in std_logic_vector(naddr - 1 downto 0); -- address 
        d: out std_logic_vector(ndata - 1 downto 0) -- data 
    );
end component;

component control_unit is
    port ( 
		tipor : in  std_logic; -- decoder instruction inputs
		beqi : in  std_logic;
		bneqi : in  std_logic;
		blti : in  std_logic;
		bleti : in  std_logic;
		bgti : in  std_logic;
		bgeti : in  std_logic;
		eq : in  std_logic; -- condition
		neq : in  std_logic;
		lt : in  std_logic;
		le : in  std_logic;
		g : in std_logic; -- gt
		get : in  std_logic;
		clk : in  std_logic; -- master inputs
		clr : in  std_logic;
		na : in  std_logic; -- nivel alto
		sm : out  std_logic;
		sdopc : out  std_logic
	);
end component;

end control_components;

package body control_components is

 
end control_components;