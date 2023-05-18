// Aluno: Breno Camarô Arraes
// Desenvolva um algoritmo em C, que leia o conteúdo de váriaveis ponteiro do tipo inteiro, armazene-as em 
// uma estrutura do tipo pilha, manipula os valores e exiba-os.

#include <stdio.h>
#include <stdlib.h>

// criando um dado do tipo No
typedef struct no
{
    int numero;
    struct no *proximo;
}No;

// protótipos de funções auxiliares
int lerNumero();
void imprimeNumero(int numero);

// protótipos das funções da estrutura de dados pilha
No* empilhar(No *topo);
No* desempilhar(No **topo);
void imrprimirPilha(No *topo);

int main()
{ // início da função main

    No *topo = NULL;
    No *remover;
    int opcao;

    printf("\n0 - Sair\n1 - Empilhar\n2 - Desempilhar\n3 - Imprimir\n");
    scanf("%d", &opcao);
    getchar(); // limpa o buffer do teclado e pausa o programa

    do{
        switch(opcao){
            case 1: 
                topo = empilhar(topo);
                break;
            case 2:
                remover = desempilhar(&topo);
                if(remover){
                    printf("nElemento removido com sucesso! \n");
                    imprimeNumero(remover->numero);
                }else{
                    printf("\nSem no a remover! \n");
                }
                break;
            case 3:
                imrprimirPilha(topo);
                break;
            default:
                if(opcao != 0){
                    printf("\nOpcao invalida! \n");
                }
        }
    }while(opcao != 0);


    return 0;
}// fim da função main

int lerNumero()
{ // início da função lerNumero
    int numero;

    printf("\nInforme um numero inteiro: \n");
    scanf("%d", &numero);
    getchar(); // limpa o buffer do teclado e pausa o programa

    return numero;
} // fim da função lerNumero

void imprimeNumero(int numero)
{ // início da função imrprimeNumero

    printf("\n%d, \n", numero);

} // fim da função imrprimeNumero

No* empilhar(No *topo)
{
    No *novo = malloc(sizeof(No));

    if(novo){
        novo->numero = lerNumero();
        novo->proximo = topo;
    }
    else{
        printf("\nErro ao alocar memoria! \n");
        return NULL;
    }
}

No* desempilhar(No **topo)
{
    if(*topo != NULL){
        No *remover = *topo;
        *topo = remover->proximo;
        return remover;
    }else{
        printf("\nPilha vazia! \n");
        return NULL;
    }
}

void imrprimirPilha(No *topo)
{
    printf("n----------PILHA----------\n");
    while(topo != NULL){
        imprimeNumero(topo->numero);
        topo = topo->proximo;
    }

}