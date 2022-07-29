//imprimindo o dobro do valor de cada posição do vetor
#include<stdio.h>
#include<locale.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");
  int vet[5];
  int *p;
  for(int i=0; i<5; i++){
    printf("Digite um valor: ");
    scanf("%d", &vet[i]);
  }
  printf("\n");
  for(int i=0; i<5; i++){
    vet[i]*=2;
    printf("Valor dobrado da posição %d: %d", i, vet[i]);
    printf("\n");
  }
  
  return 0;
}