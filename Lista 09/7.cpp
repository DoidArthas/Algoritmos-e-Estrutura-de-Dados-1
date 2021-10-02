#include <stdio.h>
#include <string.h>

struct aluno
{
    char nome[50], ra[50];
    float m;
};

int main()
{
    int c, q = 10; 
    struct aluno a[q];
    float soma = 0, l = 0;

    for(c = 0; c < q; c++)
    {
        scanf(" %[^\n]c", a[c].ra);
        scanf(" %[^\n]c", a[c].nome);
        scanf("%f", &a[c].m);
        soma = soma + a[c].m;

        if(a[c].nome[0] == 'L') l++;
    }

    soma = soma / q;

    printf("\n\nMEDIA DA TURMA: %.2f", soma);
    printf("\nPorcentagem de alunos que tem nome comecado em L: ");        
    printf("%.2f\n\n", (100 * l) / q);

    for(c = 0; c < q; c++) if(a[c].m >= 6)
    {
        printf("%s: Aprovado com Media %.2f\n", a[c].nome, a[c].m);
    }

    return 0;
}

/*
***********************************************************************
* 
***********************************************************************
*/
