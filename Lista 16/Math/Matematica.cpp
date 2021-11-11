#include "Matematica.h"

int potencia(int x, int y)
{


    if(y == 0) return 1;
    else
    {
        int c, n = x;
        for(c = 1; c < y; c++) x = x * n;
        return x;
    }
}

int resto(int x, int n)
{
    return x % n;
}

float arredonda(float x)
{
    if((int)x >= x) return x;
    else return (float)(int)(x >=0 ? x + 0.5: x - 0.5);
}
