#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {

        setlocale(LC_ALL,"");

    int num;

    printf("Digite um valor qualquer: ");
    fflush(stdin);
    scanf("%d", &num);

        system("cls");

    if(num % 2 == 0 || num % 3 == 0 || num % 5 == 0){

        printf("Divisivel por 2, 3 ou 5.\n");
        
    }else{
        
        printf("Nao divisivel por 2, 3 e 5.\n");

        }

        system("pause");
        return 0;
}