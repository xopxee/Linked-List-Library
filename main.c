#include <stdio.h>
#include <time.h>
#include "linked_list.h"

int main(){
	
	node* l;
	init_linked_list(&l);
	
	shift_node(&l, 1);
	shift_node(&l, 3);
	shift_node(&l, -7);
	shift_node(&l, 3);
	shift_node(&l, 2);
	
	print_nodes(l);
	
	remove_node(&l, 2);
	remove_node(&l, 1);
	
	print_nodes(l);

	delete_linked_list(&l);
	return 0;
}