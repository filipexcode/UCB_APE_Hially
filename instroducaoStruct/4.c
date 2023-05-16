#include <stdio.h>

#define NUM_ALUNOS 10
#define NOTA_MINIMA_APROVACAO 5.0

struct aluno {
    char nome[100];
    int matricula;
    float mediaFinal;
};

void lerDadosAlunos(struct aluno alunos[]) {
    printf("Digite os dados dos alunos:\n");

    for (int i = 0; i < NUM_ALUNOS; i++) {
        printf("\nAluno %d:\n", i + 1);

        printf("Nome: ");
        fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);

        printf("Matrícula: ");
        scanf("%d", &alunos[i].matricula);

        printf("Média Final: ");
        scanf("%f", &alunos[i].mediaFinal);

        getchar(); // Limpar o buffer do teclado
    }
}

void dividirAlunos(struct aluno alunos[], struct aluno aprovados[], struct aluno reprovados[]) {
    int indiceAprovados = 0;
    int indiceReprovados = 0;

    for (int i = 0; i < NUM_ALUNOS; i++) {
        if (alunos[i].mediaFinal >= NOTA_MINIMA_APROVACAO) {
            aprovados[indiceAprovados] = alunos[i];
            indiceAprovados++;
        } else {
            reprovados[indiceReprovados] = alunos[i];
            indiceReprovados++;
        }
    }
}

void exibirDadosAlunos(struct aluno alunos[], int numAlunos) {
    for (int i = 0; i < numAlunos; i++) {
        printf("Nome: %s", alunos[i].nome);
        printf("Matrícula: %d\n", alunos[i].matricula);
        printf("Média Final: %.2f\n", alunos[i].mediaFinal);
        printf("----------------------\n");
    }
}

int main() {
    struct aluno alunos[NUM_ALUNOS];
    struct aluno aprovados[NUM_ALUNOS];
    struct aluno reprovados[NUM_ALUNOS];

    lerDadosAlunos(alunos);

    dividirAlunos(alunos, aprovados, reprovados);

    printf("\nAprovados:\n");
    exibirDadosAlunos(aprovados, NUM_ALUNOS);

    printf("\nReprovados:\n");
    exibirDadosAlunos(reprovados, NUM_ALUNOS);

    return 0;
}
