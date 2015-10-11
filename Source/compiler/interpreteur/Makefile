TARGETS=cible
OBJECTS=
LDFLAGS=
CFLAGS=-Wall -Werror

all: $(TARGETS)

cible: y.tab.c lex.yy.c 
	gcc -g y.tab.c lex.yy.c -ll -o $@ 

lex.yy.c: interpreteur.lex
	flex interpreteur.lex 

y.tab.c: interpreteur.yacc 
	yacc -d interpreteur.yacc

run:
	./cible
