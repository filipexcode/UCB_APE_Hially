#include <stdio.h>

int maximo(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int num1, num2;
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    int resultado = maximo(num1, num2);
    printf("O maior número é: %d\n", resultado);

    return 0;
}
