/*Aluno: Breno Camarô Arraes - uc22200177 */
/* Desenvolva um algoritmo em C que leia dois números inteiros e possua
macros que realize as seguintes operações: Somar, Subtrair, Multiplicar e Dividir */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> /* Permite caracteres acentuados */

/* Definição das Macros */
#define SOMAR(x, y) x + y
#define SUBTRAIR(x, y) x - y
#define MULTIPLICAR(x, y) x * y
#define DIVIDIR(x, y) x / y
int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int valor1, valor2;
	int resultado;
	
	printf("Informe um valor: \n");
	scanf("%d", &valor1);
	fflush(stdin); /* Limpa o buffer do teclado */
	
	printf("\nInforme ums segundo valor: \n");
	scanf("%d", &valor2);
	fflush(stdin);
	
	printf("\nSoma dos valores: %d\n", SOMAR(valor1, valor2));
	printf("\nSubtração dos valores: %d\n", SUBTRAIR(valor1, valor2));
	printf("\nMultiplicação dos valores: %d\n", MULTIPLICAR(valor1, valor2));
	printf("\nDivisão dos valores: %d\n", DIVIDIR(valor1, valor2));
	return 0;
}
