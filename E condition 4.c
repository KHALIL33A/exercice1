#include <stdio.h>
#include <math.h>

int main() {
    float a , b ,c ;
    float D ;
    printf("veuillez vous entre la nomber a :");
    scanf("%f",&a);
     printf("veuillez vous entre la nomber b :");
    scanf("%f",&b);
     printf("veuillez vous entre la nomber c :");
    scanf("%f",&c);
    
    D = pow(b,2)-(4*a*c);
    if(D >0){

        printf( "solution 1= %f", (-b +(sqrt (D)))/(2*a));
         printf( "solution 2= %f", (-b -(sqrt (D)))/(2*a));
         
    }else if (D == 0){

        printf("solution = %.2f ",(-b)/(2*a));
    }
    else {
          printf ("aucan solution");
        
    }

    return 0;
}