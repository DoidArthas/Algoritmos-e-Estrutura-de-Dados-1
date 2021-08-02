#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n, c = 1;
	
	scanf("%d", &n);
	
	do{
		
		printf("%d x %d = %d\n", c, n, c * n);
		
		c++;
		
	}while(c <= 10);
	
	return 0;
}
