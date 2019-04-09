#include <stdio.h>
#include <stdlib.h>

struct Data{
    int dia;
    int mes;
    int ano;
};

int main(){

    struct Data dataAlunos;

    int vetAluno[1];
    int x;

    for(x = 0; x <= 1; x++){
        system("clear");
        printf("Dia: ");
        vetAluno[x] = scanf("%d", &dataAlunos.dia);
        printf("\nMes: ");
        vetAluno[x] = scanf("%d", &dataAlunos.mes);
        printf("\nAno: ");
        vetAluno[x] = scanf("%d", &dataAlunos.ano);
    }


    for(x = 0; x <= 1; x++){
        printf("%d\n", &vetAluno[x]);
    }

    return 0;
}