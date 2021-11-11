#include <stdio.h>
#define VET 10

void inverteVetor(int v[], int i, int f)
{
    if(i == f) return;
    else if(i == (f - 1)) return;
    else
    {
        inverteVetor(v, i + 1, f - 1);
        int temp;
        temp = v[i];
        v[i] = v[f - 1];
        v[f - 1] = temp;
        return;
    }
}

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

int main()
{
    int v[VET] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    mostraVetor(v, VET);
    inverteVetor(v, 0, VET);
    printf("\n");
    mostraVetor(v, VET);

    return 0;
}