#include <stdio.h>

int positivo(int X[10], int Y[10]);

int main()
{
    int c, x[10], y[10];

    for(c = 0; c < 10; c++)
    {
        scanf("%d", &x[c]);
    }

    c = positivo(x, y);

    printf("Quantidade de elementos = %d\n", c);

    return 0;
}

int positivo(int X[10], int Y[10])
{
    int q = 0, c;

    for(c = 0; c < 10; c++)
    {
        if(X[c] > 0)
        {
            Y[q] = X[c];
            printf("Y[%d] = %d\n", q, Y[q]);
            q++;
        }
    }

    return q;
}