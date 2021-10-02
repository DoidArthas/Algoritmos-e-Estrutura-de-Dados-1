#include <stdio.h>

void calculaSalario(float V, float s);

float st;

int main()
{
    float salario, venda;

    scanf("%f", &venda);
    scanf("%f", &salario);

    calculaSalario(venda, salario);

    printf("\nR$%.2f\n", st);

    return 0;
}

void calculaSalario(float V, float S)
{
    st = (V * 0.15) + S;

    return;
}

/*
***********************************************************************
* 
***********************************************************************
*/
