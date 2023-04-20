#include <stdio.h>

int main(void) {

  int a = 0,value, i;
  double media;

  for (i = 0; i <= 10; i++) {
    printf("Insira um valor: ");
    scanf("%d", &value);
    a = a + value;
  }

  media = a / 10;

  printf("A media e igual a: %.2lf\n",media);

  return 0;
}
