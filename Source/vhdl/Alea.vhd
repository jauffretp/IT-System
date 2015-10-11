----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    10:26:06 05/21/2015 
-- Design Name: 
-- Module Name:    Gestion_alea - Behavioral 
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

entity Gestion_alea is
    Port ( A1 : in  STD_LOGIC_VECTOR (7 downto 0);
           B1 : in  STD_LOGIC_VECTOR (7 downto 0);
			  OP1 : in STD_LOGIC_VECTOR (7 downto 0);
			  A2 : in std_logic_vector(7 downto 0);
           A3 : in  STD_LOGIC_VECTOR (7 downto 0);
           A4 : in  STD_LOGIC_VECTOR (7 downto 0);
			  A5 : in STD_LOGIC_VECTOR(7 downto 0);
           S : out  STD_LOGIC_VECTOR (7 downto 0);
			  SA : out STD_LOGIC_VECTOR(7 downto 0);
           Pause : out  STD_LOGIC);
end Gestion_alea;

architecture Behavioral of Gestion_alea is
signal Aux : std_logic_vector(7 downto 0) := x"00";

begin
	--S <= x"00" when (((A1=A2 or A1=A3 or A1=A4 or A1=A5) and OP1/=x"08") or B1=A2 or B1=A3 or B1=A4 or B1=A5) and (OP1/=x"00" and OP1/=x"07")
	--S <= OP1 when (OP1/=x"01" and OP2/=x"06") or (OP1/=x"01" and OP3/=x"06") or (OP1/=x"01" and OP4/=x"06");	
	S <= x"00" when(((A1=A2 or A1=A3 or A1=A4 or A1=A5) and OP1/=x"08") or B1=A2 or B1=A3 or B1=A4 or B1=A5) and (OP1/=x"00" and OP1/=x"07") else
	OP1;
	SA <= x"00" when(((A1=A2 or A1=A3 or A1=A4 or A1=A5) and OP1/=x"08") or B1=A2 or B1=A3 or B1=A4 or B1=A5) and (OP1/=x"00" and OP1/=x"07") else
	A1;
	Pause <= '1' when (((A1=A2 or A1=A3 or A1=A4 or A1=A5) and OP1/=x"08") or B1=A2 or B1=A3 or B1=A4 or B1=A5) and (OP1/=x"00" and OP1/=x"07") else
	'0';

end Behavioral;

