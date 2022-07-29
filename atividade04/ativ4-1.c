//modficando valores com ponteiros
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");
  int n, *pn;
  float f, *pf;
  char c, *pc;
  n = 2;
  f = 0.2;
  c = 'D';
  pn = &n;
  pf = &f;
  pc = &c;
//imprimindo valores antes da modificação
  printf("valores não modificados de:\nn: %d\nf: %.1f\nc: %c\n", n, f, c);

  *pn = 3;
  *pf = 0.4;
  *pc = 'd';
//  valores depois da modifcação
  printf("valores modificados de:\nn: %d\nf: %.1f\nc: %c", n, f, c);
  
  return 0;
}