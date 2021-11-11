#include <stdio.h>

void maxMin(int *v, int N, int *maximo, int *minimo)
{   
    int c;

    for(c = 0; c < N; c++)
    {
        if(c == 0) *minimo = *maximo = v[c];

        if(v[c] < *minimo) *minimo = v[c];
        if(v[c] > *maximo) *maximo = v[c];
    }

    printf("Maximo = %d\nMinimo = %d\n", *maximo, *minimo);
}

#define VET 10

int main()
{
    int maximo, minimo, v[VET] = {7, 58, 96, 32, -5, -27, 5, 1, 3, -2};

    maxMin(v, VET, &maximo, &minimo);

    return 0;
}