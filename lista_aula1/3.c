#include <stdio.h>
#include <stdlib.h>


int main() {
   
    int altura, largura, area, qtdlata, rend;
   
    printf("Digite aqui a altura: ");
    scanf("%d",&altura);

    printf("Digite aqui a a largura: ");
    scanf("%d",&largura);
   
    area = altura * largura;

    rend =  area * 0.3;
    qtdlata = 2000/rend;
   
    printf ("A quantidade de latas necessaria e: %d \n",qtdlata);
   
return 0;

}