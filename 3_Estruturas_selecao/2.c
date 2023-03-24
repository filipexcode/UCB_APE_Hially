#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){

        setlocale(LC_ALL,"");

    int estado;
    double preco,reajuste;

    printf("Insira o valor do produto: ");
    fflush(stdin);
    scanf("%lf",&preco);

        system("cls");

    printf("Escolha um estado\n");
    printf("1-Brasília          2-São Paulo\n");
    printf("3-Pernambuco        4-Rio Grande do Sul\n");
    fflush(stdin);
    scanf("%d",&estado);

        system("cls");

    switch (estado)
    {
    case 1:
        reajuste = (preco * 15) / 100;
        printf("O valor final é: R$ %.2lf\n",reajuste + preco);
        printf("O valor sofreu um reajuste de: %.2lf\n",reajuste);
        break;

    case 2:
        reajuste = (preco * 20) / 100;
        printf("O valor final é: R$ %.2lf\n",reajuste + preco);
        printf("O valor sofreu um reajuste de: %.2lf\n",reajuste);
        break;

    case 3:
        reajuste = (preco * 25) / 100;
        printf("O valor final é: R$ %.2lf\n",reajuste + preco);
        printf("O valor sofreu um reajuste de: %.2lf\n",reajuste);
        break;

    case 4:
        reajuste = (preco * 35) / 100;
        printf("O valor final é: R$ %.2lf\n",reajuste + preco);
        printf("O valor sofreu um reajuste de: %.2lf\n",reajuste);
        break;
    
    default:
        printf("Opção Inválida\n");
        break;
    }

    system("pause");
    return 0;
}