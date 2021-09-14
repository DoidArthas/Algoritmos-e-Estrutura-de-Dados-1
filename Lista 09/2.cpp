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
    int q = 10, c, menor, maior;
    float media = 0;
    struct pessoa p[q]; 

    for(c = 0; c < q; c++)
    {
        scanf(" %[^\n]c", p[c].nome);
        scanf("%d", &p[c].idade);
        scanf("%lf", &p[c].salario);

        if(c == 0)
        {
            menor = c;
            maior = c; 
        }
        else if(p[c].idade < p[menor].idade)
        {
            menor = c;
        }
        else if(p[c].idade > p[maior].idade)
        {
            maior = c;
        }

        media = p[c].idade + media;
    }

    media = media / q;

    for(c = 0; c < q; c++)
    {
        printf("%s, %d, %.2lf\n", p[c].nome, p[c].idade, p[c].salario);
    }

    printf("Media: %.2f\n", media);
    printf("Menor idade: %s\n", p[menor].nome);
    printf("Maior idade: %s\n", p[maior].nome);

    return 0;
}