----------------------------------------------------------------------------------
-- Company:  ESCOM-IPN
-- Engineers:   LOPEZ MANRIQUUEZ ANGEL
--				MAYA ROCHA LUIS EMMANUEL
--				VAZQUEZ MORENO MARCOS OSWALDO
-- NEXYS4 DDR
-- BARREL SHIFTER
-- Create Date:    10:50:21 10/10/2018 
-- Design Name: 
-- Module Name:    BARREL_SHIFTER - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------

library IEEE;

use IEEE.STD_LOGIC_1164.ALL;
USE IEEE.STD_LOGIC_UNSIGNED.ALL;
USE IEEE.NUMERIC_STD.ALL;

entity barrel_shifter is
	generic (
		nbits: integer := 8;
		nshift: integer := 3
	);
    Port ( 
		DATAIN : in  STD_LOGIC_VECTOR (nbits - 1 downto 0);
		SHIFT_AMT : in  STD_LOGIC_VECTOR (nshift - 1 downto 0);
		left: in std_logic;
		DATAOUT : out  STD_LOGIC_VECTOR (nbits - 1 downto 0)
	);
end barrel_shifter;

architecture Behavioral of BARREL_SHIFTER is

begin

	process(DATAIN, SHIFT_AMT, left) is
		variable i: integer; -- shift
		variable j: integer; -- data in
		variable data_shift: STD_LOGIC_VECTOR(DATAIN'range);
	begin 
		if left = '0' then -- reverse the vector
			for i in 0 to nbits - 1 loop 
				data_shift(i) := datain(nbits - 1 - i);
			end loop;
		else 
			data_shift := datain;
		end if;

		for i in 0 to nshift - 1 loop
			for j in nbits - 1 downto 0 loop 
				if shift_amt(i) = '1' then 
					if j - 2 ** i >= 0 then 
						data_shift(j) := data_shift(j - 2 ** i);
					else 
						data_shift(j) := '0';
					end if;
				end if;
			end loop;
		end loop;

		if left = '0' then -- reverse the vector
			for i in 0 to nbits - 1 loop 
				dataout(i) <= data_shift(nbits - 1 - i);
			end loop;
		else 
			dataout <= data_shift;
		end if;
	end process;	

	-- version using high level operands
	--PSLL: PROCESS(DATAIN, SHIFT_AMT)
	--BEGIN
	--	if left = '1' then 
	--		DATAOUT <= TO_STDLOGICVECTOR(TO_BITVECTOR(DATAIN) SLL CONV_INTEGER(SHIFT_AMT));
	--	else 
	--		DATAOUT <= TO_STDLOGICVECTOR(TO_BITVECTOR(DATAIN) ROR CONV_INTEGER(SHIFT_AMT));
	--	end if;
	--END PROCESS PSLL;

end Behavioral;

