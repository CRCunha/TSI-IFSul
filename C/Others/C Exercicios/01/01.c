#include <stdio.h>
#include <stdlib.h>

int main(){

    int numero1;
    int numero2;
    int resultado;

    printf("Digite um numero: ");
    scanf("%d", &numero1);

    printf("\nDigite outro numero: ");
    scanf("%d", &numero2);

    if(numero1 == numero2){
        resultado = numero1 + numero2;
        printf("%d + %d = %d", numero1, numero2, resultado);
    }
    else{
        resultado = numero1 * numero2;
        printf("%d * %d = %d", numero1, numero2, resultado);
    }

    return 0;
}