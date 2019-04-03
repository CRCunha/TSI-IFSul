#include <stdio.h>
#include <stdlib.h>

int main(){
    int escolha;
    float temperatura;
    float resposta;

    printf("Escolha a convercao desejada\n");
    printf("\n1. Celsius para Fahrenheit");
    printf("\n2. Fahrenheit para Celsius");
    printf("\n3. Celsius para Kelvin");
    printf("\n4. Kelvin para Celsius");
    printf("\n5. Encerrar programa\n");

    printf("\nDigite a convercao desejada: ");
    scanf("%d", &escolha);

    switch (escolha){
        case 1:
            printf("\nDigite a temperatura em Celsius: ");
            scanf("%f", &temperatura);
            resposta = (9*temperatura+160)/5;
            printf("\nA conversao resulta em %.1f Fahrenheit", resposta);
            break;

        case 2:
            printf("\nDigite a temperatura em Fahrenheit: ");
            scanf("%f", &temperatura);
            resposta = (temperatura-32)*5/9;;
            printf("\nA conversao resulta em %.1f Celsius", resposta);
            break;

        case 3:
            printf("\nDigite a temperatura em Celsius: ");
            scanf("%f", &temperatura);
            resposta = temperatura + 273;
            printf("\nA conversao resulta em %.1f Kelvin", resposta);
            break;
        
        case 4:
            printf("\nDigite a temperatura em Kelvin: ");
            scanf("%f", &temperatura);
            resposta = temperatura - 273;
            printf("\nA conversao resulta em %.1f Celsius", resposta);
            break;

        case 5:
            printf("Programa encerrado");
            break;
    }   

}