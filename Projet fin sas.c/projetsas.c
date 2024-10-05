#include <stdio.h>
#include <string.h>

#define MAX_RESERVATIONS 50

typedef struct {
    char nom[50];
    char prenom[50];
    char telephone[15];
    int age;
    char date[11];
    char statut[20];
    int id;
} Reservation;

Reservation reservations[MAX_RESERVATIONS];
int reservationCount = 0;

void ajouterReservation() {
    if (reservationCount >= MAX_RESERVATIONS) {
        printf("Limite de reservations depassee.\n");
        return; 
    }

    printf("Nom : ");
    scanf("%s", reservations[reservationCount].nom);
    printf("Prenom : ");
    scanf("%s", reservations[reservationCount].prenom);
    printf("Telephone : ");
    scanf("%s", reservations[reservationCount].telephone);
    printf("Age : ");
    scanf("%s", reservations[reservationCount].age);
    

    while (1) {
        printf("Statut (valide, reporte, annule, traite) : ");
        scanf("%19s", reservations[reservationCount].statut);
        if (strcmp(reservations[reservationCount].statut, "valide") == 0 ||
            strcmp(reservations[reservationCount].statut, "reporte") == 0 ||
            strcmp(reservations[reservationCount].statut, "annule") == 0 ||
            strcmp(reservations[reservationCount].statut, "traite") == 0) {
            break; 
        } else {
            printf("Ce statut est invalide.\n");
        }
    }

    printf("Date de reservation  : ");
    scanf("%s", reservations[reservationCount].date);

    reservations[reservationCount].id = reservationCount + 1;
    printf("La rservation ajoutee avec succes. ID : %d\n", reservations[reservationCount].id);
    
    reservationCount++;
}

void afficherReservation(int id) {
    if (id < 1 || id > reservationCount) {
        printf("cette reservation est non trouve.\n");
        return;
    }

    printf("ID : %d\nNom : %s\nPrenom : %s\nTelephone : %s\nAge : %d\nStatut : %s\nDate : %s\n", 
           reservations[id - 1].id, 
           reservations[id - 1].nom, 
           reservations[id - 1].prenom, 
           reservations[id - 1].telephone, 
           reservations[id - 1].age, 
           reservations[id - 1].statut, 
           reservations[id - 1].date);
}

void rechercherReservationParNom(char nom[50]) {
    int found = 0;
    for (int i = 0; i < reservationCount; i++) {
        if (strcmp(reservations[i].nom, nom) == 0) {
            afficherReservation(reservations[i].id);
            found = 1;
        }
    }
    if (!found) {
        printf("Aucune reservation trouve pour le nom : %s\n", nom);
    }
}

void rechercherReservationParID(int id) {
    if (id < 1 || id > reservationCount) {
        printf("Reservation non trouve.\n");
        return;
    }
    afficherReservation(id);
}

void modifierReservation(int id) {
    if (id < 1 || id > reservationCount) {
        printf("Réservation non trouvee.\n");
        return;
    }
    
    printf("Modifier la reservation avec ID : %d\n", id);
    printf("Nom [%s] : ", reservations[id - 1].nom);
    scanf("%49s", reservations[id - 1].nom);
    printf("Prenom [%s] : ", reservations[id - 1].prenom);
    scanf("%49s", reservations[id - 1].prenom);
    printf("Telephone [%s] : ", reservations[id - 1].telephone);
    scanf("%14s", reservations[id - 1].telephone);
    printf("Age [%d] : ", reservations[id - 1].age);
    scanf("%d", &reservations[id - 1].age);
    
    while (1) {
        printf("Statut [%s] (valide, reporte, annule, traite) : ", reservations[id - 1].statut);
        scanf("%19s", reservations[id - 1].statut);
        if (strcmp(reservations[id - 1].statut, "valide") == 0 ||
            strcmp(reservations[id - 1].statut, "reporte") == 0 ||
            strcmp(reservations[id - 1].statut, "annule") == 0 ||
            strcmp(reservations[id - 1].statut, "traite") == 0) {
            break; 
        } else {
            printf("Ce statut est invalide.\n");
        }
    }

    printf("Date de reservation [%s] : ", reservations[id - 1].date);
    scanf("%s", reservations[id - 1].date);
    printf("updated.\n");
}

void supprimerReservation(int id) {
    if (id < 1 || id > reservationCount) {
        printf("Reservation nonn trouve.\n");
        return;
    }

    for (int i = id - 1; i < reservationCount - 1; i++) {
        reservations[i] = reservations[i + 1];
    }
    reservationCount--;
    printf("Reservation supprimee avec succes.\n");
}

void afficherStatistiques() {
    int ageTotal = 0;
    int countStatut[4] = {0}; 

    for (int i = 0; i < reservationCount; i++) {
        ageTotal += reservations[i].age;

       
        if (strcmp(reservations[i].statut, "valide") == 0) countStatut[0]++;
        else if (strcmp(reservations[i].statut, "reporte") == 0) countStatut[1]++;
        else if (strcmp(reservations[i].statut, "annule") == 0) countStatut[2]++;
        else if (strcmp(reservations[i].statut, "traite") == 0) countStatut[3]++;
    }

    printf("Moyenne d age : %.2f\n", (reservationCount > 0) ? (float)ageTotal / reservationCount : 0);
    printf("Valide : %d, Reporte : %d, Annule : %d, Traite : %d\n",
           countStatut[0], countStatut[1], countStatut[2], countStatut[3]);
}

void trierParNomEtStatut() {
    for (int i = 0; i < reservationCount - 1; i++) {
        for (int j = i + 1; j < reservationCount; j++) {
            if (strcmp(reservations[i].nom, reservations[j].nom) > 0 ||
                (strcmp(reservations[i].nom, reservations[j].nom) == 0 && strcmp(reservations[i].statut, reservations[j].statut) > 0)) {
                Reservation temp = reservations[i];
                reservations[i] = reservations[j];
                reservations[j] = temp;
            }
        }
    }
    printf("Reservations triee par nom et statut.\n");
}

int main() {
    int choix, id;
    char nom[50];

   
    char noms[10][50] = {"Fadoua", "Omaima", "Said", "Salma", "Omar", 
                         "Anas", "Ali", "Saad", "Amal", "Reda"};
    char prenoms[10][50] = {"Saji", "Obar", "Fikri", "Safi", "Ahmed", 
                             "Abdo", "Jamal", "Diani", "Kamal", "Radwan"};
    char telephones[10][15] = {"053665449", "012387891", "0345678912", 
                                "0456789123", "0567891234", "0678912345", 
                                "0789123456", "0891234567", "0912345678", 
                                "1023456789"};
    int ages[10] = {30, 22, 40, 28, 35, 22, 31, 28, 29, 24};
    char statuts[10][20] = {"valide", "reporte", "annule", "traité", 
                            "valide", "reporte", "annule", "traite", 
                            "valide", "reporte"};
    char dates[10][11] = {"2024/01/01", "2024/02/01", "2024/03/01", 
                          "2024/04/01", "2024/05/01", "2024/06/01", 
                          "2024/07/01", "2024/08/01", "2024/09/01", 
                          "2024/10/01"};

    for (int i = 0; i < 10; i++) {
        strcpy(reservations[i].nom, noms[i]);
        strcpy(reservations[i].prenom, prenoms[i]);
        strcpy(reservations[i].telephone, telephones[i]);
        reservations[i].age = ages[i];
        strcpy(reservations[i].statut, statuts[i]);
        strcpy(reservations[i].date, dates[i]);
        reservations[i].id = i + 1; 
    }
    reservationCount = 10; 

    do {
        printf("\n--------Menu---------:\n");
        printf("1- Ajouter une reservation\n");
        printf("2- Modifier une reservation\n");
        printf("3- Supprimer une reservation\n");
        printf("4- Afficher une reservation\n");
        printf("5- Rechercher une reservation par ID\n");
        printf("6- Rechercher une reservation par nom\n");
        printf("7- Afficher les statistiques\n");
        printf("8- Trier les reservations par nom et statut\n");
        printf("9- Fermer le programme\n");
        printf("Entrez votre choix : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                ajouterReservation();
                break;
            case 2:
                printf("Entrez l'ID de la reservation à modifier : ");
                scanf("%d", &id);
                modifierReservation(id);
                break;
            case 3:
                printf("Entrez l ID de la reservation a supprimer : ");
                scanf("%d", &id);
                supprimerReservation(id);
                break;
            case 4:
                printf("Entrez l ID de la reservation à afficher :");
                scanf("%d", &id);
                afficherReservation(id);
                break;
            case 5:
                printf("Entrez l ID de la reservation à rechercher :");
                scanf("%d", &id);
                rechercherReservationParID(id);
                break;
            case 6:
                printf("Entrez le nom de la reservation à rechercher :");
                scanf("%s", nom);
                rechercherReservationParNom(nom);
                break;
            case 7:
                afficherStatistiques();
                break;
            case 8:
                trierParNomEtStatut();
                break;
            case 9:
                printf("Programme ferme !\n");
                break;
            default:
                printf("ce choix invalide.\n");
        }
    } while (choix != 10);

    return 0;
}

