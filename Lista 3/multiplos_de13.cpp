#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int x, y, soma = 0;
	
	scanf("%d%d", &x, &y);
	
	if(y < x)
	{
		soma = x;
		x = y;
		y = soma;
		soma = 0;
	}
	
	for( ; x <= y; x++)
	{
		if(x % 13 != 0)
		{
			soma = soma + x;
		}
	}
	
	printf("%d\n", soma);
	
	return 0;
}
