/**
 * @file busca_binaria.h
 * @brief Definições da Busca Binária em int, float e double.
 *
 * Este arquivo contém a Definição da Busca Binária para int double e float.
 * 
 * @author Gustavo_Bueno_AdB
 * @date 09/04/2025
 * @version 1.0
 */

#ifndef BUSCA_BINARIA_H
#define BUSCA_BINARIA_H

/**
 * @brief Retorna o indicie do elemento procurado na lista.
 *
 * Utiliza da Busca Binária para encontra um valor procurado em uma lista e 
 * retornar o indicie de sua posicao em O(log n), ou -1 caso o valor procurado
 * não esteja na lista.
 *
 * @warning Funciona apenas com listas ja ordenadas.
 * 
 * @param lista O endereço inicial da lista sequencial.
 * @param tamanho O tamanho da lista.
 * @param procurado O valor procurado na lista.
 * 
 * @return int O indice do elemento procurado ou -1 caso nao esteja na lista.
 */
int busca_binaria_int(int* lista, int tamanho, int procurado);

/**
 * @brief Retorna o indicie do elemento procurado na lista.
 *
 * Utiliza da Busca Binária para encontra um valor procurado em uma lista e 
 * retornar o indicie de sua posicao em O(log n), ou -1 caso o valor procurado
 * não esteja na lista.
 *
 * @warning Funciona apenas com listas ja ordenadas.
 * 
 * @param lista O endereço inicial da lista sequencial.
 * @param tamanho O tamanho da lista.
 * @param procurado O valor procurado na lista.
 * 
 * @return int O indice do elemento procurado ou -1 caso nao esteja na lista.
 */
int busca_binaria_float(float* lista, int tamanho, float procurado);

/**
 * @brief Retorna o indicie do elemento procurado na lista.
 *
 * Utiliza da Busca Binária para encontra um valor procurado em uma lista e 
 * retornar o indicie de sua posicao em O(log n), ou -1 caso o valor procurado
 * não esteja na lista.
 *
 * @warning Funciona apenas com listas ja ordenadas.
 * 
 * @param lista O endereço inicial da lista sequencial.
 * @param tamanho O tamanho da lista.
 * @param procurado O valor procurado na lista.
 * 
 * @return int O indice do elemento procurado ou -1 caso nao esteja na lista.
 */
int busca_binaria_double(double* lista, int tamanho, double procurado);

#endif