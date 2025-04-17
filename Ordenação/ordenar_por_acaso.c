/**
 * @file ordenar_por_acaso.c
 * @brief Definições de Ordenações por Acaso
 *
 * Este arquivo contém a Definição de Ordenações por Acaso (Case Sort, Bogo Sort ou Estou com Sort) para.
 * listas sequencias de inteiros.
 * 
 * @author Gustavo_Bueno_AdB
 * @date 15/04/2025
 * @version 1.0
 */

 //TEMPORARIAMENTE
 #include <stdlib.h>

 int esta_ordenado(int* lista, int tamanho)
 {
    for (int i = 0 ; i + 1 < tamanho ; i++)
        if(lista[i] > lista[i + 1])
            return 0;
    return 1;
 }

 void ordenar_por_acaso(int* lista, int tamanho)
 {  
    while (!(esta_ordenado(lista, tamanho)))
    {
        for (int i = 0 ; i < tamanho ; i++)
        {
            int aux = lista[i];
            srand(time(NULL));
            int aleatorio = rand() % tamanho;
            lista[i] = lista[aleatorio];
            lista[aleatorio] = aux;
        }
    }
 }

 void ordenar_por_acaso_preservando_original(int* lista, int tamanho, int* lista_ret)
 {
    for (int i = 0 ; i < tamanho ; i++)
        lista_ret[i] = lista[i];
    ordenar_por_acaso(lista_ret, tamanho);
 }