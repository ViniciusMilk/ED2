#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){

    printf("Digite o valor do produto: ");
    float value = 0;
    scanf("%f", &value);
    while (value < 0)
    {
        printf("Valor de produto invalido!\nDigite novamente o valor do produto: ");
        scanf("%f", &value);
    }
    if (value == 0)
    {
        printf("Produtos disponibilizados gratuitamente não sofre inflação\n");
    }
    else if (value < 100){
        printf("Valor do produto inflacionado em 10%% e está custando %.2fR$\n", value + value*0.1);
    }
    else{
        printf("Valor do produto inflacionado em 20%% e está custando %.2fR$\n", value + value*0.2);
    }

    return 0;
}