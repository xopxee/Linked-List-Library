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

//Removes the first node and return its data.
int unshift_node(node** pl);

//Inserts a new node at the end of the list.
void push_node(node** pl, int num);

//Removes the last node and returns its data.
int pop_node(node** pl);

//Searches for the first node with compatible data and then deletes it.
void remove_node(node** pl, int num);

//Returns the length of the list.
size_t get_len_ll(node* l);

//Returns how many numbers in the list are higher than a set limit.
size_t n_higher_ll(node* l, int num);

//Returns the address of the last node.
node* last_node(node* l);

//Concatenates two lists together.
node* concat_ll(node* li, node* lf);

//Removes all occurences of the integer 'num'.
node* remove_all_num(node** pl, int num);

//Separates the list in two subsets. The first subset ends at
//'num' node, and the second starts from the node afterwards.
node* slice_ll(node** pl, int num);

//Checks if the list doesn´t contain any nodes.
bool is_empty_ll(node* l);

//Prints all the nodes within the list.
void print_nodes(node* l);

#endif