----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    11:46:46 05/11/2015 
-- Design Name: 
-- Module Name:    LC - Behavioral 
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

entity LC is
    Port ( OP : in  STD_LOGIC_VECTOR (7 downto 0);
           Sortie : out  STD_LOGIC
			  );
end LC;

architecture Behavioral of LC is
	
begin
	Sortie <='1' when OP = x"06" or OP=x"01" or OP=x"02" or OP=x"03" or OP=x"07" ELSE
				'0';
	
end Behavioral;

