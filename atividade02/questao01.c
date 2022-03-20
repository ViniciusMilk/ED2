#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float dist(float pts[2][2]){
    return sqrt(pow((pts[0][1] - pts[0][0]),2) + pow((pts[1][1] - pts[1][0]),2));
}

int main(int argc, char const *argv[]){
    float pts[2][2]; 
    for (int i = 0; i < 2; i++)
    {
        printf("Digite as coordenadas do ponto %d:\n", i+1);
        for (int j = 0; j < 2; j++)
        {
            scanf("%f", &pts[i][j]);
        }
    }

    float dis = dist(pts);
    printf("A distância entres os pontos é: %.2f\n", dis);

    return 0;
}
