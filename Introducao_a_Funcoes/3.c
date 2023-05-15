#include <stdio.h>

float celsiusToFahrenheit(float celsius) {
    return (9 * celsius / 5) + 32;
}

float fahrenheitToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

float celsiusToKelvin(float celsius) {
    return celsius + 273.15;
}

float kelvinToCelsius(float kelvin) {
    return kelvin - 273.15;
}

float celsiusToReaumur(float celsius) {
    return celsius * 4 / 5;
}

float reaumurToCelsius(float reaumur) {
    return reaumur * 5 / 4;
}

float kelvinToRankine(float kelvin) {
    return kelvin * 1.8;
}

float rankineToKelvin(float rankine) {
    return rankine / 1.8;
}

int main() {
    int opcao;
    float temperatura, resultado;

    printf("Escolha uma opção de conversão:\n");
    printf("1. Celsius para Fahrenheit\n");
    printf("2. Fahrenheit para Celsius\n");
    printf("3. Celsius para Kelvin\n");
    printf("4. Kelvin para Celsius\n");
    printf("5. Celsius para Réaumur\n");
    printf("6. Réaumur para Celsius\n");
    printf("7. Kelvin para Rankine\n");
    printf("8. Rankine para Kelvin\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Digite a temperatura em graus Celsius: ");
            scanf("%f", &temperatura);
            resultado = celsiusToFahrenheit(temperatura);
            printf("A temperatura em Fahrenheit é: %.2f\n", resultado);
            break;
        case 2:
            printf("Digite a temperatura em graus Fahrenheit: ");
            scanf("%f", &temperatura);
            resultado = fahrenheitToCelsius(temperatura);
            printf("A temperatura em Celsius é: %.2f\n", resultado);
            break;
        case 3:
            printf("Digite a temperatura em graus Celsius: ");
            scanf("%f", &temperatura);
            resultado = celsiusToKelvin(temperatura);
            printf("A temperatura em Kelvin é: %.2f\n", resultado);
            break;
        case 4:
            printf("Digite a temperatura em graus Kelvin: ");
            scanf("%f", &temperatura);
            resultado = kelvinToCelsius(temperatura);
            printf("A temperatura em Celsius é: %.2f\n", resultado);
            break;
        case 5:
            printf("Digite a temperatura em graus Celsius: ");
            scanf("%f", &temperatura);
            resultado = celsiusToReaumur(temperatura);
            printf("A temperatura em Réaumur é: %.2f\n", resultado);
            break;
        case 6:
            printf("Digite a temperatura em graus Réaumur: ");
            scanf("%f", &temperatura);
            resultado = reaumurToCelsius(temperatura);
            printf("A temperatura em Celsius é: %.2f\n", resultado);
            break;
        case 7:
            printf("Digite a temperatura em graus Kelvin: ");
            scanf("%f", &temperatura);
            resultado = kelvinToRankine(temperatura);
            printf("A temperatura em Rankine é: %.2lf\n", resultado);
            break;
        case 8:
            printf("Digite a temperatura em graus Rankine: ");
            scanf("%f", &temperatura);
            resultado = rankineToKelvin(temperatura);
            printf("A temperatura em Kelvin é: %.2lf\n", resultado);
            break;
        default:
            printf("Opção inválida\n");
            break;
    }
  
        return 0;
}
