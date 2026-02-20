#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <stdlib.h>
#include <stdbool.h>

typedef struct node node;

struct node{
	int num;
	node* next;
	
};

//Initializes the list.
void init_linked_list(node** l);

//'Deletes' the data within the list by freeing the memory from all of the nodes.
void  delete_linked_list(node** pl);

//Inserts a new node at the start of the list.
void shift_node(node** pl, int num);

//Searches for the first node with compatible data and then deletes it.
void remove_node(node** pl, int num);

//Checks if the list doesn´t contain any nodes.
bool is_empty(node* l);

//Prints all the nodes within the list.
void print_nodes(node* l);

#endif