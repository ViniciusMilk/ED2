//inprimindo maior e menor valor

#include<stdio.h>
#include<locale.h>
void maior1menor2(int* p1, int* p2)
{
  int aux;
  do
  {
  aux = *p1;
  *p1 = *p2;
  *p2 = aux;
    }while(*p1 < *p2);
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

  maior1menor2(&a, &b);
  printf("Primeiro valor: %d\nSegundo valor: %d\n", a, b);
  printf("\n");
  
  return 0;
}