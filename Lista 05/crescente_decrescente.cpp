#include <stdio.h>

int main()
{	
	int x, y;
	
	do
	{	
		scanf("%d%d", &x, &y);
		
		if(x > y) printf("Decrescente\n");
		else if(x < y) printf("Crescente\n");
	}
	while(x != y);
	
	return 0;
}

/*
***********************************************************************
* Leia uma quantidade indeterminada de duplas de valores inteiros     *
* X e Y. Escreva para cada X e Y uma mensagem que indique se estes    *
* valores foram digitados em ordem crescente ou decrescente.          *
*                                                                     *
* Entrada:                                                            *
* A entrada contém vários casos de teste. Cada caso contém dois       *
* valores inteiros X e Y. A leitura deve ser encerrada ao ser         *
* fornecido valores iguais para X e Y.                                *
*                                                                     *
* Saída:                                                              *
* Para cada caso de teste imprima “Crescente”, caso os valores tenham *
* sido digitados na ordem crescente, caso contrário imprima a mensagem*
* “Decrescente”.                                                      *
*                                                                     *
* |Exemplos de Entrada | Exemplos de Saída |                          *
* |5 4                 |Decrescente        |                          *
* |7 2                 |Decrescente        |                          *
* |3 8                 |Crescente          |                          *
* |2 2                 |                   |                          *
* |                    |                   |                          *
* |--------------------|-------------------|                          *
***********************************************************************
*/
