#include <locale.h>
#include <stdio.h>

  int main(void) {

    setlocale(LC_ALL, "");

    double precoInicial, pDistri, pImposto, precoFinal;

    printf("Insira o preço de fabrica do carro: ");
    fflush(stdin);
    scanf("%lf",&precoInicial);

    pDistri = (precoInicial * 28) / 100;
    pImposto = (precoInicial * 45) / 100;

    precoFinal = precoInicial + pDistri + pImposto;

    printf("O preço para o consumidor é de: R$ %.2lf\n",precoFinal);

  return 0;
}
