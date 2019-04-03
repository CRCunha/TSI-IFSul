#include <stdlib.h>
#include <stdio.h>
#include "define.h"

int cadastrarAluno(){
    cadastroAluno aluno;

    printf("Digite o nome do Aluno: ");
    scanf(" %s", aluno.nome);

    printf("\nDigite a idade do Aluno: ");
    scanf("%d", aluno.idade);

    printf("\nDigite a matricula do Aluno: ");
    scanf("%d", aluno.matricula);

    return 0;
}