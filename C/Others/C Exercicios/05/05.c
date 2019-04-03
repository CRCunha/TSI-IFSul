#include <stdio.h>
#include <stdlib.h>

int main(){

    char nome[20];
    int idade;
    float peso;
    float altura;

    printf("Digite seu nome: ");
    scanf(" %s", nome);

    printf("\nDigite sua idade: ");
    scanf("%d", &idade);

    printf("\nDigite seu peso: ");
    scanf("%f", &peso);

    printf("\nDigite sua altura: ");
    scanf("%f", &altura);

    if(idade >= 18){
        if(peso >= 60){
            if(altura >= 1.70){
                printf("%s Esta apto a entrar no exercito", nome);
            }
            else{
                printf("%s Nao esta apto a entrar no exercito", nome);
            }   
        }
    }

    return 0;
}