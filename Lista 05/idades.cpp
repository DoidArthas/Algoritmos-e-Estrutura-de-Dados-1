#include <stdio.h>

int main(){
	
	int x, s = 0, n;
	
	do{
		
		scanf("%d", &n);
		
		if(n > 0)
		{
			s++;
			x = n + x;
		}
		
	}while(n >= 0);
	
	printf("%.2f\n", float(x) / s);
	
	return 0;
}
