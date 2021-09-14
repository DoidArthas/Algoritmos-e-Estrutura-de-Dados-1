#include <stdio.h>

int primo(int N);

int main()
{
    int n;

    scanf("%d", &n);

    n = primo(n);

    if(n <= 1)
    {
        printf("Eh primo\n");
    }
    else
    {
        printf("Nao eh primo\n");
    }

    return 0;
}

int primo(int N)
{
    int c, q = 0;

    for(c = 1; c < N; c++)
    {
        if(N % c == 0)
        {
            q++;
        }
    }

    return q;
}