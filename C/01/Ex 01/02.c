#include <stdio.h>
#include <stdlib.h>

void exibeOnzeTracos();
void retanguloTracos();

int main(){

    retanguloTracos();
    printf("\n");
    retanguloTracos();

    return 0;
}

void exibeOnzeTracos(){

    int x;

    for(x = 0; x <= 11; x++){
        printf("-");
    }

}

void retanguloTracos(){
    int x;

    for(x = 0; x <= 3; x++){
        exibeOnzeTracos();
        printf("\n");
    }
}