#include <stdio.h>

double soma(void);

int n;

int main()
{
    scanf("%d", &n);

    printf("%.2lf\n", soma());

    return 0;
}

double soma(void)
{
    int c, l, f = 0;
    double s = 0, sf = 1;

    for(c = 0; c < n; c++)
    {
        f++;
        for(l = 1; l <= f; l++)
        {
            sf = 1.0/l * sf;
        }
        s = sf + s;
        sf = 1;
    }
    s = s + 1;

    return s;
}