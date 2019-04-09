#include <stdio.h>
#include <stdlib.h>

int maiorNumero (int numero1, int numero2);

int main(){

    int numero1;
    int numero2;
    int resultadomian;

    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);

    printf("\nDigite o segundo numero: ");
    scanf("%d", &numero2);

    resultadomian = maiorNumero(numero1, numero2);

    if(resultadomian == -1){
        printf("Eles são iguais");
    }
    else{
        printf("%d", resultadomian);
    }

    return 0;
}

int maiorNumero (int numero1, int numero2){
    int resultado;

    if(numero1 > numero2){
        resultado = numero1;
    }else{
        if(numero2 > numero1){
            resultado = numero2;
        }
        else{
            resultado = -1;
        }
    }
    return(resultado);
}