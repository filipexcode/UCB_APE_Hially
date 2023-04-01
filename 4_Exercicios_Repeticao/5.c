#include <stdlib.h>
#include <locale.h>
#include <stdio.h>  

int main(void) {  

        setlocale(LC_ALL,"");

    int num, i, soma=0;  

    for (i=1; i<=100; i++) {  

    if (i % 2 == 0)

    soma += i;  

}  

    printf("Soma dos 50 primeiros números é: %d\n", soma);  

return 0;  

}