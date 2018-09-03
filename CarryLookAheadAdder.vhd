library ieee;

use ieee.std_logic_1164.all;

-- Explanation 
-- We did a design for fast sum at first but we did some modifications in order to obtain
-- a subtractor too, we just had to negate b and put a 1 when b_invert were 1.

-- FPGA model: cyclone ll, EP2C5T144C8N

entity CarryLookAheadAdder is 
    generic ( 
        n: integer := 4 -- we'll use four bits
    );
    port (
        a, b: in std_logic_vector (n - 1 downto 0);
        b_invert: in std_logic; -- 0 for sum, 1 for subtract
        cf: out std_logic; 
        s: out std_logic_vector (n - 1 downto 0)
    );
end entity;

architecture angel of CarryLookAheadAdder is

begin

    process(a, b, b_invert) is 
        variable eb, p, g: std_logic_vector(n - 1 downto 0);
        variable c: std_logic_vector(n downto 0); -- n + 1 bits
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
            prod := '1';
            for j in 0 to i loop
                prod := prod and p(j);
            end loop;
            c(i + 1) := g(i) or sum or (c(0) and prod);
        end loop;

        for i in 0 to n - 1 loop    
            s(i) <= p(i) xor c(i);
        end loop;
        cf <= c(n);
    end process;

end architecture ;