//Arquivo: QUEST�O 3 - L3
//Aluno: Breno Camar� Arraes
//Fa�a um programa que receba como dado de entrada um n�mero inteiro e
//imprima na tela os n�meros do valor digitado at� zero em ordem decresdente,
//utilizando um la�o for

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
