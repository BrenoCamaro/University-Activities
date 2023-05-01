// Aluno: Breno Camarô Arraes - uc22200177

// Crie um programa que lê 6 valores inteiros e, em seguida , mostre
// na tela os valores lidos.

#include <stdio.h>
#include <stdlib.h>

int main()
{
	/* Lendo os valores */
	int valores[6];
	int i;
	
	for(i = 0; i < 6; i++){
		printf("\nInforme um valor: \n");
		scanf("%d", &valores[i]);
		fflush(stdin); /* Limpa o buffer do teclado */
	}
	
	printf("\n\n");
	
	/* Mostrando os valores lidos */
	for(i = 0; i < 6; i++){
		printf("%d ", valores[i]);
	}
	
	getchar();  /* Pausa o programa */
	return 0;
}
