#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char clienteCod[50], clienteEmail[50];
    int clienteHorasAcesso;
    double clientePagamento;
}cliente;

int main()
{
    int n, c;

    scanf("%d", &n);

    cliente *ptr;
    ptr = (cliente *) malloc(n*sizeof(cliente));

    if(ptr == NULL) printf("Erro de alocação de memoria.\n");
    else
    {
        for(c = 0; c < n; c++)
        {
            printf("\nCodigo do cliente %d: ", c + 1);
            scanf(" %[^\n]c", ptr->clienteCod);
            printf("\nEmail do cliente %d: ", c + 1);
            scanf(" %[^\n]c", ptr->clienteEmail);
            printf("\nHoras de acesso do cliente %d: ", c + 1);
            scanf("%d", &ptr->clienteHorasAcesso);
        }

        for(c = 0; c < n; c++)
        {
            ptr->clientePagamento = 
            ptr->clienteHorasAcesso <= 20 ? 35.0:
            35.0 + (ptr->clienteHorasAcesso - 20) * 2.5;
            printf("\nCliente %s, do E-mail: %s\n", ptr->clienteCod, ptr->clienteEmail);
            printf("Total a pagar por %d horas: R$%.2lf\n", ptr->clienteHorasAcesso, ptr->clientePagamento);
        }
        free(ptr);
    }
    return 0;
}