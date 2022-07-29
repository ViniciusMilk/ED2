#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct aluno
{
    char nome[81];
    char matricula[8];
    float media;

} ALUNO;

void imprime_aprovados(ALUNO aluno[], int qnt)
{
    printf("==========Aprovados==========\n");
    for (int i = 0; i < qnt; i++)
    {
        printf("Aluno: %s\n", aluno[i].nome);
        printf("matricula: %s\n", aluno[i].matricula);
        printf("media: %.2f\n", aluno[i].media);
    }
}
void imprime_reprovados(ALUNO aluno[], int qnt)
{
    ;
    printf("==========Reprovados==========\n");
    for (int i = 0; i < qnt; i++)
    {
        printf("Aluno: %s\n", aluno[i].nome);
        printf("matricula: %s\n", aluno[i].matricula);
        printf("media: %.2f\n", aluno[i].media);
    }
}

void setAluno(ALUNO aluno[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("\nDigite o nome do aluno %d: ", i + 1);
        scanf(" %80[^\n]", aluno[i].nome);
        printf("\nDigite a matricula do aluno %d[Até 8 caracteres]: ", i + 1);
        scanf(" %7[^\n]", aluno[i].matricula);
        printf("\nDigite a media do aluno %d: ", i + 1);
        scanf(" %f", &aluno[i].media);
    }
}

void setAlunoEmVetor(ALUNO aluno[], ALUNO aprovados[], ALUNO reprovados[])
{
    for (int i = 0, j = 0, k = 0; i < 4; i++)
    {
        if (aluno[i].media >= 5)
        {
            aprovados[j] = aluno[i];
            j++;
        }
        else
        {
            reprovados[k] = aluno[i];
            k++;
        }
    }
}

void divideVetor(ALUNO aluno[])
{
    int contA = 0, contR = 0;
    for (int i = 0; i < 4; i++)
    {
        if (aluno[i].media >= 5)
        {
            contA++;
        }
        else
        {
            contR++;
        }
    }
    ALUNO aprovados[contA];
    ALUNO reprovados[contR];
    setAlunoEmVetor(aluno, aprovados, reprovados);
    imprime_aprovados(aprovados, contA);
    imprime_reprovados(reprovados, contR);
}

int main(int argc, char const *argv[])
{

    ALUNO aluno[4];

    setAluno(aluno);
    divideVetor(aluno);

    return 0;
}
