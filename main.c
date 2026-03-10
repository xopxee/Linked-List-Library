#include <stdio.h>
#include <time.h>
#include "linked_list.h"

int main(){
	
	node* l;
	init_linked_list(&l);
	
	for(int i = 0; i < 10; i ++)
		push_node(&l, (int)i);
	
	print_nodes(l);
	
	node* nl = slice_ll(&l, 4);
	
	print_nodes(l);
	print_nodes(nl);
	
	delete_linked_list(&l);
	
	return 0;
}