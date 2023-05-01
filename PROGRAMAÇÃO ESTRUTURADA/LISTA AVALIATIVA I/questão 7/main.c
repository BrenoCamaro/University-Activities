// Aluno: Breno Camaro Arraes - uc22200177

// Escreva um programa que leia 10 numeros inteiros e os armazene em um vetor.
// Imprima o vetor, o maior elemento e a posição que ele se encontra

#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	int vetor[10];
	int i;
	int maior = 0;
	int posicaoDoMaior = 0; /* Indice do maior numero no vetor */
	
	printf("Lendo o vetor: \n");
	for(i = 0; i < 10; i++){
		printf("\nInforme o elemento[%d] do vetor: ", i);
		scanf("%d", &vetor[i]);
		fflush(stdin); /* Limpa o buffer do teclado */
	}
	
	/* Selecionando o maior elemento */
	for(i = 0; i < 10; i++){
		if(vetor[i] >= maior){
			maior = vetor[i];
			posicaoDoMaior = i;
		}
	}
	printf("\n\n-------------------------\n");
	
	printf("Imprimindo o vetor: \n\n");
	for(i = 0; i < 10; i++){
		printf("%d ", vetor[i]);
	}
	
	printf("\n\nMaior valor: %d", maior);
	printf("\nPosicao do maior valor no vetor: %d", posicaoDoMaior);
	
	getchar(); /* Pausa o programa */
	return 0;
}
