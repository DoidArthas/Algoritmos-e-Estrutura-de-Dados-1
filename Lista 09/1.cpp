#include <stdio.h>
#include <string.h>

struct pessoa
{
    char nome[50];
    int idade;
    double salario;
};

int main ()
{
    int q = 10, c;
    struct pessoa p[q]; 

    for(c = 0; c < q; c++)
    {
        scanf(" %[^\n]c", p[c].nome);
        scanf("%d", &p[c].idade);
        scanf("%lf", &p[c].salario);  
    }

    for(c = 0; c < q; c++)
    {
        printf("%s, %d, %.2lf\n", p[c].nome, p[c].idade, p[c].salario);
    }

    return 0;
}

/*
***********************************************************************
* 
***********************************************************************
*/
