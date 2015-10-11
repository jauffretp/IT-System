----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    11:59:02 05/05/2015 
-- Design Name: 
-- Module Name:    pipe_mem - Behavioral 
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

entity pipe_mem is
    Port ( A : in  STD_LOGIC_VECTOR (7 downto 0);
           OP : in  STD_LOGIC_VECTOR (7 downto 0);
           B : in  STD_LOGIC_VECTOR (7 downto 0);
           CLK : in  STD_LOGIC;
           Out_A : out  STD_LOGIC_VECTOR (7 downto 0);
           Out_B : out  STD_LOGIC_VECTOR (7 downto 0);
			  RST : in STD_logic;
           Out_OP : out  STD_LOGIC_VECTOR (7 downto 0));
end pipe_mem;

architecture Behavioral of pipe_mem is

begin
	process
		begin
			wait until Clk'event and Clk='1';
				if RST='0' then OUT_A<=x"00";OUT_B<=x"00";OUT_OP<=x"00"; 
				else
					Out_A <=A;
					Out_OP <= OP;
					Out_B <= B;
				end if;
		end process;
			


end Behavioral;

