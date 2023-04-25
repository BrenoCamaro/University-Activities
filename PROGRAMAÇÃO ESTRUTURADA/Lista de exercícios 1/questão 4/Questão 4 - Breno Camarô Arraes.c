//Autor: Breno Camarô Arraes - uc22200177
//Data: 16/03/23
//Programa que calcula a médio aritmética de 4 notas

#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	float notas[4], total = 0.0, mediaAritmetica = 0.0; //Total corresponde a soma das 4 notas
	int i; //Variavel de controle
	
	for(i = 0; i < 4; i++){
		printf("\nInforme a nota[%d]: \n", i + 1);
		scanf("%f", &notas[i]);
		fflush(stdin);
		
		total = total + notas[i];
	}
	
	printf("\n-----------------------------------------");
	printf("\nTotal = %.2f \n", total);
	printf("-----------------------------------------");
	
	printf("\nPressione a tecla Enter para continuar.......");
	getchar();    //Pausa o programa
	system("cls");//Limpa o prompt
	
	mediaAritmetica = total / 4;
	
	printf("\n-----------------------------------------");
	printf("\nMedia Aritmetica = %.2f \n", mediaAritmetica);
	printf("----------------------------------------- \n");
	
	printf("\nPressione a tecla Enter para encerrar o programa.......");
	
	getchar();
	return 0;
}
