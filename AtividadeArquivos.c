#include <stdio.h>

int main() {
    float notaMatematica, notaFisica, notaQuimica;
    float media;

    // Solicitar as notas ao usuário
    printf("Digite a nota de Matemática: ");
    scanf("%f", &notaMatematica);

    printf("Digite a nota de Física: ");
    scanf("%f", &notaFisica);

    printf("Digite a nota de Química: ");
    scanf("%f", &notaQuimica);

    // Calcular a média
    media = (notaMatematica + notaFisica + notaQuimica) / 3.0;

    // Abrir o arquivo para escrita
    FILE* arquivo = fopen("notas.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    // Escrever as notas e a média no arquivo
    fprintf(arquivo, "Notas do aluno:\n");
    fprintf(arquivo, "Matemática: %.2f\n", notaMatematica);
    fprintf(arquivo, "Física: %.2f\n", notaFisica);
    fprintf(arquivo, "Química: %.2f\n", notaQuimica);
    fprintf(arquivo, "Média: %.2f\n", media);

    // Fechar o arquivo
    fclose(arquivo);

    printf("Notas salvas com sucesso no arquivo 'notas.txt'.\n");

    return 0;
}
