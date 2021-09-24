#include <stdio.h>
#include <math.h>

int main()
{	
	float x1, x2, y1, y2, d;
	
	scanf("%f%f", &x1, &y1);
	scanf("%f%f", &x2, &y2);
	
	d = pow(pow(x2-x1, 2) + pow(y2-y1, 2), 0.5);
	
	printf("%0.4f\n", d);
	
	return 0;
}

/*
***********************************************************************
* Leia os quatro valores correspondentes aos eixos x e y de dois      *
* pontos quaisquer no plano, p1(x1,y1) e p2(x2,y2) e calcule a        *
* distância entre eles, mostrando 4 casas decimais após a vírgula,    *
* segundo a fórmula:                                                  *
*                                                                     *
* Distancia = √(x2 - x1)² + (y2 - y1)²                                *
*                                                                     *
* Entrada:                                                            *
* O arquivo de entrada contém duas linhas de dados. A primeira linha  *
* contém dois valores de ponto flutuante: x1 y1 e a segunda linha     *
* contém dois valores de ponto flutuante x2 y2.                       *
*                                                                     *
* Saída:                                                              *
* Calcule e imprima o valor da distância segundo a fórmula fornecida, *
* com 4 casas após o ponto decimal.                                   *
*                                                                     *
* |Exemplos de Entrada | Exemplos de Saída |                          *
* |1.0 7.0             |4.4721             |                          *
* |5.0 9.0             |                   |                          *
* |                    |                   |                          *
* |--------------------|-------------------|                          *
* |-2.5 0.4            |16.1484            |                          *
* |12.1 7.3            |                   |                          *
* |                    |                   |                          *
* |--------------------|-------------------|                          *
* |2.5 -0.4            |16.4575            |                          *
* |-12.2 7.0           |                   |                          *
* |                    |                   |                          *
* |--------------------|-------------------|                          *
***********************************************************************
*/
