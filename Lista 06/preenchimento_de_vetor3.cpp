#include <stdio.h>

int main(){
	
	double n[100];
	int c = 0;
	
	scanf("%lf", &n[0]);
	
	printf("N[%d] = %.4lf\n", c, n[c]);
	
	for(c = 1; c < 100; c++)
	{
		n[c] = n[c-1] / 2;
		printf("N[%d] = %.4lf\n", c, n[c]);
	}
	
	return 0;
}
