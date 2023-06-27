#include <stdio.h>
#include <stdlib.h>

// Estrutura de dados para armazenar informações de um produto
typedef struct {
    int codigo;
    char descricao[100];
    int quantidade;
    float valor;
} Produto;

// Estrutura de dados para a lista de estoque
typedef struct {
    Produto* produtos;
    int tamanho;
} Estoque;

// Função para inicializar uma lista vazia de estoque
void inicializarEstoque(Estoque* estoque) {
    estoque->produtos = NULL;
    estoque->tamanho = 0;
}

// Função para adicionar um novo produto à lista de estoque
void adicionarProduto(Estoque* estoque) {
    Produto produto;

    printf("Digite o codigo do produto: ");
    scanf("%d", &produto.codigo);

    printf("Digite a descricao do produto: ");
    scanf(" %[^\n]", produto.descricao);

    printf("Digite a quantidade do produto: ");
    scanf("%d", &produto.quantidade);

    printf("Digite o valor do produto: ");
    scanf("%f", &produto.valor);

    estoque->tamanho++;
    estoque->produtos = realloc(estoque->produtos, estoque->tamanho * sizeof(Produto));
    estoque->produtos[estoque->tamanho - 1] = produto;

    printf("Produto cadastrado com sucesso!\n");
}

// Função para imprimir um relatório com as informações de cada produto
void imprimirRelatorio(Estoque estoque) {
	int i = 0;
	
    printf("Relatorio de estoque:\n");

    for(i=0; i < estoque.tamanho; i++) {
        Produto produto = estoque.produtos[i];

        printf("Codigo: %d\n", produto.codigo);
        printf("Descricao: %s\n", produto.descricao);
        printf("Quantidade: %d\n", produto.quantidade);
        printf("Valor: %.2f\n\n", produto.valor);
    }
}

// Função para pesquisar um produto pelo código
void pesquisarProduto(Estoque estoque) {
    int codigo,i = 0;
    printf("Digite o codigo do produto: ");
    scanf("%d", &codigo);

    for (i = 0; i < estoque.tamanho; i++) {
        Produto produto = estoque.produtos[i];

        if (produto.codigo == codigo) {
            printf("Produto encontrado:\n");
            printf("Codigo: %d\n", produto.codigo);
            printf("Descricao: %s\n", produto.descricao);
            printf("Quantidade: %d\n", produto.quantidade);
            printf("Valor: %.2f\n\n", produto.valor);
            return;
        }
    }

    printf("Produto nao encontrado.\n");
}

// Função para remover um produto do estoque
void removerProduto(Estoque* estoque) {
    int codigo,i = 0;
    printf("Digite o codigo do produto a ser removido: ");
    scanf("%d", &codigo);

    for (i = 0; i < estoque->tamanho; i++) {
    	int j;
        Produto produto = estoque->produtos[i];

        if (produto.codigo == codigo) {
            for (j = i; j < estoque->tamanho - 1; j++) {
                estoque->produtos[j] = estoque->produtos[j + 1];
            }

            estoque->tamanho--;
            estoque->produtos = realloc(estoque->produtos, estoque->tamanho * sizeof(Produto));

            printf("Produto removido com sucesso!\n");
            return;
        }
    }

    printf("Produto nao cadastrado.\n");
}

// Função principal que exibe o menu e realiza as chamadas correspondentes
int main() {
    Estoque estoque;
    inicializarEstoque(&estoque);

    int opcao;

    do {
        printf("Menu:\n");
        printf("1. Cadastrar produto\n");
        printf("2. Consultar produto\n");
        printf("3. Gerar relatorio de produtos\n");
        printf("4. Remover produto\n");
        printf("5. Sair\n");
        printf("Digite sua escolha: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                adicionarProduto(&estoque);
                break;
            case 2:
                pesquisarProduto(estoque);
                break;
            case 3:
                imprimirRelatorio(estoque);
                break;
            case 4:
                removerProduto(&estoque);
                break;
            case 5:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }

        printf("\n");
    } while (opcao != 5);

    // Liberar a memória alocada para os produtos
    free(estoque.produtos);

    return 0;
}

