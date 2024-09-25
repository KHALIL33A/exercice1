#include <stdio.h>

int main() {
    float x ;
    printf("veuillez vous entre le nomber x :");
    scanf("%f",&x);
    if (x > 0){
        printf(" resultat : positif ");
    }
    else if(x < 0) {
          printf("resultat : negatif");
    }
    else {
          printf("resultat :  null");
        
    }
    return 0;
}