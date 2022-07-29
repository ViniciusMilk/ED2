#include <stdio.h>
#include <string.h>

typedef struct aluno
{
    char nome[46];
    int numMatricula;
    char curso[30];
    float nota[4];
} Aluno;

void aprovados(Aluno aluno[])
{
    printf("\n\n-----Lista de aprovados-----\n");
    for (int i = 0; i < 5; i++)
    {
        if (aluno[i].nota[3] >= 6)
        {
            printf("%s\n", aluno[i].nome);
        }
    }
    printf("\n\n----------------------------\n");
}

void reprovados(Aluno aluno[])
{
    printf("\n\n-----Lista de aprovados-----\n");
    for (int i = 0; i < 5; i++)
    {
        if (aluno[i].nota[3] < 6)
        {
            printf("%s\n", aluno[i].nome);
        }
    }
    printf("\n\n----------------------------\n");
}

void searchMenorMedia(Aluno aluno[])
{
    int posi = 0;
    float media = aluno[0].nota[3];
    for (int i = 0; i < 5; i++)
    {
        if (aluno[i].nota[3] < media)
        {
            posi = i;
            media = aluno[i].nota[3];
        }
    }
    printf("O aluno %s tem a menor média que é %.2f.", aluno[posi].nome, aluno[posi].nota[3]);
}

void searchMaiorMedia(Aluno aluno[])
{
    int posi = 0;
    float media = aluno[0].nota[3];
    for (int i = 0; i < 5; i++)
    {
        if (aluno[i].nota[3] > media)
        {
            posi = i;
            media = aluno[i].nota[3];
        }
    }
    printf("O aluno %s tem a maior média que é %.2f.", aluno[posi].nome, aluno[posi].nota[3]);
}

void searchMaiorNota1(Aluno aluno[])
{
    int posi = 0;
    float nota = 0;
    for (int i = 0; i < 5; i++)
    {
        if (aluno[i].nota[0] > nota)
        {
            posi = i;
            nota = aluno[i].nota[0];
        }
    }
    printf("O aluno %s tem a maior nota da primera avaliação que é %.2f.", aluno[posi].nome, aluno[posi].nota[0]);
}

void setDados(Aluno aluno[])
{
    printf("Digite os dados dos alunos: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("Nome do aluno %d: ", i + 1);
        scanf(" %45[^\n]", aluno[i].nome);

        printf("Número de matricula do aluno %d: ", i + 1);
        scanf("%d", &aluno[i].numMatricula);

        printf("curso do aluno %d: ", i + 1);
        scanf(" %30[^\n]", aluno[i].curso);
        for (int j = 0; j < 3; j++)
        {
            printf("Nota %d do aluno %d: ", j + 1, i + 1);
            scanf("%f", &aluno[i].nota[j]);
        }
        aluno[i].nota[3] = (aluno[i].nota[0] + aluno[i].nota[1] + aluno[i].nota[2]) / 3;
    }
}

int main(void)
{

    Aluno aluno[5];

    setDados(aluno);

    int opc = -1;
    while (opc != 0)
    {
        printf("\n-------MENU-------\n");
        printf("1 - para aluno com maior nota 1\n");
        printf("2 - para aluno com maior média\n");
        printf("3 - para aluno com menor média\n");
        printf("4 - para lista de aprovados\n");
        printf("5 - para lista de reprovados\n");
        printf("0 - Sair\n");
        printf("------------------\n");
        printf("Escolha um opção: ");
        scanf("%d", &opc);
        switch (opc)
        {
        case 1:
            searchMaiorNota1(aluno);
            break;
        case 2:
            searchMaiorMedia(aluno);
            break;
        case 3:
            searchMenorMedia(aluno);
            break;
        case 4:
            aprovados(aluno);
            break;
        case 5:
            reprovados(aluno);
            break;
        case 0:
            printf("Volte sempre!\n");
            break;
        default:
            printf("Opcao Invalida!\n");
            break;
        }
    }

    return 0;
}