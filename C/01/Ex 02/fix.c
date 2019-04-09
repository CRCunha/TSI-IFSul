#include <stdio.h>
#include <stdlib.h>

void duplaCrescente (int *num1, int *num2);

int main(){

    int numero1; int numero2;

    printf("Digite um numero: ");
    scanf("%d", &numero1);

    printf("\nDigite um numero: ");
    scanf("%d", &numero2);

    duplaCrescente(&numero1, &numero2);

    printf("\n%d" ,numero1);
    printf("\n%d" ,numero2);

    return 0;
}

void duplaCrescente (int *num1, int *num2){
    int aux;
    system("clear");
    if(*num1 > *num2){
        aux = *num1;
        *num1 = *num2;
        *num2 = aux;
    }
}