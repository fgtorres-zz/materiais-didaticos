#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <windows.h>

//Constantes
#define NUMERO_DE_TENTATIVAS 10

void gotoxy(int x, int y){
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), (COORD){x-1,y-1});
}

int listadechutes(int i, int *chutes){
       int j;
	   gotoxy(50,12);
	   printf("LISTA DE CHUTES\r\n\r\n");
	   for(j = 0; j < i; j++)
	   {
	   	   gotoxy(50,14+j);
		   printf("[%d] %d ", j, chutes[j]);
	   }
	   
	   return j;
}

//CHALLENGER ONE ADVANCED
//Contar a quantidade de chutes pares e retornar o cont
int contchutespar(int i, int *chutes){
	//Desenvolva a logica.
	
	return contpar;
}

void telajogo(int chute, int numerosecreto){
      int i;
      
      //Declarando o vetor.
      int chutes[NUMERO_DE_TENTATIVAS];
      
	  for(i = 1; i <= NUMERO_DE_TENTATIVAS; i++)
   	   {
	   //Pegando chute do usuario
	   gotoxy(50,7);
	   printf("Tentativa %d de %d ", i, NUMERO_DE_TENTATIVAS);
	   gotoxy(50,8);
	   printf("Qual o seu chute?");
	   scanf("%d", &chute);
	   
	   //Guardar o chute no vetor chutes
	   chutes[i-1] = chute; 
	   
	   //Checando o chute
	   if (chute == numerosecreto){
           gotoxy(50,10);
		   printf("Parabens voce acertou o numero! \n\n");
		   
		   //Listar todos os chutes
           int contchutes = listadechutes(i,chutes);
           gotoxy(50,16+contchutes);
		   printf("Voce chutou %d vezes.", contchutes);
		   
		   //Listar quantidade de chutes pares
           int contpar = contchutespar(i,chutes);
           gotoxy(50,17+contchutes);
		   printf("Voce chutou %d numeros pares.", contpar);
		   
		   break;
	   
	   }else{
   		   //Checar e dar a dica
   		   gotoxy(50,10);
   		   printf("Voce errou, tente denovo\n");
   		   if(chute > numerosecreto) {
   		   	    gotoxy(50,12);
			    printf("%d e maior que o numero secreto.",chute);	  
		   }else{
		   	  gotoxy(50,12);
			  printf("%d e menor que o numero secreto.",chute); 
		      gotoxy(50,15);
			  printf("<<Aperte uma tecla para continuar>>",chute); 
		   }	  
	   }
	   getch();
	   system("cls");
   }
}

int sorteianumero(int limite){
	//Configurando o seed do rand
   int segundos = time(0);
   srand(segundos);
   
   //Declaracao de variaveis
   int numerosecreto = rand() % limite;
   return numerosecreto;
}

int main(){
   //Sorteando o numero misterioso
   int numerosecreto = sorteianumero(100);
   int chute = 0;
   
   //Comecando o jogo
   telajogo(chute, numerosecreto);
}
