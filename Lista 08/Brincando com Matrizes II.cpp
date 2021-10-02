#include <stdio.h>

int main()
{
    int m[3][3], l, c, menor, delta, soma = 0, p = 0;
    double media;

    for(l = 0; l < 3; l++)
    {
        for(c = 0; c < 3; c++)
        {
            scanf("%d", &m[l][c]);

            if(m[l][c] > 0)
            {
                p++;
                media = media + m[l][c];
            }
            
            if(l == 0 && c == 0) menor = m[l][c];
            else if(m[l][c] < menor) menor = m[l][c];

            if(l != c) soma = soma + m[l][c];
        }
    }

    if(menor % 2 == 0) delta = 1;
    else delta = 0;

    printf("%.2lf %d %d %d\n", media / p, menor, delta, soma);

    return 0;
}

/*
***********************************************************************
* 
***********************************************************************
*/
