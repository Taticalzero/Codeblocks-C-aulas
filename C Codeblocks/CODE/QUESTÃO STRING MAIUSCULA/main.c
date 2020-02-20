#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char nome[20];

    printf("Digite seu nome: \n");

    gets(nome);

    printf("Convertendo para maiusculas : %s\n",strupr(nome));

    system("pause");
    return(0);
}
