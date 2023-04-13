#include <stdio.h>

int main(void) {

  int a,b,c,d,difference;

  printf("Insira o valor de A: ");
  scanf("%d",&a);

  printf("Insira o valor de B: ");
  scanf("%d",&b);

  printf("Insira o valor de C: ");
  scanf("%d",&c);

  printf("Insira o valor de D: ");
  scanf("%d",&d);

    difference = (a * b) - (c * d);

  printf("DIFERENCA = %d x %d - %d x %d\n",a,b,c,d);
  printf("DIFERENCA = %d\n",difference);
  
  return 0;
}
