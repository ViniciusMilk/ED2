#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){

    int n1 = 0;
    int n2 = 0;
    printf("informe o primero numero: \n");
    scanf("%d", &n1);
    printf("informe o segundo numero: \n");
    scanf("%d", &n2);

    if (n1 < n2)
    {
        for (n1; n1 <= n2; n1++)
        {
            printf("%d, ", n1);
        }
        printf("\n");
    }
    else if (n1 > n2)
    {
        for (n1; n1 >= n2; n1--)
        {
            printf("%d, ", n1);
        }
        printf("\n");
    }
    else
    {
        printf("Valores iguais\n");
    }
    
    return 0;
}
