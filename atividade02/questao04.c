#include <stdio.h>
#include <stdlib.h>

int pos(int n){
    if (n >= 1){
        return 1;
    }
    else {
        return 0;
    }
}
void sumDiv (int numbers[]){
    for (int i = 0; i < 5; i++)
    {
        int aux = 0;
        for (int j = numbers[i]-1; j > 0 ; j--)
        {
            if ((numbers[i] % j) == 0)
            {
                aux += j;
            }
        }
        printf("A soma dos divisores de %d é : \t%d\n", numbers[i], aux);
    }
}

int main(int argc, char const *argv[]){

    int numbers[5];
    printf("Digite 5 valores inteiros positivos.\n");
    for (int i = 0; i < 5; i++)
    {
        int posi;
        do
        {
            scanf("%d", &numbers[i]);
            posi = pos(numbers[i]);
            if (posi == 0)
                printf("\nNúmero inválido/Digite novamente: ");
            
        } while (posi == 0);
    }
    sumDiv(numbers);
    return 0;
}
