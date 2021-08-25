#include <stdio.h>

int main()
{
    int p, e, c, l, v = 0;

    scanf("%d", &p);
    scanf("%d", &e);

    int votos[e][p];

    for(l = 0; l < e; l++)
    {
        for(c = 0; c < p; c++)
        {
            scanf("%d", &votos[l][c]);
        }
    }

    for(c = 0; c < p; c++)
    {
        v = 0;
        for(l = 0; l < e; l++)
        {
            if(votos[l][c] == 1)
            {
                v++;
            }
        }

        printf("Princesa %d: %d voto(s)\n",c+1, v);

    }

    return 0;
}