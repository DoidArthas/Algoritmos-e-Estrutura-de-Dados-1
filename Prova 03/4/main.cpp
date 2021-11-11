#include <stdio.h>
#include <stdlib.h>
#include "agua.h"

int main()
{
    AGUA *c1;
    int c = 2, op, cL = 0, id;
    char nome[50];
    float lAnterior, lAtual;

    while(c)
    {
        if(c == 2)
        {
            printf("0 - Liberar memoria e encerrar;\n");
            printf("1 - Cadastrar Cliente;\n");
            printf("2 - Liberar Memoria do Cliente;\n");
            printf("3 - Mostrar Dados do Cliente;\n");
            printf("4 - Status do Cliente;\nOpcao escolhida: ");
            scanf("%d", &op);
        }
        switch(op)
        {
            case 1:
                if(cL)
                {
                    printf("\n     Cliente ja cadastrado, libere a memoria para cadastrar outro!\n");
                }
                else
                {
                    printf("\n\n     ID do Cliente: "); scanf("%d", &id);
                    printf("\n\n     Nome do Cliente: "); scanf(" %[^\n]c", nome);
                    printf("\n\n     Leitura do Mes Anterior: "); scanf("%f", &lAnterior);
                    printf("\n\n     Leitura deste Mes: "); scanf("%f", &lAtual);

                    c1 = criar_cliente(id, nome, lAnterior, lAtual);
                    cL = 1;
                }
                break;
            case 2:
                if(cL)
                {
                    libera(c1);
                    printf("\n     Memoria Liberada com sucesso\n");
                    cL = 0;
                }
                else not_found();
                break;
            case 3:
                if(cL) acessa_dados(c1);
                else not_found();
                break;
            case 4:
                if(cL) printf("\n\n     Perfil de consumo: %d\n", devolve_status(c1));
                else not_found();
                break;
            default: c = 0; libera(c1);
        }
        printf("\n\n");
    }
    return 0;
}
