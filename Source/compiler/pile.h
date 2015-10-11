#ifndef PILE
# define PILE
	typedef struct pile pile_s;


	pile_s *pile_new(void);

	int data_pile(pile_s ** stack);
	
	void pile_push(pile_s ** stack,int data);
	
	int pile_pop(pile_s ** stack);
	
	void pile_delete(pile_s ** stack);
	
	void print_pile(pile_s ** stack);
#endif


