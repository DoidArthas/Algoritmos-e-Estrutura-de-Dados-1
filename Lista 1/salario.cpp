#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int dia, dp = 0, p, v, f, c;
	
	scanf("%d%d%d%d", &dia, &p, &v, &f);
	
	for(c = 0; c < f; c++)
	{
		printf("DP: %d\n", dp);
		printf("\nP: %d\n\n", p);
		dp = (c + dia) % 2;
		
		if(dp == 0){
			p = v + 5;
		}
		else{
			p = v - 5;
		}
		
	}
	
	printf("%d", v);
	
}
