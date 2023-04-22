#include <stdio.h>

int main() {
    int numero, maior, menor;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Nenhum número foi digitado.\n");
        return 0;
    }

    maior = numero;
    menor = numero;

    do {
        printf("Digite outro número inteiro (ou um número negativo para sair): ");
        scanf("%d", &numero);

        if (numero >= 0) {
            if (numero > maior) {
                maior = numero;
            }
            if (numero < menor) {
                menor = numero;
            }
        }

    } while (numero >= 0);

    printf("O maior número digitado foi: %d\n", maior);
    printf("O menor número digitado foi: %d\n", menor);

    return 0;
}
