#include <stdio.h>
#include <string.h>

struct cliente
{
    char id[50], endereco[100], email[50], tarja;
    double consumo;
};

int main()
{
    int c, q;
    printf("Numero de Clientes: ");
    scanf("%d", &q);
    struct cliente cl[q];

    for(c = 0; c < q; c++)
    {
        scanf(" %[^\n]c", cl[c].id);
        scanf(" %[^\n]c", cl[c].endereco);
        scanf(" %[^\n]c", cl[c].email);
        scanf("%lf", &cl[c].consumo);
        printf("\n");

        if(cl[c].consumo > 15) cl[c].tarja = 'V';
        else if(cl[c].consumo > 10) cl[c].tarja = 'L';
        else if(cl[c].consumo > 5) cl[c].tarja = 'A';
        else cl[c].tarja = 'E';
    }

    for(c = 0; c < q; c++)
    {
        printf("\n");
        printf("Cliente                  : %s\n", cl[c].id);
        printf("Endereco                 : %s\n", cl[c].endereco);
        printf("Email                    : %s\n", cl[c].email);
        printf("Consumo                  : %.2lf\n", cl[c].consumo); 
        printf("Valor a pagar            : R$");
        
        switch(cl[c].tarja)
        {
            case 'V':
                printf("%.2lf\n", cl[c].consumo * 10.5);
                printf("Tarja                    : Vermelha\n");
                printf("Percentual acima de 15   : %.1lf%%\n", (100 * (cl[c].consumo - 15)) / cl[c].consumo );
                break;
            case 'L':
                printf("%.2lf\n", cl[c].consumo * 6.94);
                printf("Tarja                    : Laranja\n"); 
                break;
            case 'A':
                printf("%.2lf\n", cl[c].consumo * 3.4);
                printf("Tarja                    : Amarela\n"); 
                break;
            case 'E':
                printf("%.2lf\n", cl[c].consumo * 1.34);
                printf("Tarja                    : Verde\n"); 
                break;           
        }
        printf("\n");
    }

    return 0;
}

/*
***********************************************************************
* 
***********************************************************************
*/
