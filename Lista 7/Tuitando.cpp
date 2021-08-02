#include <bits/stdc++.h>

using namespace std;

int main() {
	
	char t[500];
	
	gets(t);
	
	if(strlen(t) <= 140)
		printf("TWEET\n");
	else
		printf("MUTE\n");
}
