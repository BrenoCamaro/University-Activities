//Aluno: Breno Camarô Arraes - uc22200177

// Elabore um programa em C, que armazene os valores representados pela matriz
// na figura a seguir. Calcule a média aritmética dos valores armazenados.

#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	int matriz[4][4];
	int i, j;
	float soma = 0;
	float media;
	
	for(i = 0; i < 4; i++){
		for(j = 0; j < 4; j++){
			printf("\nInforme o elemento[%d][%d]: \n", i, j);
			scanf("%d", &matriz[i][j]);
			fflush(stdin);
			
			soma = soma + matriz[i][j];
		}
	}
	
	printf("\n");
	
	for(i = 0; i < 4; i++){
		for(j = 0; j < 4; j++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
	

	printf("\n\nSoma = %f", soma);
	
	media = soma / 16;
	
	printf("\nMedia = %f", media);
	
	getchar(); /* Pausa o programa */
	return 0;
}
