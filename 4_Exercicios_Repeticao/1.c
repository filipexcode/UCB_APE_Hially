#include <stdio.h>
#include <locale.h>

int main(void){

    int i,n;

    printf("Insira o valor: ");
    scanf("%d",&n);

    for(i=0;i<=n;i++){
        printf("%d\n",i);
    }

    return 0;
}
