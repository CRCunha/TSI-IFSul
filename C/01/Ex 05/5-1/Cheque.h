#ifndef Cheque_H
#define Cheque_H

typedef struct{
    int numero;
    float valor;
    int situacao;
}Cheque;

int criaCheque(Cheque x);
float obtemValor(Cheque x);
int obtemSituacao(Cheque x);

#endif