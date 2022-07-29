//imprimindo o valor do maior endereço
#include<stdio.h>
#include<locale.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");
  int a, b;
  printf("digite um valor para a: ");
  scanf(" %d", &a);
  printf("digite um valor para b: ");
  scanf("%d", &b);
  printf("\n");
  if(&a > &b)
    printf("Conteudo do endereço de a: %d", a);
  else
    printf("Conteudo do endereço de b: %d", b);
  
  return 0;
}