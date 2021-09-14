#include <stdio.h>
#include <string.h>

int main() {
	
	char p[30];
	int c, n, f;
	
	scanf("%d", &n);
	
	for(c = 0; c < n; c++)
	{
		scanf(" %s", &p);
		scanf("%d", &f);
		
		if(strcmp(p, "Thor") == 0)	
			printf("Y\n");
		else
			printf("N\n");
		
	}
	
	return 0;
}
