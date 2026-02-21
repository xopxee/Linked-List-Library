#include <stdio.h>
#include <time.h>
#include "linked_list.h"

int main(){
	
	node* l;
	init_linked_list(&l);
	
	for(int i = 0; i < 10; i++)
		shift_node(&l, i);
	
	print_nodes(l);
	
	for(int i = 0; i < 7; i++)
		printf("%d\n", pop_node(&l));
	
	print_nodes(l);
	
	delete_linked_list(&l);
	
	return 0;
}