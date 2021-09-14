#include <stdio.h>

int main() {
	
	int codigo1, codigo2, numero1, numero2; 
	float preco1, preco2, total;
	
	scanf("%d", &codigo1);
	scanf("%d", &numero1);
	scanf("%f", &preco1);
	
	scanf("%d", &codigo2);
	scanf("%d", &numero2);
	scanf("%f", &preco2);
	
	total = (numero1 * preco1) + (numero2 * preco2);
	
	printf("VALOR A PAGAR: R$ %0.2f\n", total);
	
	return 0;
}
