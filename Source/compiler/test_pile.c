#include "pile.h"
#include <stdio.h>


int main(){
	pile_s *p = pile_new();
	pile_push(&p,3);
	pile_push(&p,1);
	print_pile(&p);

	pile_pop(&p);
	print_pile(&p);
	pile_push(&p,51);
	print_pile(&p);
	pile_pop(&p);
	pile_pop(&p);
	print_pile(&p);
	if(pile_pop(&p)!=1)printf("YES");
	return 0;
}
