typedef struct agua AGUA;

AGUA *criar_cliente(int id, char nome[], float leituraAnterior, float leituraAtual);
void libera(AGUA *a);
void acessa_dados(AGUA *a);
int devolve_status(AGUA *a);
void not_found();
