#include <stdio.h>

int maximum(int a, int b) {
   if (a>b){
       return a ;
   } else {
       return b;
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
     
     resultat = maximum(nombre1,nombre2);
     
     printf("le maximum entre %d et %d est : %d",nombre1,nombre2,resultat);
    
   
    return 0;
}
