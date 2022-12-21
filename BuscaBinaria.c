#include<stdio.h>


int buscaBinariaIT (int x, int n, int array[]) { 
   int e = -1, d = n; 
   while (e < d-1) {  
      int i = (e + d)/2;
      if (array[i] < x) e = i;
      else d = i; 
  
   }
   return d;
}


int main (void){
    printf("Digite quantos elementos terá o vetor?\n");
    int n,i;
    scanf("%d",&n);
    int A[n];
    printf("Digite os elementos:\n ");
    i=0;
    while(i<n){
      scanf("%d",&A[i]);

      i++;
    }
  printf("digite elemento a ser encontrado: ");
  int x = 0;
  scanf("%d",&x);
 
  if(x==buscaBinariaIT(x,n,A)){
   printf("x nao pertence ao vetor A\n");;
  }else{printf("elemento na posição: %d\n",buscaBinariaIT(x,n,A));}
  
  printf("numero de comparações: %d",buscaBinariaIT(x,n,A)+1);
    
  return 0;
}


