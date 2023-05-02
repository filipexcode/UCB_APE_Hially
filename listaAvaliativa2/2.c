#include <stdio.h>

#define SALARIO_BASE 600.0

int validaQuantidade(int quantidade) {
    if (quantidade <= 0) {
        return 0; 
    } else {
        return 1; 
    }
}

float calculaSalario(int quantidade) {
    float adicional = 0.0;
    if (quantidade > 50 && quantidade <= 80) {
        adicional = (quantidade - 50) * 0.5; 
    } else if (quantidade > 80) {
        adicional = 30.0 + (quantidade - 80) * 0.75;
    return SALARIO_BASE + adicional; 
}

void mostraFinal(int num_funcionarios, float salarios[]) {
    printf("Salarios dos %d funcionarios:\n", num_funcionarios);
    for (int i = 0; i < num_funcionarios; i++) {
        printf("Funcionario %d: R$ %.2f\n", i+1, salarios[i]);
    }
}

int main() {
    int num_funcionarios = 0;
    printf("Informe o numero de funcionarios: ");
    scanf("%d", &num_funcionarios);
    float salarios[num_funcionarios]; 
    for (int i = 0; i < num_funcionarios; i++) {
        int quantidade = 0;
        printf("Informe a quantidade de pecas fabricadas pelo funcionario %d: ", i+1);
        scanf("%d", &quantidade);
        if (validaQuantidade(quantidade)) {
            salarios[i] = calculaSalario(quantidade);
        } else {
            printf("Quantidade invalida!\n");
            i--; 
        }
    }
    mostraFinal(num_funcionarios, salarios);
    return 0;
}
