#include <stdio.h>
#include <stdlib.h>

struct data{
    int dia, mes, ano;
};

    
int main(){

    struct data dt;

    printf("Informe o dia");
    scanf("%d", &dt.dia);

    printf("Informe o mes");
    scanf("%d", &dt.mes);

    printf("Infome o ano");
    scanf("%d", &dt.ano);


    if(dt.dia == 7 && dt.mes == 9){
        printf("Data da Independência");
    }
    else{
        printf("Sem comemoração");
    }
    

    return 0;
}