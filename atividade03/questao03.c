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

float* media_turma(int n, ALUNO** tab, char turma){

    for (int i = 0; i < n; i++)
    {
        if (tab[i]->turma == turma)
        {
            for (int j = 0; j < 3; j++)
            {
                
            }
            
        }
        
    }
    

    /* float aux[n];
    int cont = 0;
    for (int i = 0; i < n; i++)
    {
        aux[i] = 0;
        for (int j = 0; j < 3; j++)
        {
            aux[i] += tab[i]->nota[j];
        }
        if ((aux[i] / 3) >= 7)
            cont++;
    }

    float *media = (float *) malloc(cont * sizeof(float));
    for (int i = 0; i < cont; i++)
    {
        media[i] = aux[i];
    } */
    return NULL;/* media */
}

/* void imprime_turma(int n, ALUNO** tab, char turma){
    printf("Média dos alunos da turma %c:\n",turma);
    float media;
    for (int i = 0; i < n; i++)
    {
        media = 0;
        printf("=====Dados dos alunos=====\n");
        if (tab[i]->turma == turma)
        {
            media = media_turma(n, tab[i], turma);
            printf("--------------------------\n");
            printf("Nome: %s\n", tab[i]->nome);
            printf("Matricula: %s\n", tab[i]->matricula);
            printf("Turma: %c\n", tab[i]->turma);
            printf("Média: %.2f\n", media);
        }
    }
} */

int main(int argc, char const *argv[]){

    int qntA = 0;
    printf("Digite a quantidade de alunos da turma: ");
    scanf("%d", &qntA);

    ALUNO **matriz = (ALUNO**) calloc(qntA, sizeof(ALUNO));
    for (int i = 0; i < qntA; i++) {
        matriz[i] = (ALUNO *) malloc (sizeof(ALUNO));
    }

    setPts(qntA, matriz);

    char turma;
    printf("Informe a turma que pretende ver a média dos alunos: ");
    scanf(" %c", &turma);

    float *media = media_turma(qntA, matriz, turma);

    for (int i = 0; i < qntA; i++)
    {
        printf("Nome: %s\n", matriz[i]->nome);
        printf("Média: %.2f\n", media[i]);
    }
    
    for (int i = 0; i < qntA; i++)
    {
        free(matriz[i]);
    }
    free(matriz);
    free(media);
    printf("\n");
    return 0;
}
