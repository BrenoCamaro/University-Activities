//Arquivo: QUEST�O 5 - L3
//Aluno: Breno Camar� Arraes
//Fa�a um programa que solite n�meros ao usu�rio at� que a soma de todos os 
//n�meros informados seja 30, utilizando uma estrutura de repeti��o while

#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	int valor = 0, soma = 0;
	
	while(soma <= 30)
	{
		if(soma <= 30)
		{
			printf("Informe um valor: \n");
			scanf("%d", &valor);
			fflush(stdin);
			
			soma = soma + valor;
			printf("\nsoma = %d \n", soma);	
		}
		else
		{
			printf("\nA soma dos valores e maior que 30! \n");
			exit;
		}

	}
		
	return 0;
}

