#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){

    setlocale(LC_ALL, "");

    float vcusto, vfrete, vdespesas, vcustof, vvenda;
    int lucropercent;

        printf("Insira o valor de custo do produto: ");
        fflush(stdin);
        scanf("%f",&vcusto);

        printf("Insira o valor do frete: ");
        fflush(stdin);
        scanf("%f",&vfrete);

        printf("Insira o valor das demais despesas: ");
        fflush(stdin);
        scanf("%f",&vdespesas);

        vcustof = vcusto + vfrete + vdespesas;

        printf("Insira o valor de venda do produto: ");
        fflush(stdin);
        scanf("%f",&vvenda);

        lucropercent = ((vvenda-vcustof) / vcustof) * 100;

        printf("A porcentagem de lucro é de %d%%\n",lucropercent);

    return 0;
}