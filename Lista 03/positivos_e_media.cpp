#include <stdio.h>

int main (){
	
	int x = 0, p = 0;
	float n, media = 0;
	
	for(x = 0; x < 6; x++)
	{
		
		scanf("%f", &n);
		if(n > 0)
		{
			p++;
			media = media + n;
		}
		
	}
	
	printf("%d valores positivos\n%.1f\n", p, media / p);
	
	return 0;
}
