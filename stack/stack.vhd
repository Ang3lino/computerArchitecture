library ieee;

use	ieee.std_logic_1164.all;
use ieee.std_logic_unsigned.all;
use ieee.std_logic_arith.all;

entity stack is 
	generic ( 
		n : integer := 16
	); port ( 
		clk, clr, up, down: in  std_logic;
		wpc: in std_logic; -- write parallel counter
		d: in std_logic_vector(n - 1 downto 0);
		q: out std_logic_vector(n - 1 downto 0)
	);
end entity;

architecture arch of stack is

	component dist_ram_double_port
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
	end component;

	signal sstack_ptr: std_logic_vector(3 downto 0);
	signal swrite_data: std_logic_vector(d'range);
	signal sq_prog_cnt: std_logic_vector(d'range); -- quantity of program counter signal
	signal sram_dout: std_logic_vector(d'range);
	signal sinput_pc: std_logic_vector(d'range);
	
	constant std_one: std_logic := '1';

begin

	stack_ptr: process(clk, clr) 
	begin 
		if clr = '1' then 
			sstack_ptr <= (others => '0');
		elsif rising_edge(clk) then 
			if up = '1' then 
				sstack_ptr <= sstack_ptr + 1;
			elsif down = '1' then 
				sstack_ptr <= sstack_ptr - 1;
			end if;
		end if;
	end process;

	u_dist_ram: dist_ram_double_port generic map ( 
		naddr => 4,
		nbits => 16
	) port map ( 
		clk => clk,
		we => std_one, 
		addr_r => sstack_ptr - 1,
		addr_w => sstack_ptr,
		din => sq_prog_cnt + 1,
		dout => sram_dout
	);

	sinput_pc <= sram_dout when down = '1' else 
			  d;

	program_counter: process(clk, clr)
		variable cnt: std_logic_vector(d'range);
	begin 
		if clr = '1' then 
			cnt := (others => '0');
		elsif rising_edge(clk) then 
			if wpc = '1' then 
				cnt := sinput_pc;
			else 	
				cnt := cnt + 1;
			end if;
		end if;
		sq_prog_cnt <= cnt;
	end process;

	q <= sq_prog_cnt;

end architecture ; -- arch
