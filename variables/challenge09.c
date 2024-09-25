#include <stdio.h>
#include <math.h> 
int main(){
     
 float x1,x2,y1,y2,z1,z2 ,distance ;

    printf("saisir x1:");
    scanf("%f",&x1);
     printf("saisir x2:");
    scanf("%f",&x2);
     printf("saisir y1:");
    scanf("%f",&y1);
     printf("saisir y2:");
    scanf("%f",&y2);
     printf("saisir z1:");
    scanf("%f",&z1);
     printf("saisir z2:");
    scanf("%f",&z2);
    
     distance=sqrt(pow(x2-x1 ,2) + pow(y2-y1,2) + pow(z2-z1,2));

    printf("la distance est :%0.2f");
    
 return 0;
}