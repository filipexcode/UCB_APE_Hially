#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int numero,raiz,pot;

    printf("Insira o valor a ser calculado: ");
    fflush(stdin);
    scanf("%d",&numero);

        if(numero > 0){

            raiz = sqrt(numero);
            pot = pow(numero,2);

            printf("O valor inserido foi: %d\n",numero);
            printf("O valor ao quadrado é: %d\n",pot);
            printf("O valor da raiz quadrada é: %d\n",raiz);

        }else{

            printf("Valor inválido\n");

        }
system("pause");
return 0;

}