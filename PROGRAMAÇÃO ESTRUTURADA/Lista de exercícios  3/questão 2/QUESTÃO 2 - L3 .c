//Arquivo: QUESTÃO 2 - L3.c
//Aluno: Breno Camarô Arraes
/*Faça um programa que imprima os números de 1 a 15 em ordem descrescente,
utilizando apenas uma variável e um laço for */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int vet[15] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
	int i;

	for(i = 14; i >= 0; i--)
	{
		printf("%d \n", vet[i]);
	}

	getchar(); //Pausa o programa
	return 0;
}


