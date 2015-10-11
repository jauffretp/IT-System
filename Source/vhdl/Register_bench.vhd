----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    11:12:00 04/28/2015 
-- Design Name: 
-- Module Name:    Register_bench - Behavioral 
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

entity Register_bench is
    Port ( A : in  STD_LOGIC_VECTOR (3 downto 0);
           B : in  STD_LOGIC_VECTOR (3 downto 0);
			  Adr_W : in STD_LOGIC_VECTOR (3 downto 0);
           W : in  STD_LOGIC;
           DATA : in  STD_LOGIC_VECTOR (7 downto 0);
           RST : in  STD_LOGIC;
           CLK : in  STD_LOGIC;
           QA : out  STD_LOGIC_VECTOR (7 downto 0);
           QB : out  STD_LOGIC_VECTOR (7 downto 0));
end Register_bench;

architecture Behavioral of Register_bench is
	signal r0 : STD_LOGIC_VECTOR(7 downto 0);
	signal r1 : STD_LOGIC_VECTOR(7 downto 0);
	signal r2 : STD_LOGIC_VECTOR(7 downto 0);
	signal r3 : STD_LOGIC_VECTOR(7 downto 0);
	signal r4 : STD_LOGIC_VECTOR(7 downto 0);
	signal r5 : STD_LOGIC_VECTOR(7 downto 0);
	signal r6 : STD_LOGIC_VECTOR(7 downto 0);
	signal r7 : STD_LOGIC_VECTOR(7 downto 0);
	signal r8 : STD_LOGIC_VECTOR(7 downto 0);
	signal r9 : STD_LOGIC_VECTOR(7 downto 0);
	signal r10 : STD_LOGIC_VECTOR(7 downto 0);
	signal r11 : STD_LOGIC_VECTOR(7 downto 0);
	signal r12 : STD_LOGIC_VECTOR(7 downto 0);
	signal r13 : STD_LOGIC_VECTOR(7 downto 0);
	signal r14 : STD_LOGIC_VECTOR(7 downto 0);
	signal r15 : STD_LOGIC_VECTOR(7 downto 0);
	
begin
	QA<=r0 when A="0000" ELSE
		 r1 when A="0001" ELSE
		 r2 when A="0010" ELSE
		 r3 when A="0011" ELSE
		 r4 when A="0100" ELSE
		 r5 when A="0101" ELSE
		 r6 when A="0110" ELSE
		 r7 when A="0111" ELSE
		 r8 when A="1000" ELSE
		 r9 when A="1001" ELSE
		 r10 when A="1010" ELSE
		 r11 when A="1011" ELSE
		 r12 when A="1100" ELSE
		 r13 when A="1101" ELSE
		 r14 when A="1110" ELSE
		 r15 when A="1111";
		 
	QB<=r0 when B="0000" ELSE
		 r1 when B="0001" ELSE
		 r2 when B="0010" ELSE
		 r3 when B="0011" ELSE
		 r4 when B="0100" ELSE
		 r5 when B="0101" ELSE
		 r6 when B="0110" ELSE
		 r7 when B="0111" ELSE
		 r8 when B="1000" ELSE
		 r9 when B="1001" ELSE
		 r10 when B="1010" ELSE
		 r11 when B="1011" ELSE
		 r12 when B="1100" ELSE
		 r13 when B="1101" ELSE
		 r14 when B="1110" ELSE
		 r15 when B="1111";
		 
	writep:process 
		begin 
			wait until CLK'event and CLK='1';
			if RST='0' then r0<=X"00";
									r1<=X"00";
									r2<=X"00";
									r3<=X"00";
									r4<=X"00";
									r5<=X"00";
									r6<=X"00";
									r7<=X"00";
									r8<=X"00";
									r9<=X"00";
									r10<=X"00";
									r11<=X"00";
									r12<=X"00";
									r13<=X"00";
									r14<=X"00";
									r15<=X"00";
				else
				
			if W='1' AND Adr_W="000" then r0<=DATA; 
			elsif W='1' AND Adr_W="0001" then r1<=DATA; 
			elsif W='1' AND Adr_W="0010" then r2<=DATA;
			elsif W='1' AND Adr_W="0011" then r3<=DATA;
			elsif W='1' AND Adr_W="0100" then r4<=DATA;
			elsif W='1' AND Adr_W="0101" then r5<=DATA;
			elsif W='1' AND Adr_W="0110" then r6<=DATA;
			elsif W='1' AND Adr_W="0111" then r7<=DATA;
			elsif W='1' AND Adr_W="1000" then r8<=DATA;
			elsif W='1' AND Adr_W="1001" then r9<=DATA;
			elsif W='1' AND Adr_W="1010" then r10<=DATA;
			elsif W='1' AND Adr_W="1011" then r11<=DATA;
			elsif W='1' AND Adr_W="1100" then r12<=DATA;
			elsif W='1' AND Adr_W="1101" then r13<=DATA;
			elsif W='1' AND Adr_W="1110" then r14<=DATA;
			elsif W='1' AND Adr_W="1111" then r15<=DATA;
			end if;
				end if;
		end process;
			
end Behavioral;

