//imprimindo o endereço das posições com valores pares do vetor
#include<stdio.h>
#include<locale.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");
  int vet[5];
  int i;
  for(i=1; i<=5; i++){
    printf("Digite um valor: ");
    scanf("%d", &vet[i]);
    }
  printf("\n");
  for(i=1; i<=5; i++){
    if(vet[i]%2 == 0){
      printf("Endereço da posição %d: %p\n", i, &vet[i]);
    }
  }

  return 0;
}