#include <stdio.h>

int main() {
    int numero1, numero2;

    printf("Digite o primeiro número: ");
    scanf("%d", &numero1);

    printf("Digite o segundo número: ");
    scanf("%d", &numero2);

    if (&numero1 > &numero2) {
        printf("Conteúdo do maior endereço: %d\n", numero1);
    } else if (&numero1 < &numero2) {
        printf("Conteúdo do maior endereço: %d\n", numero2);
    } else {
        printf("Os endereços são iguais.\n");
    }

    return 0;
}
