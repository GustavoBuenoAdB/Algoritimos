/**
 * @file ordenar_por_selecao.c
 * @brief Implementações de Ordenações por Flutuação
 *
 * Este arquivo contém a Implementações de Ordenações por Flutuação(ou Bubble Sort) para 
 * listas sequencias de inteiros, tanto no proprio buffer quanto com um buffer passado por referencia.
 * 
 * @author Gustavo_Bueno_AdB
 * @date 14/04/2025
 * @version 1.0
*/

#include "ordenar_por_flutuacao.h"

void ordenar_por_flutuacao(int* lista, int tamanho)
{
    int trocas = 1;
    //enquanto nao ordenado
    while (trocas > 0)
    {
        trocas = 0;
        for(int i = 0 ; (i + 1) < tamanho ; i++)
        {
            //troca valores adjacentes desordenados
            if (lista[i] > lista[i + 1])
            {
                int aux = lista[i];
                lista[i] = lista[i + 1];
                lista[i + 1] = aux;
                trocas++;
            }
        }
    }
}

void ordenar_por_flutuacao_preservando_original(int* lista, int tamanho, int* lista_ret)
{
    for (int i = 0 ; i < tamanho ; i++)
        lista_ret[i] = lista[i];
    ordenar_por_flutuacao(lista_ret, tamanho);
}