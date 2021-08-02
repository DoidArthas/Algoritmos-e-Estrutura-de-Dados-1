#include <bits/stdc++.h>

using namespace std;

int main()
{
	
	int C, Q;
	float T;
	
	scanf("%d%d", &C, &Q);
	
	switch (C) 
	{
		case 1:
			T = Q * 4.00;
			break;
		case 2:
			T = Q * 4.50;
			break;
		case 3:
			T = Q * 5.00;
			break;
		case 4:
			T = Q * 2.00;
			break;
		case 5:
			T = Q * 1.50;
			break;
	}
	
	printf("Total: R$ %.2f\n", T);
	
	return 0;
	
}
