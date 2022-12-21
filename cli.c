#include <cs50.h>
#include <stdio.h>
#include <string.h>


void imprime_char(int argc, string argv[]){
 if (argc == 2)
    {
        for (int i = 0, n = strlen(argv[1]); i < n; i++)
        {
            printf("%c\n", argv[1][i]);
        }
    }
 }

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        printf("oi, %s\n", argv[1]);
        imprime_char(argc,argv);
    }
    else
    {
        printf("olá, mundo\n");
    }

}


