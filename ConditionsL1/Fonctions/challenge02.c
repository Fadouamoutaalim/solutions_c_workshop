#include <stdio.h>

int le_produit(int a, int b) {
    return a * b;
}

int main() {
    int nombre1;
    int nombre2;
    int resultat;
    printf("entrer le 1er nombre: ");
    scanf("%d",&nombre1);
    printf("entrer le 2eme nombre: ");
    scanf("%d",&nombre2);
     
     resultat = le_produit(nombre1,nombre2);
     
     printf("le produit de %d et %d est : %d",nombre1,nombre2,resultat);
    
   
    return 0;
}
