#include "busca_binaria.h"
#include <stdio.h>

int main()
{
    float num[11] = {0.0f,2.0f,4.0f,6.0f,8.0f,10.0f,12.0f,14.0f,16.0f,18.0f,20.0f};

    printf("%d\n", busca_binaria_float(num, 11, 12.0f));
    printf("%d\n", busca_binaria_float(num, 11, 1.0f));
    printf("%d\n", busca_binaria_float(num, 11, 20.0f));
    printf("%d\n", busca_binaria_float(num, 11, 0.0f));   
    
}
