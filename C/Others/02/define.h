#define MAX_NODOS 5
#define SUCESSO 0
#define LISTA_VAZIA 1
#define LISTA_CHEIA 2
#define POSICAO_INVALIDA 3
#define CODIGO_INEXISTENTE 4


void criaLista(int *x);
void exibeLista(int x);

typedef struct {
    int cod;
    float peso;
} Dado;

typedef struct {
    int n;
    Dado v[MAX_NODOS];
} ListaCF;
