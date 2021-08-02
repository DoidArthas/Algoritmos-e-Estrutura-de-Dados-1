#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int x[10], c, n = 0;
	
	for(c = 0; c < 10; c++)
	{
		scanf("%d", &x[c]);	
	}
	
	for(c = 0; c < 5; c++)
	{
		if(x[c] == x[c + 5])
		{
			n++;
		}
	}
	
	if(n > 0)
	{
		printf("N\n");
	}
	else
	{
		printf("Y\n");
	}
	
	return 0;
}
