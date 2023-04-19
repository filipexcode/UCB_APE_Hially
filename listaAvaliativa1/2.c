#include <stdio.h>
#include <math.h>

int main(void) {
  double x1,x2,y1,y2,distancia;
  
  printf("Insira os valores referentes a x1, x2, y1, y2: \n");
  scanf("%lf %lf %lf %lf",&x1, &x2, &y2, &y2);

  distancia = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));

  printf("A distancia entre os pontos e igual a: %.4lf\n",distancia);
  
  return 0;
}
