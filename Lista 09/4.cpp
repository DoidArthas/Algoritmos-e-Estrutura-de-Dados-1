#include <stdio.h>
#include <string.h>

struct cliente
{
    char id[50], endereco[100], email[50];
    double consumo;
};

int main()
{
    int c, q;

    printf("Numero de Clientes: ");
    scanf("%d", &q);
    printf("\n");

    struct cliente cl[q];

    for(c = 0; c < q; c++)
    {
        scanf(" %[^\n]c", cl[c].id);
        scanf(" %[^\n]c", cl[c].endereco);
        scanf(" %[^\n]c", cl[c].email);
        scanf("%lf", &cl[c].consumo);
        printf("\n");
    }

    for(c = 0; c < q; c++)
    {
        printf("\n");
        printf("Cliente       : %s\n", cl[c].id);
        printf("Endereco      : %s\n", cl[c].endereco);
        printf("Email         : %s\n", cl[c].email);
        printf("Consumo       : %.2lf\n", cl[c].consumo); 
        printf("Valor a pagar : R$");

        if(cl[c].consumo > 15)
        {
            printf("%.2lf\n", cl[c].consumo * 10.5);
        }
        else if(cl[c].consumo > 10)
        {
            printf("%.2lf\n", cl[c].consumo * 6.94);
        }
        else if(cl[c].consumo > 5)
        {
            printf("%.2lf\n", cl[c].consumo * 3.4);
        }
        else
        {
            printf("%.2lf\n", cl[c].consumo * 1.34);
        }
    }

    return 0;
}