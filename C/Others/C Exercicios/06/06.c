#include <stdio.h>
#include <stdlib.h>

int main(){

    int dia;
    int mes;
    int ano;

    printf("Digite o dia: ");
    scanf("%d", &dia);

    printf("Digite o mes: ");
    scanf("%d", &mes);

    printf("Digite o ano: ");
    scanf("%d", &ano);

    if(dia > 31 || dia <= 0){
        printf("Data invalida");
        printf("\nMotivo: Dia invalido");
    }
    else{
        if(mes > 12 || mes <=0 ){
            printf("Data invalida");
            printf("\nMotivo: Mes invalido");
        }
        else{
            if(ano > 2017){
                printf("Data invalida");
                printf("\nMotivo: ano invalido");
            }
            else{
                printf("A data e valida");
            }
        }
    }

    return 0;
}