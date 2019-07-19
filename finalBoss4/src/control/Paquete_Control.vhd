library IEEE;
use IEEE.STD_LOGIC_1164.all;

package Paquete_Control is

	COMPONENT Deco_Instruccion is
		 Port ( 
			OPCODE : in  STD_LOGIC_VECTOR (4 downto 0);
			TIPOR : out  STD_LOGIC;
			BEQ : out  STD_LOGIC;
			BNEQ : out  STD_LOGIC;
			BLT : out  STD_LOGIC;
			BLE : out  STD_LOGIC;
			BGT : out  STD_LOGIC;
			BGET : out  STD_LOGIC
		);
	end COMPONENT;

	COMPONENT FSM_control is
		 Port ( 
			TipoR : in  STD_LOGIC;		
			beq:in std_logic;
			bneq :in std_logic;
			blt :in std_logic;
			ble :in std_logic;
			bgt :in std_logic;
			bget:in std_logic;
			eq :in std_logic;
			neq :in std_logic;
			lt :in std_logic;
			le :in std_logic;
			gt :in std_logic; 
			get:in std_logic;			 
			na :in std_logic;
			clk : in  STD_LOGIC;
			clr :  in  STD_LOGIC;
			sm :out std_logic;
			sdopc : out  STD_LOGIC );
	end COMPONENT;

	-- 16 x 20 mem
	component mem_fun is 
		generic (
			naddr: integer := 4;
			ndata: integer := 20
		); port (
			af: in std_logic_vector(naddr - 1 downto 0); -- address 
			df: out std_logic_vector(ndata - 1 downto 0) -- data 
		);
	end component;

	-- 32s x 20 mem
	component mem_opcode is 
		generic (
			naddr: integer := 5;
			ndata: integer := 20
		); port (
			a: in std_logic_vector(naddr - 1 downto 0); -- address 
			d: out std_logic_vector(ndata - 1 downto 0) -- data 
		);
	end component;

end Paquete_Control;

package body Paquete_Control is
 
end Paquete_Control;
