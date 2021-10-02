#include <stdio.h>

void soma(int n);

int main()
{
    int n1;

    scanf("%d", &n1);

    soma(n1);

    return 0;
}

void soma(int n)
{
    int c;
    float somaN = 0;

    for(c = 1; c <= n; c++)
    {
        somaN = ((float(c) * float(c) + 1) / (float(c) + 3)) + somaN;
    }

    printf("%.2f\n",somaN);

    return;
}

/*
***********************************************************************
* 
***********************************************************************
*/
