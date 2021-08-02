#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int numeroDeAtomos, contador, linhas; //Quantidade de �tomos, vari�vel contador para o for, e segunda v�riavel para o for, para lidar com a matriz, respectivamente.
	
	printf("Quantos atomos? "); //Leitura da quantidade de �tomos.
	scanf("%d", &numeroDeAtomos);
	
	int numeroDeLinhas = pow(2, numeroDeAtomos); //Elevando 2 ao expoente numeroDeAtomos, isso vai ser exatamente o n�mero de linhas da tabela
	
	char atomos[numeroDeAtomos + 1]; //Declara��o do vetor respons�vel por guardar os �tomos.
	//A declaracao de vetores de caracteres (strings) precisa reservar um espa�o a mais, por isso o "+1"
	
	printf("\n");
	for(contador = 0; contador < numeroDeAtomos; contador++) //Leitura dos atomos.
	{
		printf("Digite o atomo %d (Lembre-se de nao repetir atomos): ", contador + 1); //Aqui, "+1", pois o usu�rio n�o precisa saber que o vetor come�a em 0.
		scanf(" %s", &atomos[contador]);
	}
	
	if(numeroDeAtomos < 1) //Esse if � apenas para evitar problemas, pois n�o da para ter menos de 1 �tomo.
	{
		printf("\nNumero Invalido, insira um valor inteiro maior do que 1!\n");
	}else //O programa todo segue a partir deste else (poderia ter feito de outra forma mas preferi assim).
	{
		
		int matrizDeVF[numeroDeLinhas][numeroDeAtomos]; //Declara��o da matriz que guarda os V/F's
				
		
		int numeroDeVF = numeroDeLinhas; //Esta v�riavel controla o n�mero de V/F's.
		int VF; //Esta vari�vel controla o V ou F
		int proximoNumeroDeVF = numeroDeVF / 2; //Controla os V/F's da pr�xima coluna.
		int atualNumeroDeVF;
		printf("\n\n");
		printf("           ");
		for(contador = 0; contador < numeroDeAtomos; contador++) //Este for preenche a matriz respons�vel por guardar os V/F's.
		{
			numeroDeVF = proximoNumeroDeVF;
			proximoNumeroDeVF = numeroDeVF / 2;
			atualNumeroDeVF = numeroDeVF;
			VF = 1;
			
			for(linhas = 0; linhas < numeroDeLinhas; linhas ++) //for que controla as linhas
			{
				matrizDeVF[linhas][contador] = VF; //Atribui��o de 1 (V) ou 0 (F) na matriz, na posi��o de coluna igual � var�avel contador, e na posi��o de linha igual � vari�vel linhas.
				
				numeroDeVF--; //Esta linha diminui a v�riavel numeroDeVF em 1 a cada preenchimento, para controlar a divis�o exata entre V's e F's
				
				if(numeroDeVF == 0) 
				{	
				//Estas condi��es verificam se numeroDeVF chegou a zero, se sim, verificam se vc est� em 1 (V), 
				// se sim, trocam VF para 0 (F), e retornam numeroDeVF para seu valor anterior, permitindo que ele continue preenchendo of F's,
				// se n�o, retornam VF para 1, e retornam numeroDeVF para o valor anterior, agora voltando a preencher 1 (V).
				
					if(VF == 1)
					{
						VF = 0;
						numeroDeVF = atualNumeroDeVF;
					}else{
						VF = 1;
						numeroDeVF = atualNumeroDeVF;
					}
				}
			}
			
			
			printf(" %c", atomos[contador]); //Isso escreve o �tomo atual, j� iniciando a constru��o da tabela
		}
		
		printf("\n\n");
		
		for(linhas = 0; linhas < numeroDeLinhas; linhas++) //Este for escreve os �tomos em sequ�ncia e espa�ados, come�ando de fato a tabela.
		{
			
			if(linhas < 9) //Este if/else � apenas para organizar a tabela e garantir que tudo fique alinhado.
			{
				printf("Linha %d  = ", linhas + 1);
			}
			else
			{	
				printf("Linha %d = ", linhas + 1);
			}
			
			for(contador = 0; contador < numeroDeAtomos; contador++)  //Este � o for respons�vel por escrever a matriz final.
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
