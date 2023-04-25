//QUESTÃO 1 - L3.c
//Aluno: Breno Camarô Arraes
//Faça um programa em C que faça uma contagem progressiva e regressiva no mesmo laço for
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int vetor[5];
	int i;
	int inverso = 4; //variáel que ajudará no processo de contagem regressiva
	
	//preenchendo as posições do vetor
	for(i = 0; i < 5;i++)
	{
		printf("\nInforme um valor inteiro para a posicao [%d]: \n", i);
		scanf("%d", &vetor[i]);
		fflush(stdin);  //Limpa o buffer do teclado
	}
	
	printf("\n");
	
	//imprimindo os valores progressivamente e regressivamente
	for(i = 0; i < 5; i++)
	{
		printf("%d || %d\n", vetor[i], vetor[inverso - i]); 
		
	}
	
	getchar(); //Pausa o programa
	return 0;
}
