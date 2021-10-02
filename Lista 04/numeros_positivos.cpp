#include <stdio.h>

int main()
{	
	int x = 0, positivos = 0;
	float n;
	
	while (x < 6)
	{
		scanf("%f", &n);
		
		if(n > 0) positivos++;
		
		x++;
	}
	
	printf("%d valores positivos\n", positivos);
	
	return 0;
}

/*
***********************************************************************
* Faça um programa que leia 6 valores. Estes valores serão somente    *
* negativos ou positivos (desconsidere os valores nulos). A seguir,   *
* mostre a quantidade de valores positivos digitados.                 *
*                                                                     *
* Entrada:                                                            *
* Seis valores, negativos e/ou positivos.                             *
*                                                                     *
* Saída:                                                              *
* Imprima uma mensagem dizendo quantos valores positivos foram lidos. *
*                                                                     *
* |Exemplos de Entrada | Exemplos de Saída |                          *
* |7                   |4 valores positivos|                          *
* |-5                  |                   |                          *
* |6                   |                   |                          *
* |-3.4                |                   |                          *
* |4.6                 |                   |                          *
* |12                  |                   |                          *
* |                    |                   |                          *
* |--------------------|-------------------|                          *
***********************************************************************
*/
