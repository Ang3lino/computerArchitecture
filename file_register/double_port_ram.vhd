LIBRARY IEEE;

USE	IEEE.STD_LOGIC_1164.ALL;
USE IEEE.STD_LOGIC_UNSIGNED.ALL;
USE IEEE.STD_LOGIC_ARITH.ALL;

ENTITY DOUBLE_PORT_RAM IS
	generic (
		naddr: integer := 4;
		nbits: integer := 16
	); PORT ( 
		CLK 	: IN  STD_LOGIC;
		WE 		: IN  STD_LOGIC; -- write enable
		ADDR_R1 : IN  STD_LOGIC_VECTOR (naddr - 1 DOWNTO 0); --Two variables for reading
		ADDR_R2 : IN  STD_LOGIC_VECTOR (naddr - 1 DOWNTO 0);
		ADDR_W 	: IN  STD_LOGIC_VECTOR (naddr - 1 DOWNTO 0);  --One variable for writing
		DIN 	: IN  STD_LOGIC_VECTOR (nbits - 1 DOWNTO 0);
		DOUT1 	: OUT STD_LOGIC_VECTOR (nbits - 1 DOWNTO 0);  --Two outs (one for each reading)
		DOUT2 	: OUT STD_LOGIC_VECTOR (nbits - 1 DOWNTO 0)
	);
END ENTITY;

ARCHITECTURE BEHAVIOR OF DOUBLE_PORT_RAM IS

	TYPE ARR IS ARRAY (0 TO 2 ** naddr - 1) OF STD_LOGIC_VECTOR(DIN'RANGE); 
	SIGNAL MEM : ARR ;

BEGIN

	-- WRITING:
	PMEM : PROCESS( CLK )
	BEGIN
		IF RISING_EDGE(CLK) THEN
			IF WE = '1' THEN
				MEM(CONV_INTEGER(ADDR_W)) <= DIN; --We have a synchronous writing
			END IF;
		END IF;
	END PROCESS PMEM;

	-- READING:
	DOUT1 <= MEM(CONV_INTEGER(ADDR_R1)); --We have an asynchronous reading and we use two outs.
	DOUT2 <= MEM(CONV_INTEGER(ADDR_R2));

END BEHAVIOR;