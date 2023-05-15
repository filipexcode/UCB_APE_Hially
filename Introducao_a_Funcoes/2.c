#include <stdio.h>

float calculaMedia(float nota1, float nota2, float nota3) {
    return (nota1 + nota2 + nota3) / 3;
}

int main() {
    int numEstudantes;
    printf("Digite o número de estudantes na turma: ");
    scanf("%d", &numEstudantes);

    for (int i = 1; i <= numEstudantes; i++) {
        float nota1, nota2, nota3;
        printf("Digite as três notas do estudante %d:\n", i);
        printf("Nota 1: ");
        scanf("%f", &nota1);
        printf("Nota 2: ");
        scanf("%f", &nota2);
        printf("Nota 3: ");
        scanf("%f", &nota3);

        float media = calculaMedia(nota1, nota2, nota3);
        printf("Média do estudante %d: %.2f\n", i, media);
    }

    return 0;
}
