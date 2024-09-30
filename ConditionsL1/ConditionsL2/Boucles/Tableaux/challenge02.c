#include <stdio.h>

int main() {
    int n;
  
   
    printf("Entrez le nombre d'element :\n ");
    scanf("%d", &n);

  int T[n];
   
    printf("Entrez l elements du tableau :\n");
    for (int i = 0; i < n; i++) {
        
        printf("element %d : ", i+1);
        scanf("%d", &T[i]);
    }

    printf("Les elements du tableau sont :\n");
    
    for (int i = 0; i < n; i++) {
       
        printf("%d\n", T[i]);
    }

    return 0;
}
