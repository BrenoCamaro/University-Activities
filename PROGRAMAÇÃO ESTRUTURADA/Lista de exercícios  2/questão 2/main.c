//Aluno: Breno Camar� Arraes - uc22200177

//Fa�a um programa que leia o sal�rio de um trabalhador e o valor da presta��o
//de um empr�stimo. Se a presta��o, for maior que 20% do sal�rio,
//imprima: �Empr�stimo n�o concedido�, caso contr�rio, imprima: �Empr�stimo concedido�.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h> /* Permite acentua��o */
int main()
{
	setlocale(LC_ALL, "Portuguese"); /* Fun��o da biblioteca locale.h */ 
	
	float salario;
	float valorDaPrestacao;
	
	printf("Informe o seu sal�rio: \n"); /* Adicionar "," somente na parte decimal*/
	scanf("%f", &salario);
	fflush(stdin); /* Limpa o buffer do teclado */
	
	printf("\nInforme o valor da presta��o: \n");
	scanf("%f", &valorDaPrestacao);
	fflush(stdin);
	
	if(valorDaPrestacao > ( 0.2 * salario)){
		printf("\nEmpr�stimo n�o concedido! \n");
	}else{
		printf("\nEmpr�stimo concedido! \n");
	}
	
	getchar(); /* Pausa o programa */
	return 0;
}
