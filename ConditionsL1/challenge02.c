#include <stdio.h>

int main() {
    int caractere ;
    printf("veuillez saisir le caractere:");
    scanf("%c",&caractere);
    
    switch (caractere)
    { 
        case 'a' :
            printf("ce caractere est un voyelle");
        break;
        case 'A':
            printf("ce caractere est un voyelle");
        break;
        case 'e':
            printf("ce caractere est un voyelle");
        break;
        case 'E':
            printf("ce caractere est un voyelle");
        break;
        case 'o':
            printf("ce caractere est un voyelle");
        break;
        case 'O':
            printf("ce caractere est un voyelle");  
        break;
        case 'i':
            printf("ce caractere est un voyelle");
        break;
        case 'I':
            printf("ce caractere est un voyelle");
        break;
        case 'u':
            printf("ce caractere est un voyelle");
        break;
        case 'U':
             printf("ce caractere est un voyelle");
        break;
    }
    return 0;
}