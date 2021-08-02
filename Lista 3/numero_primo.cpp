#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int x, n, c, l, p = 0;
	
	scanf("%d", &n);
	
	for(c = 0; c < n; c++)
	{
		
		scanf("%d", &x);
		
		if(x == 2 || x == 0)
		{
			printf("%d eh primo\n", x);
		}
		else
		{
			p = 0;
			
			for(l = 1; l <= x; l++)
			{
				
				if(x % l == 0)
				{
					p++;
					if(p > 2)
					{
						l = x + 1;
						printf("%d nao eh primo\n", x);
					}
				}
				
			}
			
			if(p <= 2)
			{
				printf("%d eh primo\n", x);
			}
			
		}
		
	}
	
	return 0;
}
