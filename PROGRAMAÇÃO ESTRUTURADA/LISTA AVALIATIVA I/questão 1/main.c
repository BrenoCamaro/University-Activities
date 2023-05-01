// Aluno: Breno Camarô Arraes - uc22200177

// Faça um programa que possua um vetor A que armazene 6 números inteiros.
// O programa deve executar os seguites passos:

// a) Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7.

// b) Armazene em uma variável inteira (simples) a soma entre os valores das
// posições A[0], A[1] e A[5] do vetor e mostre na tela esta soma.

// c) Modifique o vetor na posição 4, atribuindo a esta posição o valor 100.

// d) Mostre na tela cada valor do vetor A, um em cada linha.

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a[6] = {1, 0, 5, -2, -5, 7};
	int soma = a[0] + a[1] + a[5]; /* Guarda a soma dos valores de a[0], a[1] e a[5] */
	
	printf("b) Soma de a[0] + a[1] + a[5] = %d \n", soma);
	
	a[4] = 100; /* Modifiando o vetor na posição 4 */
	
	/* imprimindo na tela cada valor de a, um em cada linha */
	printf("\nd) Imprimindo o vetor a: \n");
	
	int i;
	for(i = 0; i < 6; i++){
		printf("%d \n", a[i]);
	}
	
	getchar(); /* Pausa o programa */
	return 0;
}

