typedef struct ALUNO aluno;

aluno* criaAluno(int matricula, float n1, float n2, float n3);
int retornaMatricula(aluno *a);
float retornaNota1(aluno *a);
float retornaNota2(aluno *a);
float retornaNota3(aluno *a);
float retornaMedia(aluno *a);
const char *retornaSituacao(aluno *a);
void liberaMemoria(aluno *a);
