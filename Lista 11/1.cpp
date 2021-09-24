#include <stdio.h>

#define tam 10

int main()
{
    int c, n[tam];
    FILE *arq1;

    for(c = 0; c < tam; c++)
    {
        scanf("%d", &n[c]);
    }

    arq1 = fopen("vetor.dat", "wb");

    if(arq1 == NULL) printf("ERRO DE ABERTURA\n");
    else
    {
        for(c = 0; c < tam; c++)
        {
            fprintf(arq1, "%d\n", n[c]);
        }
        fclose(arq1);
    }

    return 0;
}
/*
***********************************************************************
* Fazer um programa que preencha um vetor de 10 posições e guarde os  *
* valores em um arquivo.                                              *
***********************************************************************
*/
