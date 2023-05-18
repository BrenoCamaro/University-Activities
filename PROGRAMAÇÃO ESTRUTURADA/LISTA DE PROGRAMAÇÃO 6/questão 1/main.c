// Aluno: Breno Camarô Arraes

// Desenvolva um algoritmo em C, que leia um numero inteiro, armazene-o em uma variável do tipo inteiro, 
// crie uma variável do tipo ponteiro, faça a troca do conteúdo do valor armazenado da variável do tipo inteiro  
// para a variável do tipo ponteiro. Exiba os valores antes e após a troca.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;

    printf("Informe um numero inteiro: \n");
    scanf("%d", &numero);
    fflush(stdin); // limpa o buffer do teclado

    printf("\n\n------------------------\n");
    printf("     ANTES DA TROCA");
    printf("\n------------------------\n\n"); 

    printf("Valor da variavel = %d", numero);

    int *ponteiro; // criando uma variável do tipo ponteiro
    ponteiro = &numero; // ponteiro recebe o endereço de memória da variável numero
    *ponteiro = 10; // atribuindo um novo valor para o conteúdo do endereço de memória apontado

    printf("\n\n------------------------\n");
    printf("    DEPOIS DA TROCA");
    printf("\n------------------------\n\n");  

    printf("Valor da variavel = %d", numero);
    
    getchar();  // pausa o programa
    return 0;
}
