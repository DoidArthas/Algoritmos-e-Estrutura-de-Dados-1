#include <bits/stdc++.h>

using namespace std;

int main()
{	
	int numeroDeAtomos, contador, linhas; //Quantidade de átomos, variável contador para o for, e segunda váriavel para o for, para lidar com a matriz, respectivamente.
	
	printf("Quantos atomos? "); //Leitura da quantidade de átomos.
	scanf("%d", &numeroDeAtomos);
	
	int numeroDeLinhas = pow(2, numeroDeAtomos); //Elevando 2 ao expoente numeroDeAtomos, isso vai ser exatamente o número de linhas da tabela
	
	char atomos[numeroDeAtomos + 1]; //Declaração do vetor responsável por guardar os átomos.
	//A declaracao de vetores de caracteres (strings) precisa reservar um espaço a mais, por isso o "+1"
	
	printf("\n");
	
	for(contador = 0; contador < numeroDeAtomos; contador++) //Leitura dos atomos.
	{
		printf("Digite o atomo %d (Lembre-se de nao repetir atomos): ", contador + 1); //Aqui, "+1", pois o usuário não precisa saber que o vetor começa em 0.
		scanf(" %s", &atomos[contador]);
	}
	
	if(numeroDeAtomos < 1) //Esse if é apenas para evitar problemas, pois não da para ter menos de 1 átomo.
	{
		printf("\nNumero Invalido, insira um valor inteiro maior do que 1!\n");
	}
	else //O programa todo segue a partir deste else (poderia ter feito de outra forma mas preferi assim).
	{	
		int matrizDeVF[numeroDeLinhas][numeroDeAtomos]; //Declaração da matriz que guarda os V/F's	
		int numeroDeVF = numeroDeLinhas; //Esta variável controla o número de V/F's.
		int VF; //Esta variável controla o V ou F
		int proximoNumeroDeVF = numeroDeVF / 2; //Controla os V/F's da próxima coluna.
		int atualNumeroDeVF;

		printf("\n\n");
		printf("           ");

		for(contador = 0; contador < numeroDeAtomos; contador++) //Este for preenche a matriz responsável por guardar os V/F's.
		{
			numeroDeVF = proximoNumeroDeVF;
			proximoNumeroDeVF = numeroDeVF / 2;
			atualNumeroDeVF = numeroDeVF;
			VF = 1;
			
			for(linhas = 0; linhas < numeroDeLinhas; linhas ++) //for que controla as linhas
			{
				matrizDeVF[linhas][contador] = VF; //Atribuição de 1 (V) ou 0 (F) na matriz, na posição de coluna igual à variável contador, e na posição de linha igual à variável linhas.
				numeroDeVF--; //Esta linha diminui a variável numeroDeVF em 1 a cada preenchimento, para controlar a divisão exata entre V's e F's
				
				if(numeroDeVF == 0) 
				{	
				//Estas condições verificam se numeroDeVF chegou a zero, se sim, verificam se vc está em 1 (V), 
				// se sim, trocam VF para 0 (F), e retornam numeroDeVF para seu valor anterior, permitindo que ele continue preenchendo of F's,
				// se não, retornam VF para 1, e retornam numeroDeVF para o valor anterior, agora voltando a preencher 1 (V).
					if(VF == 1)
					{
						VF = 0;
						numeroDeVF = atualNumeroDeVF;
					}
					else
					{
						VF = 1;
						numeroDeVF = atualNumeroDeVF;
					}
				}
			}
			
			
			printf(" %c", atomos[contador]); //Isso escreve o átomo atual, já iniciando a construção da tabela
		}
		
		printf("\n\n");
		
		for(linhas = 0; linhas < numeroDeLinhas; linhas++) //Este for escreve os átomos em sequência e espaçados, começando de fato a tabela.
		{			
			if(linhas < 9) //Este if/else é apenas para organizar a tabela e garantir que tudo fique alinhado.
			{
				printf("Linha %d    = ", linhas + 1);
			}
			else if(linhas < 99)
			{	
				printf("Linha %d   = ", linhas + 1);
			}
			else if(linhas < 999)
			{
				printf("Linha %d  = ", linhas + 1);
			}
			
			for(contador = 0; contador < numeroDeAtomos; contador++)  //Este é o for responsável por escrever a matriz final.
			{
				if(matrizDeVF[linhas][contador] == 1)
				{
					printf(" V");
				}
				else
				{
					printf(" F");
				}
			}
			printf("\n");
		}
	}

	
	return 0;
}
