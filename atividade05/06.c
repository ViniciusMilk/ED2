#include <stdio.h>
#include <stdlib.h>

typedef struct aluno
{
    char nome[46];
    int numMatricula;
    float nota[3];
} Aluno;

float mediaPon(float notas[])
{
    int peso[] = {1, 2};
    float somaNotas = 0;
    int sumPeso = 0;
    for (int i = 0; i < 2; i++)
    {
        somaNotas += (notas[i] * peso[i]);
        sumPeso += peso[i];
    }
    float media = somaNotas / sumPeso;
    return media;
}

void setDados(Aluno aluno[])
{
    printf("Digite os dados dos alunos: \n");
    for (int i = 0; i < 10; i++)
    {
        printf("Nome do aluno %d: ", i + 1);
        scanf(" %45[^\n]", aluno[i].nome);

        printf("Número de matricula do aluno %d: ", i + 1);
        scanf("%d", &aluno[i].numMatricula);
        for (int j = 0; j < 2; j++)
        {
            printf("Nota %d do aluno %d: ", j + 1, i + 1);
            scanf("%f", &aluno[i].nota[j]);
        }
        aluno[i].nota[2] = mediaPon(aluno[i].nota);
    }
}

void printAluno(Aluno aluno[])
{
    system("clear");
    printf("Lista de alunos:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Aluno: %s\tmedia: %.2f\n", aluno[i].nome, aluno[i].nota[2]);
    }
}
int main(int argc, char const *argv[])
{
    Aluno aluno[10];
    setDados(aluno);
    printAluno(aluno);

    return 0;
}