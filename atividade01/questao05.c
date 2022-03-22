#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    
    printf("Informe a quantidade de alunos que tem na turma: ");
    int nStudant = 0;
    scanf("%d", &nStudant);

    float studant[nStudant][3];
    int i, j;

    for (i = 0; i < nStudant; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("\nNota %d do aluno %d: ",j+1 , i+1);
            scanf("%f", &studant[i][j]);
            if (j == 0 && studant[i][j] == 50)
            {
                printf("encerrando programa...\n");
                return 0;
            } else {
                while (studant[i][j] < 0 || studant[i][j] > 10)
                {                
                    printf("Nota inválida\nDigite uma nota entre 0 e 10\n");
                    printf("Nota %d do aluno %d: ",j+1 , i+1);
                    scanf("%f", &studant[i][j]);
                    if (j == 0 && studant[i][j] == 50)
                    {
                        printf("encerrando programa...\n");
                        return 0;
                    }
                }
            } 
        }
        studant[i][2] = (studant[i][0] + studant[i][1]) / 2;
    }
    for (int i = 0; i < nStudant; i++)
    {
        printf("\nMédia do aluno %d é %.2f\n", i+1, studant[i][2]);
    }
    
    return 0;
}