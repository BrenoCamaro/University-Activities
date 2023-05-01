// Aluno: Breno Camarô Arraes - uc22200177

// Ler um conjunto de números reais , armazenado-os em um vetor e calcular
// o quadrado dos componentes deste vetor, armazenando o resultado em
// outro vetor. Os conjuntos tem 10 elementos cada. Imprimir todos os
// conjuntos.

#include <stdio.h>
#include <stdlib.h>

int main()
{
	float numeros[10], oQuadradoDosNumeros[10];
	int i;
	
	/* Lendo os números */
	for(i = 0; i < 10;i++){
		printf("\nInforme um valor: \n");
		scanf("%f", &numeros[i]);
		fflush(stdin);  /* Limpando o buffer do teclado */
		/* Calculando o quadrado do número e armazenando em outro vetor */
		oQuadradoDosNumeros[i] = numeros[i] * numeros[i]; 
	}
	
	printf("\n\nO quadrado de: \n\n");
	/* Imprimindo os vetores */
	for(i = 0; i < 10; i++){
		printf("\n%.2f = %.2f", numeros[i], oQuadradoDosNumeros[i]);
		
	}
	
	getchar(); /* Pausa o programa */
	return 0;
}
