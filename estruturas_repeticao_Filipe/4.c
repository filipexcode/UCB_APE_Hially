#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

        setlocale(LC_ALL,"");

    int n1 = 0, n2 = 0;
    char operador;

    printf("---------CALC---------\n");

    printf("Use os seguintes simbolos para os operadores: \n");
    printf("+ = SOMA\n");
    printf("- = SUBTRAÇÃO\n");
    printf("x = MULTIPLICAÇÃO\n");
    printf("/ = DIVISÃO\n");

        system("cls");

    printf("Informe o N1: ");
    scanf("%d",&n1);

    printf("Informe o operador: ");
    scanf(" %c",&operador);

    printf("Informe o N2: ");
    scanf("%d",&n2);

        system("cls");

    if(operador == '+'){
        printf("SOMA = %d\n",n1 + n2);
    }else if(operador == '-'){
        printf("SUBTRAÇÃO = %d\n",n1 - n2);
    }else if(operador == 'x'){
        printf("MULTIPLICAÇÃO = %d\n",n1 * n2);
    }else if(operador == '/'){
        printf("DIVISÃO = %f\n",n1 / n2);
    }

        system("pause");
        return 0;
}