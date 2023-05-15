#include <stdio.h>

float inflacionarPreco(float preco) {
    if (preco < 100) {
        return preco * 1.1;  // Inflação de 10%
    } else {
        return preco * 1.2;  // Inflação de 20%
    }
}

int main() {
    float precoProduto;
    printf("Digite o preço do produto: R$ ");
    scanf("%f", &precoProduto);

    float precoInflacionado = inflacionarPreco(precoProduto);

    printf("Preço do produto inflacionado: R$ %.2f\n", precoInflacionado);

    return 0;
}
