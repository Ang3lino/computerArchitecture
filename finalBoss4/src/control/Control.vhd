library IEEE;

use IEEE.STD_LOGIC_1164.ALL;
use work.Paquete_Control.all;

entity Control is
	port(
		Funcode : in std_logic_vector(3 downto 0);
		Opcode  : in std_logic_vector(4 downto 0);
		flags   : in std_logic_vector(3 downto 0);
		clr     : IN  std_logic; 
		clk     : IN std_logic;
		lf      : IN STD_LOGIC;
		s       : OUT std_logic_vector(19 downto 0)	
	);
end entity;

architecture Behavioral of Control is
	Signal BUS_MEMFUN, Bus_OPCODE: std_logic_vector(19 downto 0);
	Signal rBanderas: STD_LOGIC_VECTOR (3 downto 0);
	Signal EQ, NEQ, LT, LET, GT, GET: STD_LOGIC;
	SIGNAL TIPOR, BEQ, BLT, BLE, BGT, BGET, BNEQ :STD_LOGIC;
	SIGNAL SM, SDOP: STD_LOGIC;
	SIGNAL Code_OP : STD_LOGIC_VECTOR (4 downto 0);
	SIGNAL Code_Fun: STD_LOGIC_VECTOR (3 DOWNTO 0);
	Signal NA: std_logic;

	signal fft1, fft2: std_logic;
begin

	C_Deco_Instruccion: Deco_Instruccion Port MAP ( 
		OPCODE =>Opcode,
		TIPOR => TIPOR,
		BEQ => BEQ,
		BNEQ =>BNEQ,
		BLT => BLT,
		BLE => BLE,
		BGT =>BGT,
		BGET => BGET
	);
	
    level: process(clk, clr)
    begin
        if clr = '1' then 
            fft1 <= '0';
            fft2 <= '0';
        elsif rising_edge(clk) then 
            fft1 <= not fft1;
        elsif falling_edge(clk) then 
            fft2 <= not fft2;
        end if;
    end process;
	 na <= fft1 xor fft2;

	u0: mem_fun port map ( af => funcode, df => bus_memfun );

	Code_OP <= "00000" WHEN SDOP='0' ELSE Opcode;

	u1: mem_opcode port map ( a => code_op, d => bus_opcode );

    condition: process(rbanderas) 
        variable z, n, ov: std_logic;
    begin 
        ov := rbanderas(3);
        n := rbanderas(2);
        z := rbanderas(1);
        -- carry := flags(0); unused, as you can see
        EQ 	 <= Z;
        NEQ  <= (not Z);
        LT 	 <= (N xor OV) and (not Z);
        LEt 	 <= (N xor OV) or (Z);	
        Gt    <= (not Z) and ( not(N xor OV));
        GEt  <= (not(N xor OV)) or (Z); 
    end process;
	
	s <= Bus_OPCODE WHEN SM = '1'ELSE BUS_MEMFUN;
	Code_OP <= "00000" WHEN SDOP = '0' ELSE Opcode;
		
	C_FSM_control: FSM_control Port MAP( 
		TipoR => TIPOR,
		beq   => BEQ,
		bneq  => BNEQ,
		blt   => BLT,
		ble   => BLE,
		bgt   => BGT,
		bget  => BGET,
		eq    => EQ,
		neq   => NEQ,
		lt    => LT,
		le    => LET,
		gt    => GT,
		get   => GET,	 
		na    => NA,
		clk   => CLK,
		clr   => CLR,
		sm    => SM,
		sdopc => SDOP
	);

    preg: process(clk, clr)
    begin
        if clr = '1' then 
            rbanderas <= (others => '0');
        elsif falling_edge(clk) then 
            if lf = '1' then  	
                rbanderas <= flags;
            end if;
        end if;
    end process;
	
end Behavioral;
