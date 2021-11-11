#include <stdio.h>

void mostraVetor(int v[], int f)
{
    if(f == 1)
    {
        printf("%d ", v[f - 1]);
        return;
    }
    else
    {
        mostraVetor(v, f - 1);
        printf("%d ", v[f - 1]);
    }
}

void insertionSort(int v[], int n)
{
    int c, atual, anterior;

    for (c = 1; c < n; c++)
    {
        atual = v[c];
        anterior = c - 1;

        while (anterior >= 0 && v[anterior] > atual)
        {
            v[anterior + 1] = v[anterior];
            anterior = anterior - 1;
        }
        v[anterior + 1] = atual;
        printf("\n");
        mostraVetor(v, 6);
    }
}

int main()
{
    int v[] = {5, 4, 10, 1, 6, 2};

    mostraVetor(v, 6);
    insertionSort(v, 6);
    printf("\n");
    mostraVetor(v, 6);

    return 0;
}