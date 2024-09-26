#include<stdio.h>
int main() {
    int a, b;
    printf("saisir la valeur a : ");
    scanf("%d",&a);
    printf("saisir la valeur b : ");
    scanf("%d",&b);
    
    int s = a+b;
      if (a == b) {
        s *= 3; 
    }
    
    printf("La somme est : %d", s);

    
    return 0;
}