#include <stdio.h>

int bin1(int n)
{
    int N = 0;

    if(n < 0)
    {
        printf("-");
        n = n * -1;
    }
    if(n == 1)
    {
        printf("%d", 1);
        return 1;
    } 
    else
    {
        bin1(n / 2);
        printf("%d", n % 2);
        return 1;
    }
}

int main()
{
    int n;
    
    scanf("%d", &n);

    bin1(n);

    return 0;
}

/*
***********************************************************************
* Escreva um programa para converter um número decimal para a forma   *
* binária. Uma maneira é dividir o número decimal sucessivamente por e*
* pegar o resto da i-ésima divisão, da direita para a esquerda. Por   *
* exemplo, para o número 12 temos:                                    *
* 12/2 = 6, resto 0;                                                  *
* 6/2 = 3, resto 0;                                                   *
* 3/2 = 1, resto 1;                                                   *
* 1/2 = 0, resto 1;                                                   *
* Portanto o número 12 em binário é: 1100.                            *
*                                                                     *
* |Exemplos de Entrada | Exemplos de Saída |                          *
* |12                  |1100               |                          *
* |                    |                   |                          *
* |--------------------|-------------------|                          *
* |124                 |1111100            |                          *
* |                    |                   |                          *
* |--------------------|-------------------|                          *
* |-50                 |-110010            |                          *
* |                    |                   |                          *
* |--------------------|-------------------|                          *
***********************************************************************
*/
