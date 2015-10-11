----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    09:01:19 05/21/2015 
-- Design Name: 
-- Module Name:    Multiplexeur_LIDI_DIEX - Behavioral 
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

entity Multiplexeur_LIDI_DIEX is
    Port ( OP : in  STD_LOGIC_VECTOR (7 downto 0);
           B : in  STD_LOGIC_VECTOR (7 downto 0);
           QA : in  STD_LOGIC_VECTOR (7 downto 0);
			  QB : in STD_LOGIC_VECTOR( 7 downto 0);
           S : out  STD_LOGIC_VECTOR (7 downto 0));
end Multiplexeur_LIDI_DIEX;

architecture Behavioral of Multiplexeur_LIDI_DIEX is

begin
	S <= B when OP = x"06" or OP=x"07" or OP=x"00" ELSE
	     QB when OP =x"08" else
	     QA;

end Behavioral;

