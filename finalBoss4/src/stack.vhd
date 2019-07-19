library ieee;
use ieee.std_logic_1164.all;
use ieee.std_logic_unsigned.all;

entity stack is
	generic (
		bits: integer := 16;
		addr : integer := 4
	); port (
		clk, clr : in std_logic;
		wpc, up, dw: in std_logic;
		d : in std_logic_vector (bits-1 downto 0);
		q: inout std_logic_vector (bits-1 downto 0)
	);
end stack;

architecture program of stack is
	type memoria is array (0 to 2 ** addr - 1) of std_logic_vector(d'range);
	signal stacks : memoria;
	signal dout : std_logic_vector (bits-1 downto 0);
	signal stack_pointer : std_logic_vector(addr-1 downto 0);
begin 

	program_counter : process (clk, clr)
	begin 
		if(clr = '1') then 
			stack_pointer <= (others => '0');
		elsif (rising_edge(clk)) then 
			if (up = '1') then 
				stack_pointer <= stack_pointer + 1;
			elsif (dw = '1') then 
				stack_pointer <= stack_pointer - 1; 
			end if;
		end if;
	end process program_counter;
	
	ppc :  process (clk, clr)
	begin 
		if(clr = '1') then 
			q <= (others => '0');
		elsif (rising_edge(clk)) then 
			if(wpc ='1') then 
				if(dw ='1') then 
					q <= dout;
				else
					q <= d;
				end if;
			else
				q <= q + 1;
			end if;
		end if;
	end process ppc;

	pram : process (clk)
	begin 
		if(rising_edge(clk)) then 
			if(up = '1') then 
				stacks(conv_integer(stack_pointer)) <= q + 1;
			end if;
		end if;
	end process pram;
	
	dout <= stacks(conv_integer(stack_pointer - 1));

end program;