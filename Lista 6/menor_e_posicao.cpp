#include <stdio.h>

int main(){
	
	int n, c;
	
	scanf("%d", &n);
	
	int x[n + 1];
	
	for(c = 0; c < n; c++)
	{
		scanf("%d", &x[c + 2]);
		
		if(c == 0)
		{
			x[0] = x[c + 2];
			x[1] = c;
		}
		if(x[c + 2] < x[0])
		{
			x[0] = x[c + 2];
			x[1] = c;
		}
	}
	
	printf("Menor valor: %d\nPosicao: %d\n", x[0], x[1]);
		
	return 0;
}
