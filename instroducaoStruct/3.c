#include <stdio.h>

#define NUM_ALUNOS 5
#define NOTA_APROVACAO 7.0

struct aluno {
    int matricula;
    char nome[100];
    float nota1;
    float nota2;
    float nota3;
};

void lerDadosAluno(struct aluno *aluno) {
    printf("Matrícula: ");
    scanf("%d", &(aluno->matricula));
    getchar(); // Limpar o buffer do teclado

    printf("Nome: ");
    fgets(aluno->nome, sizeof(aluno->nome), stdin);

    printf("Nota da primeira prova: ");
    scanf("%f", &(aluno->nota1));

    printf("Nota da segunda prova: ");
    scanf("%f", &(aluno->nota2));

    printf("Nota da terceira prova: ");
    scanf("%f", &(aluno->nota3));

    getchar(); // Limpar o buffer do teclado
}

void encontrarMaiorNota1(struct aluno alunos[], int numAlunos) {
    float maiorNota = alunos[0].nota1;
    int indice = 0;

    for (int i = 1; i < numAlunos; i++) {
        if (alunos[i].nota1 > maiorNota) {
            maiorNota = alunos[i].nota1;
            indice = i;
        }
    }

    printf("Aluno com maior nota na primeira prova:\n");
    printf("Matrícula: %d\n", alunos[indice].matricula);
    printf("Nome: %s", alunos[indice].nome);
    printf("Nota: %.2f\n", alunos[indice].nota1);
}

void encontrarMaiorMediaGeral(struct aluno alunos[], int numAlunos) {
    float maiorMedia = (alunos[0].nota1 + alunos[0].nota2 + alunos[0].nota3) / 3.0;
    int indice = 0;

    for (int i = 1; i < numAlunos; i++) {
        float media = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3.0;
        if (media > maiorMedia) {
            maiorMedia = media;
            indice = i;
        }
    }

    printf("Aluno com maior média geral:\n");
    printf("Matrícula: %d\n", alunos[indice].matricula);
    printf("Nome: %s", alunos[indice].nome);
    printf("Média: %.2f\n", maiorMedia);
}

void encontrarMenorMediaGeral(struct aluno alunos[], int numAlunos) {
    float menorMedia = (alunos[0].nota1 + alunos[0].nota2 + alunos[0].nota3) / 3.0;
    int indice = 0;

    for (int i = 1; i < numAlunos; i++) {
        float media = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3.0;
        if (media < menorMedia) {
            menorMedia = media;
            indice = i;
        }
    }

    printf("Aluno com menor média geral:\n");
    printf("Matrícula: %d\n", alunos[indice].matricula);
    printf("Nome: %s", alunos[indice].nome);
    printf("Média: %.2f\n", menorMedia);
}

void verificarAprovacao(struct aluno alunos[], int
