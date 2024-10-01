#include <stdio.h>
int somme(int x ,int y){
    
   return x+y;
  
}
int main(){
   int  x , y;
   int resulte;
   printf("entre le nomber: ");
   scanf("%d",&x);
   printf("entre le nomber: ");
   scanf("%d",&y);
   resulte=somme(x,y);
  printf("resultat =%d ",resulte );
    