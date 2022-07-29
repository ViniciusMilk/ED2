//imprimindo o endereço de cada posição da matriz
#include<stdio.h>
#include<locale.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");
  float mat[3][3];
  
  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
      printf("Endereço %d%d: %p ",i, j, &mat[i][j]);
    }
    printf("\n");
  }
  return 0;
}