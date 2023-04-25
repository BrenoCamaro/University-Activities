//Arquivo: QUESTÃO 5 - L3
//Aluno: Breno Camarô Arraes
//Faça um programa que solite números ao usuário até que a soma de todos os 
//números informados seja 30, utilizando uma estrutura de repetição while

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

