//micro ordenação
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
//função para ordenados os 3 valores
int ordenaValores(int *p1, int *p2, int *p3)
{
  int aux;
  
  if(*p1 == *p2 && *p3){
    printf("Valores iguais!\n");
    return 1;
  }else{
  do
    {
      if(*p1 > *p3){
        aux = *p1;
        *p1 = *p3;
        *p3 = aux;
      }
      if(*p1 > *p2){
        aux = *p1;
        *p1 = *p2;
        *p2 = aux;
      }
    }while(*p1 > *p2 > *p3);
  }
  printf("Valores ordenados!\n");
  printf("a: %d\nb: %d\nc: %d\n", *p1, *p2, *p3);
  return 0;
}

int main()
{
  int a,
      b,
      c;
  //ponteiros que apontam para as variavéis
  int *pa, *pb, *pc;
  pa = &a;
  pb = &b;
  pc = &c;
  
  printf("Digite o valor de a: ");
  scanf("%d", &a);
  printf("Digite o valor de b: ");
  scanf("%d", &b);
  printf("Digite o valor de c: ");
  scanf("%d", &c);
  
  ordenaValores(&a, &b, &c);
  
  return 0;
}