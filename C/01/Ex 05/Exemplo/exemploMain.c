/* Arquivo: exemplo.c
* Contém a aplicação que usa o tipo Circulo
*/
#include <stdio.h>
#include “exemplo.h”
int main() {
    Circulo circ;
    float r;
    printf(“Informe o raio:”);
    scanf(“%f”,&r);
    criaCirculo(&circ,0,0,r);
    printf(“Area: %f\n”, areaCirculo(circ) );
    printf(“Perimetro: %f\n”, perimetroCirculo(circ) );
    return 0;
}