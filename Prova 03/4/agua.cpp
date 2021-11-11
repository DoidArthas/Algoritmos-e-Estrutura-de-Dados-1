#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "agua.h"

typedef struct agua
{
    int id;
    char nome[50];
    float leituraAnterior, leituraAtual;
}AGUA;

AGUA *criar_cliente(int id, char nome[], float leituraAnterior, float leituraAtual)
{
    AGUA *ptr;
    ptr = (AGUA *) malloc(sizeof(AGUA));

    if(ptr == NULL) printf("Erro de memoria\n");

    ptr->id = id;
    strcpy(ptr->nome, nome);
    ptr->leituraAnterior = leituraAnterior;
    ptr->leituraAtual = leituraAtual;

    return ptr;
}

void libera(AGUA *a)
{
    free(a);
}

void acessa_dados(AGUA *a)
{
    printf("\n     Dados do cliente de ID %d:\n", a->id);
    printf("     Nome: %s\n", a->nome);
    printf("     Leitura do Mes Anterior: %.2f\n", a->leituraAnterior);
    printf("     Leitura do Mes Atual: %.2f\n", a->leituraAtual);
}

int devolve_status(AGUA *a)
{
    if(a->leituraAnterior == a->leituraAtual) return 2;

    float percent;
    percent = (a->leituraAtual * 100) /a->leituraAnterior;

    if(percent < 100 && (100 - percent) >= 10) return 1;
    else if(percent > 100 && (percent - 100) >= 10) return 3;

    return 2;
}

void not_found()
{
    printf("\n     Cliente nao cadastrado, realize o cadastro!\n");
}
