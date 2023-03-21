#include <stdio.h>
#include <locale.h>

int main(void) {

    setlocale(LC_ALL,"");
  
  int altura, largura, area;
  
  printf("Digite a altura do retângulo: ");
  scanf("%d",&altura);

  printf("Digite a largura do retângulo: ");
  scanf("%d",&largura);

  area = largura * altura;

  printf("A area do retangulo é: %dm2\n",area);
  
  return 0;
}
