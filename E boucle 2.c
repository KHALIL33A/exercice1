#include <stdio.h>

int main() {
 int x, i, f = 1 ;
 printf("veuillez entre le nomber x :");
 scanf("%d",&x);
 
 for(i=1 ; i<=x ; i++){
     f*=i;
 }
 printf("%d",f);
      
    
    return 0;
    }
