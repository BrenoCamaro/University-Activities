//Autor: Breno Camarô Arraes - uc22200177
//Data: 16/03/23
//Programa que calcula a área de uma circunferência

#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	float area, pi = 3.14, raio;
	
	printf("Informe o valor do raio da circunferencia: \n");
	scanf("%f", &raio);
	fflush(stdin); //Limpa o buffer do teclado
	
	printf("\nPressione a tecla Enter para continuar.......");
	getchar();    //Pausa o programa
	system("cls");//Limpa o prompt

	
	area = pi * (raio * raio);
	
	printf("            Resultado:");
	printf("\n--------------------------------------");
	printf("\n       Area = %f", area);
	printf("\n-------------------------------------- \n");
	
	printf("\nPressione a tecla Enter para encerrar o programa.......");
	getchar();
	return 0;
}
