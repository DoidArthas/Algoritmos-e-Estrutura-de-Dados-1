#include <stdio.h>

int main()
{
    int i = 150, *pi = &i, **ppi = &pi;
    float f = 15.69, *pf = &f, **ppf = &pf;

    f = i;

    printf("%d", i);
}