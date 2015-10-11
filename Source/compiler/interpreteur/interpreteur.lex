%{
#include "y.tab.h"
#include <stdlib.h>
%}

ADRESSE [0-9]+
%%
AFC return tAFC;
STORE return tSTORE;
LOAD return tLOAD;
ADD return tADD;
MUL return tMUL;
SUB return tSUB;
DIV return tDIV;
R1 return tR1;
R2 return tR2;
{ADRESSE} {yylval.adresse=atoi(strdup(yytext));return tADRESSE;}
[ ]+ printf("");
[\n] printf("");
[\t]+ printf(""); 

%%



int main(){
	yyparse();
}
