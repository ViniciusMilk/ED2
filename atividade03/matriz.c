#include <stdio.h>
#include <stdlib.h>

typedef struct aluno
{
    char nome[81];
    char matricula[8];
    char turma;
    float nota[3];

}ALUNO;

void setPts(int n, ALUNO** tab){
    for (int i = 0; i < n; i++)
    {
        printf("\nDigite o nome do aluno: ");
        scanf(" %82[^\n]", tab[i]->nome);
        printf("\nDigite a matricula do aluno[Até 8 caracteres]: ");
        scanf(" %9[^\n]", tab[i]->matricula);
        printf("\nDigite a turma do aluno[Somente 1 caractere]: ");
        scanf(" %c", &tab[i]->turma);
        printf("\nInforme as notas do aluno: ");
        for (int j = 0; j < 3; j++)
        {
            printf("\nNota %d: ",j+1);
            scanf("%f", &tab[i]->nota[j]);
        }
    }

}

void imprime(int n, ALUNO** tab){
    for (int i = 0; i < n; i++)
    {
        float media = 0;
        for (int j = 0; j < 3; j++)
        {
            media += tab[i]->nota[j];
        }
        if((media/3) >= 7){
        printf("---Dados do aluno---\n");
        printf("Nome: %s\n", tab[i]->nome);
        printf("Matricula: %s\n", tab[i]->matricula);
        printf("Turma: %c\n", tab[i]->turma);
        printf("Média: %.2f\n", media/3);
        }
    }
}

int main(int argc, char const *argv[]){

    int qntA = 0;
    printf("Digite a quantidade de alunos da turma: ");
    scanf("%d", &qntA);

    ALUNO **matriz = (ALUNO**) calloc(qntA, sizeof(ALUNO));
    for (int i = 0; i < qntA; i++) {
        matriz[i] = (ALUNO *) malloc (sizeof(ALUNO));
    }

    setPts(qntA, matriz);
    imprime(qntA, matriz);

    for (int i = 0; i < qntA; i++)
    {
        free(matriz[i]);
    }
    free(matriz);
    return 0;
}