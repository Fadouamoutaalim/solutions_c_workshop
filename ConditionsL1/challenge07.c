#include <stdio.h>

int main() {

   float revenuannuel;
    int scorecredit;
    int dureepret;

    printf("Entrez votre revenu annuel (en euros):");
    scanf("%f", &revenuannuel);

    printf("Entrez votre score de crédit (sur 1000) : ");
    scanf("%d", &scorecredit);

    printf("Entrez la durée du prêt (en années) : ");
    scanf("%d", &dureepret);

    if (revenuannuel >= 30000 && scorecredit >= 700 && dureepret <= 10) {
        printf("eligible .\n");
    } else if (revenuannuel >= 30000 && scorecredit >= 650 && dureepret <= 15) {
        printf("eligible avec conditions.\n");
    } else {
        printf("non eligible.\n");
    }

    return 0; 
}