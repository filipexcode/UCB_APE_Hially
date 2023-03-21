#include <locale.h>
#include <stdio.h>

  int main(void) {

    setlocale(LC_ALL, "");

    int percent;
    double salarioAtual, reajuste;

    printf("Insira seu salário atual: ");
    fflush(stdin);
    scanf("%lf",&salarioAtual);
    

    printf("Insira o percentual de reajuste: ");
    fflush(stdin);
    scanf("%d",&percent);

    reajuste = (salarioAtual * percent) / 100;

    printf("O salario com reajuste é: R$ %.2lf\n", salarioAtual + reajuste);

  return 0;
}
