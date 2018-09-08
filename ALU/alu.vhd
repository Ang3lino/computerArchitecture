library ieee;

use ieee.std_logic_1164.all;
use work.arith.all; -- include a package


-- Author: Angel Lopez Manriquez
-- FPGA model: cyclone ll, EP2C5T144C8N

entity alu is 
    generic ( 
        n: integer := 4 -- we'll use four bits
    );
    port (
        a, b: in std_logic_vector (n - 1 downto 0);
        b_invert: in std_logic; -- 0 for sum, 1 for subtract
		  c: inout std_logic_vector(n downto 0);
        cf: out std_logic; 
        s: out std_logic_vector (n - 1 downto 0)
    );
end entity;

architecture angel of alu is


begin

    process(a, b, b_invert) is 
    begin
        c <= carry_with_sum(a, b, b_invert);
        for i in 0 to n - 1 loop 
            s(i) <= c(i) xor a(i) xor b(i) xor b_invert;
        end loop;
    end process;

end architecture ;