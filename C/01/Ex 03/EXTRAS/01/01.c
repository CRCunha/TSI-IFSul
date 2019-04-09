#include <stdio.h>
#include <stdlib.h>

// ESTRUTURA DE DATA
struct Data{
    int dia;
    int mes;
    int ano;
};

// ESTRUTURA DE PESSOAS
struct Pessoa{
    char nome[30];
    int idade;
    int cpf;
    struct Data dataCadastro;
};

// FUNÇÃO CADASTRAR
int cadastro(int x){
    int rep;

    struct Pessoa aluno[x];

    for(rep = 1; rep <= x ; rep ++){
        printf("[%d] Digite o nome: ", rep);
        scanf("%s", aluno[rep].nome);
        printf("\n[%d] Digite a idade: ", rep);
        scanf("%d", &aluno[rep].idade);
        printf("\n[%d] Digite o CPF: ", rep);
        scanf("%d", &aluno[rep].cpf);
        printf("\n[%d] Digite o dia: ", rep);
        scanf("%d", &aluno[rep].dataCadastro.dia);
        printf("\n[%d] Digite o mes: ", rep);
        scanf("%d", &aluno[rep].dataCadastro.mes);
        printf("\n[%d] Digite o ano: ", rep);
        scanf("%d", &aluno[rep].dataCadastro.ano);
        system("clear");
    }

    return 0;
}

// FUNÇÃO VERIFICAR
int verificar(int x){// PASSAR STRUCT NO PROTITOPO 
    int rep;

    struct Pessoa aluno[x];

    for(rep = 1; rep <= x ; rep ++){
        printf("[%d] - %s", rep, aluno[rep].nome);
        printf("\n[%d] - %d", rep, aluno[rep].idade);
        printf("\n[%d] - %d", rep, aluno[rep].cpf);
        printf("\n[%d] - %d", rep, aluno[rep].dataCadastro.dia);
        printf("\n[%d] - %d", rep, aluno[rep].dataCadastro.mes);
        printf("\n[%d] - %d", rep, aluno[rep].dataCadastro.ano);
    }

    return 0;
}

// FUNÇÃO PRINCIPAL
int cadastro(int x);
int verificar(int x);
int main(){
    int numeroCadastros;
    char escolha;

    printf("Digite o numero de pessoas que deseja cadastrar: ");
    scanf("%d", &numeroCadastros);

    cadastro(numeroCadastros);

    system("clear");
    printf("Deseja verificar os alunos cadastrados? (Y/N): ");
    scanf(" %c", &escolha);

    if(escolha == 'Y' || escolha == 'y'){
        verificar(numeroCadastros);
    }

    return 0;
}