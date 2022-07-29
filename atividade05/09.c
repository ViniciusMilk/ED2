#include <stdio.h>
#include <stdlib.h>
#include <complex.h>

typedef struct numComplexo
{
    float real;
    float imag;
} COMPLEX;

int main(int argc, char const *argv[])
{

    COMPLEX num[2];
    printf("Informe 2 numeros complexos\n");
    for (int i = 0; i < 2; i++)
    {
        printf("Parte real do %d numero: ", i + 1);
        scanf("%f", &num[i].real);
        printf("Parte imaginaria do %d numero: ", i + 1);
        scanf("%f", &num[i].imag);
    }

    float complex z = num[0].real + num[0].imag * I;
    float complex w = num[1].real + num[1].imag * I;

    float complex soma, sub, mult;
    soma = z + w;
    sub = z - w;
    mult = z * w;

    if (cimag(soma) < 0)
    {
        printf("A soma dos numeros complexos é: %.2f%.2fi\n", creal(soma), cimag(soma));
    }
    else
    {
        printf("A soma dos numeros complexos é: %.2f+%.2fi\n", creal(soma), cimag(soma));
    }

    if (cimag(sub) < 0)
    {
        printf("A subtracao dos numeros complexos é: %.2f%.2fi\n", creal(sub), cimag(sub));
    }
    else
    {
        printf("A subtracao dos numeros complexos é: %.2f+%.2fi\n", creal(sub), cimag(sub));
    }

    if (cimag(mult) < 0)
    {
        printf("O produto dos numeros complexos é: %.2f%.2fi\n", creal(mult), cimag(mult));
    }
    else
    {
        printf("O produto dos numeros complexos é: %.2f+%.2fi\n", creal(mult), cimag(mult));
    }

    return 0;
}