#include <stdio.h> 
int main(){
 float K , C;
 
  printf("veuillez saisir la temperature en celisius:");
  scanf("%f",&C);
 
   K = C + 273.15 ;
    printf("voila la temperature en kelvin:%.2f",K);

    return 0;
}
