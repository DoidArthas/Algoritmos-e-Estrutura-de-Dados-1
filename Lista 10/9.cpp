#include <stdio.h>

int soma(int X[4][4]);

int main()
{
    int c, l, x[4][4];

    for(c = 0; c < 4; c++) for(l = 0; l < 4; l++) scanf("%d", &x[c][l]);

    c = soma(x);

    printf("%d\n", c);

    return 0;
}

int soma(int X[4][4])
{
    int c, l, s = 0;

    for(c = 0; c < 4; c++) for(l = 0; l < 4; l++) s = s + X[c][l];

    return s;
}

/*
***********************************************************************
* 
***********************************************************************
*/
