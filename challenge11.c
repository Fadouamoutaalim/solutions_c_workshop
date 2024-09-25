#include <stdio.h>
#include <math.h> 
int main(){
 float L , l , Surface ;

printf("saisir L:");
scanf("%f",&L);
printf("saisir l:");
scanf("%f",&l);
 
 Surface = l * L ;
 
  printf("la surface de rectangle est :%0.2f",Surface);
  
 return 0;
}