#include <stdio.h>
#include <math.h>

void maiorN(float n1, float n2, float n3);

int main()
{
    float num1, num2, num3;

    scanf("%f", &num1);
    scanf("%f", &num2);
    scanf("%f", &num3);

    maiorN(num1, num2, num3);

    return 0;
}

void maiorN(float n1, float n2, float n3)
{
    n1 = (n1 + n2 + abs(n1 - n2)) / 2;
    n1 = (n1 + n3 + abs(n1 - n3)) / 2;

    printf("%.0f eh o maior\n", n1);

    return;
}

/*
***********************************************************************
* 
***********************************************************************
*/
