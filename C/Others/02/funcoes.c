#include <stdlib.h>
#include <stdio.h>
#include "define.h"

void criaLista(int *x){

    ListaCF lista;

    *x = *lista;

}

void exibeLista(int x){

    int y;
    
    for(y = 0; y <= MAX_NODOS; y++ ){
        printf("%d", x[y]);
    }
    
}