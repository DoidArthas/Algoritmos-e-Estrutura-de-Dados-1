#include <bits/stdc++.h>

using namespace std;

int main ()
{
	
	float n1, n2;
	
	scanf("%f%f", &n1, &n2);
	
	if (n1 > 0 && n2 > 0)
	{
		printf("Q1");
	}
	else if (n1 < 0 && n2 > 0)
	{
		printf("Q2");
	}
	else if (n1 < 0 && n2 < 0)
	{
		printf("Q3");
	}
	else if (n1 > 0 && n2 < 0)
	{
		printf("Q4");
	}
	else if (n1 == 0 && n2 == 0)
	{
		printf("Origem");
	}
	else if (n1 == 0 && n2 != 0)
	{
		printf("Eixo Y");
	}
	else if (n1 != 0 && n2 == 0)
	{
		printf("Eixo X");
	}
	
	
	printf("\n");
	
	return 0;
}
