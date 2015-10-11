%{
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void yyerror(const char *a);
int tab_mem[1024];
int R1,R2; 
%}

%token tAFC tSTORE tLOAD tADD tMUL tSUB tDIV tR1 tR2 
%token <adresse> tADRESSE
%union {int adresse;}

%error-verbose
%%




	input: DEBUT;

	DEBUT : INSTRUCTIONS;

	INSTRUCTIONS : INSTRUCTION INSTRUCTIONS
				| INSTRUCTION;
	
	INSTRUCTION : tAFC tR1 tADRESSE{
				R1 = $3; 
				printf("R1 <- %d\n",R1);
				}				
				| tAFC tR2 tADRESSE{
				R1 = $3; 
				printf("R1 <- %d\n",R1);
				}	
				| tADD tR1 tR2{
				R1 = R1 + R2;
				printf("R1 <- R1 + R2, R1 = %d \n",R1);}
				| tSUB tR1 tR2{
				R1 = R1 - R2;
				printf("R1 <- R1 - R2, R1 = %d \n",R1);}
				| tDIV tR1 tR2	{
				R1 = R1 / R2;
				printf("R1 <- R1 / R2, R1 = %d \n",R1);}
				| tMUL tR1 tR2{
				R1 = R1 * R2;
				printf("R1 <- R1 * R2, R1 = %d \n",R1);}
				| tLOAD tR1 tADRESSE{
				R1 = tab_mem[$3];
				printf("R1 <- [%d], R1 = %d \n",$3,R1);}
				| tLOAD tR2 tADRESSE{
				R2 = tab_mem[$3];
				printf("R2 <- [%d], R2 = %d \n",$3,R2);}
				| tSTORE tADRESSE tR1{
				tab_mem[$2] = R1;
				printf("[%d]<-R1, [%d] = %d \n",$2,$2,tab_mem[$2]);}
				| tSTORE tADRESSE tR2{
				tab_mem[$2] = R2;
				printf("[%d]<-R2, [%d] = %d \n",$2,$2,tab_mem[$2]);};

%%

void yyerror(const char *a){
	printf("%s",a);
}		
