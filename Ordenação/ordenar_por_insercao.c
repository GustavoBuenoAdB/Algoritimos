/**
 * @file ordenar_por_insercao.c
 * @brief Implementações de Ordenações por Inserção
 *
 * Este arquivo contém a Implementações de Ordenações por Inserção(ou Insertion Sort) para 
 * listas sequencias de inteiros, tanto no proprio buffer quanto com um buffer passado por referencia.
 * 
 * @author Gustavo_Bueno_AdB
 * @date 11/04/2025
 * @version 1.0
*/

#include "ordenar_por_insercao.h"

void ordenar_por_insercao(int* lista, int tamanho)
{
    for (int i = 1 ; i < tamanho ; i++)
    {
        //salvando o valor a ser colocado e liberando lista[i]
        int aux = lista[i];

        //ignorando ja ordenados
        if (aux < lista[i-1])
        {
            int j;
            for (j = i - 1 ; j > 0 ; j--)
            {
                //movendo a lista
                lista[j + 1] = lista[j];

                //colocando no lugar
                if (aux > lista[j - 1])
                    break;
            }
            lista[j] = aux; 
        }
    }
}

void ordenar_por_insercao_preservando_original(int* lista, int tamanho, int* lista_ret)
{
    lista_ret[0] = lista[0];
    for (int i = 1 ; i < tamanho ; i++)
    {
        //salvando o valor a ser colocado e liberando lista[i]
        int aux = lista[i];

        //ignorando ja ordenados
        if (aux < lista_ret[i-1])
        {
            int j;
            for (j = i - 1 ; j > 0 ; j--)
            {
                //movendo a lista
                lista_ret[j + 1] = lista_ret[j];

                //colocando no lugar
                if (aux > lista_ret[j - 1])
                    break;
            }
            lista_ret[j] = aux; 
        }
        else
            lista_ret[i] = aux;
    }
}
