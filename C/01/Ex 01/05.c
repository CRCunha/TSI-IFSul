#include <stdio.h>
#include <stdlib.h>

int main(){

    int x;
    int numero;
    int nElementos = 9;
    int vetZ[nElementos];
    int contador = 0;
    int vetY[contador];
    int valor;
    int y = 1;


    for(x = 0; x <= nElementos; x ++){
        printf("[%d] - Digite um valor: ", x+1);
        scanf("%d", &valor);
        vetZ[x] = valor;
    }

    printf("Digite o numero: ");
    scanf("%d", &numero);

    for(x = 0; x <= nElementos; x++){
        if(vetZ[x] > numero){
            contador = contador +1;
        }
    }

    for(x = 0; x <= nElementos; x++){
        if(vetZ[x] > numero){
            y++;
            vetY[y] = vetZ[x];
        }
    }

    for(x = 0; x <= contador; x++){
        printf("\n%d",vetY[x]);
    }

    return 0;
}