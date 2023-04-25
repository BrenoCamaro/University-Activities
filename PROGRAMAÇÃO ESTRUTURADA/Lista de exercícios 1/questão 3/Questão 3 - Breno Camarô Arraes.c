//Autor: Breno Camarô Arraes - uc22200177
//Data: 16/03/23
//Programa que calcula a quantidade de latas de tinta para pintar uma parede

#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	float largura, altura;
	float tamanhoDaParede; //Em metros quadrados
	float quantidadeTotalTinta;
	float quantidadeDeLatas; //Quantidade de latas de tinta
	
	printf("Informe a largura da parede em metros: \n");
	scanf("%f", &largura);
	fflush(stdin); // Limpa o buffer do treclado
	
	printf("\nInforme a altura da parede em metros: \n");
	scanf("%f", &altura);
	fflush(stdin);

	tamanhoDaParede = largura * altura;
	
	printf("\n-----------------------------------------");
	printf("\nTotal = %.2f metros quadrados \n", tamanhoDaParede);
	printf("-----------------------------------------");
	
	printf("\nPressione a tecla Enter para continuar.......");
	getchar();    //Pausa o programa
	system("cls");//Limpa o prompt
	
	quantidadeTotalTinta = 0.3 * tamanhoDaParede;  // Conversão de 300 ml para litros
	                                              // multiplicado pelo tamanho da parede
	
	quantidadeDeLatas = quantidadeTotalTinta / 2; //2 = capacidade em litros da lata
	
	printf("\n-----------------------------------------");
	printf("\nSera necessario %.2f latas de tinta! \n", quantidadeDeLatas);
	printf("-----------------------------------------");

	printf("\nPressione a tecla Enter para encerrar o programa.......");
	getchar();
	return 0;
}

