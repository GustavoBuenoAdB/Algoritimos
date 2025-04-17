/**
 * @file ordenar_por_combinacao.h
 * @brief Definições de Ordenações por Combinação
 *
 * Este arquivo contém a Definição de Ordenações por Combinação(ou Comb Sort) para 
 * listas sequencias de inteiros.
 * 
 * @author Gustavo_Bueno_AdB
 * @date 15/04/2025
 * @version 1.0
 */

 #ifndef ORDENAR_POR_COMBINACAO_H
 #define ORDENAR_POR_COMBINACAO_H
 
 #define NAO_INICIALIZADO 0.0f

 /**
  * @brief Ordena a lista passada por referencia em ordem crescente.
  *
  * Percorre a lista fazendo trocas para a par em um salto que é reduzido a cada 
  * interacao dependendo do fator de reducao (que é definido como padrao para 1.3), 
  * e repete as interações até que a lista esteja ordenada. acelerando o processo de 
  * levar valores muito grandes do começo ao fim da lista e vice versa.
  * 
  * @note Ordenação por Combinação funciona em O(n^2).
  * 
  * @warning usar um fator de redução ruim pode resultar na não ordenação completa da lista.
  * 
  * @param lista O endereço inicial da lista sequencial.
  * @param tamanho O tamanho da lista.
  * @param reducao o fator de reducao, entre [1 - 2] ou NAO_INICIALIZADO.
  */
 void ordenar_por_combinacao(int* lista, int tamanho, float reducao);

 /**
  * @brief Ordena os elementos da lista ba lista_ret, preservando a lista.
  *
  * Percorre a lista fazendo trocas para a par em um salto que é reduzido a cada 
  * interacao dependendo do fator de reducao (que é definido como padrao para 1.3), 
  * e repete as interações até que a lista esteja ordenada. acelerando o processo de 
  * levar valores muito grandes do começo ao fim da lista e vice versa.
  * 
  * @note Ordenação por Combinação funciona em O(n^2).
  * 
  * @warning usar um fator de redução ruim pode resultar na não ordenação completa da lista.
  * @warning qualquer valor na lista_ret até tamanho será sobrescrito.
  * 
  * @param lista O endereço inicial da lista sequencial.
  * @param tamanho O tamanho da lista.
  * @param reducao o fator de reducao, entre [1 - 2] ou NAO_INICIALIZADO.
  * @param lista_ret o enedereço inicial da lista onde ordenar.
  */
 void ordenar_por_combinacao_preservando_original(int* lista, int tamanho, float reducao, int* lista_ret);
 
 #endif // ORDENAR_POR_COMBINACAO_H