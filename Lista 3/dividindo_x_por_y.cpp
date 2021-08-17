#include <stdio.h>

int main(){
	
	int n, x, y, c;
	
	scanf("%d", &n);
	
	for(c = 0; c < n; c++)
	{
		
		scanf("%d%d", &x, &y);
		
		if(y != 0)
		{
			printf("%.1f\n", float(x) / float(y));
		}
		else
		{
			printf("divisao impossivel\n");
		}
		
	}
	
	return 0;
}
