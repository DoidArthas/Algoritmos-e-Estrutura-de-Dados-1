#include <bits/stdc++.h>

using namespace std;

int main() {
	
	char p[10000];
	int n, c;
	
	scanf("%d", &n);
	
	for(c = 0; c < n; c++)
	{
		scanf(" %[^\n]c", p);
		
		printf("%.2f\n", strlen(p) * 0.01);
	}
	
	return 0;
}
