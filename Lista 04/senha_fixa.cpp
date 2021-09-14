#include <stdio.h>

int main(){
	
	int s = 1;
	
	while(s != 2002){
		
		scanf("%d", &s);
		
		if(s == 2002)
		{
			printf("Acesso Permitido\n");
		}else{
			printf("Senha Invalida\n");
		}
	}
	
	return 0;
}
