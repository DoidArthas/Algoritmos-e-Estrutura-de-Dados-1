#include <stdio.h>
#include "Matematica.h"

int main()
{
    int c = 2, op = 0;
    int x, y;
    float z;
    while(c)
    {
        if(c == 2)
        {
            printf("\n1 - Elevar um numero X a base Y\n");
            printf("2 - Resto da divisao entre X e Y\n");
            printf("3 - Arredondar um valor real X\nOpcao escolhida: ");
            scanf("%d", &op);
        }
        switch(op)
        {
            case 1: printf("Digite X e Y: "); scanf("%d%d", &x, &y);
                    printf("\nResultado: %d\n", potencia(x, y)); c = 1;break;
            case 2: printf("Digite X e Y: "); scanf("%d%d", &x, &y);
                    printf("\nResultado: %d\n", resto(x, y)); c = 1;break;
            case 3: printf("Digite X: "); scanf("%f", &z);
                    printf("\nResultado: %.2f\n", arredonda(z)); c = 1; break;
            default: printf("\nValor digitado invalido\n");
        }

        if(c == 1)
        {
            printf("\nDeseja realizar outra operacao? 1 - Sim\n");
            scanf("%d", &op);
            if(op == 1) c = 2;
            else c = 0;
        }
    }
    return 0;
}
