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
	insere_listase_em_ordem(&l1, 10);
	insere_listase_em_ordem(&l1, 15);
	insere_listase_em_ordem(&l1, 14);
	insere_listase_em_ordem(&l1, 20);
	insere_listase_em_ordem(&l1, 2);
	
	//Listar os valores da lista.
	imprime_listase(l1);
	printf("\r\n \r\n A lista possui %d elementos.\r\n", tamanho_listase(l1));
	printf("\r\n \r\n A lista possui %d elementos maiores que 12.\r\n\r\n", qtde_nos_maiores(l1, 12));
	
	return 0;
}