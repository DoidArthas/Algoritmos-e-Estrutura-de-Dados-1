#include <stdio.h>

int somaV(int v[], int i)
{
    if(i == 0) return v[0];
    else return v[i] + somaV(v, i - 1);
}

int main()
{
    int i = 6, c;
    int v[i];

    for(c = 0; c < i; c++)
    {
        scanf("%d", &v[c]);
    }

    printf("\n%d\n", somaV(v, i - 1));

    return 0;
}

/*
***********************************************************************
* Elabore um programa que preencha um vetor de 6 elementos e imprima o*
* resultado do somatório dos elementos desse vetor, utilizando uma    *
* função recursiva                                                    *
*                                                                     *
* |Exemplos de Entrada | Exemplos de Saída |                          *
* |1 2 3 4 5 6         |21                 |                          *
* |                    |                   |                          *
* |--------------------|-------------------|                          *
* |56 78 3 -6 8 15     |154                |                          *
* |                    |                   |                          *
* |--------------------|-------------------|                          *
***********************************************************************
*/
