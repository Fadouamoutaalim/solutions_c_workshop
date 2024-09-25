#include <stdio.h> 
int main(){
    float m1 , m2 , m3 ,mg;
    printf("saisire le 1er nombre:");
    scanf("%f",&m1);
    printf("saisire le 2er nombre:");
    scanf("%f",&m2);
    printf("saisire le 3er nombre:");
    scanf("%f",&m3);

     mg = (m1+m2+m3)/3;
printf("moyenne pondere est:%0.2f",mg);
    

 return 0;
}
