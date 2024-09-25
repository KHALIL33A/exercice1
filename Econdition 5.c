#include <stdio.h>

int main() {
    int  m , j, h , min , s ,a , k;
    int menu ;
    printf("veuillez vous entre l anne a : ");
    scanf("%i",&a);
    printf("  1 choixe le mois : \n 2choixe le jour: \n  3Choixe le heure: \n  4choixe munite: \n 5choixe second : \n   ");
    scanf("%d",&menu);
    
    
    switch (menu){
        case 1:
        m = a * 12 ;
        printf("resultat :%d mois",m);
        break;
           case 2:
            j = a * 365 ;
        printf("resultat :%d jour",j);
        break;
        case 3:
        h = a * 8760 ;
        printf("resultat :%d heure" ,h);
         break;
           case 4:
           min = a * 525600 ;
        printf("resultat :%d munite",min);
         break;
          case 5:
          s = a * 3,154e+7 ;
        printf("resultat :%d second",s);
         break;
         default:
         break;
    
        
    }
    
 
    return 0;
}