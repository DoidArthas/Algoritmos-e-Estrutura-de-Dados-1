#include <stdio.h>

int main()
{
    int T, D, M, c = 0, r = 0, k = 0;

    scanf("%d%d%d", &T, &D, &M);

    int y[M + 1];
    for(c = 0; c < M; c++) scanf("%d", &y[c]);
    y[M] = D;

    for(c = M; c >= 0; c--)
    {
        k = y[c + 1] - y[c];
        if(k >= T) r = 1;
    }
    if(T > D) r = 0;
    
    /*for(c = 0; c < M; c++)
    {
        k = k + T - 1;
        printf("\n'k = %d  y[c] = %d  k > y[c] = %d'", k, y[c], k > y[c]);
        if(k < y[c]) r = 0;
    }*/

    if(r == 1) printf("Y\n");
    else printf("N\n");

    return 0;
}