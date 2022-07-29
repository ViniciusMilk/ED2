#include "stdio.h"
#include "stdio.h"

void soma(int *n1, int n2){
 *n1 = *n1 + n2;
}

int main(){
  int a, b, *p;
  p = &a;
  
  printf("digite um valor para a:\n");
  scanf("%d", &a);
  printf("digite um valor para b:\n");
  scanf("%d", &b);
  soma(p, b);
  printf("novo valor de a: %d\tvalor de b: %d\n", a, b);

}