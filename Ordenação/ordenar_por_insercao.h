/**
 * @file ordenar_por_insercao.h
 * @brief Definições de Ordenações por Inserção
 *
 * Este arquivo contém a Definição de Ordenações por Inserção(ou Insertion Sort) para 
 * listas sequencias de inteiros.
 * 
 * @author Gustavo_Bueno_AdB
 * @date 11/04/2025
 * @version 1.0
 */

 #ifndef ORDENAR_POR_INSERCAO_H
 #define ORDENAR_POR_INSERCAO_H
 
 /**
  * @brief Ordena a lista passada por referencia em ordem crescente.
  *
  * Faz a inserção de cada elemento em sua determinada posicao em um corte 
  * da lista, até que o corte tenha a lista toda de maneira ordenada.
  * 
  * @note nessa implementação o corte é feito na propria lista.
  * @note Ordenação por Inserção funciona em O(n^2).
  * 
  * @param lista O endereço inicial da lista sequencial.
  * @param tamanho O tamanho da lista.
  */
 void ordenar_por_insercao(int* lista, int tamanho);

 /**
  * @brief Ordena os elementos da lista na lista_ret, preservando a lista.
  *
  * Faz a inserção de cada elemento em sua determinada posicao em um corte 
  * da lista, até que o corte tenha a lista toda de maneira ordenada.
  * 
  * @warning qualquer valor na lista_ret até tamanho será sobrescrito.
  * 
  * @note nessa implementação o corte é feito em uma lista a parte.
  * @note Ordenação por Incerção funciona em O(n^2).
  * 
  * @param lista O endereço inicial da lista sequencial.
  * @param tamanho O tamanho da lista.
  * @param lista_ret o enedereço inicial da lista onde ordenar.
  */
 void ordenar_por_insercao_preservando_original(int* lista, int tamanho, int* lista_ret);
 
 #endif // ORDENAR_POR_INSERCAO_H