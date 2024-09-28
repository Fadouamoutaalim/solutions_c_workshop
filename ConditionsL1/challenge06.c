#include <stdio.h>

int main() {
  int n ;
  printf("saisir le nombre:");
  scanf("%d" ,&n);
    
  if (n<0) {
    printf("le nombre est negatif"); 
  }
  else if (n>0) {
      printf("le nombre est positif");
  }
  else  {
      printf("le nombre est egale 0");
  }
    return 0;
}