// Aluno: Breno Camaro Arraes
// Cria um programa que leia 6 números inteiros e, em seguida,
// mostre na tela os valores lidos na ordem inversa

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int numeros[3];
	int i;
	
	for(i = 0; i < 3; i++){
		printf("\nInforme um valor: \n");
		scanf("%d", &numeros[i]);
		fflush(stdin);
	}
	
	for(i = 2; i < 0; i--){
		printf("%d", numeros[i]);
	}
	getchar(); /* Pausa o programa */
	return 0;
}
