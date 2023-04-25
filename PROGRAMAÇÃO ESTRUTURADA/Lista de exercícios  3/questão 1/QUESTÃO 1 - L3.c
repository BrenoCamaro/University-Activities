//QUEST�O 1 - L3.c
//Aluno: Breno Camar� Arraes
//Fa�a um programa em C que fa�a uma contagem progressiva e regressiva no mesmo la�o for
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int vetor[5];
	int i;
	int inverso = 4; //vari�el que ajudar� no processo de contagem regressiva
	
	//preenchendo as posi��es do vetor
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
