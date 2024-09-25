
#include <stdio.h>

int main() {
 float kmh , msec ;
 
  printf("veuillez saisir la vitesse en kilometres par heure :");
  scanf("%f",&kmh);
 
    msec = kmh * 0.27778;


    printf("voila la vitesse en m/sec :%.2f",msec);


    return 0;
}