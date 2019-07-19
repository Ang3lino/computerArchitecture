library IEEE;
library WORK;

use WORK.components.ALL;
use IEEE.STD_LOGIC_1164.ALL;

entity main is
	generic (
		n : integer := 8
	); Port (
		OSC : in  STD_LOGIC;
		clr : in  STD_LOGIC;
		diven: in std_logic;
		sig_read_data_2 : out std_logic_vector(15 downto 0));
end main;

architecture Behavioral of main is

	SIGNAL CLK: STD_LOGIC;
	signal INS: std_logic_vector(19 downto 0);
	signal principal: std_logic_vector(24 downto 0);
	signal flags: std_logic_vector(3 downto 0);
	signal sal_sdmp, sal_swd, sal_sext, sal_sop1, sal_sop2, sal_sdmd, sal_sr: std_logic_vector(15 downto 0);
	signal sal_sr2: std_logic_vector(3 downto 0);
	signal read_data1, read_data2: std_logic_vector(15 downto 0);
	signal sal_alu, sal_pila, sal_ram: std_logic_vector(15 downto 0);
	signal sal_sgn, sal_dir: std_logic_vector(15 downto 0);
	
begin


	--INS(19) = UP
	--INS(18) = DW
	--INS(17) = WPC
	--INS(16) = SDMP
	--INS(15) = SR2
	--INS(14) = SWD
	--INS(13) = SHE
	--INS(12) = DIR
	--INS(11) = WR
	--INS(10) = LF
	--INS(9)  = SEXT
	--INS(8)  = SOP1
	--INS(7)  = SOP2
	--INS(6:3)= ALUOP
	--INS(2)  = SDMD
	--INS(1)  = WD
	--INS(0)  = SR
	
	u_divider: divisor generic map (
		n => 10 -- divisor ajustable
	) PORT MAP(
		OSC_clk =>OSC,
		CLR =>CLR,
		CLK =>CLK,
		diven => diven
	);	

	u_control: control port map(
		clk => clk,
		clr => clr,
		flags => flags,
		lf => ins(10),
		opcode => principal(24 downto 20),
		funcode => principal(3 downto 0),
		s => ins
	); --
	
	u_file_register: file_register port map(
		clk => clk,
		read_register_1 => principal(15 downto 12),
		read_register_2 => sal_sr2,
		write_register => principal(19 downto 16),
		shamt => principal(7 downto 4),
		write_data => sal_swd,
		she => ins(13),
		dir => ins(12),
		we => ins(11),
		read_data_1 => read_data1,
		read_data_2 => read_data2
	); --
	
	u_alu: alu port map(
		a => sal_sop1,
		b => sal_sop2,
		aluop => ins(6 downto 3),
		ans => sal_alu,
		flags => flags
	); --

	u_mem_prog: program_memory generic map (
		bdata => 25, 
		baddr => n -- 16
	) port map (
		a => sal_pila(n - 1 downto 0),
		d => principal
	); -- 
	
	u_mem_datos: memoria_datos generic map (
		bdata => 16,
		baddr => n
	) port map(
		clk => clk,
		DIN => read_data2,
		ADR => sal_sdmd(n - 1 downto 0),
		wd  => ins(1),
		DOUT => sal_ram
	); -- 
	
	u_stack: stack port map(
		clk => clk,
		clr => clr,
		D => sal_sdmp,
		up => ins(19),
		dw => ins(18),
		wpc =>  ins(17),
		q => sal_pila
	); -- 
	
	sal_sdmp <= principal(15 downto 0) when ins(16) = '0' else sal_sr;
	sal_sr2 <= principal(11 downto 8) when ins(15) = '0' else principal(19 downto 16);
	sal_swd <= principal(15 downto 0) when ins(14) = '0' else sal_sr;
	sal_sgn <= X"F"&principal(11 downto 0) when principal(11) = '1' else X"0"&principal(11 downto 0);
	sal_dir <= X"0"&principal(11 downto 0);
	sal_sext <= sal_sgn when ins(9) = '0' else sal_dir;
	sal_sop1 <= read_data1 when ins(8) = '0' else sal_pila;
	sal_sop2 <= read_data2 when ins(7) = '0' else sal_sext;
	sal_sdmd <= sal_alu when ins(2) = '0' else principal(15 downto 0);
	sal_sr <= sal_ram when ins(0) = '0' else sal_alu;

	sig_read_data_2 <= read_data2;

end Behavioral;

