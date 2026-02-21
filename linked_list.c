#include <stdio.h>
#include "linked_list.h"

void init_linked_list(node** pl){
	
	//Initialiazes the list as empty.
	*pl = NULL;
}

void  delete_linked_list(node** pl){
	
	//Variable that will iterate through all of the nodes in the list.
	node* aux;
	
	for(aux = *pl; aux != NULL;){//While there are nodes left.
		
		//Stores the address of the node to be deleted.
		node* current_node = aux;
		
		//aux points to the next node.
		aux = aux->next;
		
		free(current_node);
	}
	
	//Sets the list to be empty again.
	*pl = NULL;
}

void shift_node(node** pl, int num){
	
	//Allocates memory for the new node to be inserted.
	node* new_node = (node*)malloc(sizeof(node));
	
	if(new_node == NULL){
		perror("Failed to allocate memory!");
		exit(1);
	}
	
	//Fills the node with the data passed in the arguments.
	new_node->num  = num;
	
	//new_node points to the first node (or NULL in case of empty lists).
	new_node->next = *pl;	
	
	//new_node is now the first node.
	*pl = new_node;				
}

int unshift_node(node** pl){
	
	if(is_empty(*pl)){
		perror("List is empty");
		exit(1);
	}
	
	//Stores the address of the first node, and moves the head of the list ahead.
	node* aux = *pl;
	*pl = aux->next;
	
	//Gets the data within aux node before deleting it.
	int num = aux->num;
	free(aux);
	return num;
}

void push_node(node** pl, int num){
	
	//Initialiazes the node and its data.
	
	node* new_node = (node*)malloc(sizeof(node));
	
	if(new_node == NULL){
		perror("Failed to allocate memory!");
		exit(1);
	}
	new_node->num = num;
	new_node->next = NULL;
	
	if(is_empty(*pl)){
		*pl = new_node;
	}
	else{
		node* aux;
		
		//Stops when there are no nodes next.
		for(aux = *pl; aux->next != NULL; aux = aux->next);
		
		//The last node now points to new_node
		aux->next = new_node;
	}
	
}

void remove_node(node** pl, int num){
	
	if(is_empty(*pl))
		return;
	
	node* aux;
	node* previous;
	
	//Stops only if the targeted data was found or the end of the list was reached. 
	for(aux = *pl;  aux->next != NULL &&
					aux->num != num;	aux = aux->next){
		
		//previous will point to the node before aux 
		//(aux is going to be incremented before the end of the loop).
		previous = aux;
	}
	
	//Checks which was the stop condition of the for loop.
	if(aux->num == num){
		
		//If aux is the head of the list.
		if(aux == *pl){
			
			//The head now point to the next node.
			*pl = aux->next;
			free(aux);
			return;
		}
		//Makes the previous node point one node ahead before freeing aux.
		previous->next = aux->next;
		free(aux);
	}
}

bool is_empty(node* l){
	return (l == NULL) ? true : false;
}

void print_nodes(node* l){
	
	if(l == NULL){
		printf("{}\n");
		return;
	}
	
	printf("{ ");
	//Prints 'til the last node.
	for(node* aux = l; aux != NULL; aux = aux->next){
		printf("%d ", aux->num);
	}
	printf("}\n");
	
}