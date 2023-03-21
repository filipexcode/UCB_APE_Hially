#include <stdio.h>
#include <stdlib.h>

int main(void){

    double raio,area;
    const double pi = 3.14159;

    printf("Insira o valor do raio: ");
    fflush(stdin);
    scanf("%lf",&raio);

    area = (raio * raio) * pi;

    printf("A =  %.3lf\n",area);

return 0;

}