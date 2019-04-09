#include <stdio.h>
#include <stdlib.h>

int exibeDivisores();

int main(){


    exibeDivisores();

    return 0;
}

int exibeDivisores(){
    int x;
    int y;

    for(x = 1; x <=20; x++ ){
        printf("\n");
       for(y = 1; y <= x; y++){
            if(x % y  == 0 ){
               printf("%d %d", x, y);
           }
       }
    }

    return 0;
}