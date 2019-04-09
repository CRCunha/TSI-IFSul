/* Arquivo: Circulo.c
* Contém a implementação das funções
*/
#include <math.h>
#include “exemplo.h”

void criaCirculo(Circulo *pc,int x,int y,float raio) {
    pc->x = x;
    pc->y = y;
    pc->raio = raio;
}
/*---------------------------------*/
float areaCirculo(Circulo c) {
    return M_PI * c.raio * c.raio;
}
/*---------------------------------*/
float perimetroCirculo(Circulo c) {
    return 2 * M_PI * c.raio;
}