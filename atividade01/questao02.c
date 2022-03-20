#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[]){
    
    float n1 = 0;
    float n2 = 0;
    printf("informe o primero numero: \n");
    scanf("%f", &n1);
    printf("informe o segundo numero: \n");
    scanf("%f", &n2);

    printf("Soma: %.2f\n", n1 + n2);
    printf("O produto do primeiro número pelo quadrado do segundo: %.2f\n", n1 * pow(n2,2));
    printf("O quadrado do primeiro é: %.2f\n", pow(n1,2));

    return 0;
}