//Autor: Breno Camarô Arraes - uc22200177
//Data: 16/03/23
//Programa que calcula a porcentagem de lucro de uma mercadoria
//com base no valor de venda e em suas despesas 

#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	float custoMercadoria, frete, despesasEventuais, custoTotal, valorDeVenda, porcentagemDeLucro;

	printf("Informe o custo da mercadoria: \n");
	scanf("%f",&custoMercadoria);
	fflush(stdin); //Limpa o buffer do teclado
	
	printf("\nInforme o valor do frete: \n");
	scanf("%f", &frete);
	fflush(stdin);
	
	printf("\nInforme o valor das despesas eventuais ocorridas: \n");
	scanf("%f", &despesasEventuais);
	fflush(stdin);
	
	custoTotal = custoMercadoria + frete + despesasEventuais;
	
	printf("\n--------------------------------------");
	printf("\nCusto total da mecadoria = R$ %.2f \n", custoTotal);
	printf("-------------------------------------- \n");
	
	printf("\nPressione a tecla Enter para continuar.......");
	getchar();      //Pausa o programa
	system("cls"); //Função que limpa o prompt de comando
	
	printf("Qual o valor em que a mercadoria sera vendida: \n");
	scanf("%f", &valorDeVenda);
	fflush(stdin);
	
	porcentagemDeLucro = (valorDeVenda - custoTotal) / valorDeVenda;
	system("cls");
	
	printf("\n--------------------------------------");
	printf("\nCusto total da mecadoria = R$ %.2f \n", custoTotal);
	printf("--------------------------------------");
	
	printf("\n--------------------------------------");	
	printf("\nPorcentagem de lucro = %.1f%% \n", porcentagemDeLucro * 100);
	printf("-------------------------------------- \n");
	
	printf("\nPressione a tecla Enter para encerrar o programa.......");
	
	getchar();
	return 0;
}
