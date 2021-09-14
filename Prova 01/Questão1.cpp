#include <stdio.h>

int main(){
	
	int d, m, a;
	
	scanf("%d%d%d", &d, &m, &a);
	
	d = (d * 100) + m + a;
	
	d = d % 5;
	
	switch(d)
	{
		case 0:
			printf("5 - Irresistivel\n");
			break;
		case 1:
			printf("1 - Timido\n");
			break;
		case 2:
			printf("2 - Sonhador\n");
			break;
		case 3:
			printf("3 - Paquerador\n");
			break;
		case 4:
			printf("4 - Atraente\n");
			break;
	}
	
	return 0;
}
