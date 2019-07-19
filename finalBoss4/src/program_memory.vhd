----------------------------------------------------------------------------------
-- authors:
		-- lopez manriquez angel
		-- create date:    17:22:07 10/06/2018 
-- module name:    memory - behavioral 
-- project name: programmem
--
--
-- revision: 
-- revision 0.01 - file created
-- additional comments: 
--
----------------------------------------------------------------------------------
library ieee;
use ieee.std_logic_1164.all;

library ieee;
use ieee.std_logic_1164.all;
use ieee.std_logic_unsigned.all;


entity program_memory is
	generic (
		baddr: integer:= 16;
		bdata: integer:= 25 );
    port ( 
		a : in  std_logic_vector (baddr-1 downto 0);
		d : out std_logic_vector (bdata-1 downto 0)
	);
end program_memory;

architecture behavior of program_memory is
-- operation codes
	constant opcode_tipor 	: std_logic_vector(4 downto 0) := "00000";
	constant opcode_li 		: std_logic_vector(4 downto 0) := "00001";
	constant opcode_lwi 		: std_logic_vector(4 downto 0) := "00010";
	constant opcode_swi 		: std_logic_vector(4 downto 0) := "00011";
	constant opcode_sw   	: std_logic_vector(4 downto 0) := "00100";
	constant opcode_addi		: std_logic_vector(4 downto 0) := "00101";
	constant opcode_subi		: std_logic_vector(4 downto 0) := "00110";
	constant opcode_andi 	: std_logic_vector(4 downto 0) := "00111";
	constant opcode_ori 		: std_logic_vector(4 downto 0) := "01000";
	constant opcode_xori 	: std_logic_vector(4 downto 0) := "01001";
	constant opcode_nandi	: std_logic_vector(4 downto 0) := "01010";
	constant opcode_nori 	: std_logic_vector(4 downto 0) := "01011";
	constant opcode_xnori 	: std_logic_vector(4 downto 0) := "01100";
	constant opcode_beqi 	: std_logic_vector(4 downto 0) := "01101";
	constant opcode_bnei 	: std_logic_vector(4 downto 0) := "01110";
	constant opcode_blti 	: std_logic_vector(4 downto 0) := "01111";
	constant opcode_bleti 	: std_logic_vector(4 downto 0) := "10000";
	constant opcode_bgti 	: std_logic_vector(4 downto 0) := "10001";
	constant opcode_bgeti 	: std_logic_vector(4 downto 0) := "10010";
	constant opcode_b   	   : std_logic_vector(4 downto 0) := "10011";
	constant opcode_call		: std_logic_vector(4 downto 0) := "10100";
	constant opcode_ret		: std_logic_vector(4 downto 0) := "10101";
	constant opcode_nop  	: std_logic_vector(4 downto 0) := "10110";
	constant opcode_lw 		: std_logic_vector(4 downto 0) := "10111";

-- r instructions' functions
	constant fun_add			: std_logic_vector(3 downto 0) := "0000";
	constant fun_sub			: std_logic_vector(3 downto 0) := "0001";	
	constant fun_and			: std_logic_vector(3 downto 0) := "0010";
	constant fun_or			: std_logic_vector(3 downto 0) := "0011";	
	constant fun_xor			: std_logic_vector(3 downto 0) := "0100";
	constant fun_nand	  	   : std_logic_vector(3 downto 0) := "0101";	
	constant fun_nor			: std_logic_vector(3 downto 0) := "0110";
	constant fun_xnor	   	: std_logic_vector(3 downto 0) := "0111";	
	constant fun_not			: std_logic_vector(3 downto 0) := "1000";
	constant fun_sll			: std_logic_vector(3 downto 0) := "1001";	
	constant fun_srl			: std_logic_vector(3 downto 0) := "1010";	

--process registers:
	constant r0					: std_logic_vector(3 downto 0) := "0000";
	constant r1					: std_logic_vector(3 downto 0) := "0001";
	constant r2					: std_logic_vector(3 downto 0) := "0010";
	constant r3					: std_logic_vector(3 downto 0) := "0011";
	constant r4					: std_logic_vector(3 downto 0) := "0100";
	constant r5					: std_logic_vector(3 downto 0) := "0101";	
	constant r6					: std_logic_vector(3 downto 0) := "0110";
	constant r7					: std_logic_vector(3 downto 0) := "0111";
	constant r8					: std_logic_vector(3 downto 0) := "1000";
	constant r9					: std_logic_vector(3 downto 0) := "1001";
	constant r10				: std_logic_vector(3 downto 0) := "1010";
	constant r11				: std_logic_vector(3 downto 0) := "1011";	
	constant r12				: std_logic_vector(3 downto 0) := "1100";
	constant r13				: std_logic_vector(3 downto 0) := "1101";	
	constant r14				: std_logic_vector(3 downto 0) := "1110";
	constant r15				: std_logic_vector(3 downto 0) := "1111";	
	constant su					: std_logic_vector(3 downto 0) := "0000";

	type arr is array (0 to 2**baddr - 1) of std_logic_vector(d'range); 

	-- counter 
	-- constant rom : arr := (
	-- --instructions:
	-- 	opcode_li&r0&x"0001",
	-- 	opcode_li&r1&x"0007",
	-- 	opcode_tipor&r1&r1&r0&su&fun_add,
	-- 	opcode_swi&r1&x"0005",
	-- 	opcode_b&su&x"0002",
	-- 	others=>(others=>'0')
	-- );

	-- bubblesort 
	constant rom : arr := (
		opcode_li &r0&x"0017", -- 0
		opcode_swi&r0&x"000a",
		opcode_li &r0&x"0082",
		opcode_swi&r0&x"000b",
		opcode_li &r0&x"0046",
		opcode_swi&r0&x"000c", -- 5
		opcode_li &r0&x"0104",
		opcode_swi&r0&x"000d",
		opcode_li &r0&x"ffd3",
		opcode_swi&r0&x"000e",
		opcode_li &r0&x"00B4", -- 10
		opcode_swi&r0&x"000f",
		opcode_li &r0&x"0000",
		opcode_li &r2&x"0005",
		opcode_bgeti&r2&r0&x"00d", -- 14
		opcode_li &r1&x"0000", -- 15
		opcode_tipor&r3&r2&r0&su&fun_sub,
		opcode_bgeti&r3&r1&x"008", -- 17
		opcode_lw &r4&r1&x"00a",
		opcode_lw &r5&r1&x"00b",
		opcode_bleti&r5&r4&x"003", -- 20
		opcode_sw&r4&r1&x"00b", -- 21
		opcode_sw&r5&r1&x"00a", -- 22
		opcode_addi&r1&r1&x"001", -- 23
		opcode_b&su&x"0011"    , -- 24
		opcode_addi&r0&r0&x"001", -- 25
		opcode_b&su&x"000e", -- 26
		opcode_lwi&r0&x"000a", -- 27
		opcode_lwi&r0&x"000b",
		opcode_lwi&r0&x"000c",
		opcode_lwi&r0&x"000e",
		opcode_lwi&r0&x"000f",
		opcode_b&su&x"001b",
		others => (others => '-')
	);

begin

	d <= rom( conv_integer(a) );

end behavior;