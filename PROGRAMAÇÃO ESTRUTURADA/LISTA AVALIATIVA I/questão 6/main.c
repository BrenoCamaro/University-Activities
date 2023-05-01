// Aluno: Breno Camaro Arraes - uc22200177

// Faca um programa que receba do usuario um vetor de 10 posicoes.
// Em seguida, dever ser impresso o maior e o menor elemento do vetor.

#include <stdio.h>
#include <stdlib.h>

int main()
{
	system("cls"); /* Limpa o buffer do teclado */

	int vetor[10];
	int i;
	int maior, menor;

	printf("Lendo o vetor: \n\n");

	for(i = 0; i < 10; i++){
		printf("\nInforme o elemento[%d]: ", i);
		scanf("%d", &vetor[i]);
		fflush(stdin); /* Limpa o buffer do teclado */
	}
	/* Inicializando as variaveis menor e maior */
	maior = vetor[0];
	menor = vetor [0]; 

	/* Selecionando o maior valor do vetor */
	for(i = 0; i < 10; i++){
		if(vetor[i] > maior ){
			maior = vetor[i];
		}
		
	}

	/* Selecionando o menor valor do vetor */
	for(i = 0; i < 10; i++){
		if(vetor[i] <= menor){
			menor = vetor[i];
		}
	}
	
	printf("\n\n-------------------------");
	printf("\n\nMaior elemento: %d", maior);
	printf("\nMenor elemento: %d", menor);

	getchar(); /* Pausa o programa */
	return 0;
}
