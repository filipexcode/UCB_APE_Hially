#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){

    int prato,sobremesa,bebida,cp,cs,cb;

        setlocale(LC_ALL,"");

    printf("Selecione a opção de prato\n");
    printf("1 - Vegetariano          2 - Peixe\n");
    printf("3 - Frango               4 - Carne\n");
    fflush(stdin);
    scanf("%d",&prato);

        system("cls");

    printf("Selecione a opção de sobremesa\n");
    printf("1 - Abacaxi          2 - Sorvete Diet\n");
    printf("3 - Mousse Diet      4 - Mousse de Chocolate\n");
    fflush(stdin);
    scanf("%d",&sobremesa);

        system("cls");

    printf("Selecione a opção de bebida: \n");
    printf("1 - Chá              2 - Suco de Laranja\n");
    printf("3 - Suco de Melão    4 - Refrigerante Diet\n");
    fflush(stdin);
    scanf("%d",&bebida);

        system("cls");

    switch (prato)
    {
    case 1:
        cp = 180;
        break;
    
    case 2:
        cp = 230;
        break;

    case 3:
        cp = 250;
        break;

    case 4:
        cp = 350;
        break;

    default:
        printf("Opção de prato inválida\n");
        break;
    }

    switch (sobremesa)
    {
    case 1:
        cs = 75;
        break;
    
    case 2:
        cs = 110;
        break;

    case 3:
        cs = 170;
        break;

    case 4:
        cs = 200;
        break;

    default:
        printf("Opção de sobremesa inválida\n");
        break;
    }

    switch (bebida)
    {
    case 1:
        cb = 20;
        break;
    
    case 2:
        cb = 70;
        break;

    case 3:
        cb = 100;
        break;

    case 4:
        cb = 65;
        break;

    default:
        printf("Opção de bebida inválida\n");
        break;
    }

    printf("A quantidade de calorias da refeição é de: %d cal\n",cp+cs+cb);

    system("pause");
    return 0;
}