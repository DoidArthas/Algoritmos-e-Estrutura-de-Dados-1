#include <stdio.h>

#define vet 5

void imprimeInt(int *pV, int v)
{
    int c;

    for(c = 0; c < v; c++)
    {
        printf("%d ", *pV);
        pV++;
    }
}

void imprimeFloat(float *pV, int v)
{
    int c;

    for(c = 0; c < v; c++)
    {
        printf("%.2f ", *pV);
        pV++;
    }
}

int main()
{
    int intVet[vet], c;
    float floatVet[vet];

    for(c = 0; c < vet; c++) scanf("%d", &intVet[c]);

    for(c = 0; c < vet; c++) scanf("%f", &floatVet[c]);

    imprimeInt(intVet, vet);
    imprimeFloat(floatVet, vet);

    return 0;
}

/*
***********************************************************************
* Após o preenchimento de um vetor, crie função(ões) para imprimir os *
* elementos de vetor. Para percorrer o vetor, não utilize índices, use*
* apenas aritmética de ponteiros. Faça isto para os vetores de        *
* inteiros e de reais.                                                *
***********************************************************************
*/
