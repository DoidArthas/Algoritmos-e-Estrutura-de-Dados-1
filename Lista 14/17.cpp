#include <stdio.h>

void trocaValores(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}

int main()
{
    int a, b;

    scanf("%d%d", &a, &b);

    trocaValores(&a, &b);

    printf("%d\n%d", a, b);

    return 0;
}

/*
***********************************************************************
* Desenvolva uma função que leia dois valores na função principal,    *
* passe-os por referência para uma função e realize a troca de        *
* variáveis. A função não retorna valor, mostre os resultados no      *
* programa principal.                                                 *
*                                                                     *
* |Exemplos de Entrada | Exemplos de Saída|                           *
* |5                   |8                 |                           *
* |8                   |5                 |                           *
* |--------------------|------------------|                           *
***********************************************************************
*/
