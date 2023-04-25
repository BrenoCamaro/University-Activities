// Aluno: Breno Camarô Arraes - uc22200177

// Elabore um programa em C, que armazene os valores representados
// pela matriz na figura a seguir. Calcule a soma dos valores entre
// a linhas em destaque na figura a seguir e demostre qual é a maior soma entre elas.

#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	int matriz[4][4];
	int i, j;
	int soma1 = 0;
	int soma2 = 0;
	
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
	
	soma1 = matriz[1][0] + matriz[1][1] + matriz[1][2] + matriz[1][3];
	
	soma2 = matriz[3][0] + matriz[3][1] + matriz[3][2] + matriz[3][3];

	if(soma1 > soma2){
		printf("\nA soma dos elementos da linha 1 e maior que a soma dos elementos da linha 3 \n");
	}else{
		printf("\nA soma dos elementos da linha 3 e maior que a soma dos elementos da linha 1 \n");
	}
	
	getchar(); /* Pausa o programa */
	return 0;
}
