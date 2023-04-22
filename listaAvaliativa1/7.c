#include <stdio.h>

int main() {
    int n, i, termoAtual, termoAnterior = 0, termoAnterior2 = 1;

    printf("Digite um número inteiro maior ou igual a zero: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("O termo de ordem zero da sequência de Fibonacci é: 0\n");
        return 0;
    }
    else if (n == 1) {
        printf("O termo de ordem um da sequência de Fibonacci é: 1\n");
        return 0;
    }

    for (i = 2; i <= n; i++) {
        termoAtual = termoAnterior + termoAnterior2;
        termoAnterior2 = termoAnterior;
        termoAnterior = termoAtual;
    }

    printf("O termo de ordem %d da sequência de Fibonacci é: %d\n", n, termoAtual);

    return 0;
}
