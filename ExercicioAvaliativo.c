#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <locale.h>

#define MAX_USERS 1000
#define MAX_NAME_LENGTH 100
#define MAX_EMAIL_LENGTH 100
#define MAX_ADDRESS_LENGTH 100

typedef struct {
    int id;
    char nome[MAX_NAME_LENGTH];
    char email[MAX_EMAIL_LENGTH];
    char genero[MAX_NAME_LENGTH];
    char endereco[MAX_ADDRESS_LENGTH];
    double altura;
    int vacinado;
} Usuario;

Usuario usuarios[MAX_USERS];
int numUsuarios = 0;

int gerarIdAleatorio() {
    srand(time(NULL));
    return rand();
}

void adicionarUsuario() {
    if (numUsuarios >= MAX_USERS) {
        printf("Limite máximo de usuários atingido.\n");
        return;
    }

    Usuario novoUsuario;
    novoUsuario.id = gerarIdAleatorio();

    printf("Digite o nome do usuário: ");
    scanf(" %[^\n]s", novoUsuario.nome);
    fflush(stdout);

    printf("Digite o email do usuário: ");
    scanf(" %[^\n]s", novoUsuario.email);
    fflush(stdout);

    printf("Digite o sexo do usuário (Feminino, Masculino ou Indiferente): ");
    scanf(" %[^\n]s", novoUsuario.genero);
    fflush(stdout);

    printf("Digite o endereço do usuário: ");
    scanf(" %[^\n]s", novoUsuario.endereco);
    fflush(stdout);

    printf("Digite a altura do usuário (entre 1 e 2 metros): ");
    scanf("%lf", &novoUsuario.altura);
    fflush(stdout);

    printf("O usuário foi vacinado? (1 - Sim, 0 - Não): ");
    scanf("%d", &novoUsuario.vacinado);
    fflush(stdout);

    usuarios[numUsuarios] = novoUsuario;
    numUsuarios++;

    printf("Usuário cadastrado com sucesso.\n");
}

int buscarUsuarioPorEmail(char *email) {
    int i;
    for (i = 0; i < numUsuarios; i++) {
        if (strcmp(usuarios[i].email, email) == 0) {
            return i;
        }
    }
    return -1;
}

void editarUsuario() {
    char email[MAX_EMAIL_LENGTH];
    printf("Digite o email do usuário a ser editado: ");
    scanf(" %[^\n]s", email);
    fflush(stdout);

    int indice = buscarUsuarioPorEmail(email);
    if (indice == -1) {
        printf("Usuário não encontrado.\n");
        return;
    }

    Usuario *usuario = &usuarios[indice];

    printf("Digite o novo nome do usuário: ");
    scanf(" %[^\n]s", usuario->nome);
    fflush(stdout);

    printf("Digite o novo email do usuário: ");
    scanf(" %[^\n]s", usuario->email);
    fflush(stdout);

    printf("Digite o novo sexo do usuário (Feminino, Masculino ou Indiferente): ");
    scanf(" %[^\n]s", usuario->genero);
    fflush(stdout);

    printf("Digite o novo endereço do usuário: ");
    scanf(" %[^\n]s", usuario->endereco);
    fflush(stdout);

    printf("Digite a nova altura do usuário (entre 1 e 2 metros): ");
    scanf("%lf", &usuario->altura);
    fflush(stdout);

    printf("O usuário foi vacinado? (1 - Sim, 0 - Não): ");
    scanf("%d", &usuario->vacinado);
    fflush(stdout);

    printf("Usuário editado com sucesso.\n");
}

void excluirUsuario() {
    char email[MAX_EMAIL_LENGTH];
    printf("Digite o email do usuário a ser excluído: ");
    scanf(" %[^\n]s", email);
    fflush(stdout);

    int indice = buscarUsuarioPorEmail(email);
    if (indice == -1) {
        printf("Usuário não encontrado.\n");
        return;
    }

    int i;
    for (i = indice; i < numUsuarios - 1; i++) {
        usuarios[i] = usuarios[i + 1];
    }

    numUsuarios--;

    printf("Usuário excluído com sucesso.\n");
}

void buscarUsuario() {
    char email[MAX_EMAIL_LENGTH];
    printf("Digite o email do usuário a ser buscado: ");
    scanf(" %[^\n]s", email);
    fflush(stdout);

    int indice = buscarUsuarioPorEmail(email);
    if (indice == -1) {
        printf("Usuário não encontrado.\n");
        return;
    }

    Usuario *usuario = &usuarios[indice];

    printf("Usuário encontrado:\n");
    printf("ID: %d\n", usuario->id);
    printf("Nome: %s\n", usuario->nome);
    printf("Email: %s\n", usuario->email);
    printf("Sexo: %s\n", usuario->genero);
    printf("Endereço: %s\n", usuario->endereco);
    printf("Altura: %.2lf\n", usuario->altura);
    printf("Vacinado: %s\n", usuario->vacinado ? "Sim" : "Não");
}

void imprimirUsuarios() {
    if (numUsuarios == 0) {
        printf("Nenhum usuário cadastrado.\n");
        return;
    }

    printf("Usuários cadastrados:\n");
    int i;
    for (i = 0; i < numUsuarios; i++) {
        Usuario *usuario = &usuarios[i];
        printf("ID: %d\n", usuario->id);
        printf("Nome: %s\n", usuario->nome);
        printf("Email: %s\n", usuario->email);
        printf("Sexo: %s\n", usuario->genero);
        printf("Endereço: %s\n", usuario->endereco);
        printf("Altura: %.2lf\n", usuario->altura);
        printf("Vacinado: %s\n", usuario->vacinado ? "Sim" : "Não");
        printf("------------------------\n");
    }
}

void fazerBackup() {
    FILE *arquivo = fopen("backup.txt", "wb");
    if (arquivo == NULL) {
        printf("Erro ao criar o arquivo de backup.\n");
        return;
    }

    fwrite(usuarios, sizeof(Usuario), numUsuarios, arquivo);
    fclose(arquivo);

    printf("Backup realizado com sucesso.\n");
}

void restaurarBackup() {
    FILE *arquivo = fopen("backup.txt", "rb");
    if (arquivo == NULL) {
        printf("Arquivo de backup não encontrado.\n");
        return;
    }

    numUsuarios = fread(usuarios, sizeof(Usuario), MAX_USERS, arquivo);
    fclose(arquivo);

    printf("Restauração realizada com sucesso.\n");
}

int main() {
    setlocale(LC_ALL, "");

    char escolha;

    do {
        printf("Selecione a opção:\n");
        printf("1. Incluir usuário\n");
        printf("2. Editar usuário\n");
        printf("3. Excluir usuário\n");
        printf("4. Buscar usuário pelo email\n");
        printf("5. Imprimir todos os usuários cadastrados\n");
        printf("6. Fazer backup dos usuários cadastrados\n");
        printf("7. Restaurar dados a partir do backup\n");
        printf("0. Sair\n");
        printf("Opção: ");
        scanf(" %c", &escolha);
        fflush(stdout);

        switch (escolha) {
            case '1':
                adicionarUsuario();
                break;
            case '2':
                editarUsuario();
                break;
            case '3':
                excluirUsuario();
                break;
            case '4':
                buscarUsuario();
                break;
            case '5':
                imprimirUsuarios();
                break;
            case '6':
                fazerBackup();
                break;
            case '7':
                restaurarBackup();
                break;
            case '0':
                printf("Encerrando o programa.\n");
                break;
            default:
                printf("Opção inválida.\n");
                break;
        }

        printf("\n");
    } while (escolha != '0');

    return 0;
}
