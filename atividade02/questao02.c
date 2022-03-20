#include <stdio.h>
#include <stdlib.h>

float potencia(float base, int exp){
    if(exp == 0)
    return 1;
    else
    return base * potencia(base, exp-1);
}

int main(int argc, char const *argv[]){
    float base = 0, res = 0; 
    int exp = 0;

    printf("Informe a base: ");
    scanf("%f", &base);
    printf("Informe um expoente >= 1: ");
    scanf("%d", &exp);
    while (exp <= 0 )
    {
        printf("Expoente Inválido\nInforme um expoente >= 1: ");
        scanf("%d", &exp);
    }

    res = potencia(base,exp);
    printf("%.2f elevado a %d = %.2f\n", base, exp,res);
 
    return 0;
}
