#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*OBS: Utilizei um metodo de ordenação para a o vetor por ordem alfabética*/

typedef struct endereco
{
    char rua[50];
    char bairro[50];
    char cidade[30];
} END;

typedef struct pessoa
{
    char nome[30];
    END end;
    int tell;
} PES;

void orderVetor(PES vet[])
{
    PES aux;
    for (int i = 0, id = 0; i < 5; i++)
    {
        aux = vet[i];
        id = i;
        for (int j = i; j < 5; j++)
        {
            if (strcmp(aux.nome, vet[j].nome) > 0)
            {
                aux = vet[j];
                id = j;
            }
        }
        vet[id] = vet[i];
        vet[i] = aux;
    }
}

void setPessoas(PES pessoa[])
{
    printf("Dê as informações de 5 pessoas\n");
    for (int i = 0; i < 5; i++)
    {
        printf("nome da %d pessoa: ", i + 1);
        scanf(" %[^\n]", pessoa[i].nome);
        printf("Informe o endereco da %d pessoa:\n", i + 1);
        printf("rua: ");
        scanf(" %[^\n]", pessoa[i].end.rua);
        printf("bairro: ");
        scanf(" %[^\n]", pessoa[i].end.bairro);
        printf("cidade: ");
        scanf(" %[^\n]", pessoa[i].end.cidade);
        printf("Telefone da %d pessoa: ", i + 1);
        scanf("%d", &pessoa[i].tell);
    }
}

void printPessoas(PES pessoa[])
{
    for (int i = 0; i < 5; i++)
    {
        printf("%s\n", pessoa[i].nome);
        printf("%s\n", pessoa[i].end.rua);
        printf("%s\n", pessoa[i].end.bairro);
        printf("%s\n", pessoa[i].end.cidade);
        printf("%d\n", pessoa[i].tell);
    }
}

int main(int argc, char const *argv[])
{
    PES pessoa[5];
    setPessoas(pessoa);
    orderVetor(pessoa);
    printPessoas(pessoa);
    return 0;
}
