//comparando endereços
#include<stdio.h>
#include<locale.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");
  int a, b;
  
  if(&a > &b)
    printf("Endereço de a: %p", &a);
  else
    printf("Endereço de b: %p", &b);
  
  return 0;
}

