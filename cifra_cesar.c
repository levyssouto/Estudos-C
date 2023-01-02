#include <stdio.h>
#include <string.h>

void cifra_cesar(char msg[],int tam){
  char msg_c[tam];
   for(int i=0;i<tam;i++){
    msg_c[i] = msg[i]+2;
    printf("%c ",msg_c[i]);
  }
  
}

int main() {
  printf("digite a mensagem a ser criptografada:\n ");
    char msg [20],msg_c[20]; 
    fgets(msg,20,stdin);
    printf("mensagem criptografada: ");
    cifra_cesar(msg,strlen(msg));
    return 0;
}