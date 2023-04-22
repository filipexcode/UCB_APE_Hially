#include <stdio.h>

int main() {
    int opcao, quantidade;
    float total = 0.0;

    do {
        printf("Selecione a fruta que deseja comprar:\n");
        printf("1 - ABACAXI (R$ 5,00 a unidade)\n");
        printf("2 - MAÇA (R$ 1,00 a unidade)\n");
        printf("3 - PERA (R$ 4,00 a unidade)\n");
        printf("0 - Finalizar compra\n");

        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite a quantidade de abacaxis que deseja comprar:\n");
                scanf("%d", &quantidade);
                total += quantidade * 5.0;
                break;
            case 2:
                printf("Digite a quantidade de maçãs que deseja comprar:\n");
                scanf("%d", &quantidade);
                total += quantidade * 1.0;
                break;
            case 3:
                printf("Digite a quantidade de peras que deseja comprar:\n");
                scanf("%d", &quantidade);
                total += quantidade * 4.0;
                break;
            case 0:
                break;
            default:
                printf("Opção inválida.\n");
        }
    } while (opcao != 0);

    printf("Total da compra: R$ %.2f\n", total);

    return 0;
}
