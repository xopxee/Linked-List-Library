#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <stdlib.h>

struct node{
	int num;
	struct node* next;
	
};

typedef struct node node;

void init_linked_list(node** l);

void  delete_linked_list(node** ll);

void insert_node(node** ll, int num);

void print_nodes(node* l);

#endif