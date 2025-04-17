/**
 * @file ordenar_por_acaso.h
 * @brief Definições de Ordenações por Acaso
 *
 * Este arquivo contém a Definição de Ordenações por Acaso (Case Sort, Bogo Sort ou Estou com Sort) para.
 * listas sequencias de inteiros.
 * 
 * @author Gustavo_Bueno_AdB
 * @date 15/04/2025
 * @version 1.0
 */

 #ifndef ORDENAR_POR_ACASO_H
 #define ORDENAR_POR_ACASO_H
 
 /**
  * @brief Ordena a lista passada por referencia em ordem crescente.
  *
  * Ordena, ou tenta ordenar uma lista randomicamente trocando 
  * cada elemento para uma posição aleatoria do vetor até que
  * a lista esteja ordenada.
  * 
  * @note Ordenação por Acaso funciona em O(n * n!).
  * @note Se você estiver se sentindo sortudo, ordenação por acaso pode funcionar em O(1).
  * 
  * @warning essa funcao pode ocasionar um LOOP INFINITO devido a implementação de numeros pseudoaleatorios.
  * 
  * @param lista O endereço inicial da lista sequencial.
  * @param tamanho O tamanho da lista.
  */
 void ordenar_por_acaso(int* lista, int tamanho);

 /**
  * @brief Ordena os elementos da lista ba lista_ret, preservando a lista.
  *
  * Ordena, ou tenta ordenar uma lista randomicamente trocando 
  * cada elemento para uma posição aleatoria do vetor até que
  * a lista esteja ordenada.
  * 
  * @note Ordenação por Acaso funciona em O(n * n!).
  * @note Se você estiver se sentindo sortudo, ordenação por acaso pode funcionar em O(1).
  * 
  * @warning essa funcao pode ocasionar um LOOP INFINITO devido a implementação de numeros pseudoaleatorios.
  * 
  * @warning qualquer valor na lista_ret até tamanho será sobrescrito.
  * 
  * @param lista O endereço inicial da lista sequencial.
  * @param tamanho O tamanho da lista.
  * @param lista_ret o enedereço inicial da lista onde ordenar.
  */
 void ordenar_por_acaso_preservando_original(int* lista, int tamanho, int* lista_ret);
 
 #endif // ORDENAR_POR_ACASO_H