library ieee;

use ieee.std_logic_1164.all;
use ieee.numeric_std.all; -- to_unsigned

-- Author: Angel Lopez Manriquez
-- FPGA model: cyclone ll, EP2C5T144C8N

-- we don't define -a - b yet.

entity alu is 
    generic ( 
        n: integer := 16 -- amount of bits to use
    );
    port (
        a, b: in std_logic_vector (n - 1 downto 0);
        aluop: in std_logic_vector(3 downto 0);
        flags: out std_logic_vector(3 downto 0); 
        ans: out std_logic_vector (n - 1 downto 0)
    );
end entity;

architecture angel of alu is
   --signal gnd: std_logic := '0';
    signal c: std_logic_vector(n downto 0); -- carries
    signal s_ans: std_logic_vector(n - 1 downto 0);
    
    -- very useful constant, a "zero vector". It was needed for the when else instruction
    constant zero: std_logic_vector(n - 1 downto 0) := (others => '0');
	 
	 
	 function vprod (vec: std_logic_vector) 
	return std_logic is
		variable result : std_logic := '1';
	begin 
		for i in vec'length - 1 downto 0 loop 
			result := result and vec(i);
		end loop;
		return result;
	end function;

        -- if b_invert is 0 we add else we subtract.
    -- the lenght of a must be equal to b.
    -- if a has n bits c must have n + 1 bits
    function carries_of_sum(a: std_logic_vector;
                            b: std_logic_vector;
                            b_invert: std_logic ) 
    return std_logic_vector is 
        variable n: integer := a'length;
        variable c: std_logic_vector(n downto 0);
        variable eb, p, g, s: std_logic_vector(n - 1 downto 0);
        variable sum, prod: std_logic;
    begin	
        c(0) := b_invert;
        for i in 0 to n - 1 loop    
            eb(i) := b(i) xor b_invert; -- variable change
            p(i)  := a(i) xor eb(i);
            g(i)  := a(i) and eb(i);
            sum := '0';
            for j in 0 to i - 1 loop -- summation
                prod := '1'; 
                for k in j + 1 to i loop 
                    prod := prod and p(k); 
                end loop;
                sum := sum or (g(j) and prod);
            end loop;
            prod := vprod(p(i downto 0));
            c(i + 1) := g(i) or sum or (c(0) and prod);
        end loop;
        return c;
    end function;

begin

    -- flags definitions
    -- overflow := flags(3);
    -- negative := flags(2);
    -- zero := flags(1);
    -- carry := flags(0);

    ans <= s_ans;

    flags(3) <= c(n) xor c(n - 1); -- Overflow
    flags(2) <= s_ans(n - 1); -- Negative
    flags(1) <= '1' when s_ans = zero else '0'; -- Zero
    flags(0) <= c(n); -- Final Carry

    -- aluop definitions
    -- aluop(3): a_invert
    -- aluop(2): b_invert
    -- aluop(1): mux(1)
    -- aluop(0): mux(0)
    process(a, b, aluop) is 
        variable a_invert: std_logic;
        variable b_invert: std_logic;

        variable muxa: std_logic_vector(n - 1 downto 0) ;
        variable muxb: std_logic_vector(n - 1 downto 0) ;
    begin
		  a_invert := aluop(3);
		  b_invert := aluop(2);
	 
        for i in n - 1 downto 0 loop
            muxa(i) := a_invert xor a(i);
            muxb(i) := b_invert xor b(i);
        end loop;
        case (aluop(1 downto 0)) is 
            when "00" => s_ans <= muxa and muxb;
            when "01" => s_ans <= muxa or muxb;
            when "10" => s_ans <= muxa xor muxb;
            when others =>
                c <= carries_of_sum(muxa, b, b_invert); 
                s_ans <= c(n - 1 downto 0) xor muxa xor muxb;
        end case;
    end process;

end architecture ;
