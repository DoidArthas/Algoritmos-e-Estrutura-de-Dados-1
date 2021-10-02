#include <stdio.h>
#include <string.h>

struct aluno
{
    char nome[50], ra[50];
    float n1, n2;
};

int main()
{
    int c, q = 25; 
    struct aluno a[q];
    float soma;

    for(c = 0; c < q; c++)
    {
        scanf(" %[^\n]c", a[c].ra);
        scanf(" %[^\n]c", a[c].nome);
        scanf("%f%f", &a[c].n1, &a[c].n2);
    }

    for(c = 0; c < q; c++)
    {
        soma = a[c].n1 + a[c].n2;
        printf("\n%s\n%s\n%.2f + %.2f = %2.f, ", a[c].ra, a[c].nome, a[c].n1, a[c].n2, soma);
        
        if(soma >= 6) printf("Aprovado\n");
        else printf("Reprovado\n");
    }

    return 0;
}

/*
***********************************************************************
* 
***********************************************************************
*/
