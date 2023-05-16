#include <stdio.h>

int main() {
    int numero1;
    int numero2;

    printf("Digite o primeiro número: ");
    scanf("%d", &numero1);

    printf("Digite o segundo número: ");
    scanf("%d", &numero2);

    if (&numero1 > &numero2) {
        printf("O endereço de número1 é maior: %p\n", &numero1);
    } else if (&numero1 < &numero2) {
        printf("O endereço de número2 é maior: %p\n", &numero2);
    } else {
        printf("Os endereços são iguais: %p\n", &numero1);
    }

    return 0;
}
