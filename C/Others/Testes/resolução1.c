#include <stdio.h>
#include <stdlib.h>

int main(){

    int x;
    int numero[10];

    for(x = 0; x <= 10; x++){
        printf("[%d]Digite um numero: ", x + 1);
        scanf("%d", &numero[x]);
    }

    printf("Estão entre [10 e 30]: \n");

    for(x = 0; x <= 10; x++){
        if(numero[x] >= 10 && numero[x]<= 30){
            printf("%d - ", numero[x]);
        }
    }

    return 0;
}