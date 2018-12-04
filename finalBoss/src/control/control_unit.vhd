
----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    06:54:04 12/04/2018 
-- Design Name: 
-- Module Name:    FSM_control - Behavioral 
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

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity control_unit is
   Port ( TipoR : in  STD_LOGIC;		
           beqi:in std_logic;
			  bneqi :in std_logic;
			  blti :in std_logic;
			  bleti :in std_logic;
			  bgti :in std_logic;
			  bgeti :in std_logic;
			  eq :in std_logic;
			  neq :in std_logic;
			  lt :in std_logic;
			  le :in std_logic;
			  g :in std_logic; 
			  get:in std_logic;			 
           na :in std_logic;
			  clk : in  STD_LOGIC;
           clr :  in  STD_LOGIC;
           sm :out std_logic;
			  sdopc : out  STD_LOGIC);

end control_unit;

architecture Behavioral of control_unit is

	TYPE ESTADOS IS(A);
	SIGNAL EDO_ACT, EDO_SIG: ESTADOS;
	
begin
	
	TRANSICION: PROCESS(CLK, CLR)
	BEGIN
		IF (CLR = '1') THEN
			EDO_ACT <= A;
		ELSIF(RISING_EDGE(CLK)) THEN
			EDO_ACT <= EDO_SIG;
		END IF;
	END PROCESS TRANSICION;
	
	
	AUTOMATA : PROCESS(TIPOR,BEQi,BNEQi,BLTi,BLEti,BGTi,BGETi ,NA,EQ,NEQ,LT,LE,G,GET,EDO_ACT)
	BEGIN
		SM 	<= '0';
		SDOPC <= '0';
		CASE( EDO_ACT ) IS
			WHEN A => EDO_SIG <= A;
				IF( TIPOR = '0' )THEN
					IF( BEQi = '1' )THEN
						IF( NA = '1' )THEN
							SM <= '1';
						ELSE
							IF( EQ = '1' )THEN
								SM 	<= '1';
								SDOPC <= '1';
							ELSE
								SM <= '1';
							END IF;
						END IF;
					ELSIF( BNEQi = '1' )THEN
						IF( NA = '1' )THEN
							SM <= '1';
						ELSE
							IF( NEQ = '1' )THEN
								SM 	<= '1';
								SDOPC <= '1';
							ELSE
								SM <= '1';
							END IF;
						END IF;
					ELSIF( BGTi = '1' )THEN
							IF( NA = '1' )THEN
							SM <= '1';
						ELSE
							IF( G = '1' )THEN
								SM 	<= '1';
								SDOPC <= '1';
							ELSE
								SM <= '1';
							END IF;
						END IF;
					ELSIF( BGETi  = '1' )THEN
							IF( NA = '1' )THEN
							SM <= '1';
						ELSE
							IF( GET = '1' )THEN
								SM 	<= '1';
								SDOPC <= '1';
							ELSE
								SM <= '1';
							END IF;
						END IF;
					ELSIF( BLTi = '1' )THEN
							IF( NA = '1' )THEN
							SM <= '1';
						ELSE
							IF( LT = '1' )THEN
								SM 	<= '1';
								SDOPC <= '1';
							ELSE
								SM <= '1';
							END IF;
						END IF;
					ELSIF( BLEti = '1' )THEN
						IF( NA = '1' )THEN
							SM <= '1';
						ELSE
							IF( LE = '1' )THEN
								SM 	<= '1';
								SDOPC <= '1';
							ELSE
								SM <= '1';
							END IF;
						END IF;
					ELSE
						SM 	<= '1';
						SDOPC <= '1';
					END IF;
				END IF;
		END CASE;
	END PROCESS AUTOMATA;


end architecture;

