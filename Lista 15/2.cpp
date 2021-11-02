#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char matricula[50], sobrenome[50];
    int anoNasc;
}aluno;

int main()
{
    int n, c;

    scanf("%d", &n);

    aluno *ptr;
    ptr = (aluno *) malloc(n*sizeof(aluno));

    if(ptr == NULL) printf("Erro de alocação de memoria.\n");
    else
    {
        for(c = 0; c < n; c++)
        {
            printf("\nMatricula do aluno %d: ", c + 1);
            scanf("%s", &ptr->matricula);
            printf("\nSobrenome do aluno %d: ", c + 1);
            scanf("%s", &ptr->sobrenome);
            printf("\nAno de Nascimento do aluno %d: ", c + 1);
            scanf("%d", &ptr->anoNasc);
        }

        for(c = 0; c < n; c++)
        {
            printf("\nMatricula do aluno %d: %s", c + 1, ptr->matricula);
            printf("\nSobrenome do aluno %d: %s", c + 1, ptr->sobrenome);
            printf("\nAno de Nascimento do aluno %d: %d", c + 1, ptr->anoNasc);
            printf("\n");
        }
        free(ptr);
    }
    return 0;
}