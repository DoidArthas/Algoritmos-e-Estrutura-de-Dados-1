#include <stdio.h>
#include <stdlib.h>
#include "aluno.h"

int main()
{
    ALUNO *a1, *a2;
    int matricula;

    a1 = criaAluno(331, 5.5, 8.9, 3.2);
    a2 = criaAluno(829, 8.7, 9.1, 5.3);

    printf("Matricula do primeiro aluno: %d\n", retornaMatricula(a1));
    printf("Nota 1 do primeiro aluno: %0.2f\n", retornaNota1(a1));
    printf("Nota 2 do primeiro aluno: %0.2f\n", retornaNota2(a1));
    printf("Nota 3 do primeiro aluno: %0.2f\n", retornaNota3(a1));
    printf("Media do primeiro aluno: %0.2f\n", retornaMedia(a1));
    printf("Situacao do primeiro aluno: %s\n\n", retornaSituacao(a1));

    printf("Matricula do segundo aluno: %d\n", retornaMatricula(a2));
    printf("Nota 1 do segundo aluno: %0.2f\n", retornaNota1(a2));
    printf("Nota 2 do segundo aluno: %0.2f\n", retornaNota2(a2));
    printf("Nota 3 do segundo aluno: %0.2f\n", retornaNota3(a2));
    printf("Media do segundo aluno: %0.2f\n", retornaMedia(a2));
    printf("Situacao do segundo aluno: %s\n\n", retornaSituacao(a2));

    liberaMemoria(a1);
    liberaMemoria(a2);

    return 0;
}
