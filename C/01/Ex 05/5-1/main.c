#include <stdio.h>
#include <stdlib.h>
#include "Cheque.h"

int main(){
    Cheque chequeCriar;
    printf("Criando Cheque!");

    criaCheque(Cheque chequeCriar);
    chequeValor(Cheque chequeCriar);
    obtemSituacao(Cheque chequeCriar);

    return 0;
}