#include <stdio.h>
#include <stdlib.h>
#include "listase.h"

int main()
{
	//Testando a lista.
	tp_listase *l1 = aloca_listase();
	
	//Checando se a lista esta vazia
	if(listase_vazia(l1)== 1)
		printf("Nossa lista esta vazia.");
		
	//Inserindo 10 na lista.
	insere_listase_no_fim(&l1, 10);
	insere_listase_no_fim(&l1, 15);
	
	//Listar os valores da lista.
	imprime_listase(l1);
	
	return 0;
}