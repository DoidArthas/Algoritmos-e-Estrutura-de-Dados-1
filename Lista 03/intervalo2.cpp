#include <stdio.h>

int main()
{	
	int x, n, c, in = 0, out = 0;
	
	scanf("%d", &n);
	
	for(c = 0; c < n; c++)
	{
		scanf("%d", &x);
			
		if(x >= 10 && x <= 20) in++;
		else out++;
	}
	
	printf("%d in\n%d out\n", in, out);
	
	return 0;
}

/*
***********************************************************************
* Leia um valor inteiro N. Este valor será a quantidade de valores    *
* inteiros X que serão lidos em seguida.                              *
* Mostre quantos destes valores X estão dentro do intervalo [10,20] e *
* quantos estão fora do intervalo, mostrando essas informações.       *
*                                                                     *
* Entrada:                                                            *
* A primeira linha da entrada contém um valor inteiro N (N < 10000),  *
* que indica o número de casos de teste.                              *
* Cada caso de teste a seguir é um valor inteiro X (-107 < X <107).   *
*                                                                     *
* Saída:                                                              *
* Para cada caso, imprima quantos números estão dentro (in) e quantos *
* valores estão fora (out) do intervalo.                              *
*                                                                     *
* |Exemplos de Entrada | Exemplos de Saída |                          *
* |4                   |2 in               |                          *
* |14                  |2 out              |                          *
* |123                 |                   |                          *
* |10                  |                   |                          *
* |-25                 |                   |                          *
* |                    |                   |                          *
* |--------------------|-------------------|                          *
***********************************************************************
*/
