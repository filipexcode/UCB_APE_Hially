#include <stdio.h>
#include <locale.h>

int main(void){

    int i=0;

    for(i=0;i<=10;i++){
        if(i % 3 == 0 && i > 0){
            
            printf("%d\n",i);

        }
    
    }

    return 0;
}
