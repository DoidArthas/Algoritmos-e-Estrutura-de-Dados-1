#include <stdio.h>

int maior(int v[], int i)
{
    int m = 0;
    if(i == 1) return v[0];
    else
    {
        m = maior(v, i - 1);

        if(m > v[i-1]) return m;
        else return v[i-1];
    }
}

int main()
{
    int i = 5, c;
    int v[i];

    for(c = 0; c < i; c++)
    {
        scanf("%d", &v[c]);
    }

    printf("\n%d\n", maior(v, i));

    return 0;
}

/*
***********************************************************************
* Faça um programa que preencha um vetor de 5 elementos e determine o *
* maior elemento de modo recursivo.                                   *
*                                                                     *
* |Exemplos de Entrada | Exemplos de Saída |                          *
* |2 3 4 5 6           |6                  |                          *
* |                    |                   |                          *
* |--------------------|-------------------|                          *
* |56 78 3 -6 8        |78                 |                          *
* |                    |                   |                          *
* |--------------------|-------------------|                          *
***********************************************************************
*/
