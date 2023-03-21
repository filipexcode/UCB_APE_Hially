#include <stdio.h>
#include <locale.h>

int main(void) {

    setlocale(LC_ALL,"");
  
  double nota1, nota2, nota3, media;
  
  printf("Insira o valor da primeira nota: ");
  scanf("%lf",&nota1);

  printf("Insira o valor da segunda nota: ");
  scanf("%lf",&nota2);

  printf("Insira o valor da terceira nota: ");
  scanf("%lf",&nota3);

  media = ((nota1*2) + (nota2*3) + (nota3*5)) / 10;

  printf("A média final do aluno é de: %.2lf\n",media);

  return 0;
}
