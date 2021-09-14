#include <stdio.h>

void menor(void);

int main()
{
    menor();

    return 0;
}

void menor(void)
{
    int c, n[5], menor, maior;

    scanf("%d", &n[0]);
    menor = n[0];
    maior = n[0];

    for(c = 1; c < 5; c++)
    {
       scanf("%d", &n[c]);
       if(n[c] < menor)
       {
           menor = n[c];
       }
       else if(n[c] > maior)
       {
           maior = n[c];
       }
    }

    printf("Maior = %d\nMenor = %d\n", maior, menor);

    return;
}