#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int l = 1, r = 1;
	
	while(l != 0 && r != 0)
	{
		
		scanf("%d%d", &l, &r);
		
		if(l != 0 && r != 0)
			printf("%d\n", l + r);		
	}
	
	return 0;
}
