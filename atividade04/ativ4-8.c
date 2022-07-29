//imprimindo o endereço de cada posição do vetor
#include<stdio.h>
#include<locale.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");
  float vet[10];
  
  for(int i=0; i<10; i++){
    printf("Endereço da posição %d: %p\n", i, &vet[i]);
  }
  return 0;
}