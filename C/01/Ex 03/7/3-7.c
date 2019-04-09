#include <stdio.h>
#include <stdlib.h>

// STRUCT
struct Jogador{
    int numeroCamisa;
    int quantidadeGols;
};

// FUNÇÃO MAIN
int eGoleador(int *x, int *y);
int leJogador(int *x, int *y);
int escreveJogador(int *x, int *y);

int main(){
    int numero;
    int gols;
    char escolha = 'S';
    int goleador;

    system("clear");
    leJogador(&numero, &gols);
    system("clear");
    printf("\nDeseja verificar o jogador? (Y/N): ");
    scanf(" %c", &escolha);
    
    if(escolha == 'Y' || escolha == 'y'){
        escreveJogador(&numero, &gols);
        goleador = eGoleador(&numero, &gols);
        if(goleador == 1){
            printf("\nÉ Goleador");
        }
    }

    
    return 0;
}

// FUNÇÃO 1 - LER JOHGADOR
int leJogador(int *x, int *y){

    int jogadorInfo[2];

    struct Jogador leJogador;

    printf("Digite o numero da camiseta do jogador: ");
    scanf("%d", &leJogador.numeroCamisa);

    printf("\nDigite o numero de gols: ");
    scanf("%d", &leJogador.quantidadeGols);

    *x = leJogador.numeroCamisa;
    *y = leJogador.quantidadeGols;

    return (0);
}

// FUNÇÃO 2 - ESCREVER JOGADOR
int escreveJogador(int *x, int *y){
    printf("Numero da Camisa: %d", *x);
    printf("\nNumero de Gols: %d", *y);

    return 0;
}

// FUNÇÃO 3 - É GOLEADOR
int eGoleador(int *x, int *y){
    if(*y >= 5){
        return(1);
    }
    else{
        return 0;
    }
}
