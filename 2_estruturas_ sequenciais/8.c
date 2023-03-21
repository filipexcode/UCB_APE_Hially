#include <locale.h>
#include <stdio.h>

  int main(void) {

    setlocale(LC_ALL, "");
    int qtdCarro;
    double salFixo, comissao, valorVendas, precoFinal;

    printf("Insira quantos carros foram vendidos: ");
    fflush(stdin);
    scanf("%d",&qtdCarro);

    printf("Insira o valor total de vendas: ");
    fflush(stdin);
    scanf("%lf",&valorVendas);

    printf("Insira o salario fixo do funcionário: ");
    fflush(stdin);
    scanf("%lf",&salFixo);

    printf("Insira o valor da comissão por venda: ");
    fflush(stdin);
    scanf("%lf",&comissao);

    precoFinal = salFixo + comissao + ((valorVendas * 5) / 100);

    printf("O valor a receber é de: R$ %.2lf\n",precoFinal);

  return 0;
}
