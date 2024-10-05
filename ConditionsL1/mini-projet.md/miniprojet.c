#include <stdio.h>
#include <string.h>

#define max_livres 60
 
  char titredulivre[max_livres][60];
    char auteurdulivre[max_livres][60];
    float prixdulivre[max_livres];
    int quantiteenstock[max_livres];
    int nombredeslivres=0 ;
    
void ajouterunlivre() {
   if(nombredeslivres < max_livres) {
        printf("*\tAjouter un livre\t*\n");

 printf ("-titre de livre ");
scanf ("%s", titredulivre[nombredeslivres]);
 printf("-auteur du livre :");
 scanf("%s",&auteurdulivre[nombredeslivres]);
 printf("-prix du livre :");
 scanf("%f",&prixdulivre[nombredeslivres]);
 printf("-quantité en stock:");
 scanf("%d",&quantiteenstock[nombredeslivres]);
  
  
   nombredeslivres++;
   
  printf("Livre est ajouté .\n");
   } else {
 printf("Impossible d'ajouter plus de livres.\n");
   }
}
void afficherlivres() {
     if ( nombredeslivres == 0) {
     printf("Aucun livre disponible.\n");    
 } else {
     printf("\nLivres disponibles :\n");
    for (int i = 0; i < nombredeslivres ; i++) {
  printf("%d. Titre : %s, Auteur : %s, Prix : %.2f€, Quantité : %d\n",
                   i + 1, titredulivre[i], auteurdulivre[i], prixdulivre[i], quantiteenstock[i]);
    }
 }
}
void mettreajourQuantite() {
      char recherche[60];
   printf("Quelle est le titre du livre à mettre à jour : ");
  scanf("%s", recherche);
   for (int i = 0; i < nombredeslivres; i++) {
               if (strcmp(titredulivre[i], recherche) == 0) {
                   printf("Nouvelle quantité : ");
                    scanf("%d", &quantiteenstock[i]);
            printf("Quantité mise à jour.\n");
            return;
               }
    }
    printf("Livre non trouvé.\n");
}
void supprimerlivre() {
        char Suppression[60];
        printf(" le titre du livre à supprimer : ");
    scanf("%s", Suppression);
     for (int i = 0; i < nombredeslivres ; i++) {
          if (strcmp(titredulivre[i], Suppression) == 0) {
              for (int j = i; j < nombredeslivres - 1; j++) {
                 strcpy(titredulivre[j], titredulivre[j + 1]);
                  strcpy(auteurdulivre[j], auteurdulivre[j + 1]);
                     prixdulivre[j] = prixdulivre[j + 1];
                quantiteenstock[j] = quantiteenstock[j + 1];
              }
                 
      nombredeslivres--;
      printf("Livre supprimé.\n");
            return;
          }
    }
    printf("Livre non trouvé.\n");
}
void affichertotallivres() {
    int total = 0;
    for (int i = 0; i < nombredeslivres; i++) {
        total += quantiteenstock[i];
    }
      printf(" total de livres en stock est : %d\n", total);
}


int main() {
    int choix;
     while (1) {
        printf("\nMenu :\n");
        printf("1. Ajouter un livre\n");
        printf("2. Afficher les livres disponibles\n");
        printf("3. Mettre à jour la quantité d'un livre\n");
        printf("4. Supprimer un livre du stock\n");
        printf("5. Afficher le nombre total de livres en stock\n");
        printf("6. Quitter\n");
        printf("Sélectionnez une option : ");
        scanf("%d", &choix);
       
         switch (choix) {
            case 1:
                ajouterunlivre();
                break;
            case 2:
                afficherlivres();
                break;
            case 3:
                mettreajourQuantite();
                break;
            case 4:
                supprimerlivre();
                break;
            case 5:
                affichertotallivres();
                break;
            case 6:
                printf("Quitter!\n");
                return 0;
            default:
                printf("Choix invalide, veuillez réessayer.\n");
        }
    }
}