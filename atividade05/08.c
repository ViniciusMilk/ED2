#include <stdio.h>
#include <stdlib.h>

typedef struct funcionario
{
    char nome[46];
    int idade;
    char sexo;
    long cpf;
    char dataNascimento[11];
    int codSetor; // 0-99
    char cargo[31];
    float salario;
} Func;

Func setFunc(Func func)
{
    printf("Informe os dados do funcionário:\n");
    printf("Nome: ");
    scanf(" %45[^\n]", func.nome);
    printf("Idade: ");
    scanf("%d", &func.idade);
    printf("Sexo: ");
    scanf(" %c", &func.sexo);
    printf("CPF: ");
    scanf("%ld", &func.cpf);
    printf("Data de Nascimento: ");
    scanf(" %10[^\n]", func.dataNascimento);
    printf("Código do setor: ");
    scanf(" %d", &func.codSetor);
    printf("Cargo: ");
    scanf(" %30[^\n]", func.cargo);
    printf("Salário: ");
    scanf(" %f", &func.salario);
    return func;
}

void printFunc(Func func)
{
    printf("Dados do funcionário:\n");
    printf("Nome:\t\t\t%s\n", func.nome);
    printf("Idade:\t\t\t%d\n", func.idade);
    printf("Sexo:\t\t\t%c\n", func.sexo);
    printf("CPF:\t\t\t%ld\n", func.cpf);
    printf("Data de Nascimento:\t%s\n", func.dataNascimento);
    printf("Código do setor:\t%d\n", func.codSetor);
    printf("Cargo:\t\t\t%s\n", func.cargo);
    printf("Salário:\t\t%.2f\n", func.salario);
}

int main(int argc, char const *argv[])
{
    Func func = setFunc(func);
    printFunc(func);

    return 0;
}
