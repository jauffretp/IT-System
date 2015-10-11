----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    10:11:48 04/28/2015 
-- Design Name: 
-- Module Name:    UAL - Behavioral 
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
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity UAL is
    Port ( A : in  STD_LOGIC_VECTOR (7 downto 0);
           B : in  STD_LOGIC_VECTOR (7 downto 0);
           Ctrl_Alu : in  STD_LOGIC_VECTOR (2 downto 0);
           S : out  STD_LOGIC_VECTOR (7 downto 0);
           N : out  STD_LOGIC;
           O : out  STD_LOGIC;
           Z : out  STD_LOGIC;
           C : out  STD_LOGIC);
end UAL;

architecture Behavioral of UAL is
	signal overflow : STD_LOGIC_VECTOR (8 downto 0);
begin
  
--	overflow <= "0"&A+"0"&B when Ctrl_Alu = "001" ELSE
--		  "0"&A-"0"&B when Ctrl_Alu = "010" ELSE
--		  "0"&A*"0"&B when Ctrl_Alu = "011";

overflow <= ("0"&A)+("0"&B) when Ctrl_Alu="001" ELSE
				("0"&A)-("0"&B) when Ctrl_Alu="011" ELSE
				("0"&A)*("0"&B) when Ctrl_Alu="010";

	C <= '1' when A(7)='1' AND B(7)='1' ELSE
		  '0' ;
		  
	Z <= '1' when overflow= X"00" ELSE
		  '0';
		  
	O <= '1' when overflow(8)='1' ELSE
			'0';

	N <='1' when overflow(7)='1' ELSE--ne semble pas fonctionné
		'0';
	S <= overflow(7 downto 0);
	

		
	
end Behavioral;

