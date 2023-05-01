// Aluno: Breno Camarô Arraes - uc22200177

// Leia um vetor de 10 posições. Contar e escrever quantos valores
// pares ele possui.

#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	int vetor[10];
	int i;
	int contadorDePares; /* Conta quantos numeros pares há no vetor */
	
	printf("Lendo o vetor: \n");
	
	for(i = 0; i < 10; i++){
		printf("\nInforme um valor para o indice [%d]: ", i);
		scanf("%d", &vetor[i]);
		fflush(stdin); /* Limpa o buffer do teclado */
	}
	
	printf("\n\n----------------------------------");
	printf("\n\nImprimindo os valores pares do vetor: \n\n");
	
	for(i = 0; i < 10; i++){
		
		if(vetor[i] % 2 == 0){
			
			printf("%d ", vetor[i]);
			contadorDePares ++;
		} 
	}
	
	printf("\n\nQuantidade de numeros pares: %d", contadorDePares);
	getchar(); /* Pausa o programa */
	return 0;
}
