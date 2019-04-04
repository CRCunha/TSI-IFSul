#ifndef Lista_H
#define Lista_H
#define MAX_NODOS 5
#define SUCESSO 0
#define LISTA_VAZIA 1
#define LISTA_CHEIA 2
#define POSICAO_INVALIDA 3
#define CODIGO_INEXISTENTE 4

typedef struct{
	int cod;
	float peso;
} Dado;

typedef struct{
	int n;
	Dado v[MAX_NODOS];
} ListaCF;

void criaLista (ListaCF *Lista);
int incluiNoFim(ListaCF *lista, Dado dd);
void exibe(ListaCF lista);
int quantidadeDeNodos(ListaCF lista);
int estaCheia(ListaCF lista);
int estaVazia(ListaCF lista);
int excluiDoFim(ListaCF *lista, ListaCF *dd);
int incluiNoInicio(ListaCF *lista, Dado dd);
int excluiDoInicio(ListaCF *lista, ListaCF *dd);
int consultaPorPosicao(ListaCF lista, int pos, ListaCF *dd);
int existe(ListaCF lista, int cod);
int consultaPorCodigo(ListaCF lista, int cod, ListaCF *dd);
int incluiNaPosicao(ListaCF *lista, int pos, Dado dd);
int excluiDaPosicao(ListaCF *lista, int pos, ListaCF *nodo);
int incluiAntes(ListaCF *lista, int cod, Dado dd);
int excluiNodo(ListaCF *lista, int cod, ListaCF *nodo);
#endif
