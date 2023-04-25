//Aluno: Breno Camar� Arraes - uc22200177

// Usando o comando switch, fa�a um algoritmo que leia o n�mero de DDD e informe
//a qual cidade pertence, considerando s� os seguintes valores:
//61 - Bras�lia, 71 - Salvador, 11 - S�o Paulo, 21 - Rio de Janeiro, 32 - Juiz de Fora
//19 - Campinas, 27 - Vit�ria, 31 - Belo Horizonte.

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int ddd;
	printf("Informe um DDD: \n");
	scanf("%d", &ddd);
	fflush(stdin); /* Limpa o buffer do teclado */
	
	switch(ddd){
		case 61:
			printf("\nO DDD pertence a Brasilia! \n");
			break;
		case 71:
			printf("\nO DDD pertence a Salvador! \n");
			break;
		case 11:
			printf("\nO DDD pertence a Sao Paulo! \n");
			break;
		case 21:
			printf("\nO DDD pertence ao Rio de Janeiro! \n");
			break;
		case 32:
			printf("\nO DDD pertence a Juiz de Fora! \n");
			break;
		case 19:
			printf("\nO DDD pertence a Campinas! \n");
			break;
		case 27:
			printf("\nO DDD pertence a Vitoria! \n");
			break;
		case 31:
			printf("\nO DDD pertence a Belo Horizonte! \n");
			break;
		default:
			printf("\nNumero invalido! \n");
	}
	getchar(); /* Pausa o programa */
	return 0;
}

