#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definição da estrutura para o registro de veículos
struct Veiculo {
    char proprietario[100];
    char combustivel[20];
    char modelo[100];
    char cor[100];
    char chassi[100];
    int ano;
    char placa[8];
    struct Veiculo* proximo;
};

// Função para listar proprietários de carros com ano 2010 ou posterior e movidos a diesel
void listarProprietariosDiesel2010(struct Veiculo* inicio) {
    struct Veiculo* atual = inicio;
    int contador = 1;

    printf("Proprietários de carros a diesel com ano de 2010 ou posterior:\n");

    while (atual != NULL) {
        if (strcmp(atual->combustivel, "diesel") == 0 && atual->ano >= 2010) {
            printf("Carro %d:\n", contador);
            printf("Proprietário: %s\n", atual->proprietario);
            printf("------------------------\n");
            contador++;
        }
        atual = atual->proximo;
    }

    if (contador == 1) {
        printf("Nenhum carro encontrado.\n");
    }
}

// Função para listar placas e proprietários com letras iniciais 'J' e finais 0, 2, 4 ou 7
void listarPlacasProprietarios(struct Veiculo* inicio) {
    struct Veiculo* atual = inicio;
    int contador = 1;

    printf("Placas e proprietários com letras iniciais 'J' e finais 0, 2, 4 ou 7:\n");

    while (atual != NULL) {
        char primeiraLetra = atual->placa[0];
        char ultimosDigitos[4];
        strncpy(ultimosDigitos, atual->placa + 3, 3);
        ultimosDigitos[3] = '\0';

        if (primeiraLetra == 'J' && (strcmp(ultimosDigitos, "0") == 0 || strcmp(ultimosDigitos, "2") == 0 ||
                                     strcmp(ultimosDigitos, "4") == 0 || strcmp(ultimosDigitos, "7") == 0)) {
            printf("Carro %d:\n", contador);
            printf("Placa: %s\n", atual->placa);
            printf("Proprietário: %s\n", atual->proprietario);
            printf("------------------------\n");
            contador++;
        }
        atual = atual->proximo;
    }

    if (contador == 1) {
        printf("Nenhum carro encontrado.\n");
    }
}

// Função para listar modelo e cor de veículos com placas com segunda letra vogal e soma dos valores numéricos par
void listarModeloCorPlacasVogalSomaPar(struct Veiculo* inicio) {
    struct Veiculo* atual = inicio;
    int contador = 1;

    printf("Modelo e cor de veículos com placas com segunda letra vogal e soma dos valores numéricos par:\n");

    while (atual != NULL) {
        char segundaLetra = atual->placa[1];
        int somaNumerosPlaca = 0;
        for (int i = 3; i < 7; i++) {
            somaNumerosPlaca += atual->placa[i] - '0';
        }

        if ((segundaLetra == 'A' || segundaLetra == 'E' || segundaLetra == 'I' || segundaLetra == 'O' ||
             segundaLetra == 'U') && somaNumerosPlaca % 2 == 0) {
            printf("Carro %d:\n", contador);
            printf("Modelo: %s\n", atual->modelo);
            printf("Cor: %s\n", atual->cor);
            printf("------------------------\n");
            contador++;
        }
        atual = atual->proximo;
    }

    if (contador == 1) {
        printf("Nenhum carro encontrado.\n");
    }
}

// Função para trocar o proprietário com base no número do chassi para carros com placas sem dígitos zero
void trocarProprietarioPorChassi(struct Veiculo* inicio, const char* chassi, const char* novoProprietario) {
    struct Veiculo* atual = inicio;

    while (atual != NULL) {
        int temZero = 0;
        for (int i = 0; i < strlen(atual->placa); i++) {
            if (atual->placa[i] == '0') {
                temZero = 1;
                break;
            }
        }

        if (strcmp(atual->chassi, chassi) == 0 && !temZero) {
            strncpy(atual->proprietario, novoProprietario, 99);
            printf("Proprietário alterado com sucesso.\n");
            return;
        }

        atual = atual->proximo;
    }

    printf("Não foi possível encontrar um carro com o número do chassi fornecido ou a placa possui dígitos zero.\n");
}

int main() {
    struct Veiculo* inicio = NULL;
    struct Veiculo* novoVeiculo = NULL;
    int opcao = 0;

    do {
        printf("Menu:\n");
        printf("1. Adicionar veículo\n");
        printf("2. Listar proprietários de carros a diesel com ano de 2010 ou posterior\n");
        printf("3. Listar placas e proprietários com letras iniciais 'J' e finais 0, 2, 4 ou 7\n");
        printf("4. Listar modelo e cor de veículos com placas com segunda letra vogal e soma dos valores numéricos par\n");
        printf("5. Trocar proprietário por número do chassi\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                novoVeiculo = (struct Veiculo*)malloc(sizeof(struct Veiculo));
                if (novoVeiculo == NULL) {
                    printf("Erro ao alocar memória.\n");
                    return 1;
                }
                printf("Digite o nome do proprietário: ");
                scanf(" %[^\n]s", novoVeiculo->proprietario);

                printf("Digite o tipo de combustível (álcool, diesel ou gasolina): ");
                scanf(" %[^\n]s", novoVeiculo->combustivel);

                printf("Digite o modelo do veículo: ");
                scanf(" %[^\n]s", novoVeiculo->modelo);

                printf("Digite a cor do veículo: ");
                scanf(" %[^\n]s", novoVeiculo->cor);

                printf("Digite o número do chassi: ");
                scanf(" %[^\n]s", novoVeiculo->chassi);

                printf("Digite o ano do veículo: ");
                scanf("%d", &(novoVeiculo->ano));

                printf("Digite a placa do veículo (3 letras seguidas de 4 números): ");
                scanf(" %[^\n]s", novoVeiculo->placa);

                novoVeiculo->proximo = inicio;
                inicio = novoVeiculo;
                break;

            case 2:
                listarProprietariosDiesel2010(inicio);
                break;

            case 3:
                listarPlacasProprietarios(inicio);
                break;

            case 4:
                listarModeloCorPlacasVogalSomaPar(inicio);
                break;

            case 5:
                char chassi[100];
                char novoProprietario[100];
                printf("Digite o número do chassi: ");
                scanf(" %[^\n]s", chassi);
                printf("Digite o novo proprietário: ");
                scanf(" %[^\n]s", novoProprietario);
                trocarProprietarioPorChassi(inicio, chassi, novoProprietario);
                break;

            case 0:
                printf("Encerrando o programa.\n");
                break;

            default:
                printf("Opção inválida. Tente novamente.\n");
        }

        printf("\n");
    } while (opcao != 0);

    // Liberando a memória alocada pela lista
    struct Veiculo* atual = inicio;
    while (atual != NULL) {
        struct Veiculo* proximo = atual->proximo;
        free(atual);
        atual = proximo;
    }

    return 0;
}
