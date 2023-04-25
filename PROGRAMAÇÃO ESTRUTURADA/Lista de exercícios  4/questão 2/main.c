// Aluno: Breno Camarô Arraes - uc22200177

// Elabore um programa em C, que armazene os valores representados pela matriz 
// na figura a seguir. Calcule a soma dos valores dos números em destaque na figura a seguir.

#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	int matriz[4][4];
	int i, j;
	int soma = 0;
	
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
	soma = matriz[2][0] + matriz[2][1] + matriz[2][2] + matriz[2][3];
	
	printf("\nSoma: %d", soma);
	
	getchar(); /* Pausa o programa */
	return 0;
}
