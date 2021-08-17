#include <stdio.h>

int main(){
	
	int x[10], c;
	
	for(c = 0; c < 10; c++)
	{
		scanf("%d", &x[c]);
		
		if(x[c] <=  0)
		{
			x[c] = 1;
		}
		
	}
	
	for(c = 0; c < 10; c++)
	{
		
		printf("X[%d] = %d\n", c, x[c]);
		
	}
	
	return 0;
}
