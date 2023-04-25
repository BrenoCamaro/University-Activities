//Aluno: Breno Camar� Arraes - uc22200177

// Fa�a um programa em que o usu�rio digite 4 notas, em seguida,
// calcule e imprima a m�dia e mostre o resultado de acordo com as seguintes informa��es.
// M�dia de 0 at� 3 - Reprovado; M�dia de 3.1 at� 6.9 � Recupera��o.
//M�dia acima de 6.9 � Aprovada.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h> /* Permite acentua��o */

int main()
{
	
	setlocale(LC_ALL, "Portuguese"); /* Fun��o da biblioteca locale.h */
	
	float notas[4];
	int i; /* Variavel que controla o la�o de repeti��o */
	float somaDasNotas = 0;
	float media;
	
	for(i = 0; i < 4; i++){
		
		printf("\nInforme a nota numero [%d]: \n", i + 1);
		scanf("%f", &notas[i]);
		fflush(stdin); /* Limpa o buffer do teclado */
		
		somaDasNotas = somaDasNotas + notas[i];
	}
	
	media = somaDasNotas / 4;
	
	if(media <= 3){
		printf("\nReprovado! \n");
	}else{
		if(media <= 6.9){
			printf("\nRecupera��o! \n");
		}else{
			if(media > 6.9){
				printf("\nAprovado! \n");
			}
		}
	}

	getchar(); /* Pausa o programa */
	return 0;
}
