#include <stdio.h>

int main() {
	
	int numero, horas;
	float sal, total;
	
	scanf("%d", &numero);
	scanf("%d", &horas);
	scanf("%f", &sal);
	
	total = horas * sal;
	
	printf("NUMBER = %d\n", numero);
	printf("SALARY = U$ %0.25f\n", total);
	
	return 0;
}
