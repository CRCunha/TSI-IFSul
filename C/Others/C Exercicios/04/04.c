#include <stdio.h>
#include <stdlib.h>

int main(){

    float media;
    float resto;

    printf("Digite a media do aluno: ");
    scanf("%f", &media);

    if(media >= 7){
        printf("Aprovado");
    }
    else{
        if(media >= 3 && media < 7){
            printf("Exame");
            resto = 10 - media;
            printf("\n%.2f necessario para passar", resto);
        }
        else{
            if(media < 3 && media >= 0){
                printf("Reprovado");
            }
            else{
                printf("Erro: media negativa");
            }
        }
    }

    return 0;
}