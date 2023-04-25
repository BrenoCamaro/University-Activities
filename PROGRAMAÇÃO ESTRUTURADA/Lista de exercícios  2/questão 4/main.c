//Aluno: Breno Camarô Arraes - uc22200177

// Faça um programa em que o usuário digite 4 notas, em seguida,
// calcule e imprima a média e mostre o resultado de acordo com as seguintes informações.
// Média de 0 até 3 - Reprovado; Média de 3.1 até 6.9 – Recuperação.
//Média acima de 6.9 – Aprovada.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h> /* Permite acentuação */

int main()
{
	
	setlocale(LC_ALL, "Portuguese"); /* Função da biblioteca locale.h */
	
	float notas[4];
	int i; /* Variavel que controla o laço de repetição */
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
			printf("\nRecuperação! \n");
		}else{
			if(media > 6.9){
				printf("\nAprovado! \n");
			}
		}
	}

	getchar(); /* Pausa o programa */
	return 0;
}
