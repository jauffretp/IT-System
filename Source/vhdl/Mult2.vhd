----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    15:24:57 05/29/2015 
-- Design Name: 
-- Module Name:    Mult3 - Behavioral 
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

entity Mult3 is
    Port ( OP : in  STD_LOGIC_VECTOR (7 downto 0);
           OUT_MEM : in  STD_LOGIC_VECTOR (7 downto 0);
           B : in  STD_LOGIC_VECTOR (7 downto 0);
           OUT_MUX : out  STD_LOGIC_VECTOR (7 downto 0));
end Mult3;

architecture Behavioral of Mult3 is

begin
	OUT_MUX <= OUT_MEM when OP=x"07" else
					B;

end Behavioral;

