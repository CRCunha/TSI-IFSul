#include <stdio.h>
#include <stdlib.h>

void duplaCrescente (int *num1, int *num2, int orden);

int main(){

    int numero1; int numero2; int orden;

    printf("Digite um numero: ");
    scanf("%d", &numero1);

    system("clear");

    printf("\nDigite um numero: ");
    scanf("%d", &numero2);

    system("clear");

    printf("Digite a order (1-Cescente /  2-Decrescente): ");
    scanf("%d", &orden);

    duplaCrescente(&numero1, &numero2, orden);

    return 0;
}

void duplaCrescente (int *num1, int *num2, int orden){
    system("clear");
    if(orden == 1){
        if(*num1 > *num2){
            printf("%d %d", *num2, *num1);
        }
        else{
            printf("%d %d", *num1, *num2);
        }
    }
    else{
        if(orden == 2){
            if(*num1 > *num2){
                printf("%d %d", *num1, *num2);
            }
            else{
                printf("%d %d", *num2, *num1);
            }
        }
        else{

        }
    }
}