#include <stdio.h>
#include <stdlib.h>

struct Data{
    int dia;
    int mes;
    int ano;
};

struct Aluno{
    int numeroMatricula;
    struct Data dataNasc;
};

int main(){
    
    int dia;
    int mes;
    int ano;n
    int x = 1;

    system("clear");

    printf("Informe a data de Hoje");
    printf("\nDia: ");
    scanf("%d", &dia);
    printf("\nMes: ");
    scanf("%d", &mes);
    printf("\nAno: ");
    scanf("%d", &ano);
    system("clear");
    struct Aluno alunoTeste;

    do{
        printf("\n");
        alunoTeste.numeroMatricula = x;
        printf("\nInforme a Data de Nascimento");
        printf("\nDia: ");
        scanf("%d", &alunoTeste.dataNasc.dia);
        printf("\nMes: ");
        scanf("%d", &alunoTeste.dataNasc.mes);
        printf("\nAno: ");
        scanf("%d", &alunoTeste.dataNasc.ano);

        system("clear");

        printf("Matricula: %d", alunoTeste.numeroMatricula);
        printf("\nNascimento: %d / %d / %d", alunoTeste.dataNasc.dia, alunoTeste.dataNasc.mes, alunoTeste.dataNasc.ano);

        if((ano - alunoTeste.dataNasc.ano) < 18 ){
        printf("\nMenor de Idade");
        }
        else{
            printf("\nMaior de Idade");
        }
        x++;

    } while(alunoTeste.dataNasc.dia < 31);

    return 0;
}