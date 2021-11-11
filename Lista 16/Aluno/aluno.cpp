#include "aluno.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct ALUNO
{
    int matricula;
    float n1, n2, n3;
}aluno;

aluno* criaAluno(int matricula, float n1, float n2, float n3)
{
    aluno *ptr;
    ptr = (aluno *) malloc(sizeof(aluno));

    if(ptr == NULL) printf("Erro de memória\n");

    ptr->matricula = matricula;
    ptr->n1 = n1;
    ptr->n2 = n2;
    ptr->n3 = n3;

    return ptr;
}

int retornaMatricula(aluno *a)
{
    int m;
    m = a->matricula;

    return m;
}

float retornaNota1(aluno *a)
{
    float m = a->n1;
    return m;
}
float retornaNota2(aluno *a)
{
    float m = a->n2;
    return m;
}
float retornaNota3(aluno *a)
{
    float m = a->n3;
    return m;
}
float retornaMedia(aluno *a)
{
    return (a->n1 + a->n2 + a->n3) / 3;
}
const char *retornaSituacao(aluno *a)
{
    return retornaMedia(a) >= 6.0 ? "Aprovado": "Reprovado";
}
void liberaMemoria(aluno *a) {free(a);}

