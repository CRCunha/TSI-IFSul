#include <stdio.h>
#include <stdlib.h>

int main(){

    float taxaChuva;

    printf("Digite a taxa de chuva em mm/h: ");
    scanf("%f", &taxaChuva);

    if(taxaChuva < 5){
        printf("Chuva Fraca");
    } 
    else{
        if(taxaChuva >= 5 && taxaChuva < 25){
            printf("Chuva Moderada");
        }
        else{
            if(taxaChuva >= 25 && taxaChuva < 50){
                printf("Chuva Forte");
            }
            else{
                if(taxaChuva >= 50){
                    printf("Chuva Muito Forte");
                }
            }
        }
    }

    return 0;
}