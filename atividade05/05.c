#include <stdio.h>
#include <stdlib.h>

typedef struct vetor
{
    float x, y, z;
} Vetor;

Vetor setVetor(Vetor x)
{
    printf("Digite as coordenadas do vetor:\n");
    printf("Coordenada x: ");
    scanf("%f", &x.x);
    printf("Coordenada y: ");
    scanf("%f", &x.y);
    printf("Coordenada z: ");
    scanf("%f", &x.z);
    return x;
}

Vetor somaVetor(Vetor x, Vetor y)
{
    Vetor res;
    res.x = x.x + y.x;
    res.y = x.y + y.y;
    res.z = x.z + y.z;
    return res;
}

void printfVetor(Vetor x)
{
    printf("(%.2f, %.2f, %.2f)\n", x.x, x.y, x.z);
}

int main(int argc, char const *argv[])
{

    Vetor a = setVetor(a), b = setVetor(b);

    Vetor res = somaVetor(a, b);

    printf("Vetor a = ");
    printfVetor(a);
    printf("Vetor b = ");
    printfVetor(b);
    printf("Vetor resultante = ");
    printfVetor(res);
    return 0;
}