#include <stdio.h>
#include <time.h>
#include "linked_list.h"

int main(){
	clock_t inicio = clock();
	
	linked_list* l = create_linked_list();
	
	for(int i = 1; i <= 100000; i++){
		create_node(l, i*13);
	}
	
	delete_linked_list(l);
	
	print_nodes(l);  
	
	clock_t fim = clock();
	
	double tempo = ((double)fim - inicio)/CLOCKS_PER_SEC;
	
	printf("Tempo de execucao: %f segundos\n", tempo);
	
	return 0;
}