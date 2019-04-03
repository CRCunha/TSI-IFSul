#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int x;
    int y;
}Ponto;

void mostrarPontos(int *a, int *b);

int main(){

    Ponto ponto;

    ponto.x = 1;
    ponto.y = 2;

    mostrarPontos(&ponto.x, &ponto.y);

    return 0;
}

void mostrarPontos(int *a, int *b){
    printf("%d",*a);
    printf("\n%d", *b);
}