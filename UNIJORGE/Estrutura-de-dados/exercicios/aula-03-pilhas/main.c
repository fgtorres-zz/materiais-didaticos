#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main() {
	//Criando uma pilha
	tp_pilha p1, p2;
	inicializa_pilha(&p1);
	inicializa_pilha(&p2);
	
	//Push dos elementos 1,2,3 na pilha 1.
	push(&p1, 1);
	push(&p1, 2);
	push(&p1, 3);
	push(&p2, 1);
	push(&p2, 2);
	push(&p2, 3);	
	
	//Listas sao iguais.
	if(compara_pilhas(p1,p2) == 1){
		printf("\r\n P1 e igual a P2. \r\n");
	}else{
		printf("\r\n P1 nao e igual a P2. \r\n");
	}
	
	//Imprimir a pilha 1.
	//imprime_pilha(p1);
	return 0;
}