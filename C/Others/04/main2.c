#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int x;
    int y;
}Ponto;

void mostrarPontos(Ponto strutura);

int main(){

    Ponto ponto;

    ponto.x = 1;
    ponto.y = 2;

    mostrarPontos(ponto);

    return 0;
}

void mostrarPontos(Ponto strutura){
    printf("%d - %d", strutura.x, strutura.y);
}