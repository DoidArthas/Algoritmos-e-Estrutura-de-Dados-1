#include <stdio.h>

int main() {
	
	int L, D, K, P, C;
	
	scanf("%d%d", &L, &D);
	scanf("%d%d", &K, &P);

	C = (L * K) + (P* ((L -(L % D)) / D));
	
	printf("%d\n", C);
	
	return 0;
}
