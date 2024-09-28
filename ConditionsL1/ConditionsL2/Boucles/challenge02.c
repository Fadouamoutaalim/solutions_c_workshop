#include <stdio.h>

int main() {
    int n ;
    int i ;
    int fact = 1 ;
     printf("donner le nombre n entier et positif :");
     scanf("%d",&n);
 
      for(i=1;i<=n;i++){
          fact*=i;
      }
      printf("%d! = %d\n" , n, fact);
         
     
      
    return 0;
}