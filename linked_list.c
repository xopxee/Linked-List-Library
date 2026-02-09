#include <stdio.h>
#include "linked_list.h"

linked_list* create_linked_list(){
	
	//Aloca espaco para a lista.
	linked_list* l = (linked_list*)malloc(sizeof(linked_list*));
	
	if(l == NULL){
		perror("Falha ao alocar memoria!");
		exit(1);
	}
	
	//Inicializa campos.
	l->first_node = NULL;
	l->nel = 0;
	
	return l;
}

void  delete_linked_list(linked_list* l){
	
	//Primeiro nó.
	node* current_node = l->first_node;
	
	//Enquanto houver nós, desaloque - os.
	while(current_node != NULL){
		
		//Guarda o endereco do proximo nó, antes de destruir o atual.
		node* next_node = current_node->next;
		
		free(current_node);
		
		current_node = next_node;
	}
	
	free(l);
}

void create_node(linked_list* l, int num){
	
	//Se a lista esta vazia
	if(l->nel == 0){
		
		l->first_node = (node*)malloc(sizeof(node));
		
		if(l->first_node == NULL){
			perror("Falha ao alocar memoria!");
			exit(1);
		}
		l->first_node->num = num;
		l->first_node->next = NULL;
		l->nel++;
		
		return;
	}
	
	node* current_node = l->first_node;
	
	//Procura ultimo nó da lista.
	while(current_node->next != NULL){
		current_node = current_node->next;
	}
	
	//Aloca proximo nó e guarda o numero passado no argumento.
	current_node->next = malloc(sizeof(node));
	
	node* next_node = current_node->next;
	
	next_node->num = num;
	next_node->next = NULL;
	l->nel++;
}

void print_nodes(linked_list* l){
	
	if(l->nel == 0)
		return;
	
	node* current_node = l->first_node;
	
	//Printa ate o ultimo nó.
	while(current_node != NULL){
		printf("%d ", current_node->num);
		
		current_node = current_node->next;
	}
	printf("\n");
	
}