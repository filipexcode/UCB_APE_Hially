#include <stdio.h>
#include <math.h>

int main(void) {
  
  double pi = 3.14159, raio, volume, area;
  
  printf("Insira o valor do raio: ");
  scanf("%lf",&raio);

  volume = (4/3) * pi * raio;
  area = pi * pow(raio,2);
    
  printf("O volume da circunferencia e: %.lf\n",volume);
  printf("A area da circunferencia e: %.2lf\n",area);

  
  return 0;
  
}
