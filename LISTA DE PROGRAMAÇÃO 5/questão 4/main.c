/*Aluno: Breno Camarô Arraes - uc22200177 */
/* Desenvolva um algoritmo em C que leia nome e idade e
possua macros que exiba mensagens "Maior de idade" ou "Menor de idade." 
x >= 18 -> maior de idade ||  x < 18 -> menor de idade */
#include <stdio.h>
#include <stdlib.h>

/* Definindo Macro*/
#define MAIOR printf("\nMaior de idade. \n");
#define MENOR printf("\nMenor de idade. \n");
int main()
{
	
	int idade;
	printf("Informe a sua idade: \n");
	scanf("%d", &idade);
	fflush(stdin); /* Limpa o buffer do teclado */
	
	if(idade >= 18) MAIOR
	else MENOR
	return 0;
}
