#include <stdio.h>

int main() {
	
	int p1c, p1n, p2c, p2n;
	float p1v, p2v;
	
	scanf("%d%d%f", &p1c, &p1n, &p1v);
	scanf("%d%d%f", &p2c, &p2n, &p2v);
	
	printf("VALOR A PAGAR: R$ %0.2f\n", (p1n * p1v) + (p2n * p2v));
	
	return 0;
}
