#include <stdio.h>
#include <stdlib.h>

int main(){
    int i[4];
    int j[4];
    int x;
    int y;

    for(x = 1; x <= 4; x++){
        for(y = 1; y <= 4; y++){
            i[y] = y;
            j[x] = x;
        }
    }

    for(x = 1; x <= 4; x++){
        printf("\n");
        for(y = 1; y <= 4; y++){
            printf("|%d  %d| ", i[x], j[y]);
        }
    }

}