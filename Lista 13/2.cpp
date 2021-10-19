#include <stdio.h>

#define vet 6

void mostraVetor(int v[], int n)
{
    int c;

    for(c = 0; c < n; c++) printf("%d ", v[c]);
}

void bubbleSort(int v[], int n)
{
    int c, l, tmp;

    for(c = 0; c < n - 1; c++) for(l = 0; l < n - c; l++)
    {
        if(v[l] > v[l + 1] && l < n - 1)
        {
            tmp = v[l];
            v[l] = v[l + 1];
            v[l + 1] = tmp;
        }
        mostraVetor(v, n);
        printf("\n");
    }
}

int main()
{
    int v[vet] = {15, 7, 1, 35, 32, 3};

    printf("Vetor Original: ");
    mostraVetor(v, vet);
    printf("\n\n");

    bubbleSort(v, vet);

    printf("\nNovo Vetor: ");
    mostraVetor(v, vet);

    printf("\n");

    return 0;
}