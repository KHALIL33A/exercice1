#include <stdio.h>

int main() {
   
   int T[5] ,a , s;
   printf("entre le nomber \n");
   for(a=0 ; a<5 ;a++ ){
       printf(" T[%d]= ",a);
       scanf("%d",&T[a]);
       s=s+T[a];
       
   }
   printf("la somme: %d",s);
