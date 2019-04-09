#include <stdio.h>
#include <stdlib.h>

int main(){

    int alunos;
    int x;
    int sexo;
    float altura;
    float somadorAltura = 0;
    float maisAlto = 0;
    float mediaAlturas;
    

    printf("Digite o numero de alunos: ");
    scanf("%d", &alunos);

    for(x = 1; x<= alunos; x++){
        printf("Masculino(1), feminino(2): ");
        scanf("%d", &sexo);
        printf("Digite a altura: ");
        scanf("%f", &altura);

        somadorAltura = somadorAltura + altura;

        if(altura > maisAlto){
            maisAlto = altura;
        }
    }

    printf("\nmais alto: %.2f", maisAlto);

    printf("\nSoma das alturas: %.2f", somadorAltura);
    mediaAlturas = somadorAltura / alunos;
    printf("\nMedia de altura dos alunos: %.2f", mediaAlturas);

    return 0;
}