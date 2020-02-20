#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nome[30];
    int x,cont;

    printf("Digite seu nome: \n");
    gets(nome);

    cont=strlen(nome);

    for(x=0;x<=-1;x++)
    printf("%c",nome[x]);
    printf("\n\n");

    system("pause");
    return 0;
}
