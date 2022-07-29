#include <stdio.h>
#include <stdlib.h>

typedef struct dados
{
    char nome[45];
    char endereco[75];
    char date[9];
    char cidade[30];
    int cep;
    char email[50];
} DD;

int main(int argc, char const *argv[])
{
    DD pessoa;
    printf("Digite sua informações:\n");

    return 0;
}