#include <stdio.h>
#include "ordenar_por_insercao.h"
#include "ordenar_por_selecao.h"
#include "ordenar_por_flutuacao.h"
#include "ordenar_por_combinacao.h"
#include "ordenar_por_acaso.h"

#define TAM 20

// Todas as funcoes aqui usadas tem sua versão preservando ou não a lista original.

void mostra_lista(int* lista, int tam);

int main()
{
    int num[TAM] = {0, 3, 2, 1, 3, 3, 7, 20, 6, 9, 12, 7, 12, 10, 1, 5, 8, 19, 12, 4};
    int ret[20] = {1};

    printf("Insercao: ");
    ordenar_por_insercao_preservando_original(num, TAM, ret);
    //ordenar_por_insercao(num, TAM, ret);
    mostra_lista(ret, TAM);

    printf("Selecao: ");
    ordenar_por_selecao_preservando_original(num, TAM, ret);
    //ordenar_por_selecao(num, TAM, ret);
    mostra_lista(ret, TAM);

    printf("Flutuacao: ");
    ordenar_por_flutuacao_preservando_original(num, TAM, ret);
    //ordenar_por_flutuacao(num, TAM);
    mostra_lista(ret, TAM);

    printf("Combinacao: ");
    ordenar_por_combinacao_preservando_original(num, TAM, NAO_INICIALIZADO, ret);
    //ordenar_por_combinacao(num, TAM, NAO_INICIALIZADO);
    mostra_lista(ret, TAM);

    int num_especial[5] = {9,1,3,3,3};
    printf("Acaso: ");
    ordenar_por_acaso(num_especial, 5);
    mostra_lista(num_especial, 5);

    return 0;
}

void mostra_lista(int* lista, int tam)
{
    for (int i = 0 ; i < tam ; i++)
        printf("%d, ", lista[i]);
    printf("\n");
}