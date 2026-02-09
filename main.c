#include <stdio.h>
#include <time.h>
#include "linked_list.h"

int main(){
	
	node* l;
	init_linked_list(&l);
	
	insert_node(&l, 1);
	insert_node(&l, 3);
	insert_node(&l, -7);
	insert_node(&l, 3);
	insert_node(&l, 2);
	
	print_nodes(l);

	delete_linked_list(&l);
	return 0;
}