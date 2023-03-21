#include <stdio.h>
#include <math.h>
 
int main() {
 
   double A,B,C,t;
   
   scanf("%lf %lf %lf",&A,&B,&C);
   
   
   if(((B * B) - 4 * A * C) < 0 || A == 0){
        printf("Impossivel calcular\n");
   }else{
       t = sqrt((B*B)-4*A*C);
       printf("R1 = %.5lf\nR2 = %.5lf\n",((-B + t) / (2 * A)), ((-B - t) / (2 * A)));
   }
   
 
    return 0;
}
