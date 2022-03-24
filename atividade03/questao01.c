#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct ponto
{
    float ponto[2];
}PTS;

float getDist(PTS p1, PTS p2){
    return sqrt(pow(p1.ponto[1]-p1.ponto[0],2) + pow(p2.ponto[1]-p2.ponto[0],2));
}

PTS setPts(PTS p){
    printf("Digite a latitude e longitude do ponto:\n");
    for (int i = 0; i < 2; i++)
    {
        scanf("%f", &p.ponto[i]);
    }
    return p;
}

int main(int argc, char const *argv[]){

    PTS p1 = setPts(p1);
    PTS p2 = setPts(p1);

    float dis = getDist(p1,p2);
    
    printf("A distância entre os pontos é: %.2f\n", dis);
    return 0;
}