#include <stdio.h>
#include <time.h>
#include "linked_list.h"

#define NUMS 100000

int main(){
	
	node* lpush;
	init_linked_list(&lpush);
	
	node* lshift;
	init_linked_list(&lshift);
	
	clock_t inicio, fim;
	
	inicio = clock();
	
	for(int i = 0; i < NUMS; i++)
		push_node(&lpush, i);
	
	fim = clock();
	double push_time = ((double)fim - inicio)/CLOCKS_PER_SEC;
	
	print_nodes(lpush);
	
	inicio = clock();
	
	for(int i = 0; i < NUMS; i++)
		shift_node(&lshift, i);
	
	fim = clock();
	double shift_time = ((double)fim - inicio)/CLOCKS_PER_SEC;
	
	print_nodes(lshift);
	
	printf("\nTempo de push: %f seg\n", push_time);
	printf("\nTempo de shift: %f seg\n", shift_time);
	
	printf( "\nShiftar eh cerca de %.2f" 
			" vezes mais rapido que pushar\n", push_time/shift_time);

	delete_linked_list(&lpush);
	delete_linked_list(&lshift);
	return 0;
}