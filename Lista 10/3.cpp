#include <stdio.h>

int numeros(int n);

int main()
{
    int n1;

    scanf("%d", &n1);

    printf("%d", numeros(n1));

    return 0;
}

int numeros(int n)
{
    int c, nn = 0;
    
    for(c = 1; c <= n; c++)
    {
        nn = nn + c;
    }

    return nn;
}