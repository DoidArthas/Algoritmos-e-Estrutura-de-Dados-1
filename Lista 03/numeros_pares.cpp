#include <stdio.h>

int main ()
{	
	int x;
	
	for(x = 2; x <= 100; x+=2) printf("%d\n", x);
	
	return 0;
}

/*
***********************************************************************
* Faça um programa que mostre os números pares entre 1 e 100          *
*                                                                     *
* Entrada:                                                            *
* Neste problema extremamente simples de repetição não há entrada.    *
*                                                                     *
* Saída:                                                              *
* Imprima todos os números pares entre 1 e 100, 100 inclusive, se for *
* o caso, um em cada linha.                                           *
*                                                                     *
* |Exemplos de Entrada | Exemplos de Saída |                          *
* |                    |2                  |                          *
* |                    |4                  |                          *  
* |                    |6                  |                          *
* |                    |...                |                          *                       *
* |                    |100                |                          *
* |                    |                   |                          *
* |--------------------|-------------------|                          *
***********************************************************************
*/
