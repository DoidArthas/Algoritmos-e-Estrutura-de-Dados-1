#include <stdio.h>

int main ()
{
	
	float n1, n2;
	
	scanf("%f%f", &n1, &n2);
	
	if (n1 > 0 && n2 > 0)
	{
		printf("Q1");
	}
	else if (n1 < 0 && n2 > 0)
	{
		printf("Q2");
	}
	else if (n1 < 0 && n2 < 0)
	{
		printf("Q3");
	}
	else if (n1 > 0 && n2 < 0)
	{
		printf("Q4");
	}
	else if (n1 == 0 && n2 == 0)
	{
		printf("Origem");
	}
	else if (n1 == 0 && n2 != 0)
	{
		printf("Eixo Y");
	}
	else if (n1 != 0 && n2 == 0)
	{
		printf("Eixo X");
	}
	
	
	printf("\n");
	
	return 0;
}
/*
Leia 2 valores com uma casa decimal (x e y), que devem representar as coordenadas de um ponto em um plano. A seguir, determine qual o quadrante ao qual pertence o ponto, ou se está sobre um dos eixos cartesianos ou na origem (x = y = 0).

		|y
	Q2	|	Q1
		|
--------|--------
		|		x
	Q3	|	Q4
		|


Se o ponto estiver na origem, escreva a mensagem “Origem”.

Se o ponto estiver sobre um dos eixos escreva “Eixo X” ou “Eixo Y”, conforme for a situação.

Entrada
A entrada contem as coordenadas de um ponto.

Saída
A saída deve apresentar o quadrante em que o ponto se encontra.

|Exemplos de Entrada | Exemplos de Saída |
|4.5 -2.2            |Q4                 |
|                    |                   |
|--------------------|-------------------|
|0.1 0.1             |Q1                 |
|                    |                   |
|--------------------|-------------------|
|0.0 0.0             |Origem             |
|                    |                   |
|--------------------|-------------------|
*/
