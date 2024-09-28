#include <stdio.h>
 int main(){
 int n ;
 int i ; 
 int S=0 ;

 printf("donner le nombre entier:");
 scanf("%d",&n);
  for(i=1;i<=n;i++){
      S=S+i ;
     
  }
 printf("la sommme de ce nombre:%d",S);
    return 0;
}