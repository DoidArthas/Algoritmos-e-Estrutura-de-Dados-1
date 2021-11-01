#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2, *ptr;

    scanf("%f%f", &n1, &n2);

    ptr = (float *) malloc(sizeof(float));

    if(ptr == NULL) printf("Erro de alocação de memória\n");
    else
    {
        *ptr = n1 + n2;

        printf("%f\n", *ptr);

        free(ptr);
    }
    return 0;
}

/*
***********************************************************************
* Desenvolva um programa que utilize duas variáveis do tipo float,    *
* sendo seus valores preenchidos pelo usuário. Em seguida, guarde o   *
* valor da soma em memória alocada dinamicamente. Por fim, exiba o    *
* valor da soma                                                       *
***********************************************************************
*/
