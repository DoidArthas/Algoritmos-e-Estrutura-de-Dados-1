#include <stdio.h>
#include <string.h>

struct cliente
{
    char nome[50], telefone[15]; 
    int dia, mes;
};

int main()
{
    int c, l, d, q = 2;
    struct cliente cl[q];

    for(c = 0; c < q; c++)
    {
        scanf(" %[^\n]c", cl[c].nome);
        scanf(" %[^\n]c", cl[c].telefone);
        scanf("%d", &cl[c].dia);
        scanf("%d", &cl[c].mes);
        printf("\n");
    }

    for(c = 0; c < 12; c++)
    {
        switch(c)
        {
            case 0: printf("\nJaneiro:\n"); break;
            case 1: printf("\nFevereiro:\n"); break;
            case 2: printf(":\nMarco:\n"); break;
            case 3: printf("\nAbril:\n"); break;
            case 4: printf("\nMaio:\n"); break;
            case 5: printf("\nJunho:\n"); break;
            case 6: printf("\nJulho:\n"); break;
            case 7: printf("\nAgosto:\n"); break;  
            case 8: printf("\nSetembro:\n"); break;
            case 9: printf("\nOutubro:\n"); break;
            case 10: printf("\nNovembro:\n"); break;
            case 11: printf("\nDezembro:\n"); break;
        }

        for(l = 0; l < 31; l++) for(d = 0; d < q; d++)
        {
            if(cl[d].dia == l + 1 && cl[d].mes == c + 1)
            {
                printf("\n%s\n", cl[d].nome);
                printf("Telefone: %s\n", cl[d].telefone);
                printf("Data: %d/%d\n", cl[d].dia, cl[d].mes);
            }
        }
    }

    return 0;
}

/*
***********************************************************************
* 
***********************************************************************
*/
