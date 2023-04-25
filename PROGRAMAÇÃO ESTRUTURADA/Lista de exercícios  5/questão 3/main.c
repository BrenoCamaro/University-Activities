/*Aluno: Breno Camarô Arraes - uc22200177 */
/* Desenvolva um algoritmo em C que leia quatro números inteiros e
possua macros calcule a média dos números*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> /* Permite caracteres acentuados */

/* Definição da Macro que calcula a média */
#define MEDIA(a, b, c, d) (a + b + c + d) / 4

int main()
{
	setlocale(LC_ALL, "Portuguese"); /* Função da biblioteca locale.h */
	
	float numeros[4]; /* Vetor que armazenará os 4 números inteiros*/
	register int i; /* Variável que controla o laço de repetição*/
	float resultado;
	
	for(i = 0; i < 4; i++){
		
		printf("\nInforme um número: ");
		scanf("%f", &numeros[i]);
		fflush(stdin); /* Limpa o buffer do teclado */
	}
	
	resultado = MEDIA(numeros[0], numeros[1], numeros[2], numeros[3]);
	
	printf("\nMédia dos numeros informados = %.2f", resultado);
	
	return 0;
}
