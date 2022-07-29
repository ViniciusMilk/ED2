#include <stdio.h>
#include <stdlib.h>

typedef struct horario
{
    unsigned short int hora;
    unsigned short int min;
    unsigned short int seg;
} HO;

typedef struct data
{
    unsigned short int dia;
    unsigned short int mes;
    unsigned short int ano;
} DATA;

typedef struct compromisso
{
    DATA data;
    HO horario;
    char desc[200];
} COM;

int main(int argc, char const *argv[])
{
    COM encontro;

    return 0;
}
