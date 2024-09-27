#include <stdio.h>

int main() {
    int ans, menu;
    
    printf("Saisir l'année : ");
    scanf("%d", &ans);
    
    printf("1 - mois\n2 - jours\n3 - heures\n4 - minutes\n5 - secondes\n");
    printf(": ");
    scanf("%d", &menu);
    
    switch (menu) {
        case 1:
            printf("%d mois\n", ans * 12);
            break;
        case 2:
            printf("%d jours\n", ans * 365);
        case 3:
            printf("%d heures\n", ans * 365 * 24); 
            break;
        case 4:
            printf("%d minutes\n", ans * 365 * 24 * 60); 
            break;
        case 5:
            printf("%d secondes\n", ans * 365 * 24 * 60 * 60); 
            break;
        default:
            printf("cette option n existe pas.\n");
    }
    
    return 0;
}
