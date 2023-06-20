#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definição da estrutura do restaurante
struct Restaurante {
    char nome[100];
    char endereco[100];
    float precoMedio;
    char tipoComida[100];
    struct Restaurante* proximo;
};

// Função para solicitar os dados de um elemento da lista
void solicitarDadosRestaurante(struct Restaurante* rest) {
    printf("Digite o nome do restaurante: ");
    scanf(" %[^\n]s", rest->nome);

    printf("Digite o endereco do restaurante: ");
    scanf(" %[^\n]s", rest->endereco);

    printf("Digite o preco medio do restaurante: ");
    scanf("%f", &(rest->precoMedio));

    printf("Digite o tipo de comida do restaurante: ");
    scanf(" %[^\n]s", rest->tipoComida);
}

// Função para exibir os dados de todos os elementos da lista
void listarRestaurantes(struct Restaurante* inicio) {
    struct Restaurante* atual = inicio;
    int contador = 1;

    printf("Lista de Restaurantes:\n");

    while (atual != NULL) {
        printf("Restaurante %d:\n", contador);
        printf("Nome: %s\n", atual->nome);
        printf("Endereco: %s\n", atual->endereco);
        printf("Preco Medio: %.2f\n", atual->precoMedio);
        printf("Tipo de Comida: %s\n", atual->tipoComida);
        printf("------------------------\n");

        atual = atual->proximo;
        contador++;
    }
}

int main() {
    struct Restaurante* inicio = NULL;
    struct Restaurante* novoRestaurante = NULL;
    int opcao = 0;

    do {
        printf("Menu:\n");
        printf("1. Adicionar restaurante\n");
        printf("2. Listar restaurantes\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                novoRestaurante = (struct Restaurante*)malloc(sizeof(struct Restaurante));
                if (novoRestaurante == NULL) {
                    printf("Erro ao alocar memoria.\n");
                    return 1;
                }
                solicitarDadosRestaurante(novoRestaurante);
                novoRestaurante->proximo = inicio;
                inicio = novoRestaurante;
                break;

            case 2:
                listarRestaurantes(inicio);
                break;

            case 0:
                printf("Encerrando o programa.\n");
                break;

            default:
                printf("Opcao invalida. Tente novamente.\n");
        }

        printf("\n");
    } while (opcao != 0);

    // Liberando a memória alocada pela lista
    struct Restaurante* atual = inicio;
    while (atual != NULL) {
        struct Restaurante* proximo = atual->proximo;
        free(atual);
        atual = proximo;
    }

    return 0;
}
