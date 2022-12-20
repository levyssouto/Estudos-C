#include <stdio.h>
#include<stdlib.h>


int ve_num(){
int n = 0;
  scanf("%d",&n);
  if(n<1 || n>8){
     printf("ERRO! digite um numero entre 1 e 8 : ");
    ve_num();
  }else
    return n;
  } 

int main() {
 printf("digite um numero entre 1 e 8 : ");
 int n,i,j=0;
 n = ve_num();
  for(i=1;i<n;i++){
    
    for(j=n-i;j>=1;j--)
      printf(" ");
    
      for(j=1;j<=i;j++)
        printf("#");
      printf(" ");
      
     for(j=1;j<=i;j++)
        printf("#");
      printf("\n");
  }
  
    return 0;
}
  