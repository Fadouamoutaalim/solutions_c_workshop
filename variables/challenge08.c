#include <stdio.h> 
#include <math.h> 
int main(){
    float a,b,c,mgeo;
    printf("saisir le nombre a:");
    scanf("%f",&a);
    printf("saisir le nombre b:");
    scanf("%f",&b);
    printf("saisir le nombre c:");
    scanf("%f",&c);

    mgeo= pow((a*b*c),(1/3));

    printf("voila la moyenne geometrique:%0.2f");

 return 0;
}
