#include <stdio.h>

int main() {
     char caracter ;
     printf ("entre le caracter qui choix :");
     scanf("%s",&caracter);
     if('A'<=caracter && caracter <='Z')
     printf("resultat majuscule");
     else {
          printf ("minuscule");
         
     }
    

    return 0;
}