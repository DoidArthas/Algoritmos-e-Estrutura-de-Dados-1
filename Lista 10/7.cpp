#include <stdio.h>

void fatorial(int A[10]);

int B[10];

int main()
{
    int c, N[10];

    for(c = 0; c < 10; c++) scanf("%d", &N[c]);

    fatorial(N);

    for(c = 0; c < 10; c++) printf("%d ", B[c]);

    return 0;
}

void fatorial(int A[10])
{
    int c, l;

    for(c = 0; c < 10; c++)
    {
        B[c] = 1;
        for(l = 1; l <= A[c]; l++) B[c] = B[c] * l;
    }

    return;
}

/*
***********************************************************************
* 
***********************************************************************
*/
