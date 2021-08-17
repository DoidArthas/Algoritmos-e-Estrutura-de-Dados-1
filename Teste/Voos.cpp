#include<stdio.h>

int main()
{
	int v = 5, a = 5;
	int c, l, V[v][2], A[a][3];
	
	for(c = 0; c < v; c++)
	{
		printf("\nVoo %d. Digite o codigo do aeroporto origem: ", c + 1);
		scanf("%d", &V[c][0]);
		
		printf("\nVoo %d. Digite o codigo do aeroporto destino: ", c + 1);
		scanf("%d", &V[c][1]);
		
		if( ( V[c][0] > 9 ) || ( V[c][0] < 0 ) || ( V[c][1] > 9 ) || ( V[c][1] < 0 ) )
		{
			c--;
			printf("\nAlgum aeroporto informado nao existe, por favor, digite novamente.");
		}
	}
	
	printf("\n\nVoos (Origem, Destino):\n\n");
	
	for( c = 0; c < v; c++)
	{	
		printf("Aeroporto %d para aeroporto %d\n", V[c][0], V[c][1]);	
	}
	
	int R[v][2];
	
	for( c = 0; c < v; c++)
	{
		for( l = 0; l < 2; l++)
		{
			R[c][l] = V[c][l];
		}
	}
	
	for( c = 0; c < a; c++)
	{	
		A[c][0] = -1;
		
		for( l = 0; l < v; l++)
		{	
			if( R[l][0] > -1 )
			{	
				if( A[c][0] == -1)
				{	
					A[c][0] = R[l][0];
					R[l][0] = -1;
				}
				else if( R[l][0] == A[c][0])
				{	
					R[l][0] = -1;
				}
			}
			
			if( R[l][1] > -1 )
			{	
				if( A[c][0] == -1)
				{			
					A[c][0] = R[l][1];
					R[l][1] = -1;			
				}
				else if( R[l][1] == A[c][0])
				{
					R[l][1] = -1;
				}
			}
		}
	}

	for( c = 0; c < a; c++)
	{
		A[c][1] = 0;
		A[c][2] = 0;
		
		for( l = 0; l < v; l++)
		{
			if( A[c][0] == V[l][0])
			{
				A[c][1]++;
			}
			if( A[c][0] == V[l][1])
			{
				A[c][2]++;
			}
		}
	}

	printf("\n\nAeroportos:");
	
	for( c = 0; c < a; c++)
	{	
		if( A[c][0] != -1)
		{
			printf(" %d", A[c][0]);	
		}
	}
	
	for( c = 0; c < a; c++)
	{	
		if( A[c][0] != -1)
		{
			printf("\n\nVoos SAINDO   de %d: %d\n", A[c][0], A[c][1]);
		
			printf("Voos CHEGANDO em %d: %d", A[c][0], A[c][2]);
		}
	}
	
	return 0;
}
