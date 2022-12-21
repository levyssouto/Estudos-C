#include <stdio.h>

void imprimeArray(int array[],int tam){
  printf("imprimindo array ordenado: \n");
  for(int i=0;i<tam;i++){
    printf("%d ",array[i]);
  }
}

void insertionSort(int array[],int tam){
  for(int i=0;i<tam;i++){
    int pivo = array[i];
    int j=i-1;
    while(pivo<array[j] && j>=0){
      array[j+1] = array[j];
      j--;
    }
    array[j+1]=pivo;
  }
}

int main() {
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
   insertionSort(A,n);
   imprimeArray(A,n);
  
    return 0;
}
