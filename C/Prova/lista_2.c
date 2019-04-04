#include<stdio.h>
#include "lista.h"
#include "lista_2.c"

void criaLista (ListaCF *Lista){
	int i;
	Lista->n = 0;
	for(i=0; i<=MAX_NODOS; i++){
		Lista->v[i].cod = 0;
		Lista->v[i].peso = 0;
	}
}
