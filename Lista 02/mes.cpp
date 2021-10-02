#include <stdio.h>

int main()
{
	int M;
	
	scanf("%d", &M);
	
	switch(M)
	{
		case 1:  printf("January");   break;
		case 2:  printf("February");  break;
		case 3:  printf("March");     break;
		case 4:  printf("April");     break;
		case 5:  printf("May");       break;
		case 6:  printf("June");      break;
		case 7:  printf("July");      break;
		case 8:  printf("August");    break;
		case 9:  printf("September"); break;
		case 10: printf("October");   break;
		case 11: printf("November");  break;
		case 12: printf("December");  break;
	}
	
	printf("\n");
	
	return 0;
}

/*
***********************************************************************
* Leia um valor inteiro entre 1 e 12. Correspondente a este valor,    *
* deve ser apresentado como resposta o mês do ano por extenso, em     *
* inglês, com a primeira letra maiúscula.                             *
*                                                                     *
* Entrada:                                                            *
* A entrada contém um único valor inteiro.                            *
*                                                                     *
* Saída:                                                              *
* Imprima por extenso o nome do mês correspondente ao número existente*
* na entrada, com a primeira letra em maiúscula.                      *
*                                                                     *
* |Exemplos de Entrada | Exemplos de Saída |                          *
* |4                   |April              |                          *
* |                    |                   |                          *
* |--------------------|-------------------|                          *
***********************************************************************
*/
