//Aluno: Breno Camarô Arraes - uc22200177

//Faça um programa que leia o salário de um trabalhador e o valor da prestação
//de um empréstimo. Se a prestação, for maior que 20% do salário,
//imprima: “Empréstimo não concedido”, caso contrário, imprima: “Empréstimo concedido”.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h> /* Permite acentuação */
int main()
{
	setlocale(LC_ALL, "Portuguese"); /* Função da biblioteca locale.h */ 
	
	float salario;
	float valorDaPrestacao;
	
	printf("Informe o seu salário: \n"); /* Adicionar "," somente na parte decimal*/
	scanf("%f", &salario);
	fflush(stdin); /* Limpa o buffer do teclado */
	
	printf("\nInforme o valor da prestação: \n");
	scanf("%f", &valorDaPrestacao);
	fflush(stdin);
	
	if(valorDaPrestacao > ( 0.2 * salario)){
		printf("\nEmpréstimo não concedido! \n");
	}else{
		printf("\nEmpréstimo concedido! \n");
	}
	
	getchar(); /* Pausa o programa */
	return 0;
}
