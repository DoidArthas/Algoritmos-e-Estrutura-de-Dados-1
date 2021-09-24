#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i, soma = 0;

    for(i = 1; i < argc; i++)
    {
        soma = soma + atoi(argv[i]);
        
    }
    printf("Soma = %d\n", soma);

    return 0;
}