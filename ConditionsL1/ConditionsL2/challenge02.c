#include <stdio.h>

int main() {
    int age, typevoiture, accidents;
    double pbase = 300.0, pfinale;

    printf("age du conducteur : ");
    scanf("%d", &age);
    printf("qu elle type de voiture : 1-sportive, 2-utilitaire, 3-familiale) : ");
    scanf("%d", &typevoiture);
    printf("Nombre d accidents : ");
    scanf("%d", &accidents);

    pfinale = pbase;

    if (age < 25) pfinale *= 1.5;
    else if (age > 65) pfinale *= 1.2;

    if (typevoiture == 1) pfinale *= 2;
    else if (typevoiture == 2) pfinale *= 1.2;
    else if (typevoiture == 3) pfinale *= 1.1;

    if (accidents > 1) pfinale *= 1.3;

    printf("Prime d assurance : %.2f €\n", pfinale);

    return 0;
}
