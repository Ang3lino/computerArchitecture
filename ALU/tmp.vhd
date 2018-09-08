-- for copy and paste 

library ieee;

use ieee.std_logic_1164.all;
use work.arith.all; -- include a package


-- Author: Angel Lopez Manriquez
-- FPGA model: cyclone ll, EP2C5T144C8N

entity alu is 
    generic ( 
        n: integer := 16 -- we'll use 16 bits
    );
    port (
        a, b: in std_logic_vector (n - 1 downto 0);
        a_invert, b_invert: in std_logic; 
        aluop: in std_logic_vector(3 downto 0);
        flags: out std_logic_vector(3 downto 0); 
        ans: out std_logic_vector (n - 1 downto 0)
    );
end entity;

architecture angel of alu is


begin

    flags <= (others => '1');

end architecture ;