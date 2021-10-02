#include <stdio.h>

int main ()
{	
	int x = 0, p = 0;
	float n, media = 0;
	
	for(x = 0; x < 6; x++)
	{		
		scanf("%f", &n);
		if(n > 0)
		{
			p++;
			media = media + n;
		}	
	}
	
	printf("%d valores positivos\n%.1f\n", p, media / p);
	
	return 0;
}

/*
***********************************************************************
* Leia 6 valores. Em seguida, mostre quantos destes valores digitados *
* foram positivos. Na próxima linha, deve-se mostrar a média de todos *
* os valores positivos digitados, com um dígito após o ponto decimal. *
*                                                                     *
* Entrada:                                                            *
* A entrada contém 6 números que podem ser valores inteiros ou de     *
* ponto flutuante. Pelo menos um destes números será positivo.        *
*                                                                     *
* Saída:                                                              *
* O primeiro valor de saída é a quantidade de valores positivos. A    *
* próxima linha deve mostrar a média dos valores positivos digitados. *
*                                                                     *
* |Exemplos de Entrada | Exemplos de Saída |                          *
* |7                   |4 valores positivos|                          *
* |-5                  |7.4                |                          *  
* |6                   |                   |                          *
* |-3.4                |                   |                          *                       *
* |4.6                 |                   |                          *
* |12                  |                   |                          *
* |                    |                   |                          *
* |--------------------|-------------------|                          *
***********************************************************************
*/
