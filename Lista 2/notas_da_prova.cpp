#include <bits/stdc++.h>

using namespace std;

int main()
{
	
	int N;
	
	scanf("%d", &N);
	
	if (N == 0)
	{
		printf("E");
	}
	else if (N >= 1 && N <= 35)
	{
		printf("D");
	}
	else if (N >= 36 && N <= 60)
	{
		printf("C");
	}
	else if (N >= 61 && N <= 85)
	{
		printf("B");
	}
	else if (N >= 86)
	{
		printf("A");
	}
	
	printf("\n");
	
	return 0;
}
