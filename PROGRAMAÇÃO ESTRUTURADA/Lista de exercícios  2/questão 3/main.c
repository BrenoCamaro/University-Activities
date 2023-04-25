// Aluno: Breno Camarô Arraes - uc22200177

// Faça um programa que leia 3 números e mostre o maior e o menor entre eles.
// Se, por acaso, os números forem iguais, imprima a mensagem “Números iguais”.

#include <stdio.h>
#include <stdlib.h>

int main()
{
	float valores[3];
	int i;
	float maior = 0, menor = 0;
	
	printf("Informe 3 valores: \n\n");
	

	
	for(i = 0; i < 3; i++){
		printf("\nValor %d: \n", i + 1);
		scanf("%f", &valores[i]);
		fflush(stdin); /* Limpa o buffer do teclado */
	}
	
	maior = valores[0];
	menor = valores[0];
	
	if(valores[0] == valores[1] && valores[0] == valores[2]){
		printf("\nNumeros iguais! \n");
		exit(1); /* Encerra o programa */
	}

	
	for(i = 0; i < 3; i++){
		
		if(maior <= valores[i]){
			maior = valores[i];
		}
		
		if(menor >= valores[i]){
			menor = valores[i];
		}

	}
	
	printf("\nMaior = %2.f", maior);
	printf("\nMenor = %2.f", menor);
	
	getchar(); /* Pausa o programa */
	return 0;
}
