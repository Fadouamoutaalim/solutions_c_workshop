#include <stdio.h>

int minimum(int a, int b) {
   if (a>b){
       return b ;
   } else {
       return a;
   }
   
}
   
   

int main() {
    int nombre1;
    int nombre2;
    int resultat;
    printf("entrer le 1er nombre: ");
    scanf("%d",&nombre1);
    printf("entrer le 2eme nombre: ");
    scanf("%d",&nombre2);
     
     resultat = minimum(nombre1,nombre2);
     
     printf("le minimum entre %d et %d est : %d",nombre1,nombre2,resultat);
    
   
    return 0;
}
