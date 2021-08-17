#include <stdio.h>

int main(){
	
	int x, n, c, in = 0, out = 0;
	
	scanf("%d", &n);
	
	for(c = 0; c < n; c++)
	{
		
		scanf("%d", &x);
			
		if(x >= 10 && x <= 20)
		{
			in++;
		}
		else
		{
			out++;
		}
	}
	
	printf("%d in\n%d out\n", in, out);
	
	return 0;
}
