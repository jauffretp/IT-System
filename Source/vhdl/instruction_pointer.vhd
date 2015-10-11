----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    10:01:11 05/11/2015 
-- Design Name: 
-- Module Name:    instruction_pointer - Behavioral 
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
use IEEE.std_logic_arith.ALL;
use IEEE.std_logic_unsigned.ALL;
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;


-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity instruction_pointer is
    Port ( 	CLK : in  STD_LOGIC;
				RST : in STD_LOGIC;
				IP : out  STD_LOGIC_VECTOR (7 downto 0);
				STOP : in std_logic
				);
end instruction_pointer;

architecture Behavioral of instruction_pointer is
signal compteur : STD_LOGIC_VECTOR(7 downto 0);
signal valeur_pause : STD_LOGIC_VECTOR(7 downto 0); 
begin
	process
		begin
			wait until CLK'event and CLK='1' and STOP='0';
				if RST='0' then compteur <=x"00";
					else compteur <= compteur + 1;
				end if;
		end process;
	IP <= compteur;
	
	
end Behavioral;

