#include <stdio.h>

int main(void){

    int i,n;

    printf("Insira o valor: ");
    scanf("%d",&n);

    for(i=n;i>=0;i--){
        printf("%d\n",i);
    }

    return 0;
}
