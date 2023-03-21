#include <locale.h>
#include <stdio.h>

  int main(void) {

    setlocale(LC_ALL, "");

    int anos, dias, meses, res;

    printf("Insira sua idade em anos, meses e dias: ");

    scanf("%d", &anos);
    scanf("%d", &meses);
    scanf("%d", &dias);

    res = (dias + (anos * 365) + (meses * 30));

    printf("A idade em dias é de: %d dias\n", res);

  return 0;
}
