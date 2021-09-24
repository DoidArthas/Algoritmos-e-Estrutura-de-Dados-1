#include <stdio.h>
#include <math.h>

int main()
{	
	int n;
	
	scanf("%d", &n);
	
	printf("%0.0f\n", pow(3, n));
	
	return 0;
}

/*
***********************************************************************
* O triângulo trinomial é um triângulo numérico de coeficientes       *
* trinomiais. Ele pode ser obtido com uma linha contendo um único "1",*
* a próxima linha contendo três 1 e cada elemento das linhas seguintes*
* sendo calculado como a soma do elemento acima à esquerda,           *
* imediatamente acima e acima à direita:                              *
*               1                                                     *
*           1   1   1                                                 *
*       1   2   3   2   1                                             *
*    1  3   6   7   6   3  1                                          *
* 1  4  10  16  19  16  10 4 1                                        *
*                                                                     *
* A primeira linha do triângulo trinomial é numerada com zero, a      *
* segunda linha é a de número 1 e assim sucessivamente.               *
*                                                                     *
* Sua tarefa é, dado um número de linha R, escrever um programa que   *
* exiba a soma de seus elementos. Por exemplo, a soma dos elementos da*
* linha 2 é 9 = 1 + 2 + 3 + 2 + 1.                                    *
*                                                                     *
* Entrada:                                                            *
* A entrada é o número de linha R (0 ≤ R ≤ 20).                       *
*                                                                     *
* Saída                                                               *
* A saída é a soma de todos os elementos da linha R. Não esqueça do   *
* caractere de fim-de-linha após exibir a soma.                       *
*                                                                     *
* |Exemplos de Entrada | Exemplos de Saída |                          *
* |0                   |1                  |                          *
* |                    |                   |                          *
* |--------------------|-------------------|                          *
* |1                   |3                  |                          *
* |                    |                   |                          *
* |--------------------|-------------------|                          *
* |2                   |9                  |                          *
* |                    |                   |                          *
* |--------------------|-------------------|                          *
***********************************************************************
*/
