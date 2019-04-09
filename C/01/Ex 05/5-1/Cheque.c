#include "Cheque.h"

int criaCheque(Cheque x) {

    printf("Digite o numero do Cheque: ");
    scanf("%d", &x.numero);


    return 0;
}

float chequeValor(Cheque x){
    
    printf("Digite o valor do Cheque: ");
    scanf("%f", &x.valor);


    return 0;
}

int obtemSituacao(Cheque x){

    printf("Digite a cituação do Cheque: ");
    scanf("%d", &x.situacao);

    return 0;
}
