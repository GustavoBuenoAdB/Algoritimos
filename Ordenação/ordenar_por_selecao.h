/**
 * @file ordenar_por_selecao.h
 * @brief Definições de Ordenações por Seleção
 *
 * Este arquivo contém a Definição de Ordenações por Seleção(ou Selection Sort) para 
 * listas sequencias de inteiros.
 * 
 * @author Gustavo_Bueno_AdB
 * @date 14/04/2025
 * @version 1.0
 */

 #ifndef ORDENAR_POR_SELECAO_H
 #define ORDENAR_POR_SELECAO_H
 
 /**
  * @brief Ordena a lista passada por referencia em ordem crescente.
  *
  * Percorre a lista N vezes, em cada uma delas busca o menor valor da lista
  * de [i - tamanho] e coloca ele no ponto i, até que i percorra todo o vetor
  * e a lista esteja ordenada.
  * 
  * @note Ordenação por Seleção funciona em O(n^2).
  * 
  * @param lista O endereço inicial da lista sequencial.
  * @param tamanho O tamanho da lista.
  */
 void ordenar_por_selecao(int* lista, int tamanho);

 /**
  * @brief Ordena os elementos da lista na lista_ret, preservando a lista.
  *
  * Percorre a lista N vezes, em cada uma delas busca o menor valor da lista
  * de [0 - tamanho] e coloca ele no outro buffer, preservando a lista inicial.
  * 
  * @warning qualquer valor na lista_ret até tamanho será sobrescrito.
  * 
  * @note Ordenação por Inserção funciona em O(n^2).
  * 
  * @param lista O endereço inicial da lista sequencial.
  * @param tamanho O tamanho da lista.
  * @param lista_ret o enedereço inicial da lista onde ordenar.
  */
 void ordenar_por_selecao_preservando_original(int* lista, int tamanho, int* lista_ret);
 
 #endif // ORDENAR_POR_SELECAO_H