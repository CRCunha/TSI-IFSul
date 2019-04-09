#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int dia;
    int mes;
    int ano;
}Data;

typedef struct{
    char nome[30];
    Data nascimento;
}Aluno;


int main(){
    int x;
    Data dataHoje;
    Aluno aluno[2];
    int somador = 0;
    int vetorAlunos[somador];

    printf("Digite a data de hoje");
    printf("\nDia - ");
    scanf("%d", &dataHoje.dia);
    printf("\nMes- ");
    scanf("%d", & dataHoje.mes);
    printf("\nAno - ");
    scanf("%d", & dataHoje.ano);

    system("clear");
    for(x = 1; x <= 2; x++){
        printf("\n\nDigite o Nome: ");
        scanf(" %s", &aluno[x].nome);
        printf("\nInfome a data de nascimento: ");
        printf("\nDia - ");
        scanf("%d", &aluno[x].nascimento.dia);
        printf("\nMes- ");
        scanf("%d", & aluno[x].nascimento.mes);
        printf("\nAno - ");
        scanf("%d", & aluno[x].nascimento.ano);

        if(aluno[x].nascimento.mes == dataHoje.mes){
            somador = somador + 1;
            vetorAlunos[x] = aluno.nascimento.ano;
        }
    }

    printf("%d Alunos nasceram no mes em que estamos", somador);

    return 0;
}