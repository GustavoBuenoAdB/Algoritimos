/**
 * @file ordenar_por_flutuacao.h
 * @brief Definições de Ordenações por Flutuação
 *
 * Este arquivo contém a Definição de Ordenações por Flutuação(ou Bubble Sort) para 
 * listas sequencias de inteiros.
 * 
 * @author Gustavo_Bueno_AdB
 * @date 14/04/2025
 * @version 1.0
 */

 #ifndef ORDENAR_POR_FLUTUACAO_H
 #define ORDENAR_POR_FLUTUACAO_H
 
 /**
  * @brief Ordena a lista passada por referencia em ordem crescente.
  *
  * Percorre a lista fazendo trocas para a par, e repete as interações
  * até que a lista esteja ordenada.
  * 
  * @note Ordenação por Flutuação funciona em O(n^2).
  * 
  * @param lista O endereço inicial da lista sequencial.
  * @param tamanho O tamanho da lista.
  */
 void ordenar_por_flutuacao(int* lista, int tamanho);

 /**
  * @brief Ordena os elementos da lista ba lista_ret, preservando a lista.
  *
  * Copia a lista para lista_ret, depois percorre a lista_ret fazendo trocas 
  * para a par, e repete as interações até que a lista_ret esteja ordenada.
  * 
  * @warning qualquer valor na lista_ret até tamanho será sobrescrito.
  * 
  * @note nessa implementação o corte é feito em uma lista a parte.
  * @note Ordenação por Flutuação funciona em O(n^2).
  * 
  * @param lista O endereço inicial da lista sequencial.
  * @param tamanho O tamanho da lista.
  * @param lista_ret o enedereço inicial da lista onde ordenar.
  */
 void ordenar_por_flutuacao_preservando_original(int* lista, int tamanho, int* lista_ret);
 
 #endif // ORDENAR_POR_FLUTUACAO_H