#include <stdio.h>

int main()
{
    double n, x;

    scanf("%lf%lf", &n, &x);

    printf("%.2lf\n", (x / (n + 2)));

    return 0;
}