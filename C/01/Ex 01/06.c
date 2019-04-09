#include <stdio.h>
#include <stdlib.h>

int main(){

    int nLinhas;
    int valor;
    int mLinhas[nLinhas];
    int nColunas[nLinhas];
    int x;
    int y;
    int vet[x][y];

    printf("Digite o numero de linhas: ");
    scanf("%d", &nLinhas);

    for(x = 0; x <= nLinhas; x++){
        for(y = 0 ; y <= nLinhas; y ++){
            printf("\nDigite um valor: ");
            scanf("%d", &valor);
            vet[x][y] = valor;
        }
    }

    for(x = 0; x <= nLinhas; x++){
        printf("\n");
        for(y = 0 ; y <= nLinhas; y ++){
            printf("%d", vet[x][y]);
        }
    }

    return 0;
}