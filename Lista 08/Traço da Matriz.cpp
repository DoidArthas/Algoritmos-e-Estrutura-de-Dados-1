#include <stdio.h>

int main()
{
    int n, c, l;

    scanf("%d", &n);

    double m[n][n], t = 0;

    for(l = 0; l < n; l++) for(c = 0; c < n; c++)
    {
        scanf("%lf", &m[l][c]);
    }

    printf("tr(A) = ");

    for(l = 0; l < n; l++) for(c = 0; c < n; c++)
    {
        if(l == c)
        {
            printf("(%.2lf)", m[l][c]);
            t = t + m[l][c];

            if(l+1 < n) printf(" + ");
        }
    }

    printf(" = %.2lf\n", t);

    return 0;
}

/*
***********************************************************************
* 
***********************************************************************
*/
