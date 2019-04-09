/* Arquivo: Circulo.h
* Contém apenas a declaração do tipo e protótipos
*/
#ifndef exemplo_H
#define exemplo_H

typedef struct {
    int x,y;
    float raio;
} Circulo;

void criaCirculo(Circulo *pc,int x,int y,float raio);
float areaCirculo(Circulo c);
float perimetroCirculo(Circulo c);

#endif