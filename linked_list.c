#include <stdio.h>
#include "linked_list.h"

void init_linked_list(node** ll){
	
	//Inicializa a lista como vazia.
	*ll = NULL;
}

void  delete_linked_list(node** ll){
	
	node* aux;
	
	for(aux = *ll; aux != NULL;){//Enquanto houver nós.
		
		//Guarda o endereço do nó a ser deletado.
		node* current_node = aux;
		
		//current aponta pro próximo nó.
		aux = aux->next;
		
		//deleta o nó atual.
		free(current_node);
	}
	
	*ll = NULL;
}

void insert_node(node** ll, int num){
	
	//Cria novo nó a ser inserido na lista.
	node* new_node = (node*)malloc(sizeof(node));
	
	if(new_node == NULL){
		perror("Falha ao alocar memoria!");
		exit(1);
	}
	
	//Preenche novo nó.
	new_node->num  = num;
	
	//Se a lista esta vazia
	if(*ll == NULL){
		new_node->next = NULL;	//Novo nó é o ultimo e o primeiro nó.
	}
	else{
		new_node->next = *ll;	//Insere o novo elemento na primeira posicao.
	}
	
	*ll = new_node;				//Lista aponta para o novo nó.
}

void print_nodes(node* l){
	
	if(l == NULL)
		return;
	
	//Printa ate o ultimo nó.
	for(node* aux = l; aux != NULL; aux = aux->next){
		printf("%d ", aux->num);
	}
	printf("\n");
	
}