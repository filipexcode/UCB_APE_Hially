#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int validarNumero(char *valor) {
    int pontoEncontrado = 0;
    for (int i = 0; valor[i] != '\0'; i++) {
        if (!isdigit(valor[i])) {
            if (valor[i] == '.' && !pontoEncontrado) {
                pontoEncontrado = 1;
            } else {
                return 0;
            }
        }
    }
    return 1;
}

char validarSexo() {
    char sexo;
    do {
        printf("Informe o sexo (M/F): ");
        scanf(" %c", &sexo);
        sexo = toupper(sexo); 
    } while (sexo != 'M' && sexo != 'F');
    return sexo;
}

float validarSalario() {
    char valor[10];
    float salario;
    do {
        printf("Informe o salário: R$ ");
        scanf("%s", valor);
    } while (!validarNumero(valor) || (salario = atof(valor)) <= 1);
    return salario;
}

char* classificaSalario(float salario) {
    if (salario > 1400) {
        return "Acima";
    } else if (salario < 1400) {
        return "Abaixo";
    } else {
        return "Igual";
    }
}

void mostraClassifica(char sexo, float salario, char* classificacao) {
    printf("\nSexo: %s\n", sexo == 'M' ? "Masculino" : "Feminino");
    printf("Salário: R$ %.2f\n", salario);
    printf("Classificação em relação ao salário mínimo: %s do salário mínimo\n", classificacao);
}

int main() {
    int numAssalariados, abaixo = 0, acima = 0;
    printf("Informe o número de assalariados: ");
    scanf("%d", &numAssalariados);

    for (int i = 0; i < numAssalariados; i++) {
        printf("\nAssalariado %d:\n", i+1);
        char sexo = validarSexo();
        float salario = validarSalario();
        char* classificacao = classificaSalario(salario);
        mostraClassifica(sexo, salario, classificacao);
        if (*classificacao == 'A') { 
            abaixo++;
        } else if (*classificacao == 'A') { 
            acima++;
        }
        free(classificacao);
    }

    printf("\nQuantidade de assalariados abaixo do salário mínimo: %d\n", abaixo);
    printf("Quantidade de assalariados acima do salário mínimo: %d\n", acima);

    return 0;
}
