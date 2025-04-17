/**
 * @file ordenar_por_selecao.c
 * @brief Implementações de Ordenações por Seleção
 *
 * Este arquivo contém a Implementações de Ordenações por Seleção(ou Selection Sort) para 
 * listas sequencias de inteiros, tanto no proprio buffer quanto com um buffer passado por referencia.
 * 
 * @author Gustavo_Bueno_AdB
 * @date 14/04/2025
 * @version 1.0
*/

#include "ordenar_por_selecao.h"

void ordenar_por_selecao(int* lista, int tamanho)
{
    for (int i = 0 ; i < tamanho ; i++)
    {
        int min = i;
        for (int j = i ; j < tamanho ; j++)
        {
            //procurando o menor
            if (lista[j] < lista[min])
                min = j;
        }

        //salvando o valor pra n perde
        int aux = lista[min];

        for (int j = min ; j > i ; j--)
        {
            //movendo a lista
            lista[j] = lista[j - 1];
        }

        lista[i] = aux;
    }
}

void ordenar_por_selecao_preservando_original(int* lista, int tamanho, int* lista_ret)
{
    //encontra o maio valor do vetor
    int max = 0;
    for (int i = 0 ; i < tamanho ; i++)
        if (lista[i] > max)
            max = lista[i];

    //faz um selection sorte em um buffer diferente, somando o max para evitar repeticoes.
    for (int i = 0 ; i < tamanho ; i++)
    {
        int min = 0;
        for (int j = 0 ; j < tamanho ; j++)
            if (lista[j] < lista[min])
                min = j;
        lista_ret[i] = lista[min];
        lista[min] += max + 1;
    }

    //retira max de todos os elementos para preservar a lista original
    for (int i = 0 ; i < tamanho ; i++)
        lista[i] -= max + 1;
}
