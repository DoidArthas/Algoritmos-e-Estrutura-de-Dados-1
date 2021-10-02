#include <stdio.h>

int main()
{	
	int x, s = 0, n;
	
	do
	{	
		scanf("%d", &n);
		
		if(n > 0)
		{
			s++;
			x = n + x;
		}
		
	}
	while(n >= 0);
	
	printf("%.2f\n", float(x) / s);
	
	return 0;
}

/*
***********************************************************************
* Faça um algoritmo para ler um número indeterminado de dados,        *
* contendo cada um, a idade de um indivíduo. O último dado, que não   *
* entrará nos cálculos, contém o valor de idade negativa. Calcular e  *
* imprimir a idade média deste grupo de indivíduos.                   *
*                                                                     *
* Entrada:                                                            *
* A entrada contém um número indeterminado de inteiros. A entrada será*
* encerrada quando um valor negativo for lido.                        *
*                                                                     *
* Saída:                                                              *
* A saída contém um valor correspondente à média de idade dos         *
* indivíduos. A média deve ser impressa com dois dígitos após o ponto *
* decimal.                                                            *
*                                                                     *
* |Exemplos de Entrada | Exemplos de Saída |                          *
* |34                  |39.25              |                          *
* |56                  |                   |                          *
* |44                  |                   |                          *
* |23                  |                   |                          *
* |-2                  |                   |                          *
* |                    |                   |                          *
* |--------------------|-------------------|                          *
***********************************************************************
*/
