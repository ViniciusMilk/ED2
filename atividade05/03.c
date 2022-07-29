/*
  Construa uma estrutura aluno com nome, numero de matrícula e curso. Leia do usuario á informação de 5 alunos, armazene em vetor dessa estrutura e imprima os dados na tela.
*/

#include <stdio.h>
#include <string.h>

typedef struct aluno
{
    char nome[46];
    int numMatricula;
    char curso[30];
} Aluno;

int main(void)
{
    Aluno aluno[2];

    printf("Digite os dados dos alunos: \n");
    for (int i = 0; i < 2; i++)
    {
        printf("Nome do aluno %d: ", i + 1);
        scanf(" %45[^\n]", aluno[i].nome);

        printf("Número de matricula do aluno %d: ", i + 1);
        scanf("%d", &aluno[i].numMatricula);

        printf("curso do aluno %d: ", i + 1);
        scanf(" %30[^\n]", aluno[i].curso);
    }

    printf("Dados dos alunos: \n");

    for (int i = 0; i < 2; i++)
    {
        printf("Aluno %d: %s\n", i + 1, aluno[i].nome);

        printf("Matricula do aluno %d: %d\n", i + 1, aluno[i].numMatricula);

        printf("curso do aluno %d: %s\n", i + 1, aluno[i].curso);
    }

    return 0;
}