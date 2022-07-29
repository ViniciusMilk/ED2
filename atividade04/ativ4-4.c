//trocando valores 
#include<stdio.h>
#include<locale.h>
void trocaValores(int* p1, int* p2)
{
  int aux;
  
  aux = *p1;
  *p1 = *p2;
  *p2 = aux;
}
int main()
{
  setlocale(LC_ALL, "Portuguese");
  int a, b;
  int *pa, *pb;
  pa = &a;
  pb = &b;
  printf("digite um valor para a: ");
  scanf(" %d", &a);
  printf("digite um valor para b: ");
  scanf("%d", &b);
  //trocando valores
  trocaValores(&a, &b);
  printf("Novo valor de a: %d\nNovo valor de b: %d\n", a, b);
  printf("\n");
  
  return 0;
}