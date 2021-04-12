#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main() {
	//Criando uma pilha
	tp_pilha pilha1;
	inicializa_pilha(&pilha1);
	
	//Push dos elementos 1,2,3 na pilha 1.
	push(&pilha1, 1);
	push(&pilha1, 2);
	push(&pilha1, 3);	
	
	//Imprimir a pilha 1.
	imprime_pilha(pilha1);
	return 0;
}