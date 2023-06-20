#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definição da estrutura da dieta
struct Dieta {
    char nomeComida[100];
    float pesoPorcao;
    int numCalorias;
    struct Dieta* proxima;
};

// Função para solicitar os dados de uma comida da dieta
void solicitarDadosComida(struct Dieta* comida) {
    printf("Digite o nome da comida: ");
    scanf(" %[^\n]s", comida->nomeComida);

    printf("Digite o peso de uma porcao (em gramas): ");
    scanf("%f", &(comida->pesoPorcao));

    printf("Digite o número de calorias: ");
    scanf("%d", &(comida->numCalorias));
}

// Função para exibir os dados de todas as comidas da dieta
void listarComidas(struct Dieta* inicio) {
    struct Dieta* atual = inicio;
    int contador = 1;

    printf("Lista de Comidas da Dieta:\n");

    while (atual != NULL) {
        printf("Comida %d:\n", contador);
        printf("Nome: %s\n", atual->nomeComida);
        printf("Peso da Porcao: %.2f gramas\n", atual->pesoPorcao);
        printf("Número de Calorias: %d\n", atual->numCalorias);
        printf("------------------------\n");

        atual = atual->proxima;
        contador++;
    }
}

int main() {
    struct Dieta* inicio = NULL;
    struct Dieta* novaComida = NULL;
    int opcao = 0;

    do {
        printf("Menu:\n");
        printf("1. Adicionar comida\n");
        printf("2. Listar comidas\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                novaComida = (struct Dieta*)malloc(sizeof(struct Dieta));
                if (novaComida == NULL) {
                    printf("Erro ao alocar memoria.\n");
                    return 1;
                }
                solicitarDadosComida(novaComida);
                novaComida->proxima = inicio;
                inicio = novaComida;
                break;

            case 2:
                listarComidas(inicio);
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
    struct Dieta* atual = inicio;
    while (atual != NULL) {
        struct Dieta* proxima = atual->proxima;
        free(atual);
        atual = proxima;
    }

    return 0;
}
