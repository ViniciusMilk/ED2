#include <stdio.h>
#include <stdlib.h>

float m_cm(float m){
    m *= 100;
    return m;
}

float m_mm(float m){
    m *= 1000;
    return m;
}

float m_dm(float m){
    m *= 10;
    return m;
}

int main(int argc, char const *argv[]){
    float metros = 0;
    int opc = -1;
    printf("Bem vindo ao seu conversor de medidas\n");
    
    while (opc != 0){

        printf("\n-------MENU-------\n");
        printf("1 - m para cm e mm\n");
        printf("2 - m para mm\n");
        printf("3 - m para dm\n");
        printf("0 - Sair\n");
        printf("------------------\n");


        scanf("%d", &opc);

        switch (opc)
        {
        case 1:
            printf("Digite os metros: ");
            scanf("%f", &metros);
            float cm = m_cm(metros);
            printf("\n%.2fm equivale a %.2fcm\n", metros, cm);
            break;
        case 2:
            printf("Digite os metros: ");
            scanf("%f", &metros);
            float mm = m_mm(metros);
            printf("\n%.2fm equivale a %.2fmm\n", metros, mm);
            break;
        case 3:
            printf("Digite os metros: ");
            scanf("%f", &metros);
            float dm = m_dm(metros);
            printf("\n%.2fm equivale a %.2fdm\n", metros, dm);
            break;
        case 0:
            printf("Volte sempre!\n");
            break;
        default:
        printf("Opcao Invalida!\n");
            break;
        }
    }

    return 0;
}