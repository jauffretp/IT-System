----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    10:55:28 05/05/2015 
-- Design Name: 
-- Module Name:    Data_mem - Behavioral 
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

entity Data_mem is
    Port ( Adr : in  STD_LOGIC_VECTOR (7 downto 0);
           Input : in  STD_LOGIC_VECTOR (7 downto 0);
           RW : in  STD_LOGIC;
           RST : in  STD_LOGIC;
           CLK : in  STD_LOGIC;
           SORTIE : out  STD_LOGIC_VECTOR (7 downto 0));
end Data_mem;

architecture Behavioral of Data_mem is
		type tab_data is array(0 to 255) of STD_LOGIC_VECTOR(7 downto 0);
		signal datas : tab_data;
		
begin
	
	process 
		begin
			wait until  CLK'event and CLK='1';
			if RST ='0' then datas <= (others=>x"00"); datas(0) <= x"CA";
			else
				if RW='1' then SORTIE <= datas(To_integer(unsigned(Adr)));
				else datas(To_integer(unsigned(Adr)))<=Input;
				end if;
			end if;
		end process;
	
end Behavioral;

