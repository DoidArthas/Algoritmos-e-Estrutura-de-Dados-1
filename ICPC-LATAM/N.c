#include <stdio.h>

int main()
{
    int Y, N, c, t, k;

    scanf("%d%d", &Y, &N);

    int x[Y], a[N], p[N], f[N], i;

    for(c = 0; c < Y; c++) scanf("%d", &x[c]);
    for(c = 0; c < N; c++) scanf("%d%d%d", &a[c], &p[c], &f[c]);
    
    for(c = 0; c < N; c++)
    {
        i = 0;
        if(p[c] > x[a[c] - 1])
        {
            for(t = (a[c] - 1); t < (a[c] + f[c]); t++)
            {
                if(p[c] <= x[t]) i++;
            }
        }
        printf("%d\n", i);
    }

    return 0;
}