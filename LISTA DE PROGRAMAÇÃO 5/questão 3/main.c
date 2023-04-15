/*Aluno: Breno Camar� Arraes - uc22200177 */
/* Desenvolva um algoritmo em C que leia quatro n�meros inteiros e
possua macros calcule a m�dia dos n�meros*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> /* Permite caracteres acentuados */

/* Defini��o da Macro que calcula a m�dia */
#define MEDIA(a, b, c, d) (a + b + c + d) / 4

int main()
{
	setlocale(LC_ALL, "Portuguese"); /* Fun��o da biblioteca locale.h */
	
	float numeros[4]; /* Vetor que armazenar� os 4 n�meros inteiros*/
	register int i; /* Vari�vel que controla o la�o de repeti��o*/
	float resultado;
	
	for(i = 0; i < 4; i++){
		
		printf("\nInforme um n�mero: ");
		scanf("%f", &numeros[i]);
		fflush(stdin); /* Limpa o buffer do teclado */
	}
	
	resultado = MEDIA(numeros[0], numeros[1], numeros[2], numeros[3]);
	
	printf("\nM�dia dos numeros informados = %.2f", resultado);
	
	return 0;
}
