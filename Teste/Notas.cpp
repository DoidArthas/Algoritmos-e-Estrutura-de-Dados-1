#include<stdio.h>
#include<stdlib.h>

main(){
	
	float notas[5][3], media = 0, soma = 0;
	int c, l;
	char aluno[5][100];
	
	for(c = 0; c < 5; c++){
		printf("\nDigite o nome do aluno %d: ", c+1);
		scanf("%s", &aluno[c]);
	}
	printf("\nAlunos:");
	for(c = 0; c < 5; c++){
		printf(" %s", aluno[c]);
	}
	printf("\n");
	for(c = 0; c < 5; c++){
		printf("\n");
		for(l = 0; l < 3; l++){
			printf("Digite a nota %d do aluno %s: ", l + 1, aluno[c]);
			scanf("%f", &notas[c][l]);
			
			soma = soma + notas[c][l];
			media++;
		}
	}
	for(c = 0; c < 3; c++){
		printf("\n");
		for(l = 0; l < 5; l++){
			printf(" %.2f", notas[l][c]);
		}
	}
	
	media = soma / media;
	
	printf("\n\nMedia de notas da turma: %.1f", media);
	
	printf("\n\nNota da posicao (1,3): %.1f\nNota da posicao (2,1): %.1f\n", notas[3-1][1-1], notas[1-1][2-1]);
	printf("\n\nNota da posicao vetorial (1,3): %.1f\nNota da posicao vetorial (2,1): %.1f\n", notas[3][1], notas[1][2]);
	
	media = 0;
	soma = 0;
	for(c = 0; c < 3; c++){
		media = media + notas[1][c];
		
	}
	media = media / c;
	
	printf("\nMedia do aluno %s: %.1f", aluno[1], media);
	
}
