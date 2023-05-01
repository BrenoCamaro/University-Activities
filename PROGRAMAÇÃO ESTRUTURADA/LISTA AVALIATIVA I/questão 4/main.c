// Aluno: Breno Camarô Arraes - uc22200177

// Faça um programa que leia um vetor de 8 posições e, em seguida,
// leia também 2 valores x, y quaisquer correspondentes  a duas 
// posições no vetor. Ao final, seu programa deverá escrever
// a soma dos valores encontrados  nas respectivas posições x e y.

#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	int vetor[8];
	int i;
	int soma = 0; /* Soma dos valores x + y */
	int x, y;
	
	/* Lendo vetor */
	for(i = 0; i < 8; i++){
		printf("\nInforme um valor: \n");
		scanf("%d", &vetor[i]);
		fflush(stdin); /* Limpa o buffer do teclado */
	}
	
	printf("\n\nInforme uma posicao do vetor preenchido anteriormente: \n");
	scanf("%d", &x);
	fflush(stdin);
	
	printf("\n\nInforme um outra posicao do vetor: \n");
	scanf("%d", &y);
	fflush(stdin);
	
	for(i = 0; i < 8; i++){
		
		if(x == i){
			soma = soma + vetor[i];
		}
		
		if(y == i){
			soma = soma + vetor[i];
		}
	}

	printf("\n\nSoma = %d", soma);
	
	getchar(); /* Pausa o programa */
	return 0;
}
