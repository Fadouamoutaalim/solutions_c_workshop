#include <stdio.h>

int factorielle(int a, int fact) {
   
    for(int i=1 ;i<a;i++){
        
        fact = fact*(i+1) ;
    }
     
return fact ;
   
}
int main() {
    
    int resultat;
   
     resultat = factorielle(4,1);
     
     printf("le factorielle est : %d",resultat);
    
   
    return 0;
}
