library ieee;

use	ieee.std_logic_1164.all;
use ieee.std_logic_unsigned.all;
use ieee.std_logic_arith.all;

entity dist_ram_double_port is 
	generic ( 
		naddr: integer := 4;
		nbits: integer := 16
	); port ( 
		clk 	: in  std_logic;
		we 		: in  std_logic; -- write enable
		addr_r  : in  std_logic_vector (naddr - 1 downto 0); 
		addr_w 	: in  std_logic_vector (naddr - 1 downto 0); --one variable for writing
		din 	: in  std_logic_vector (nbits - 1 downto 0); -- data in
		dout 	: out std_logic_vector (nbits - 1 downto 0)  -- data out
	);
end entity;

architecture behavior of dist_ram_double_port is

	type arr is array (0 to 2 ** naddr - 1) of std_logic_vector(din'range); 
	signal mem : arr ;

begin

	-- writing:
	pmem : process( clk )
	begin
		if rising_edge(clk) then
			if we = '1' then
				mem(conv_integer(addr_w)) <= din; --we have a synchronous writing
			end if;
		end if;
	end process pmem;

	-- reading:
	dout <= mem(conv_integer(addr_r)); --we have an asynchronous reading 

end behavior;