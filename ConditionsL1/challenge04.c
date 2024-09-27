#include <stdio.h>
#include <math.h>

int main() {
    int a , b , c , delta , s1 , s2 ;
    printf("saisir a , b , c :");
    scanf("%f %f %f",&a,&b,&c );
    delta = pow(b,2)-4*a*c;
    
    if (delta>0) {
    s1=(-b+sqrt(delta))/(2*a);
    s2=(-b-sqrt(delta))/(2*b);
    printf("il y a deux solutions : %.2f %.2f",s1 ,s2);
    }
    else if (delta=0); {
    s1= -b/(2*a);
    printf("il y a une seul solution :%.2f",s1);
    }
  

    return 0;
}