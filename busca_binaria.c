#ifndef BUSCA_BINARIA_C
#define BUSCA_BINARIA_C

/**
 * @file busca_binaria.c
 * @brief Implementacoes da Busca Binária em int, float e double.
 *
 * Este arquivo contém a Implementacao da Busca Binária para int double e float.
 * As implementacoe das funcoes sao praticamente identicas, mudando apenas os 
 * tipos dos parametros passados. 
 * 
 * @author Gustavo_Bueno_AdB
 * @date 09/04/2025
 * @version 1.0
 */

#include "busca_binaria.h"

int busca_binaria_int(int* lista, int tamanho, int procurado)
{
    if (procurado < lista[0] || lista[tamanho - 1] < procurado)
        return -1;
    
    int min = 0;
    int max = tamanho - 1;
    int meio;

    while (min <= max)
    {
        meio = (max + min) / 2;

        if (lista[meio] < procurado)
            min = meio + 1;
        else if (lista[meio] > procurado)
            max = meio - 1;
        else
            return meio;
    } 
    return -1; 
}

int busca_binaria_float(float* lista, int tamanho, float procurado)
{
    if (procurado < lista[0] || lista[tamanho - 1] < procurado)
        return -1;
    
    int min = 0;
    int max = tamanho - 1;
    int meio;

    while (min <= max)
    {
        meio = (max + min) / 2;

        if (lista[meio] < procurado)
            min = meio + 1;
        else if (lista[meio] > procurado)
            max = meio - 1;
        else
            return meio;
    } 
    return -1;
}

int busca_binaria_double(double* lista, int tamanho, double procurado)
{
    if (procurado < lista[0] || lista[tamanho - 1] < procurado)
        return -1;
    
    int min = 0;
    int max = tamanho - 1;
    int meio;

    while (min <= max)
    {
        meio = (max + min) / 2;

        if (lista[meio] < procurado)
            min = meio + 1;
        else if (lista[meio] > procurado)
            max = meio - 1;
        else
            return meio;
    } 
    return -1;
}

#endif