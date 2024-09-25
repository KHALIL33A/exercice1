#include <stdio.h>

int main() {
    float nombera ;
    printf("veuillez vous enter le nombera :");
    scanf("%f",&nombera);
    
    if(nombera < 10){
        printf("resultat est recalé :");
    }
    
    else if(nombera >=10&& nombera<=12){
           printf("resultat la mention passable :"); }
           
    else if (nombera >=12&&nombera<=14){
        printf("resulta mention asse bien");
    }
     else if (nombera>=14&&nombera<=16)
        printf("resulta mention superieur");
    

   
  
    return 0;
    }