// Aluno: Breno Camarô Arraes - uc22200177

// Elabore um programa em C, que armazene os valores representados pela matriz 
// na figura a seguir. Calcule a soma dos valores dos números em destaque na figura a seguir.

#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	int matriz[4][4];
	int i, j;
	int mult = 0;
	
	for(i = 0; i < 4; i++){
		for(j = 0; j < 4; j++){
			printf("\nInforme o elemento[%d][%d]: \n", i, j);
			scanf("%d", &matriz[i][j]);
			fflush(stdin);
			
		}
	}
	
	printf("\n");
	
	for(i = 0; i < 4; i++){
		for(j = 0; j < 4; j++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
	mult = matriz[0][1] * matriz[1][1] * matriz[2][1] * matriz[3][1];
	
	printf("\nMultiplicação: %d", mult);
	
	getchar(); /* Pausa o programa */
	return 0;
}
