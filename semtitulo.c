#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_USUARIOS 1000

typedef struct {
    int id;
    char nome[100];
    char email[100];
    char sexo[15];
    char endereco[100];
    double altura;
    int vacina;
} Usuario;

Usuario usuarios[MAX_USUARIOS];

int proximoId = 1;
int numUsuarios = 0;

int obterIndicePorId(int id) {
    for (int i = 0; i < numUsuarios; i++) {
        if (usuarios[i].id == id) {
            return i;
        }
    }
    return -1;
}

void adicionarUsuario() {
    if (numUsuarios == MAX_USUARIOS) {
        printf("O limite de usuarios foi atingido.\n");
        return;
    }

    Usuario usuario;

    usuario.id = proximoId++;
    printf("Informe o nome completo do usuario: ");
    fgets(usuario.nome, 100, stdin);
    usuario.nome[strcspn(usuario.nome, "\n")] = '\0'; // remove o \n do final da string

    printf("Informe o email do usuario: ");
    fgets(usuario.email, 100, stdin);
    usuario.email[strcspn(usuario.email, "\n")] = '\0'; // remove o \n do final da string

    // verifica se o email possui o @
    while (strstr(usuario.email, "@") == NULL) {
        printf("Email invalido. Informe um email valido: ");
        fgets(usuario.email, 100, stdin);
        usuario.email[strcspn(usuario.email, "\n")] = '\0'; // remove o \n do final da string
    }

    printf("Informe o sexo do usuario (Feminino, Masculino ou Indiferente): ");
    fgets(usuario.sexo, 15, stdin);
    usuario.sexo[strcspn(usuario.sexo, "\n")] = '\0'; // remove o \n do final da string

    // verifica se o sexo eh valido
    while (strcmp(usuario.sexo, "Feminino") != 0 && strcmp(usuario.sexo, "Masculino") != 0 && strcmp(usuario.sexo, "Indiferente") != 0) {
        printf("Sexo invalido. Informe um sexo valido (Feminino, Masculino ou Indiferente): ");
        fgets(usuario.sexo, 15, stdin);
        usuario.sexo[strcspn(usuario.sexo, "\n")] = '\0'; // remove o \n do final da string
    }

    printf("Informe o endereco do usuario: ");
    fgets(usuario.endereco, 100, stdin);
    usuario.endereco[strcspn(usuario.endereco, "\n")] = '\0'; // remove o \n do final da string

    printf("Informe a altura do usuario (em metros): ");
    scanf("%lf", &usuario.altura);

    // verifica se a altura eh valida
    while (usuario.altura < 1 || usuario.altura > 2) {
        printf("Altura invalida. Informe uma altura valida (entre 1 e 2 metros): ");
        scanf("%lf", &usuario.altura);
    }

    printf("O usuario foi vacinado? (1 para sim, 0 para nao): ");
    scanf("%d", &usuario.vacina);

    usuarios[numUsuarios++] = usuario;

    printf("O usuario foi cadastrado com sucesso!\n");
}

void editarUsuario
