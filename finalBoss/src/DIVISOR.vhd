library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity DIVISOR is
    Port ( OSC_CLK : in  STD_LOGIC;
           CLR : in  STD_LOGIC;
           CLK : out  STD_LOGIC);
end DIVISOR;

architecture Behavioral of DIVISOR is
SIGNAL CONT : STD_LOGIC_VECTOR(25 DOWNTO 0);
begin
	PDIV : PROCESS (OSC_CLK, CLR)
	BEGIN
		IF(CLR = '1') THEN
			CONT <= (OTHERS => '0');
		ELSIF(RISING_EDGE(OSC_CLK)) THEN
			CONT <= CONT + 1;
		END IF;
	END PROCESS PDIV;
  CLK <= CONT(24);
end Behavioral;
