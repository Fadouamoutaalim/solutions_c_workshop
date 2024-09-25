#include <stdio.h> 
int main(){
    float C;
    printf("veuillez saisir la temperature de l eau en celisius:");
    scanf("%f",&C);
    if (C<0)
    printf("l etat de l eau est solide");
     else if (0 <=C< 100)
     printf("l etat de l eau est liquide");
    else if (C>=100)
     printf("l etat de l eau est gaz");
 return 0;
}