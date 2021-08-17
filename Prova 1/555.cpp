#include <iostream>

using namespace std;

int main()
{   
    int dia, mes, ano, saida, resto;
    scanf("%d", &dia);
    scanf("%d", &mes);
    scanf("%d", &ano);
   
    int soma = (dia*100 + mes);
    soma = soma + ano;
    resto = (soma%5);
    switch (resto - 1){
    	case -1:
    		printf(" 5 - Irresistivel\n");
    		break;
        case 0:
            printf(" 1 - Timido\n");
            break;
        case 1:
            printf(" 2 - Sonhador\n");
            break;
        case 2:
            printf(" 3 - Paquerador\n");
            break;
        case 3:
            printf(" 4 - Atraente\n");
            break;
        
    }
}
