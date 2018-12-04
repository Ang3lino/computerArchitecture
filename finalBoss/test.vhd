
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY test IS
END test;
 
ARCHITECTURE behavior OF test IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT main
    PORT(
         OSC : IN  std_logic;
         clr : IN  std_logic;
			  display : out std_logic_vector(6 downto 0);
			  salida_leds : out std_logic_vector(15 downto 0);
			  an : out std_logic_vector(7 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal osc : std_logic := '0';
   signal clr : std_logic := '0';

	--BiDirs
   signal linea : std_logic_vector(15 downto 0);

   -- Clock period definitions
   constant osc_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: main PORT MAP (
          osc => osc,
          clr => clr,
          linea => linea
        );

   -- Clock process definitions
   osc_process :process
   begin
		osc <= '0';
		wait for osc_period/2;
		osc <= '1';
		wait for osc_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
     
		clr <= '1';
		wait until rising_edge(osc);
		clr <= '0';
		for i in 1 to 50 loop
			wait until rising_edge(osc);
		end loop;

      wait;
   end process;

END;
