#include <stdio.h>

int main() {
    float kmh ,ms ;
    printf("veuillez vous entre vitesse kmh = ");
    scanf("%f",&kmh);
    ms = kmh * 0.27778 ;
    printf("la resultat de operation = %.2f",ms);

    return 0;
}