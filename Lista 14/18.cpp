#include <stdio.h>

void calculadora(float *a, char *op, float *b, float *c)
{
    switch(*op)
    {
        case '+': *c = *a + *b; break;
        case '-': *c = *a - *b; break;
        case '*': *c = *a * *b; break;
        case '/': *c = *a / *b; break;
    }
}

int main()
{
    float a, b, c = 0;
    char op;

    scanf("%f %c %f", &a, &op, &b);

    calculadora(&a, &op, &b, &c);
    printf("%.2f", c);

    return 0;
}

/*
***********************************************************************
* Implementar uma calculadora (+ - * /) que leia os valores na função *
* principal. Passe os parâmetros por referência e utilize apenas      *
* funções sem retorno.                                                *
*                                                                     *
* |Exemplos de Entrada | Exemplos de Saída|                           *
* |10 + 1              |11.00             |                           *
* |                    |                  |                           *
* |--------------------|------------------|                           *
* |11 - 1              |10.00             |                           *
* |                    |                  |                           *
* |--------------------|------------------|                           *
* |10 / 5              |2.00              |                           *
* |                    |                  |                           *
* |--------------------|------------------|                           *
* |10 * 5              |50.00             |                           *
* |                    |                  |                           *
***********************************************************************
*/
