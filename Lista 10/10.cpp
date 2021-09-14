#include <stdio.h>

int soma(int X[5][5]);

int d = 5;

int main()
{
    int c, l, x[5][5];

    for(c = 0; c < d; c++)
    {
        for(l = 0; l < d; l++)
        {
            scanf("%d", &x[c][l]);
        }
    }

    c = soma(x);

    printf("%d\n", c);

    return 0;
}

int soma(int X[5][5])
{
    int c, l, menor;

    menor = X[0][0];

    for(c = 0; c < d; c++)
    {
        for(l = 0; l < d; l++)
        {
            if(c + l + 2 == 6)
            {
                if(X[c][l] < menor)
                {
                    menor = X[c][l];
                }
            }
        }
    }

    return menor;
}