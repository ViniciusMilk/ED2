//somando o dobro dos valores
#include<stdio.h>
#include<locale.h>
int somaDobro(int* p1, int* p2)
{
  int aux, soma;
  *p1*=2;
  *p2*=2;
  soma = (*p1 + *p2);
  
  return soma;
}
int main()
{
  setlocale(LC_ALL, "Portuguese");
  int a, b, soma;
  int *pa, *pb;
  pa = &a;
  pb = &b;
  printf("digite um valor para a: ");
  scanf(" %d", &a);
  printf("digite um valor para b: ");
  scanf("%d", &b);

  soma = somaDobro(&a, &b);
  printf("\nSoma do dobro dos valores de a e b: %d\n", soma);
  printf("\n");
  
  return 0;
}