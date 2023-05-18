// Aluno: Breno Camarô Arraes

// Desenvolva um algoritmo em C, que leia um numero inteiro, armazene-o em uma variável do tipo inteiro, 
// crie uma uma função por meio de uma de variável do tipo ponteiro. Exiba o resultdo, antes e apos a
// chamada da função.

#include <stdio.h>
#include <stdlib.h>

void alteraValor(int *ponteiro); // protótipo da função alteraValor

int main()
{
    int numero;

    printf("Informe um numero inteiro: \n");
    scanf("%d", &numero);
    fflush(stdin); // limpa o buffer do teclado

    printf("\n\n--------------------------\n");
    printf("     ANTES DA CHAMADA");
    printf("\n--------------------------\n\n"); 

    printf("Valor da variavel = %d", numero);

    printf("\n\n--------------------------\n");
    printf("    DEPOIS DA CHAMADA");
    printf("\n--------------------------\n\n"); 

    alteraValor(&numero);

    printf("Valor da variavel = %d", numero);

    getchar(); // pausa o programa
    return 0;
}

void alteraValor(int *ponteiro) // função que irá alterar o valor da variável contida em main
{
    *ponteiro = 15;
}