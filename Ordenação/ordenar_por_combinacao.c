/**
 * @file ordenar_por_combinacao.c
 * @brief Definições de Ordenações por Combinação
 *
 * Este arquivo contém a Definição de Ordenações por Combinacao(ou Comb Sort) para.
 * listas sequencias de inteiros.
 * 
 * @author Gustavo_Bueno_AdB
 * @date 15/04/2025
 * @version 1.0
 */

#include "ordenar_por_combinacao.h"

 void ordenar_por_combinacao(int* lista, int tamanho, float reducao)
 {
    if (reducao == NAO_INICIALIZADO)
        reducao = 1.3f;

    int salto = (int) tamanho / reducao;
    
    while (salto > 0)
    {
        for (int i = 0 ; i + salto < tamanho ; i++)
        {
            if(lista[i] > lista[i + salto])
            {
                int aux = lista[i];
                lista[i] = lista[i + salto];
                lista[i + salto] = aux;
            }
        }
        salto = (int) salto / reducao;
    }
 }

 void ordenar_por_combinacao_preservando_original(int* lista, int tamanho, float reducao, int* lista_ret)
 {
    for (int i = 0 ; i < tamanho ; i++)
        lista_ret[i] = lista[i];
    ordenar_por_combinacao(lista_ret, tamanho, reducao);
 }