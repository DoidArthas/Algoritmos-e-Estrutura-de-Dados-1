#include <stdio.h>
#include <string.h>

int main()
{	
	char s[100];
	int c, n = 0;

	scanf(" %s", &s);

	for(c = 0; c < strlen(s); c++)
	{
		if(s[c] == '1')
			n++;	
	}
	
	if(n % 2 == 0) printf("%s0\n", s);
	else printf("%s1\n", s);
	
	return 0;
}

/*
***********************************************************************
* 
***********************************************************************
*/
