----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    09:57:13 05/11/2015 
-- Design Name: 
-- Module Name:    data_path - Behavioral 
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

entity data_path is
PORT (CLK : in std_logic;
		RST : in std_logic;
		N_out : OUT  std_logic;
      O_out : OUT  std_logic;
      Z_out : OUT  std_logic;
      C_out : OUT  std_logic
		);
end data_path;


architecture Behavioral of data_path is
	
	 COMPONENT instruction_pointer
    PORT(
         CLK : IN  std_logic;
         RST : IN  std_logic;
         IP : OUT  std_logic_vector(7 downto 0);
			STOP : IN std_logic
        );
    END COMPONENT;
	 
	 COMPONENT Instructions
    PORT(
         Adr : IN  std_logic_vector(7 downto 0);
         CLK : IN  std_logic;
         Sortie : OUT  std_logic_vector(31 downto 0);
			RST : in std_logic;
			Pause : in std_logic
			
        );
    END COMPONENT;
	 
	 COMPONENT pipe
    PORT(
         A : IN  std_logic_vector(7 downto 0);
         OP : IN  std_logic_vector(7 downto 0);
         B : IN  std_logic_vector(7 downto 0);
         C : IN  std_logic_vector(7 downto 0);
         Out_A : OUT  std_logic_vector(7 downto 0);
         Out_OP : OUT  std_logic_vector(7 downto 0);
         Out_C : OUT  std_logic_vector(7 downto 0);
         Out_B : OUT  std_logic_vector(7 downto 0);
         CLK : IN  std_logic;
			RST : IN std_logic
        );
    END COMPONENT;
	 
	 COMPONENT Register_bench
    PORT(
         A : IN  std_logic_vector(3 downto 0);
         B : IN  std_logic_vector(3 downto 0);
         Adr_W : IN  std_logic_vector(3 downto 0);
         W : IN  std_logic;
         DATA : IN  std_logic_vector(7 downto 0);
         RST : IN  std_logic;
         CLK : IN  std_logic;
         QA : OUT  std_logic_vector(7 downto 0);
         QB : OUT  std_logic_vector(7 downto 0)
        );
    END COMPONENT;
	 
	 
    COMPONENT Data_mem
    PORT(
         Adr : IN  std_logic_vector(7 downto 0);
         Input : IN  std_logic_vector(7 downto 0);
         RW : IN  std_logic;
         RST : IN  std_logic;
         CLK : IN  std_logic;
         SORTIE : OUT  std_logic_vector(7 downto 0)
        );
    END COMPONENT;
	 
    COMPONENT pipe_mem
    PORT(
         A : IN  std_logic_vector(7 downto 0);
         OP : IN  std_logic_vector(7 downto 0);
         B : IN  std_logic_vector(7 downto 0);
         CLK : IN  std_logic;
         Out_A : OUT  std_logic_vector(7 downto 0);
         Out_B : OUT  std_logic_vector(7 downto 0);
			RST : in std_logic;
         Out_OP : OUT  std_logic_vector(7 downto 0)
        );
    END COMPONENT;
	 
	 COMPONENT LC 
	 PORT(
			OP : IN std_logic_vector(7 downto 0);
			Sortie : OUT std_logic
			);
	END COMPONENT;
	
	COMPONENT UAL
    PORT(
         A : IN  std_logic_vector(7 downto 0);
         B : IN  std_logic_vector(7 downto 0);
         Ctrl_Alu : IN  std_logic_vector(2 downto 0);
         S : OUT  std_logic_vector(7 downto 0);
         N : OUT  std_logic;
         O : OUT  std_logic;
         Z : OUT  std_logic;
         C : OUT  std_logic
        );
    END COMPONENT;
		
	COMPONENT Multiplexeur_LIDI_DIEX
	PORT(
			B : in std_logic_vector(7 downto 0);
			OP : in std_logic_vector(7 downto 0);
			QA : in std_logic_vector(7 downto 0);
			QB : in std_logic_vector(7 downto 0);
			S : out std_logic_vector(7 downto 0)
	);
	END COMPONENT;
	
	COMPONENT Gestion_alea 
	Port (  A1 : in  STD_LOGIC_VECTOR (7 downto 0);
           B1 : in  STD_LOGIC_VECTOR (7 downto 0);
           OP1 : in  STD_LOGIC_VECTOR (7 downto 0);
           A2 : in  STD_LOGIC_VECTOR (7 downto 0);
           A3 : in  STD_LOGIC_VECTOR (7 downto 0);
           A4 : in  STD_LOGIC_VECTOR (7 downto 0);
			  A5 : in STD_LOGIC_VECTOR(7 downto 0);
           S : out  STD_LOGIC_VECTOR (7 downto 0);
			  SA : out STD_LOGIC_VECTOR (7 downto 0);
           Pause : out  STD_LOGIC);
	END COMPONENT;
	
	COMPONENT Mult3 
	PORT ( OP : in STD_LOGIC_VECTOR(7 downto 0);
			 B : in STD_LOGIC_VECTOR(7 downto 0);
			 OUT_MEM : in STD_LOGIC_VECTOR(7 downto 0);
			 OUT_MUX : out STD_LOGIC_VECTOR(7 downto 0));
	END COMPONENT;

	
	COMPONENT LC_Mem
	PORT ( OP : in STD_LOGIC_VECTOR(7 downto 0);
			 OUT_LC : out STD_LOGIC);
	END COMPONENT;
	
	COMPONENT pipe_memory
	PORT ( OP : in STD_LOGIC_VECTOR(7 downto 0);
			 A : in STD_LOGIC_VECTOR(7 downto 0);
			 CLK : in std_logic;
			 RST  : in std_logic;
			 OP_OUT : out std_logic_vector(7 downto 0);
			 A_OUT : out std_logic_vector(7 downto 0));
	END COMPONENT;
	
	COMPONENT MUX_DIEX_EXMEM
	Port ( OP : in  STD_LOGIC_VECTOR (7 downto 0);
           B : in  STD_LOGIC_VECTOR (7 downto 0);
           QA : in  STD_LOGIC_VECTOR (7 downto 0);
           S : out  STD_LOGIC_VECTOR (7 downto 0));
	END COMPONENT;
	
	COMPONENT MUX_EXMEM_SUPP
	PORT(
		A : in STD_LOGIC_VECTOR(7 downto 0);
		B : in STD_LOGIC_VECTOR(7 downto 0);
		OP : in STD_LOGIC_VECTOR(7 downto 0);
		S : out STD_LOGIC_VECTOR(7 downto 0));
	END COMPONENT;
	
	type  pipe_out is 
		record
			 a_pipe : std_logic_vector(7 downto 0);
			 b_pipe : std_logic_vector(7 downto 0);
			 op_pipe : std_logic_vector(7 downto 0);
			 c_pipe : std_logic_vector(7 downto 0);
		end record;
		
	type pipe_mem_out is
		record
			 a_pipe_mem : std_logic_vector(7 downto 0);
			 b_pipe_mem : std_logic_vector(7 downto 0);
			 op_pipe_mem : std_logic_vector(7 downto 0);
		end record;
	type ual_out is
		record
			s_ual_out : std_logic_vector(7 downto 0);
			n_ual_out : std_logic;
			o_ual_out : std_logic;
			z_ual_out : std_logic;
			c_ual_out : std_logic;
		end record;
		
	type pipe_supp is
		record
			a_pipe_supp : std_logic_vector(7 downto 0);
			op_pipe_supp : std_logic_vector(7 downto 0);
		 end record;
		 
		
	 --input
	 signal IP_OUT : std_logic_vector(7 downto 0);
	 signal Instruction_OUT : std_logic_vector(31 downto 0);
	 signal LIDI_OUT : pipe_out;
	 signal DIEX_OUT : pipe_out;
	 signal EXmem_OUT : pipe_mem_out;
	 signal memRE_OUT : pipe_mem_out;
	 signal LC_OUT : std_logic;
	 signal mult_lidi_diex_out : std_logic_vector(7 downto 0);
	 signal mult2_OUT : std_logic_vector(7 downto 0);
	 signal QA_OUT : std_logic_vector(7 downto 0);
	 signal QB_OUT : std_logic_vector(7 downto 0);
	 signal OUT_UAL : ual_out;
	 signal OUT_ALEA : std_logic_vector(7 downto 0);
	 signal OUT_ALEA_A : std_logic_vector(7 downto 0);
	 signal Pause_Alea : std_logic;
	 signal OUT_mux_mem : std_logic_vector(7 downto 0);
	 signal OUT_LC_Mem : std_logic;
	 signal OUT_mem : std_logic_vector(7 downto 0);
	 signal SUPP_OUT : pipe_mem_out;
	 signal OUT_mux_exmem : std_logic_vector(7 downto 0);
begin
	
	IP : instruction_pointer PORT MAP(
		CLK => CLK,
		RST => RST,
		IP => IP_OUT,
		STOP => Pause_Alea
	);
	
	mem_instruction : Instructions Port MAP(
		Adr => IP_OUT,
		CLK => CLK,
		Sortie => Instruction_OUT,
		RST => RST,
		Pause => Pause_Alea
		);
		
	LIDI : pipe PORT MAP(
		
			B => Instruction_OUT( 15 downto 8),
			C => Instruction_OUT(7 downto 0),
			A => OUT_ALEA_A,
         OP => OUT_ALEA,
         Out_A => LIDI_OUT.a_pipe,
         Out_OP => LIDI_OUT.op_pipe,
         Out_C => LIDI_OUT.c_pipe,
         Out_B => LIDI_OUT.b_pipe,
         CLK => CLK,
			RST => RST
			);
	u_alea : Gestion_alea PORT MAP(
			A1 => Instruction_OUT(23 downto 16),
			B1 => Instruction_OUT( 15 downto 8),
			OP1 => Instruction_OUT(31 downto 24),
			A2 => LIDI_OUT.a_pipe,
			A3 => DIEX_OUT.a_pipe,
			A4 => Exmem_OUT.a_pipe_mem,
			A5 => SUPP_OUT.a_pipe_mem,
			S => OUT_ALEA,
			SA => OUT_ALEA_A,
			Pause => Pause_Alea
	);
	
	Mult1  : Multiplexeur_LIDI_DIEX PORT MAP(
			B=> LIDI_OUT.b_pipe,
			QA => QA_OUT,
			QB => QB_OUT,
			OP => LIDI_OUT.op_pipe,
			S => mult_lidi_diex_out
			);
			
	DIEX : pipe PORT MAP(
			A=> LIDI_OUT.a_pipe,
			B=> mult_lidi_diex_out,
			OP=> LIDI_OUT.op_pipe,
			C=> QB_OUT,
			Out_A=> DIEX_OUT.a_pipe,
			Out_B=> DIEX_OUT.b_pipe,
			Out_OP=> DIEX_OUT.op_pipe,
			Out_C=> DIEX_OUT.c_pipe,
			CLK => CLK,
			RST => RST
	);
	
	U_UAL : UAL PORT MAP(
		A => DIEX_OUT.b_pipe,
		B => DIEX_OUT.c_pipe,
		Ctrl_Alu => DIEX_OUT.op_pipe(2 downto 0),
		S => OUT_UAL.s_ual_out,
		O => OUT_UAL.o_ual_out,
		Z => OUT_UAL.z_ual_out,
		N => OUT_UAL.n_ual_out,
		C => OUT_UAL.c_ual_out
	);
	
	Mult2 : MUX_DIEX_EXMEM PORT MAP(
			B=> DIEX_OUT.b_pipe,
			QA => OUT_UAL.s_ual_out,
			OP => DIEX_OUT.op_pipe,
			S => mult2_OUT
			);
	
	EXmem : pipe_mem PORT MAP(
			A=> DIEX_OUT.a_pipe,
			OP=> DIEX_OUT.op_pipe,
			B=> mult2_OUT,
			Out_A=> EXmem_OUT.a_pipe_mem,
			Out_OP=>EXmem_OUT.op_pipe_mem,
			Out_B=>EXmem_OUT.b_pipe_mem,
			RST => RST,
			CLK => CLK
	);
	Mux_exmem_out : MUX_EXMEM_SUPP PORT MAP(
			A=>EXmem_OUT.a_pipe_mem,
			B=>EXmem_OUT.b_pipe_mem,
			OP => EXmem_out.op_pipe_mem,
			S => OUT_mux_exmem
	);
	
	SUPP : pipe_mem PORT MAP(
			A => EXmem_OUT.a_pipe_mem,
			OP => EXmem_OUT.op_pipe_mem,
			B=> EXmem_OUT.b_pipe_mem,
			RST => RST,
			CLK => CLK,
			OUT_A => SUPP_OUT.a_pipe_mem,
			OUT_OP => SUPP_OUT.op_pipe_mem,
			OUT_B => SUPP_OUT.b_pipe_mem);
			
	LCMemory : LC_Mem PORT MAP(
			OP => EXmem_OUT.op_pipe_mem,
			OUT_LC => OUT_LC_Mem);
			
	Memoire : Data_mem PORT MAP(
			Adr => OUT_mux_exmem,
			Input => EXmem_OUT.b_pipe_mem,
			RW => OUT_LC_Mem,
			RST => RST,
			CLK => CLK,
			SORTIE => OUT_mem
	);
	
	Mult_Mem : Mult3 PORT MAP(
			OP =>SUPP_OUT.op_pipe_mem,
			B => SUPP_OUT.b_pipe_mem,
			OUT_MEM => OUT_mem,
			OUT_MUX => OUT_mux_mem	
	);
	
	
	
	MemRE : pipe_mem PORT MAP(
			A=>SUPP_OUT.a_pipe_mem,
			OP=>SUPP_OUT.op_pipe_mem,
			B=>OUT_mux_mem,
			Out_A=> memRE_OUT.a_pipe_mem,
			Out_OP=>memRE_OUT.op_pipe_mem,
			Out_B=>memRE_OUT.b_pipe_mem,
			RST => RST,
			CLK => CLK
	);
	
	LC_registre : LC PORT MAP(
			OP => memRE_OUT.op_pipe_mem,
			Sortie => LC_OUT
	);
	
	
	Registres : register_bench PORT MAP(
			Adr_W => memRE_OUT.a_pipe_mem(3 downto 0),
			W => LC_OUT,
			DATA => memRE_OUT.b_pipe_mem,
			RST => RST,
			A => LIDI_OUT.a_pipe(3 downto 0),
			B => LIDI_OUT.b_pipe(3 downto 0),
			CLK => CLK,
			QA => QA_OUT,
			QB => QB_OUT
	);
	
	N_out <= OUT_UAL.n_ual_out;
   O_out <= OUT_UAL.o_ual_out;
	Z_out <= OUT_UAL.z_ual_out;
	C_out <= OUT_UAL.c_ual_out;   
	
end Behavioral;

