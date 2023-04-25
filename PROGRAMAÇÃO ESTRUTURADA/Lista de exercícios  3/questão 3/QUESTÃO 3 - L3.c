//Arquivo: QUESTÃO 3 - L3
//Aluno: Breno Camarô Arraes
//Faça um programa que receba como dado de entrada um número inteiro e
//imprima na tela os números do valor digitado até zero em ordem decresdente,
//utilizando um laço for

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	
	printf("Informe um valor inteiro: \n");
	scanf("%d", &i);
	fflush(stdin); //Limpa o buffer do teclado
	
	printf("\n");
	
	for(i; i >= 0; i--)
	{
		printf("%d ", i);
	}
	
	
	
	getchar();   //Pausa o programa
	return 0;
}
