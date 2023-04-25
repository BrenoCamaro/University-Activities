/*Aluno: Breno Camarô Arraes - uc22200177 */
/* Elabore um programa em C que possua uma função recursiva que calcule
o fatorial dos números no intervalo de 30 a 33. */
#include <stdio.h>
#include <stdlib.h>

int fatorial(int x)
{
	if(x == 0) return 1;
	else return x * fatorial(x - 1);
}

int main()
{
	
	int numero, resultado;
	
	printf("Informe um valor: \n");
	scanf("%d", &numero);
	fflush(stdin);
	
	resultado = fatorial(numero);
	
	printf("\nFatorial de %d = %d \n", numero, resultado);
	return 0;
}
