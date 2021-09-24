#include <stdio.h>

int main()
{	
	int x, n, c, l, p = 0;
	
	scanf("%d", &n);
	
	for(c = 0; c < n; c++)
	{
		scanf("%d", &x);
		
		if(x == 2 || x == 0) printf("%d eh primo\n", x);
		else
		{
			p = 0;
			
			for(l = 1; l <= x; l++)
			{
				if(x % l == 0)
				{
					p++;
					if(p > 2)
					{
						l = x + 1;
						printf("%d nao eh primo\n", x);
					}
				}
			}
			
			if(p <= 2) printf("%d eh primo\n", x);

		}
	}
	
	return 0;
}
/*
***********************************************************************
* Na matemática, um Número Primo é aquele que pode ser dividido       *
* somente por 1 (um) e por ele mesmo. Por exemplo, o número 7 é primo,*
* pois pode ser dividido apenas pelo número 1 e pelo número 7.        *
*                                                                     *
* Entrada:                                                            *
* A entrada contém vários casos de teste. A primeira linha da entrada *
* contém um inteiro N (1 ≤ N ≤ 100), indicando o número de casos de   *
* teste da entrada. Cada uma das N linhas seguintes contém um valor   *
* inteiro X (1 < X ≤ 107), que pode ser ou não, um número primo.      *
*                                                                     *
* Saída:                                                              *
* Para cada caso de teste de entrada, imprima a mensagem “X eh primo” *
* ou “X nao eh primo”, de acordo com a especificação fornecida.       *
*                                                                     *
* |Exemplos de Entrada | Exemplos de Saída |                          *
* |3                   |8 nao eh primo     |                          *
* |8                   |51 nao eh primo    |                          *  
* |51                  |7 eh primo         |                          *
* |7                   |                   |                          *                       *
* |                    |                   |                          *
* |--------------------|-------------------|                          *
***********************************************************************
*/
