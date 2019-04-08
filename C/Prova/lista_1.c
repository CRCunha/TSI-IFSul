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

int exibeSituacao(ListaCF lista){
	if(lista.n==MAX_NODOS){
		printf("A lista esta cheia!");
		return LISTA_CHEIA;
	}   
	else{
		if(lista.n>0){
			printf("A lista possui 1 ou mais nodos");
		}
		else{
			printf("A lista esta vazia!");
			return LISTA_VAZIA;
		}
	}
}