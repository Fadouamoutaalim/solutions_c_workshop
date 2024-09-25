#include <stdio.h>

int main() {
 float km , yards  ;
 
  printf("veuillez saisir la distance en km:");
  scanf("%f",&km);
 
   yards = km * 1093.61 ;

    printf("voila la distance en yards:%.2f",yards);



    return 0;
}