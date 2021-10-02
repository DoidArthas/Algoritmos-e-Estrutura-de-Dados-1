#include <stdio.h>
#include <string.h>

struct carro
{
    char modelo[50], dono[50], cidade[50], estado[3];
    float valor;
    int ano;
};

int main()
{
    int c, q = 500, mg = 0;

    struct carro ca[q];

    for(c = 0; c < q; c++)
    {
        scanf(" %[^\n]c", ca[c].modelo);
        scanf("%d", &ca[c].ano);
        scanf(" %[^\n]c", ca[c].dono);
        scanf("%f", &ca[c].valor);
        scanf(" %[^\n]c", ca[c].cidade);
        scanf(" %[^\n]c", ca[c].estado);

        if(strcmp(ca[c].estado, "MG") == 0) mg++;
    }

    printf("\nCarros de MG: %d\n\n", mg);

    printf("\nCarros de ano anterior a 2016:\n\n");
    for(c = 0; c < q; c++) if(ca[c].ano < 2016)
    {
        printf("%s\n", ca[c].modelo);
        printf("%d\n", ca[c].ano);
        printf("%s\n\n", ca[c].dono);
    }
}

/*
***********************************************************************
* 
***********************************************************************
*/
