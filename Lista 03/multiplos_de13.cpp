#include <stdio.h>

int main()
{	
	int x, y, soma = 0;
	
	scanf("%d%d", &x, &y);
	
	if(y < x)
	{
		soma = x;
		x = y;
		y = soma;
		soma = 0;
	}
	
	for( ; x <= y; x++) if(x % 13 != 0) soma = soma + x;
	
	printf("%d\n", soma);
	
	return 0;
}
/*
***********************************************************************
* Escreva um algoritmo que leia 2 valores inteiros X e Y calcule a    *
* soma dos números que não são múltiplos de 13 entre X e Y, incluindo *
* ambos.                                                              *
*                                                                     *
* Entrada:                                                            *
* O arquivo de entrada contém 2 valores inteiros quaisquer, não       *
* necessariamente em ordem crescente.                                 *
*                                                                     *
* Saída:                                                              *
* Imprima a soma de todos os valores não divisíveis por 13 entre os   *
* dois valores lidos na entrada, inclusive ambos se for o caso.       *
*                                                                     *
* |Exemplos de Entrada | Exemplos de Saída |                          *
* |100                 |13954              |                          *
* |200                 |                   |                          *                        *
* |                    |                   |                          *
* |--------------------|-------------------|                          *
***********************************************************************
*/
