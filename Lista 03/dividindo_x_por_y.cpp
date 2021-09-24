#include <stdio.h>

int main()
{
	int n, x, y, c;
	
	scanf("%d", &n);
	
	for(c = 0; c < n; c++)
	{	
		scanf("%d%d", &x, &y);
		
		if(y != 0) printf("%.1f\n", float(x) / float(y));
		else printf("divisao impossivel\n");
	}
	
	return 0;
}

/*
***********************************************************************
* Escreva um algoritmo que leia 2 números e imprima o resultado da    *
* divisão do primeiro pelo segundo. Caso não for possível mostre a    *
* mensagem “divisao impossivel” para os valores em questão.           *
*                                                                     *
* Entrada:                                                            *
* A entrada contém um número inteiro N. Este N será a quantidade de   *
* pares de valores inteiros (X e Y) que serão lidos em seguida.       *
*                                                                     *
* Saída:                                                              *
* Para cada caso mostre o resultado da divisão com um dígito após o   *
* ponto decimal, ou “divisao impossivel” caso não seja possível       *
* efetuar o cálculo.                                                  *
*                                                                     *
* Obs.: Cuide que a divisão entre dois inteiros em algumas linguagens *
* como o C e C++ gera outro inteiro. Utilize cast :)                  *
*                                                                     *
* |Exemplos de Entrada | Exemplos de Saída |                          *
* |3                   |-1.5               |                          *
* |3 -2                |divisao impossivel |                          *
* |-8 0                |0.0                |                          *
* |0 8                 |                   |                          *
* |                    |                   |                          *
* |--------------------|-------------------|                          *
***********************************************************************
*/
