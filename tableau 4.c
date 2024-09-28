#include <stdio.h>

int main() {
int  T[5] , max , a=0 ;
printf("entrer la valaur: \n");
for (a=0;a<5;a++){
    T[5]=0;
    printf("T[%d]= ",a);
    scanf("%d",&T[a]);
}
max=T[0];
for (a=0;a<5;a++){
    if(max<T[a])
    max<T[a];
}
printf("la valeur maximal est: %d",max);

  
       

    
    return 0;
        
    }