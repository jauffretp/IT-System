----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    12:07:39 04/28/2015 
-- Design Name: 
-- Module Name:    Instructions - Behavioral 
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
use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity Instructions is
    Port ( Adr : in  STD_LOGIC_VECTOR (7 downto 0);
           CLK : in  STD_LOGIC;
           Sortie : out  STD_LOGIC_VECTOR (31 downto 0);
			  RST : in std_logic;
			  Pause : in std_logic);
end Instructions;

architecture Behavioral of Instructions is
	type tab_instructions is array(0 to 255) of STD_LOGIC_VECTOR(31 downto 0);
	signal aux : std_logic_vector(31 downto 0);
	signal instructions : tab_instructions := (x"06020300",x"08000200",x"07030000",x"06010300",x"01010200",x"07010000", others => x"00000000");
begin
	
	process 
		begin
			wait until CLK'event and CLK='1' and Pause ='0';
			if RST='0' then aux <=x"00000000";
			else
			aux <= instructions(To_integer(unsigned(Adr)));
			end if;
		end process;
	Sortie <= aux;
end Behavioral;

