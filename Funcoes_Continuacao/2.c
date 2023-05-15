#include <stdio.h>

void imprimirTabelaASCII() {
    printf("Tabela ASCII:\n");
    printf("Dec   Hex   Char\n");
    printf("-----------------\n");

    for (int i = 0; i <= 127; i++) {
        printf("%-6d%-6x%c\n", i, i, i);
    }
}

int main() {
    imprimirTabelaASCII();

    return 0;
}
