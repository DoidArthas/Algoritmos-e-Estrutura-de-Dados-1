#include <stdio.h>

int main()
{
	int C, Q;
	float T;
	
	scanf("%d%d", &C, &Q);
	
	switch (C) 
	{
		case 1: T = Q * 4.00; break;
		case 2: T = Q * 4.50; break;
		case 3: T = Q * 5.00; break;
		case 4: T = Q * 2.00; break;
		case 5: T = Q * 1.50; break;
	}
	
	printf("Total: R$ %.2f\n", T);
	
	return 0;
}

/*
***********************************************************************
* Com base na tabela abaixo, escreva um programa que leia o código de *
* um item e a quantidade deste item. A seguir, calcule e mostre o     *
* valor da conta a pagar.                                             *
*                                                                     *
* | CODIGO | ESPECIFICAÇÃO   | PREÇO   |                              *
* | 1      | Cachorro Quente | R$ 4.00 |                              *
* | 2      | X-Salada        | R$ 4.50 |                              *
* | 3      | X-Bacon         | R$ 5.00 |                              *
* | 4      | Torrada simples | R$ 2.00 |                              *
* | 5      | Refrigerante    | R$ 1.50 |                              *
* |--------|-----------------|---------|                              *
*                                                                     *
* Entrada:                                                            *
* O arquivo de entrada contém dois valores inteiros correspondentes ao*
* código e à quantidade de um item conforme tabela acima.             *
*                                                                     *
* Saída:                                                              *
* O arquivo de saída deve conter a mensagem "Total: R$ " seguido pelo *
* valor a ser pago, com 2 casas após o ponto decimal.                 *
*                                                                     *
* |Exemplos de Entrada | Exemplos de Saída |                          *
* |3 2                 |Total: R$ 10.00    |                          *
* |                    |                   |                          *
* |--------------------|-------------------|                          *
* |4 3                 |Total: R$ 6.00     |                          *
* |                    |                   |                          *
* |--------------------|-------------------|                          *
* |2 3                 |Total: R$ 13.50    |                          *
* |                    |                   |                          *
* |--------------------|-------------------|                          *
***********************************************************************
*/
