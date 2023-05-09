#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct aluno { // declarando struct
  char nome[50];
  char cep[50];
  int idade;
} listaAlunos;

int main() {

  listaAlunos aluno1; // criando registro

  printf("\n Insira o nome: ");
  scanf("%50[^\n]s", &aluno1.nome);

  fflush(stdin);

  printf("\n Insira a idade: ");
  fflush(stdin);
  scanf("%d", &aluno1.idade);

  fflush(stdin);

  printf("\n Insira o cep: ");
  fflush(stdin);
  scanf("%50[^\n]s", &aluno1.cep);

  printf("\n Registro: \n  Nome: %s, %d, %s", aluno1.nome, aluno1.idade, aluno1.cep);

  return 0;
}
