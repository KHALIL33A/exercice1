#include <stdio.h>

int main() {
    char caractere ;
    printf("veuillez vous entre caractere :");
    scanf("%s",&caractere);
    switch (caractere){
        case 'a':
        printf("resultat est une voyelle");
        break;
         case 'i':
        printf("resultat est une voyelle");
        break;
         case 'e':
        printf("resultat est une voyelle");
        break;
         case 'u':
        printf("resultat est une voyelle");
        break;
         case 'o':
        printf("resultat est une voyelle");
        break;
        default :
        printf("esultat est une non voyelle");
         
    }
    

    return 0;
}