#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <stdlib.h>

typedef struct{
	int num;
	void* next;
	
}node;

typedef struct{
	node* first_node;
	size_t nel;
	
}linked_list;

linked_list* create_linked_list();

void  delete_linked_list(linked_list* l);

void create_node(linked_list* l, int num);

void print_nodes(linked_list* l);

#endif