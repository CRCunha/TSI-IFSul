#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int dia;
    int mes;
    int ano;
}Data;

typedef struct{
    int numMatricula;
    Data nascimento;
}Aluno;

int main(){
    Data dataHoje;
    Aluno alunos;
    int x = 1;
    int idade;

    printf("Informe a data de hoje: ");
    printf("\nDia - ");
    scanf("%d", &dataHoje.dia);
    printf("Mes - ");
    scanf("%d", &dataHoje.mes);
    printf("Ano - ");
    scanf("%d", &dataHoje.ano);

    system("clear");
    do{
        printf("\nInforme a data de nascimento - Matricula[%d]", x);
        printf("\nDia - ");
        scanf("%d", &alunos.nascimento.dia);
        if(alunos.nascimento.dia > 31){
            return 0;
        }
        printf("Mes - ");
        scanf("%d", &alunos.nascimento.mes);
        printf("Ano - ");
        scanf("%d", &alunos.nascimento.ano);

        idade = dataHoje.ano - alunos.nascimento.ano;

        if(dataHoje.ano - alunos.nascimento.ano >= 18){
            printf("Matricula[%d] - idadde[%d] - Maior\n", x, idade);
        }
        else{
            printf("Matricula[%d] - idadde[%d] -  Menor\n", x, idade);
        }

        x++;
    }while(alunos.nascimento.dia <= 31);

    

    return 0;
}