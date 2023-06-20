#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definição da estrutura para o registro de Anamnese
struct Anamnese {
    char nomePaciente[100];
    int idade;
    char queixas[200];
};

// Função para adicionar um novo registro de Anamnese
void adicionarAnamnese(struct Anamnese** anamneses, int* numAnamneses) {
    struct Anamnese* novoRegistro = (struct Anamnese*)malloc(sizeof(struct Anamnese));
    if (novoRegistro == NULL) {
        printf("Erro ao alocar memória.\n");
        return;
    }

    printf("Digite o nome do paciente: ");
    scanf(" %[^\n]s", novoRegistro->nomePaciente);

    printf("Digite a idade do paciente: ");
    scanf("%d", &(novoRegistro->idade));

    printf("Digite as queixas do paciente: ");
    scanf(" %[^\n]s", novoRegistro->queixas);

    (*numAnamneses)++;
    *anamneses = (struct Anamnese*)realloc(*anamneses, (*numAnamneses) * sizeof(struct Anamnese));
    (*anamneses)[(*numAnamneses) - 1] = *novoRegistro;

    printf("Registro de Anamnese adicionado com sucesso.\n");
    free(novoRegistro);
}

// Função para imprimir os registros de Anamnese cadastrados
void imprimirAnamneses(struct Anamnese* anamneses, int numAnamneses) {
    printf("Registros de Anamnese:\n");

    for (int i = 0; i < numAnamneses; i++) {
        printf("Nome do paciente: %s\n", anamneses[i].nomePaciente);
        printf("Idade do paciente: %d\n", anamneses[i].idade);
        printf("Queixas do paciente: %s\n", anamneses[i].queixas);
        printf("------------------------\n");
    }

    if (numAnamneses == 0) {
        printf("Nenhum registro encontrado.\n");
    }
}

// Função para liberar a memória alocada pelos registros de Anamnese
void liberarAnamneses(struct Anamnese* anamneses) {
    free(anamneses);
}

int main() {
    struct Anamnese* anamneses = NULL;
    int numAnamneses = 0;
    int opcao = 0;

    do {
        printf("Menu:\n");
        printf("1. Adicionar Anamnese\n");
        printf("2. Imprimir Anamneses cadastradas\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                adicionarAnamnese(&anamneses, &numAnamneses);
                break;

            case 2:
                imprimirAnamneses(anamneses, numAnamneses);
                break;

            case 0:
                printf("Encerrando o programa.\n");
                break;

            default:
                printf("Opção inválida. Tente novamente.\n");
        }

        printf("\n");
    } while (opcao != 0);

    // Liberar a memória alocada pelos registros de Anamnese
    liberarAnamneses(anamneses);

    return 0;
}
