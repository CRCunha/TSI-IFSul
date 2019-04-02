#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int text;
} Testes;

void teste();
int main(){

    teste();

    return 0;
}

void teste(){
    Testes teste;

    teste.text = 1;

    if(teste.text == 1){
        printf("Teste");
    }
}