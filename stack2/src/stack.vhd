
library ieee;
use ieee.std_logic_1164.all;
use ieee.std_logic_unsigned.all;

-- uncomment the following library declaration if using
-- arithmetic functions with signed or unsigned values
--use ieee.numeric_std.all;

-- uncomment the following library declaration if instantiating
-- any xilinx primitives in this code.
--library unisim;
--use unisim.vcomponents.all;

entity stack is
    port ( d : in  std_logic_vector (15 downto 0);
           q : out  std_logic_vector (15 downto 0);
           clk : in  std_logic;
           clr : in  std_logic;
           up : in  std_logic;
           dw : in  std_logic; -- down
           wpc : in  std_logic); -- write program counter
end stack;

architecture arch of stack is
    type contadores is array(0 to 7) of std_logic_vector(15 downto 0);
begin

	process( clk, clr )
		variable sp : integer range 0 to 7;
		variable pcs : contadores;
	begin
		if clr = '1' then
			sp := 0;
			pcs := (others => (others => '0'));
		elsif rising_edge(clk) then
			if wpc = '1' and up = '0' and dw = '0' then		-- branches 
				pcs(sp) := d;
			elsif wpc = '1' and up = '1' and dw = '0' then	-- call
				sp := sp + 1;
				pcs(sp) := d;
			elsif wpc = '0' and up = '0' and dw = '1' then 	-- ret
				sp := sp - 1;
				pcs(sp) := pcs(sp) + 1;
			elsif wpc = '0' and up = '0' and dw = '0' then 	-- increment
				pcs(sp) := pcs(sp) + 1;
			end if;			
		end if;
		
		q <= pcs(sp);
	end process;

end architecture;
