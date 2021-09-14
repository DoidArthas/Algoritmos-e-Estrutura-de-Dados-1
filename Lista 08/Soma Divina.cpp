#include <stdio.h>

int main()
{
    int n, l, c, z;

    scanf("%d", &n);

    int m1[n][n], m2[n][n];

    if(n == 0)
    {
        printf("Vazia\n");
    }else
    {
        for(z = 0; z < 3; z++)
        {
            for(l = 0; l < n; l++)
            {
                for(c = 0; c < n; c++)
                {
                    if(z == 0)
                    {
                        scanf("%d", &m1[l][c]);
                    }else if(z == 1)
                    {
                        scanf("%d", &m2[l][c]);

                        m1[l][c] = m1[l][c] + m2[l][c];
                    }else
                    {
                        printf("%d\n", m1[l][c]);
                    }
                }
            }
        }
    }
    
    return 0;
}