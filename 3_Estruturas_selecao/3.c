#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){

        setlocale(LC_ALL,"");

    int ddd;

    printf("Digite o DDD: ");
    fflush(stdin);
    scanf("%d",&ddd);

        system("cls");

    switch (ddd)
    {
    case 61: 
        printf("O DDD informado pertence a cidade de Brasília\n");
        break;

    case 71:
        printf("O DDD informado pertence a cidade de Salvador\n");
        break;

    case 11:
        printf("O DDD informado pertence a cidade de São Paulo\n");
        break;

    case 21: 
        printf("O DDD informado pertence a cidade de Rio de Janeiro\n");
        break;

    case 32:
        printf("O DDD informado pertence a cidade de Juiz de Fora\n");
        break;

    case  19:
        printf("O DDD informado pertence a cidade de Campinas\n");
        break;

    case  27:
        printf("O DDD informado pertence a cidade de Vitória\n");
        break;

    case 31:
        printf("O DDD informado pertence a cidade de Belo Horizonte\n");
        break;
    
    default:
        printf("SEM IDENTIFICAÇÃO\n");
        break;
    }

    system("pause");
    return 0;
}
