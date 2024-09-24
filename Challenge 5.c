#include <stdio.h>

int main() {
    float tm ;
  printf("veuillez vous enter la température en Celsius tm =");
  scanf("%f",&tm);
if (tm < 0 ){
    printf("l'état de l'eau est solide");
}
else if (tm < 100){
    printf("l'état de l'eau est liquide");
}
   else  {
      printf("l'état de l'eau est gaz");
}








    return 0;
}