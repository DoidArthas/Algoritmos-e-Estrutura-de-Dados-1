#include <stdio.h>

#define tam 10

int main()
{
    int c, n[tam], l, tmp, menor;
    FILE *arq1;

    arq1 = fopen("vetor.dat", "rb");

    if(arq1 == NULL) printf("ERRO DE ABERTURA\n");
    else
    {
        for(c = 0; c < tam; c++) fscanf(arq1, "%d", &n[c]);

        fclose(arq1);
    }

    for(c = 0; c < tam; c++)
    {
        menor = c;
        for(l = (c + 1); l < tam; l++) if(n[l] < n[menor]) menor = l;

        tmp = n[c];
        n[c] = n[menor];
        n[menor] = tmp;
    }

    for(c = 0; c < tam; c++) printf("%d\n", n[c]);

    return 0;
}
/*
***********************************************************************
* Fazer um programa que leia o arquivo do exercício anterior, armazene*
* os valores em um vetor. Após realizar estas etapas, ordene e mostre *
* na tela os elementos do vetor em ordem crescente.                   *
***********************************************************************
*/
