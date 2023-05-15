#include <stdio.h>

int imprimirOpcoes() {
    int opcao;
    printf("Opções de pagamento:\n");
    printf("1) À vista com 10%% de desconto\n");
    printf("2) Em duas vezes (preço da etiqueta)\n");
    printf("3) De 3 até 10 vezes com 3%% de juros ao mês (somente para compras acima de R$ 100,00)\n");
    printf("Digite a opção desejada: ");
    scanf("%d", &opcao);
    return opcao;
}

void opcaoAVista(float total) {
    float valorDesconto = total * 0.1;
    float totalAPagar = total - valorDesconto;
    printf("Valor total com desconto: R$ %.2f\n", totalAPagar);
}

void opcaoDuasVezes(float total) {
    float valorParcela = total / 2;
    printf("Valor de cada parcela: R$ %.2f\n", valorParcela);
}

void opcaoPrestacoes(float total) {
    if (total > 100) {
        int numPrestacoes;
        printf("Digite o número de prestações (entre 3 e 10): ");
        scanf("%d", &numPrestacoes);

        float valorJuros = total * 0.03 * numPrestacoes;
        float valorParcela = (total + valorJuros) / numPrestacoes;
        printf("Valor de cada prestação: R$ %.2f\n", valorParcela);
    } else {
        printf("Essa opção de pagamento só é válida para compras acima de R$ 100,00.\n");
    }
}

int main() {
    float totalGasto;
    printf("Digite o total gasto pelo cliente: R$ ");
    scanf("%f", &totalGasto);

    int opcao = imprimirOpcoes();

    switch (opcao) {
        case 1:
            opcaoAVista(totalGasto);
            break;
        case 2:
            opcaoDuasVezes(totalGasto);
            break;
        case 3:
            opcaoPrestacoes(totalGasto);
            break;
        default:
            printf("Opção inválida.\n");
    }

    return 0;
}
