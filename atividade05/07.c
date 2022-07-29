#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct polar
{
    float r;
    int angulo;
} Polar;

typedef struct cartesiano
{
    float x, y;
} Cart;

Polar setPonto(Polar ponto)
{
    printf("Informe o r do ponto: ");
    scanf("%f", &ponto.r);
    printf("Informe o angulo do ponto: ");
    scanf("%d", &ponto.angulo);
    return ponto;
}

Cart convertCart(Polar pp, Cart pc)
{
    pc.x = pp.r * cos(pp.angulo);
    pc.y = pp.r * sin(pp.angulo);
    return pc;
}

int main(int argc, char const *argv[])
{
    printf("Informe o ponto em coordenadas polares:\n");
    Polar pp = setPonto(pp);

    Cart pc = convertCart(pp, pc);
    printf("O correspondente em cartesiano do ponto polar informado é: (%.2f,%.2f)\n", pc.x, pc.y);
    return 0;
}