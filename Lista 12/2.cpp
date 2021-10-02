#include <stdio.h>

double powint(double b, int e)
{
    if(e == 0) return 1;
    else if(e > 0) return b * powint(b, e - 1);
    else return (1.0 / powint(b, e * (-1) ));
}

int main()
{
    int e = 0;
    double b = 0;

    scanf("%lf%d", &b, &e);

    printf("%.5lf", powint(b, e));

    return 0;
}

/*
***********************************************************************
* Desenvolva um programa que receba dois valores e calcule o resultado*
* da potência do primeiro elevado ao segundo, usando recursividade    *
* (Potência apenas com número inteiro).                               *
*                                                                     *
* |Exemplos de Entrada | Exemplos de Saída |                          *
* |1                   |1.00000            |                          *
* |1                   |                   |                          *
* |                    |                   |                          *
* |--------------------|-------------------|                          *
* |10                  |1.00000            |                          *
* |0                   |                   |                          *
* |                    |                   |                          *
* |--------------------|-------------------|                          *
* |10                  |100.00000          |                          *
* |2                   |                   |                          *
* |                    |                   |                          *
* |--------------------|-------------------|                          *
* |10                  |0.10000            |                          *
* |-1                  |                   |                          *
* |                    |                   |                          *
* |--------------------|-------------------|                          *
***********************************************************************
*/
