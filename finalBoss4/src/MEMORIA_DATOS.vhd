library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity MEMORIA_DATOS is
	GENERIC(
		BDATA : INTEGER := 16;
		BADDR : INTEGER := 16
	); Port ( 
	    din : in  STD_LOGIC_VECTOR  ( BDATA - 1 downto 0);
        dout	 : out  STD_LOGIC_VECTOR ( BDATA - 1 downto 0);
        ADR : in  STD_LOGIC_VECTOR (BADDR-1 downto 0);
        CLK : in  STD_LOGIC;
        WD : in  STD_LOGIC
	);
	
end MEMORIA_DATOS;

architecture RAMD of MEMORIA_DATOS is
	
	TYPE MEMORIA IS ARRAY (0 TO 2**BADDR - 1) OF STD_LOGIC_VECTOR ( dout'RANGE );
	SIGNAL RAMDIST : MEMORIA := ( OTHERS => (OTHERS => '0'));
	
begin

	PROCESS(CLK)
	BEGIN
		IF ( RISING_EDGE(CLK) ) THEN
			IF(WD = '1') THEN
				RAMDIST( CONV_INTEGER(ADR) ) <= din;
			END IF;
		END IF;
	END PROCESS;
	
	dout <= RAMDIST(CONV_INTEGER(ADR));	

end RAMD;

