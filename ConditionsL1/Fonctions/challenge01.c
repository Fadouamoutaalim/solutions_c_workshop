#include <stdio.h>

int la_somme(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2;

    printf("Entrez le premier nombre : ");
    scanf("%d", &num1);
    printf("Entrez le deuxieme nombre : ");
    scanf("%d", &num2);

    int resultat = la_somme(num1, num2);

    printf("La somme de %d et %d est : %d\n", num1, num2, resultat);

    return 0;
}
