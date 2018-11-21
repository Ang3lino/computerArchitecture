
library ieee;
use ieee.std_logic_1164.all;

-- uncomment the following library declaration if using
-- arithmetic functions with signed or unsigned values
--use ieee.numeric_std.all;

-- uncomment the following library declaration if instantiating
-- any xilinx primitives in this code.
--library unisim;
--use unisim.vcomponents.all;

entity control_unit is
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
end control_unit;

architecture programa of control_unit is
	type estados is (a);
	signal edo_act, edo_sgte : estados;
begin

	process( edo_act, tipor, beqi, bneqi, blti, bleti, bgti, bgeti, eq, neq, lt, le, g, get, na )
	begin
		sm <= '0';
		sdopc <= '0';

		case edo_act is
			when a =>
				edo_sgte <= a;
				if(tipor = '0') then
					sm <= '1';
					if   (beqi = '1') and na = '0' and eq = '1' then
						sdopc <= '1'; 
					elsif(bneqi = '1') and na = '0' and neq = '1' then
						sdopc <= '1';
					elsif(blti = '1') and na = '0' and lt = '1' then
						sdopc <= '1';
					elsif(bleti = '1') and na = '0' and le = '1' then
						sdopc <= '1';
					elsif(bgti = '1') and na = '0' and g = '1' then
						sdopc <= '1';
					elsif(bgeti = '1') and na = '0' and get = '1' then
						sdopc <= '1';
					elsif (beqi = '1') and (beqi = '1') and bneqi = '1' and blti = '1' and bleti = '1' and bgti = '1' and bgeti = '1' then -- all zeroes
						sdopc <= '1';
					end if;
				end if;
		end case;
	end process;

	transicion : process(clk, clr)
	begin
		if clr = '1' then 
			edo_act <= a;
		elsif rising_edge(clk) then 
			edo_act <= edo_sgte;
		end if;	
	end process transicion;

end programa;

