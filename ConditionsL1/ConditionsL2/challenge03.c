#include <stdio.h>

int main() {
    int joursacordes, joursutilises, statut;
    int joursrestants;

    printf("Jours de conges accordes : ");
    scanf("%d", &joursacordes);
    printf("Jours de conges utilises : ");
    scanf("%d", &joursutilises);
    printf("Statut (0- pour temps partiel, 1- pour temps plein) : ");
    scanf("%d", &statut);

    joursrestants = (statut == 1) ? (joursacordes - joursutilises) : (joursacordes / 2 - joursutilises);

    if (joursutilises > joursacordes) {
        printf("Alerte : Vous avez depasse vos jours de conges !\n");
    } else {
        printf("Jours de conge restants : %d\n", joursrestants);
    }

    return 0;
}
