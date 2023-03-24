#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){

    int qtd,cod;

        setlocale(LC_ALL,"");

    printf("Insira o código do cardápio: ");
    fflush(stdin);
    scanf("%d",&cod);

    printf("Insira a quantidade desejada: ");
    fflush(stdin);
    scanf("%d",&qtd);

        system("cls");
    
    switch (cod)
    {
    case 100: 
        printf("Você escolheu a opção: Cachorro Quente\n");
        printf("A quantidade escolhida foi: %d\n",qtd);
        printf("O valor final do seu pedido é: R$ %.2lf\n",qtd * 10.10);
        break;

    case 101: 
        printf("Você escolheu a opção: Bauru Simples\n");
        printf("A quantidade escolhida foi: %d\n",qtd);
        printf("O valor final do seu pedido é: R$ %.2lf\n",qtd * 8.30);
        break;

    case 102: 
        printf("Você escolheu a opção: Bauru c/ ovo\n");
        printf("A quantidade escolhida foi: %d\n",qtd);
        printf("O valor final do seu pedido é: R$ %.2lf\n",qtd * 8.50);
        break;

    case 103: 
        printf("Você escolheu a opção: Hamburguer\n");
        printf("A quantidade escolhida foi: %d\n",qtd);
        printf("O valor final do seu pedido é: R$ %.2lf\n",qtd * 12.50);
        break;

    case 104: 
        printf("Você escolheu a opção: Cheeseburguer\n");
        printf("A quantidade escolhida foi: %d\n",qtd);
        printf("O valor final do seu pedido é: R$ %.2lf\n",qtd * 13.25);
        break;
    
    default:
        printf("CODIGO INVÁLIDO\n");
        break;
    }

    system("pause");
    return 0;
}