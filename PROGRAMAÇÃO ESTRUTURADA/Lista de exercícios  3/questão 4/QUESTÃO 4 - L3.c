//Arquivo: QUESTÃO 4 - L3
//Aluno: Breno Camarô Arraes
//Faça um programa que armazene a idade de até 5 pessoas em um vetor,
//apresente a média das idades informadas e exiba as idades maiores que 18.

#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	int idades[5], i;
	float somaDasIdades = 0;
	
	//Preenchendo o vetor
	for(i = 0; i < 5; i++)
	{
		printf("\nInforme uma idade: \n");
		scanf("%d", &idades[i]);
		fflush(stdin); //limpa o buffer do teclado
		
		somaDasIdades = somaDasIdades + idades[i];
	}	
	
	printf("\nMedia das Idades = %.2f", somaDasIdades / 5);
	printf("\n\nIdades maiores que 18 anos: \n");
	
	//Exibi as idades maiores que 18 anos
	for(i = 0; i < 5; i++)
	{
		if(idades[i] > 18)
		{
			printf("%d ", idades[i]);
		}
	}
	
	
	getchar(); //Pausa o programa
	return 0;
}


