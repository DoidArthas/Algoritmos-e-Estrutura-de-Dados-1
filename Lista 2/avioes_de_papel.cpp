#include <bits/stdc++.h>

using namespace std;

int main ()
{
	int C, P, F;
	
	scanf("%d%d%d", &C, &P, &F);
	
	if (C * F > P)
	{
		printf("N");
	}
	else
	{
		printf("S");
	}
	
	printf("\n");
	
	return 0;
}
