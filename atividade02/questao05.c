#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

float arit(float notas[])
{
    float media = 0;
    for (int i = 0; i < 3; i++)
    {
        media += notas[i];
    }
    media /= 3;
    return media;
}

float har(float notas[])
{
    float sum = 0;
    for (int i = 0; i < 3; i++)
    {
        sum += 1 / notas[i];
    }
    float media = 3 / sum;
    return 3 / sum;
}

float pon(float notas[], int peso[])
{
    float pon = 0;
    int sumPeso = 0;
    for (int i = 0; i < 3; i++)
    {
        pon += (notas[i] * peso[i]);
        sumPeso += peso[i];
    }
    float media = pon / sumPeso;
    return media;
}

int main(int argc, char const *argv[])
{

    float notas[3];
    int peso[] = {5, 3, 2};
    float media = 0;

    for (int i = 0; i < 3; i++)
    {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &notas[i]);
        while (notas[i] <= 0 || notas[i] > 10)
        {
            printf("Nota inválida!\nDigite a nota %d: ", i + 1);
            scanf("%f", &notas[i]);
        }
    }

    while (1)
    {

        printf("\n-------MENU-------\n");
        printf("A - média aritmética\n");
        printf("P - média ponderada\n");
        printf("H - média harmônica\n");
        printf("0 - Sair\n");
        printf("------------------\n");

        char esc, esc1;
        printf("Opção: ");
        scanf(" %c", &esc);
        esc = toupper(esc);

        if (esc == 'A')
        {
            media = arit(notas);
            printf("\nA média aritmética é: %.2f\n", media);
        }
        else if (esc == 'P')
        {
            media = pon(notas, peso);
            printf("\nA média ponderada é: %.2f\n", media);
        }
        else if (esc == 'H')
        {
            media = har(notas);
            printf("\nA média harmônica é: %.2f\n", media);
        }
        else if (esc != '0')
        {
            printf("Opção inválida!\nTente novamente\n");
        }
        else
        {
            printf("Bye... :)\n");
            break;
        }
    }

    return 0;
}
