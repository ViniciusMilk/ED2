#include <stdio.h>
#include <stdlib.h>

typedef struct informacoes
{
    char nome[35];
    unsigned short int idade;
    char rua[50];
    char bairro[50];
    char cidade[30];

} INFO;

int main(int argc, char const *argv[])
{
    INFO pessoa;

    printf("Dê sua informações: ");
    printf("nome: ");
    scanf(" %[^\n]", pessoa.nome);
    printf("idade: ");
    scanf(" %d", pessoa.idade);
    printf("rua: ");
    scanf(" %[^\n]", pessoa.rua);
    printf("bairro: ");
    scanf(" %[^\n]", pessoa.bairro);
    printf("cidade: ");
    scanf(" %[^\n]", pessoa.cidade);

    return 0;
}
