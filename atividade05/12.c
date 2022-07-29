#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Neste sorteio de cartas, a carta X equivale a carta 10

typedef struct carta
{
    char carta;
    char naipe[8];
} CARTA;

void sorteio(CARTA play1[], CARTA play2[])
{
    srand(time(NULL));
    char cartas[52] = {'A', '2', '3', '4', '5', '6', '7', '8', '9', 'X', 'J', 'Q', 'K', 'A', '2', '3', '4', '5', '6', '7', '8', '9', 'X', 'J', 'Q', 'K', 'A', '2', '3', '4', '5', '6', '7', '8', '9', 'X', 'J', 'Q', 'K', 'A', '2', '3', '4', '5', '6', '7', '8', '9', 'X', 'J', 'Q', 'K'};

    char naipe[4][8] = {{"COPAS"}, {"OURO"}, {"PAUS"}, {"ESPADAS"}};

    int i = 0, j, com, vet[10];
    do
    {
        vet[i] = 1 + (rand() % 51);
        com = 0;
        for (int j = 0; j < i; j++)
        {
            if (vet[i] == vet[j])
                com = 1;
        }
        if (com == 0)
            i++;
    } while (i < 10);
    for (i = 0; i < 5; i++)
    {
        if (vet[i] < 13)
        {

            strcpy(play1[i].naipe, naipe[0]);
            play1[i].carta = cartas[vet[i]];
        }
        else if (vet[i] < 26)
        {
            strcpy(play1[i].naipe, naipe[1]);
            play1[i].carta = cartas[vet[i]];
        }
        else if (vet[i] < 39)
        {
            strcpy(play1[i].naipe, naipe[2]);
            play1[i].carta = cartas[vet[i]];
        }
        else
        {
            strcpy(play1[i].naipe, naipe[3]);
            play1[i].carta = cartas[vet[i]];
        }
    }
    for (i, j = 0; i < 10; i++, j++)
    {
        if (vet[i] < 13)
        {
            strcpy(play2[j].naipe, naipe[0]);
            play2[j].carta = cartas[vet[i]];
        }
        else if (vet[i] < 26)
        {
            strcpy(play2[j].naipe, naipe[1]);
            play2[j].carta = cartas[vet[i]];
        }
        else if (vet[i] < 39)
        {
            strcpy(play2[j].naipe, naipe[2]);
            play2[j].carta = cartas[vet[i]];
        }
        else
        {
            strcpy(play2[j].naipe, naipe[3]);
            play2[i].carta = cartas[vet[i]];
        }
    }
}

void naipe(CARTA carta, int num)
{
    if (num == 1)
    {
        strcpy("COPAS", carta.naipe);
    }
    else if (num == 2)
    {
        strcpy("OURO", carta.naipe);
    }
    else if (num == 3)
    {
        strcpy("PAUS", carta.naipe);
    }
    else
    {
        strcpy("ESPADAS", carta.naipe);
    }
}

int main(int argc, char const *argv[])
{
    CARTA play1[5];
    CARTA play2[5];

    sorteio(play1, play2);

    for (int i = 0; i < 5; i++)
    {
        printf(" %c ", play1[i].carta);
        printf("%s\t", play1[i].naipe);
    }
    printf("\n\n");
    for (int i = 0; i < 5; i++)
    {
        printf(" %c ", play2[i].carta);
        printf("%s\t", play2[i].naipe);
    }
    printf("\n");
    return 0;
}